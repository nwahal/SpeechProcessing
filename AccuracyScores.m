D = load('taimoonnoisyRawData.mat');
T = load('taimoonnoisyTruth.mat');

fields = fieldnames(D);
truthField = fieldnames(T);
close all;

replace = [];

time = 0:0.1:170;

for i = 1:length(time)
    for r = 2:length(T.(truthField{1}))
        if (time(i) >= T.(truthField{1})(r-1,1)) && (time(i) <= T.(truthField{1})(r-1,2))
            speech.truth(i) = 1;
%         elseif (time(i) >= T.(truthField{1})(r-1,2)) && (time(i) <= T.(truthField{1})(r,1))
        elseif (time(i) >= T.(truthField{1})(r-1,2))
            speech.truth(i) = 0;
        end
    end
end

figure(1);
hold on;
top = length(fields);
for i = 1:length(T.(truthField{1}))
    plot(T.(truthField{1})(i,:), [top top], 'LineWidth', 2, 'color', 'b');
end

counter = top-1;

timer = 0.5:0.5:170;
for i = 1:numel(timer)
    for r = 1:length(T.(truthField{1}))
        if (timer(i) >= T.(truthField{1})(r,1)) && (timer(i) <= T.(truthField{1})(r,2))
            tgraph.truth(i) = 1000000;
        elseif (time(i) > T.(truthField{1})(r,2))
            tgraph.truth(i) = 0;
        end
    end
end

figure(2);
hold on;
% for mask = 1:3
%     subplot(3,1,mask);
%     hold on;
%     grid on;
%     shade = area(timer, tgraph.truth, 'facealpha', .3);
% end

for mask = 5:7
    figure(mask);
    hold on;
    grid on;
    shade = area(timer, tgraph.truth, 'facealpha', .3, 'facecolor', 'y');
end

% for i = 2:3
%     figure(i);
%     for vp=fields'
%         subplot(3,1,1);
%         plot(timer, D.(vp{1})(:,3),'m')
%         hold on;
%         subplot(3,1,2);
%         hold on;
%         plot(timer, D.(vp{1})(:,4), 'g')
%         subplot(3,1,3);
%         hold on;
%         plot(timer, D.(vp{1})(:,5), 'b')
%     end
% end

    for vp=fields'
        figure(5)
        plot(timer, D.(vp{1})(:,3),'m')
        title('energy');
        figure(6)
        hold on;
        plot(timer, D.(vp{1})(:,4), 'g')
        title('domfreq');
        figure(7)
        hold on;
        plot(timer, D.(vp{1})(:,5), 'b')
        title('sfm');
    end

% figure(2);
% pos1 = get(gcf,'Position'); % get position of Figure(1) 
% subplot(3,1,1);
xx = [12 19];
f5 = figure(5);

ylim([0 1000]);
set(gca,'DefaultTextFontSize',18)
title('Audio Signal Energy (Excerpt)');
refline(0,43);
a5 = gca;
f50 = figure(50);
copyobj(a5, f50);
line([115 115], [0 100000], 'Color', 'black', 'LineStyle', '--');
xlim(xx);
set(gca,'DefaultTextFontSize',18)
xlabel('Time (seconds)');
ylabel(('Energy Level (\times10^8 J)'));
legend('Speech', 'Location', 'northeast');

% subplot(3,1,2);
f6 = figure(6);
ylim([0 2500]);
title('Audio Signal Dominant Frequency (Excerpt)');
set(gca,'DefaultTextFontSize',18)
refline(0, 775);
a6 = gca;
f60 = figure(60);
copyobj(a6, f60);

line([115 115], [0 100000], 'Color', 'black', 'LineStyle', '--');
set(gca,'DefaultTextFontSize',18)
legend('Speech', 'Location', 'northeast');
xlim(xx);
xlabel('Time (seconds');
ylabel('Frequency (Hz)');
% subplot(3,1,3);
f7 = figure(7);
ylim([0 13000]);
set(gca,'DefaultTextFontSize',18)
title('Audio Signal Spectral Flatness Measure (Excerpt)');

refline(0, 2500);
a7 = gca;
f70 = figure(70);
copyobj(a7, f70);
line([115 115], [0 100000], 'Color', 'black', 'LineStyle', '--');
set(gca,'DefaultTextFontSize',18)
legend('Speech', 'Location', 'northeast');
xlim(xx);
xlabel('Time (seconds)');
ylabel('SFM Level');

figure(50)

%% accuracy
figure(1);
for fn=fields'
    %convert python output to start & stop times
    start = 0;
    for i = 2:length(D.(fn{1}))
        if D.(fn{1})(i, 1) == 1 && D.(fn{1})(i-1, 1) == 0
            start = D.(fn{1})(i, 2);
        elseif D.(fn{1})(i, 1) == 0 && D.(fn{1})(i-1, 1) == 1
            stop = D.(fn{1})(i, 2);
            replace = [replace; start stop];
        end
    end
    D.(fn{1}) = replace;
    
    %get binary speech v nonspeech for accuracy check
    for i = 1:numel(time)
        for r = 1:length(D.(fn{1}))
            if (time(i) >= D.(fn{1})(r,1)) && (time(i) <= D.(fn{1})(r,2))
                speech.(fn{1})(i) = 1;
            elseif (time(i) > D.(fn{1})(r,2))
                speech.(fn{1})(i) = 0;
            end
        end
    end
    noisematch = 0;
    speechmatch = 0;
    for i = 1:numel(time)
        if ((speech.(fn{1})(i) == 0) && (speech.truth(i) == 0))
            noisematch = noisematch + 1;
        elseif ((speech.(fn{1})(i) == 1) && (speech.truth(i) == 1))
            speechmatch = speechmatch + 1;
        end
    end
    noiseacc.truth = (length(speech.truth) - sum(speech.truth))/length(speech.truth);
    noiseacc.(fn{1}) = noisematch/numel(time);
    noiseacc.(fn{1}) = noiseacc.(fn{1}) / noiseacc.truth;
    speechacc.truth = 1 - noiseacc.truth;
    speechacc.(fn{1}) = speechmatch/numel(time);
    speechacc.(fn{1}) = speechacc.(fn{1}) / speechacc.truth;
    comparison.(fn{1}) = speech.(fn{1}) == speech.truth;
    
    accuracy.(fn{1}) = sum(comparison.(fn{1})) / length(comparison.(fn{1}));
    
    %plot data
    for i = 1:length(D.(fn{1}))
        plot(D.(fn{1})(i,:), [counter counter], 'LineWidth', 2, 'color', 'r');
    end
%     lbl = strrep(fn{1}, '_', ' | ');
%     text(1, counter+0.5, ['Parameters: ' lbl]);
%     text(time(end)/2 - 35, counter+0.5, ['Accuracy: ' num2str(accuracy.(fn{1}) * 100) '%']);
%     text(time(end)/2, counter+0.5, ['Speech Accuracy: ' num2str(speechacc.(fn{1}) * 100) '%']);
%     text(time(end) - 25, counter+0.5, ['Noise Accuracy: ' num2str(noiseacc.(fn{1}) * 100) '%']);
    counter = counter - 1;
end

    text(1, 1.5, 'With SFM');
    text(1, 0.5, 'Without SFM');
    nosfm = sprintf('%0.f', (speechacc.resultNoSFM)*100);
    yessfm = sprintf('%0.f', (speechacc.resultWithSFM) * 100);
    text(time(end)/2 - 35, 1.5, ['Accuracy: ' nosfm '%']);
    text(time(end)/2 - 35, 0.5, ['Accuracy: ' yessfm '%']);

ylim([-1 3])
grid on;

text(1, top+0.5, 'Ground Truth');


%%
timer = 0.5:0.5:170;
for i = 1:numel(timer)
    for r = 1:length(D.(fn{1}))
        if (timer(i) >= D.(fn{1})(r,1)) && (timer(i) <= D.(fn{1})(r,2))
            tgraph.pred(i) = 10000;
        elseif (time(i) > D.(fn{1})(r,2))
            tgraph.pred(i) = 0;
        end
    end
end
figure(3);
hold on;
for mask = 1:3
    subplot(3,1,mask);
    hold on;
    grid on;
    area(timer, tgraph.pred, 'facealpha', .2);
end

figure(3);
subplot(3,1,1);
ylim([0 200]);
title('energy');
refline(0,33);
subplot(3,1,2);
ylim([0 2000]);
title('freq');
refline(0, 775);
subplot(3,1,3);
ylim([0 10000]);
title('sfm');
refline(0, 2500);
% set(gcf,'Position', get(gcf,'Position') + [0,0,150,0]); % When Figure(2) is not the same size as Figure(1)
% pos2 = get(gcf,'Position');  % get position of Figure(2) 
% set(gcf,'Position', pos2 + [pos1(3)/2,0,0,0]) % Shift position of Figure(2)
hold off;

for i = 1:3
    f = figure(i);
    f.WindowState = 'maximized';
end
%%
figure(1)
xlabel('Time (sec)');
ylabel('Parameter Set');
title('Ground Truth vs Detected Speech', 'FontSize', 14.5);
figure(2);
for i = 1:3
    subplot(3,1,i);
    xlabel('Time (sec)');
end
subplot(3,1,1);
ylabel(('Energy Level (\times10^8)'));
subplot(3,1,2);
ylabel('Frequency (Hz)');
subplot(3,1,3);
ylabel('SFM Level');
sgtitle('Values of Input Audio (Blue is Speech)');
figure(1);