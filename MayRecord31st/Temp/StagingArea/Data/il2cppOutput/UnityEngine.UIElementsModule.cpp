﻿#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericVirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericVirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct GenericVirtFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericVirtFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericInterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericInterfaceFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};

// System.Action
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579;
// System.Action`1<System.Boolean>
struct Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2F75FCBEC68AFE08982DA43985F9D04056E2BE73;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Yoga.YogaNode>
struct IEnumerable_1_t8C24BBDF55F3238020268B6FE4781778842A87B6;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Yoga.YogaNode>
struct IEnumerator_1_t5C673F5BFEEA9B2A7D54AE29ECD1AE154E210361;
// System.Collections.Generic.List`1<UnityEngine.Yoga.YogaNode>
struct List_1_tC208E7A364FF0C3FDC57107BD002A16939F7EE92;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.InvalidOperationException
struct InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Yoga.BaselineFunction
struct BaselineFunction_t0A87479762FB382A84709009E9B6DCC597C6C9DF;
// UnityEngine.Yoga.MeasureFunction
struct MeasureFunction_tC5585E81380F4017044CE57AE21E178BAE2607AB;
// UnityEngine.Yoga.YogaNode
struct YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C;
// UnityEngine.Yoga.YogaNode[]
struct YogaNodeU5BU5D_t71E374648A9B577B98C9B6BF957C344EEB07A333;

IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t8C24BBDF55F3238020268B6FE4781778842A87B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Utility_t338D87AA8BF66821714589DCAB392FCF40B48B04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* YogaMeasureMode_t29AF57E74BCD4C16019B8BE88A317D54DA70C29F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral7B7F79DCB0F318BC5C97926F7A6B01DD9AC466F3;
IL2CPP_EXTERN_C String_t* _stringLiteral8E00835171ED7C12FAB03A3AB4E021A16E424202;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaselineFunction_BeginInvoke_mFE9DBC35D599B1CAC5486CA763407647BF1712BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaselineFunction_EndInvoke_m5241F5CAA7D1977B8DA0311952A96A12363949F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaselineFunction_Invoke_mDFF741E9FD7678B6F0C4C23DB4F9BA83A2905558_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaselineFunction__ctor_m802CF88B3CD0E7E5B3CBB9218ACCA646FCE38BA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Empty_TisYogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C_mB6D39736821B4AAA43AD3D95D17969E04115FCFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MeasureFunction_BeginInvoke_mB9C8A9962F9B8C0EB0B86ADBFB106C3990CC0909_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MeasureFunction_EndInvoke_mDC25248B9A9544C7411A7B51E79E5A6706474ECD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MeasureFunction_Invoke_mCC3963DDDE51AF75E4795CF0E981093A55CB2D8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MeasureFunction__ctor_mE87A532680536A2A9F9AEFC691F48B31C5074CDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Native_YGNodeBaselineInvoke_m58B37C284F08E57BF28B9E9AB5CA99805F90BEEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Native_YGNodeFreeInternal_m7356D471E9F059FA16B76195277197138453D00C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Native_YGNodeFree_mF215AE18EB09B83FFB1F94BF45B0A729FB81C321_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Native_YGNodeMeasureInvoke_mCD2D037E10DBF3D73CC83FC9078F17AA1271B913_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utility_FreeBuffer_m8E1E313130424E05B5CD20655E962C89A1C01AD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utility_RaiseEngineUpdate_mA1B27628894F519755E305EEDE906C0F39219460_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utility_RaiseFlushPendingResources_mF574684D4347F0DA7CD949B6C224625860B9A0C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utility_RaiseGraphicsResourcesRecreate_mB64653A9A2F10D8477948B0F6CABD41516821289_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_BaselineInternal_m3371DB16710509FE9E0B83AC42EBEB8432ABDC26_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_Finalize_m9922E8660343E79D7C22741BD568EFBD4FF10F9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_GetEnumerator_m5F244BCB2268767E9D2C5EE6C9532D777B0B6B2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_MeasureInternal_mD8D5E33930941196D36E4689267D168E4F4EC39D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_System_Collections_IEnumerable_GetEnumerator_mD6EA56D75E27E27FC10373E2B46D80FEA7AF30CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t BaselineFunction_BeginInvoke_mFE9DBC35D599B1CAC5486CA763407647BF1712BB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BaselineFunction_EndInvoke_m5241F5CAA7D1977B8DA0311952A96A12363949F8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BaselineFunction_Invoke_mDFF741E9FD7678B6F0C4C23DB4F9BA83A2905558_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BaselineFunction__ctor_m802CF88B3CD0E7E5B3CBB9218ACCA646FCE38BA6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MeasureFunction_BeginInvoke_mB9C8A9962F9B8C0EB0B86ADBFB106C3990CC0909_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MeasureFunction_EndInvoke_mDC25248B9A9544C7411A7B51E79E5A6706474ECD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MeasureFunction_Invoke_mCC3963DDDE51AF75E4795CF0E981093A55CB2D8B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MeasureFunction__ctor_mE87A532680536A2A9F9AEFC691F48B31C5074CDA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Native_YGNodeBaselineInvoke_m58B37C284F08E57BF28B9E9AB5CA99805F90BEEC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Native_YGNodeFreeInternal_m7356D471E9F059FA16B76195277197138453D00C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Native_YGNodeFree_mF215AE18EB09B83FFB1F94BF45B0A729FB81C321_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Native_YGNodeMeasureInvoke_mCD2D037E10DBF3D73CC83FC9078F17AA1271B913_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Utility_FreeBuffer_m8E1E313130424E05B5CD20655E962C89A1C01AD7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Utility_RaiseEngineUpdate_mA1B27628894F519755E305EEDE906C0F39219460_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Utility_RaiseFlushPendingResources_mF574684D4347F0DA7CD949B6C224625860B9A0C3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Utility_RaiseGraphicsResourcesRecreate_mB64653A9A2F10D8477948B0F6CABD41516821289_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t YogaNode_BaselineInternal_m3371DB16710509FE9E0B83AC42EBEB8432ABDC26_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t YogaNode_Finalize_m9922E8660343E79D7C22741BD568EFBD4FF10F9E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t YogaNode_GetEnumerator_m5F244BCB2268767E9D2C5EE6C9532D777B0B6B2D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t YogaNode_MeasureInternal_mD8D5E33930941196D36E4689267D168E4F4EC39D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t YogaNode_System_Collections_IEnumerable_GetEnumerator_mD6EA56D75E27E27FC10373E2B46D80FEA7AF30CE_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t091C966E943CA3E1F5D551C43C6FE64881C5BB24 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.List`1<UnityEngine.Yoga.YogaNode>
struct  List_1_tC208E7A364FF0C3FDC57107BD002A16939F7EE92  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	YogaNodeU5BU5D_t71E374648A9B577B98C9B6BF957C344EEB07A333* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tC208E7A364FF0C3FDC57107BD002A16939F7EE92, ____items_1)); }
	inline YogaNodeU5BU5D_t71E374648A9B577B98C9B6BF957C344EEB07A333* get__items_1() const { return ____items_1; }
	inline YogaNodeU5BU5D_t71E374648A9B577B98C9B6BF957C344EEB07A333** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(YogaNodeU5BU5D_t71E374648A9B577B98C9B6BF957C344EEB07A333* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tC208E7A364FF0C3FDC57107BD002A16939F7EE92, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tC208E7A364FF0C3FDC57107BD002A16939F7EE92, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tC208E7A364FF0C3FDC57107BD002A16939F7EE92, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tC208E7A364FF0C3FDC57107BD002A16939F7EE92_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	YogaNodeU5BU5D_t71E374648A9B577B98C9B6BF957C344EEB07A333* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tC208E7A364FF0C3FDC57107BD002A16939F7EE92_StaticFields, ____emptyArray_5)); }
	inline YogaNodeU5BU5D_t71E374648A9B577B98C9B6BF957C344EEB07A333* get__emptyArray_5() const { return ____emptyArray_5; }
	inline YogaNodeU5BU5D_t71E374648A9B577B98C9B6BF957C344EEB07A333** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(YogaNodeU5BU5D_t71E374648A9B577B98C9B6BF957C344EEB07A333* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// UnityEngine.UIElements.UIR.Utility
struct  Utility_t338D87AA8BF66821714589DCAB392FCF40B48B04  : public RuntimeObject
{
public:

public:
};

struct Utility_t338D87AA8BF66821714589DCAB392FCF40B48B04_StaticFields
{
public:
	// System.Action`1<System.Boolean> UnityEngine.UIElements.UIR.Utility::GraphicsResourcesRecreate
	Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * ___GraphicsResourcesRecreate_0;
	// System.Action UnityEngine.UIElements.UIR.Utility::EngineUpdate
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___EngineUpdate_1;
	// System.Action UnityEngine.UIElements.UIR.Utility::FlushPendingResources
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___FlushPendingResources_2;

public:
	inline static int32_t get_offset_of_GraphicsResourcesRecreate_0() { return static_cast<int32_t>(offsetof(Utility_t338D87AA8BF66821714589DCAB392FCF40B48B04_StaticFields, ___GraphicsResourcesRecreate_0)); }
	inline Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * get_GraphicsResourcesRecreate_0() const { return ___GraphicsResourcesRecreate_0; }
	inline Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD ** get_address_of_GraphicsResourcesRecreate_0() { return &___GraphicsResourcesRecreate_0; }
	inline void set_GraphicsResourcesRecreate_0(Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * value)
	{
		___GraphicsResourcesRecreate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GraphicsResourcesRecreate_0), (void*)value);
	}

	inline static int32_t get_offset_of_EngineUpdate_1() { return static_cast<int32_t>(offsetof(Utility_t338D87AA8BF66821714589DCAB392FCF40B48B04_StaticFields, ___EngineUpdate_1)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_EngineUpdate_1() const { return ___EngineUpdate_1; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_EngineUpdate_1() { return &___EngineUpdate_1; }
	inline void set_EngineUpdate_1(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___EngineUpdate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EngineUpdate_1), (void*)value);
	}

	inline static int32_t get_offset_of_FlushPendingResources_2() { return static_cast<int32_t>(offsetof(Utility_t338D87AA8BF66821714589DCAB392FCF40B48B04_StaticFields, ___FlushPendingResources_2)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_FlushPendingResources_2() const { return ___FlushPendingResources_2; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_FlushPendingResources_2() { return &___FlushPendingResources_2; }
	inline void set_FlushPendingResources_2(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___FlushPendingResources_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FlushPendingResources_2), (void*)value);
	}
};


// UnityEngine.Yoga.Native
struct  Native_tAB7B2E3A68EEFE9B7A356DB4CC8EC664EB765C2A  : public RuntimeObject
{
public:

public:
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.Yoga.YogaSize
struct  YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23 
{
public:
	// System.Single UnityEngine.Yoga.YogaSize::width
	float ___width_0;
	// System.Single UnityEngine.Yoga.YogaSize::height
	float ___height_1;

public:
	inline static int32_t get_offset_of_width_0() { return static_cast<int32_t>(offsetof(YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23, ___width_0)); }
	inline float get_width_0() const { return ___width_0; }
	inline float* get_address_of_width_0() { return &___width_0; }
	inline void set_width_0(float value)
	{
		___width_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23, ___height_1)); }
	inline float get_height_1() const { return ___height_1; }
	inline float* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(float value)
	{
		___height_1 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.InvalidOperationException
struct  InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// UnityEngine.Yoga.YogaMeasureMode
struct  YogaMeasureMode_t29AF57E74BCD4C16019B8BE88A317D54DA70C29F 
{
public:
	// System.Int32 UnityEngine.Yoga.YogaMeasureMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(YogaMeasureMode_t29AF57E74BCD4C16019B8BE88A317D54DA70C29F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Yoga.YogaNode
struct  YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Yoga.YogaNode::_ygNode
	intptr_t ____ygNode_0;
	// System.Collections.Generic.List`1<UnityEngine.Yoga.YogaNode> UnityEngine.Yoga.YogaNode::_children
	List_1_tC208E7A364FF0C3FDC57107BD002A16939F7EE92 * ____children_1;
	// UnityEngine.Yoga.MeasureFunction UnityEngine.Yoga.YogaNode::_measureFunction
	MeasureFunction_tC5585E81380F4017044CE57AE21E178BAE2607AB * ____measureFunction_2;
	// UnityEngine.Yoga.BaselineFunction UnityEngine.Yoga.YogaNode::_baselineFunction
	BaselineFunction_t0A87479762FB382A84709009E9B6DCC597C6C9DF * ____baselineFunction_3;

public:
	inline static int32_t get_offset_of__ygNode_0() { return static_cast<int32_t>(offsetof(YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C, ____ygNode_0)); }
	inline intptr_t get__ygNode_0() const { return ____ygNode_0; }
	inline intptr_t* get_address_of__ygNode_0() { return &____ygNode_0; }
	inline void set__ygNode_0(intptr_t value)
	{
		____ygNode_0 = value;
	}

	inline static int32_t get_offset_of__children_1() { return static_cast<int32_t>(offsetof(YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C, ____children_1)); }
	inline List_1_tC208E7A364FF0C3FDC57107BD002A16939F7EE92 * get__children_1() const { return ____children_1; }
	inline List_1_tC208E7A364FF0C3FDC57107BD002A16939F7EE92 ** get_address_of__children_1() { return &____children_1; }
	inline void set__children_1(List_1_tC208E7A364FF0C3FDC57107BD002A16939F7EE92 * value)
	{
		____children_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____children_1), (void*)value);
	}

	inline static int32_t get_offset_of__measureFunction_2() { return static_cast<int32_t>(offsetof(YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C, ____measureFunction_2)); }
	inline MeasureFunction_tC5585E81380F4017044CE57AE21E178BAE2607AB * get__measureFunction_2() const { return ____measureFunction_2; }
	inline MeasureFunction_tC5585E81380F4017044CE57AE21E178BAE2607AB ** get_address_of__measureFunction_2() { return &____measureFunction_2; }
	inline void set__measureFunction_2(MeasureFunction_tC5585E81380F4017044CE57AE21E178BAE2607AB * value)
	{
		____measureFunction_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____measureFunction_2), (void*)value);
	}

	inline static int32_t get_offset_of__baselineFunction_3() { return static_cast<int32_t>(offsetof(YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C, ____baselineFunction_3)); }
	inline BaselineFunction_t0A87479762FB382A84709009E9B6DCC597C6C9DF * get__baselineFunction_3() const { return ____baselineFunction_3; }
	inline BaselineFunction_t0A87479762FB382A84709009E9B6DCC597C6C9DF ** get_address_of__baselineFunction_3() { return &____baselineFunction_3; }
	inline void set__baselineFunction_3(BaselineFunction_t0A87479762FB382A84709009E9B6DCC597C6C9DF * value)
	{
		____baselineFunction_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____baselineFunction_3), (void*)value);
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.Action
struct  Action_t591D2A86165F896B4B800BB5C25CE18672A55579  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.Boolean>
struct  Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Yoga.BaselineFunction
struct  BaselineFunction_t0A87479762FB382A84709009E9B6DCC597C6C9DF  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Yoga.MeasureFunction
struct  MeasureFunction_tC5585E81380F4017044CE57AE21E178BAE2607AB  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Action`1<System.Boolean>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F_gshared (Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * __this, bool p0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Empty<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Empty_TisRuntimeObject_mAE5AF50F634B031906FA8775A7B8BBBEB7EF0172_gshared (const RuntimeMethod* method);

// System.Void System.Action`1<System.Boolean>::Invoke(!0)
inline void Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F (Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * __this, bool p0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD *, bool, const RuntimeMethod*))Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F_gshared)(__this, p0, method);
}
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_mC8D676E5DDF967EC5D23DD0E96FB52AA499817FD (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * __this, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934 (intptr_t p0, intptr_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeFreeInternal(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeFreeInternal_m7356D471E9F059FA16B76195277197138453D00C (intptr_t ___ygNode0, const RuntimeMethod* method);
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027 (intptr_t p0, const RuntimeMethod* method);
// UnityEngine.Yoga.YogaSize UnityEngine.Yoga.YogaNode::MeasureInternal(UnityEngine.Yoga.YogaNode,System.Single,UnityEngine.Yoga.YogaMeasureMode,System.Single,UnityEngine.Yoga.YogaMeasureMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23  YogaNode_MeasureInternal_mD8D5E33930941196D36E4689267D168E4F4EC39D (YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * ___node0, float ___width1, int32_t ___widthMode2, float ___height3, int32_t ___heightMode4, const RuntimeMethod* method);
// System.Single UnityEngine.Yoga.YogaNode::BaselineInternal(UnityEngine.Yoga.YogaNode,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_BaselineInternal_m3371DB16710509FE9E0B83AC42EBEB8432ABDC26 (YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * ___node0, float ___width1, float ___height2, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeFree(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeFree_mF215AE18EB09B83FFB1F94BF45B0A729FB81C321 (intptr_t ___ygNode0, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706 (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * __this, String_t* p0, const RuntimeMethod* method);
// UnityEngine.Yoga.YogaSize UnityEngine.Yoga.MeasureFunction::Invoke(UnityEngine.Yoga.YogaNode,System.Single,UnityEngine.Yoga.YogaMeasureMode,System.Single,UnityEngine.Yoga.YogaMeasureMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23  MeasureFunction_Invoke_mCC3963DDDE51AF75E4795CF0E981093A55CB2D8B (MeasureFunction_tC5585E81380F4017044CE57AE21E178BAE2607AB * __this, YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * ___node0, float ___width1, int32_t ___widthMode2, float ___height3, int32_t ___heightMode4, const RuntimeMethod* method);
// System.Single UnityEngine.Yoga.BaselineFunction::Invoke(UnityEngine.Yoga.YogaNode,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BaselineFunction_Invoke_mDFF741E9FD7678B6F0C4C23DB4F9BA83A2905558 (BaselineFunction_t0A87479762FB382A84709009E9B6DCC597C6C9DF * __this, YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * ___node0, float ___width1, float ___height2, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Empty<UnityEngine.Yoga.YogaNode>()
inline RuntimeObject* Enumerable_Empty_TisYogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C_mB6D39736821B4AAA43AD3D95D17969E04115FCFA (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))Enumerable_Empty_TisRuntimeObject_mAE5AF50F634B031906FA8775A7B8BBBEB7EF0172_gshared)(method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.UIElements.UIR.Utility::RaiseGraphicsResourcesRecreate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_RaiseGraphicsResourcesRecreate_mB64653A9A2F10D8477948B0F6CABD41516821289 (bool ___recreate0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Utility_RaiseGraphicsResourcesRecreate_mB64653A9A2F10D8477948B0F6CABD41516821289_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(Utility_RaiseGraphicsResourcesRecreate_mB64653A9A2F10D8477948B0F6CABD41516821289_RuntimeMethod_var);
	{
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_0 = ((Utility_t338D87AA8BF66821714589DCAB392FCF40B48B04_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t338D87AA8BF66821714589DCAB392FCF40B48B04_il2cpp_TypeInfo_var))->get_GraphicsResourcesRecreate_0();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		goto IL_0018;
	}

IL_000d:
	{
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_1 = ((Utility_t338D87AA8BF66821714589DCAB392FCF40B48B04_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t338D87AA8BF66821714589DCAB392FCF40B48B04_il2cpp_TypeInfo_var))->get_GraphicsResourcesRecreate_0();
		bool L_2 = ___recreate0;
		NullCheck(L_1);
		Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F(L_1, L_2, /*hidden argument*/Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::RaiseEngineUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_RaiseEngineUpdate_mA1B27628894F519755E305EEDE906C0F39219460 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Utility_RaiseEngineUpdate_mA1B27628894F519755E305EEDE906C0F39219460_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(Utility_RaiseEngineUpdate_mA1B27628894F519755E305EEDE906C0F39219460_RuntimeMethod_var);
	{
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_0 = ((Utility_t338D87AA8BF66821714589DCAB392FCF40B48B04_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t338D87AA8BF66821714589DCAB392FCF40B48B04_il2cpp_TypeInfo_var))->get_EngineUpdate_1();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		goto IL_0017;
	}

IL_000d:
	{
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_1 = ((Utility_t338D87AA8BF66821714589DCAB392FCF40B48B04_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t338D87AA8BF66821714589DCAB392FCF40B48B04_il2cpp_TypeInfo_var))->get_EngineUpdate_1();
		NullCheck(L_1);
		Action_Invoke_mC8D676E5DDF967EC5D23DD0E96FB52AA499817FD(L_1, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::RaiseFlushPendingResources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_RaiseFlushPendingResources_mF574684D4347F0DA7CD949B6C224625860B9A0C3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Utility_RaiseFlushPendingResources_mF574684D4347F0DA7CD949B6C224625860B9A0C3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(Utility_RaiseFlushPendingResources_mF574684D4347F0DA7CD949B6C224625860B9A0C3_RuntimeMethod_var);
	{
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_0 = ((Utility_t338D87AA8BF66821714589DCAB392FCF40B48B04_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t338D87AA8BF66821714589DCAB392FCF40B48B04_il2cpp_TypeInfo_var))->get_FlushPendingResources_2();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		goto IL_0017;
	}

IL_000d:
	{
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_1 = ((Utility_t338D87AA8BF66821714589DCAB392FCF40B48B04_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t338D87AA8BF66821714589DCAB392FCF40B48B04_il2cpp_TypeInfo_var))->get_FlushPendingResources_2();
		NullCheck(L_1);
		Action_Invoke_mC8D676E5DDF967EC5D23DD0E96FB52AA499817FD(L_1, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::FreeBuffer(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_FreeBuffer_m8E1E313130424E05B5CD20655E962C89A1C01AD7 (intptr_t ___buffer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Utility_FreeBuffer_m8E1E313130424E05B5CD20655E962C89A1C01AD7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(Utility_FreeBuffer_m8E1E313130424E05B5CD20655E962C89A1C01AD7_RuntimeMethod_var);
	typedef void (*Utility_FreeBuffer_m8E1E313130424E05B5CD20655E962C89A1C01AD7_ftn) (intptr_t);
	static Utility_FreeBuffer_m8E1E313130424E05B5CD20655E962C89A1C01AD7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Utility_FreeBuffer_m8E1E313130424E05B5CD20655E962C89A1C01AD7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.UIR.Utility::FreeBuffer(System.IntPtr)");
	_il2cpp_icall_func(___buffer0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Yoga.BaselineFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaselineFunction__ctor_m802CF88B3CD0E7E5B3CBB9218ACCA646FCE38BA6 (BaselineFunction_t0A87479762FB382A84709009E9B6DCC597C6C9DF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaselineFunction__ctor_m802CF88B3CD0E7E5B3CBB9218ACCA646FCE38BA6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(BaselineFunction__ctor_m802CF88B3CD0E7E5B3CBB9218ACCA646FCE38BA6_RuntimeMethod_var);
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Single UnityEngine.Yoga.BaselineFunction::Invoke(UnityEngine.Yoga.YogaNode,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BaselineFunction_Invoke_mDFF741E9FD7678B6F0C4C23DB4F9BA83A2905558 (BaselineFunction_t0A87479762FB382A84709009E9B6DCC597C6C9DF * __this, YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * ___node0, float ___width1, float ___height2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaselineFunction_Invoke_mDFF741E9FD7678B6F0C4C23DB4F9BA83A2905558_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(BaselineFunction_Invoke_mDFF741E9FD7678B6F0C4C23DB4F9BA83A2905558_RuntimeMethod_var);
	float result = 0.0f;
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef float (*FunctionPointerType) (YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C *, float, float, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___node0, ___width1, ___height2, targetMethod);
			}
			else
			{
				// closed
				typedef float (*FunctionPointerType) (void*, YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C *, float, float, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___node0, ___width1, ___height2, targetMethod);
			}
		}
		else if (___parameterCount != 3)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< float, float, float >::Invoke(targetMethod, ___node0, ___width1, ___height2);
					else
						result = GenericVirtFuncInvoker2< float, float, float >::Invoke(targetMethod, ___node0, ___width1, ___height2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< float, float, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___node0, ___width1, ___height2);
					else
						result = VirtFuncInvoker2< float, float, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___node0, ___width1, ___height2);
				}
			}
			else
			{
				typedef float (*FunctionPointerType) (YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C *, float, float, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___node0, ___width1, ___height2, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef float (*FunctionPointerType) (YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C *, float, float, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___node0, ___width1, ___height2, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker3< float, YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C *, float, float >::Invoke(targetMethod, targetThis, ___node0, ___width1, ___height2);
					else
						result = GenericVirtFuncInvoker3< float, YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C *, float, float >::Invoke(targetMethod, targetThis, ___node0, ___width1, ___height2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker3< float, YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C *, float, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___node0, ___width1, ___height2);
					else
						result = VirtFuncInvoker3< float, YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C *, float, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___node0, ___width1, ___height2);
				}
			}
			else
			{
				typedef float (*FunctionPointerType) (void*, YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C *, float, float, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___node0, ___width1, ___height2, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult UnityEngine.Yoga.BaselineFunction::BeginInvoke(UnityEngine.Yoga.YogaNode,System.Single,System.Single,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BaselineFunction_BeginInvoke_mFE9DBC35D599B1CAC5486CA763407647BF1712BB (BaselineFunction_t0A87479762FB382A84709009E9B6DCC597C6C9DF * __this, YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * ___node0, float ___width1, float ___height2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaselineFunction_BeginInvoke_mFE9DBC35D599B1CAC5486CA763407647BF1712BB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(BaselineFunction_BeginInvoke_mFE9DBC35D599B1CAC5486CA763407647BF1712BB_RuntimeMethod_var);
	void *__d_args[4] = {0};
	__d_args[0] = ___node0;
	__d_args[1] = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &___width1);
	__d_args[2] = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &___height2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Single UnityEngine.Yoga.BaselineFunction::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BaselineFunction_EndInvoke_m5241F5CAA7D1977B8DA0311952A96A12363949F8 (BaselineFunction_t0A87479762FB382A84709009E9B6DCC597C6C9DF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaselineFunction_EndInvoke_m5241F5CAA7D1977B8DA0311952A96A12363949F8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(BaselineFunction_EndInvoke_m5241F5CAA7D1977B8DA0311952A96A12363949F8_RuntimeMethod_var);
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(float*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Yoga.MeasureFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeasureFunction__ctor_mE87A532680536A2A9F9AEFC691F48B31C5074CDA (MeasureFunction_tC5585E81380F4017044CE57AE21E178BAE2607AB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MeasureFunction__ctor_mE87A532680536A2A9F9AEFC691F48B31C5074CDA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MeasureFunction__ctor_mE87A532680536A2A9F9AEFC691F48B31C5074CDA_RuntimeMethod_var);
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// UnityEngine.Yoga.YogaSize UnityEngine.Yoga.MeasureFunction::Invoke(UnityEngine.Yoga.YogaNode,System.Single,UnityEngine.Yoga.YogaMeasureMode,System.Single,UnityEngine.Yoga.YogaMeasureMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23  MeasureFunction_Invoke_mCC3963DDDE51AF75E4795CF0E981093A55CB2D8B (MeasureFunction_tC5585E81380F4017044CE57AE21E178BAE2607AB * __this, YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * ___node0, float ___width1, int32_t ___widthMode2, float ___height3, int32_t ___heightMode4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MeasureFunction_Invoke_mCC3963DDDE51AF75E4795CF0E981093A55CB2D8B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MeasureFunction_Invoke_mCC3963DDDE51AF75E4795CF0E981093A55CB2D8B_RuntimeMethod_var);
	YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23  result;
	memset((&result), 0, sizeof(result));
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 5)
			{
				// open
				typedef YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23  (*FunctionPointerType) (YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C *, float, int32_t, float, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___node0, ___width1, ___widthMode2, ___height3, ___heightMode4, targetMethod);
			}
			else
			{
				// closed
				typedef YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23  (*FunctionPointerType) (void*, YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C *, float, int32_t, float, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4, targetMethod);
			}
		}
		else if (___parameterCount != 5)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker4< YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23 , float, int32_t, float, int32_t >::Invoke(targetMethod, ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4);
					else
						result = GenericVirtFuncInvoker4< YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23 , float, int32_t, float, int32_t >::Invoke(targetMethod, ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker4< YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23 , float, int32_t, float, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4);
					else
						result = VirtFuncInvoker4< YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23 , float, int32_t, float, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4);
				}
			}
			else
			{
				typedef YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23  (*FunctionPointerType) (YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C *, float, int32_t, float, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___node0, ___width1, ___widthMode2, ___height3, ___heightMode4, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23  (*FunctionPointerType) (YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C *, float, int32_t, float, int32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___node0, ___width1, ___widthMode2, ___height3, ___heightMode4, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker5< YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23 , YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C *, float, int32_t, float, int32_t >::Invoke(targetMethod, targetThis, ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4);
					else
						result = GenericVirtFuncInvoker5< YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23 , YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C *, float, int32_t, float, int32_t >::Invoke(targetMethod, targetThis, ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker5< YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23 , YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C *, float, int32_t, float, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4);
					else
						result = VirtFuncInvoker5< YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23 , YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C *, float, int32_t, float, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4);
				}
			}
			else
			{
				typedef YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23  (*FunctionPointerType) (void*, YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C *, float, int32_t, float, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult UnityEngine.Yoga.MeasureFunction::BeginInvoke(UnityEngine.Yoga.YogaNode,System.Single,UnityEngine.Yoga.YogaMeasureMode,System.Single,UnityEngine.Yoga.YogaMeasureMode,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MeasureFunction_BeginInvoke_mB9C8A9962F9B8C0EB0B86ADBFB106C3990CC0909 (MeasureFunction_tC5585E81380F4017044CE57AE21E178BAE2607AB * __this, YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * ___node0, float ___width1, int32_t ___widthMode2, float ___height3, int32_t ___heightMode4, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback5, RuntimeObject * ___object6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MeasureFunction_BeginInvoke_mB9C8A9962F9B8C0EB0B86ADBFB106C3990CC0909_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MeasureFunction_BeginInvoke_mB9C8A9962F9B8C0EB0B86ADBFB106C3990CC0909_RuntimeMethod_var);
	void *__d_args[6] = {0};
	__d_args[0] = ___node0;
	__d_args[1] = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &___width1);
	__d_args[2] = Box(YogaMeasureMode_t29AF57E74BCD4C16019B8BE88A317D54DA70C29F_il2cpp_TypeInfo_var, &___widthMode2);
	__d_args[3] = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &___height3);
	__d_args[4] = Box(YogaMeasureMode_t29AF57E74BCD4C16019B8BE88A317D54DA70C29F_il2cpp_TypeInfo_var, &___heightMode4);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback5, (RuntimeObject*)___object6);
}
// UnityEngine.Yoga.YogaSize UnityEngine.Yoga.MeasureFunction::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23  MeasureFunction_EndInvoke_mDC25248B9A9544C7411A7B51E79E5A6706474ECD (MeasureFunction_tC5585E81380F4017044CE57AE21E178BAE2607AB * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MeasureFunction_EndInvoke_mDC25248B9A9544C7411A7B51E79E5A6706474ECD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MeasureFunction_EndInvoke_mDC25248B9A9544C7411A7B51E79E5A6706474ECD_RuntimeMethod_var);
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23 *)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Yoga.Native::YGNodeFree(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeFree_mF215AE18EB09B83FFB1F94BF45B0A729FB81C321 (intptr_t ___ygNode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Native_YGNodeFree_mF215AE18EB09B83FFB1F94BF45B0A729FB81C321_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(Native_YGNodeFree_mF215AE18EB09B83FFB1F94BF45B0A729FB81C321_RuntimeMethod_var);
	{
		intptr_t L_0 = ___ygNode0;
		bool L_1 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		goto IL_001c;
	}

IL_0016:
	{
		intptr_t L_2 = ___ygNode0;
		Native_YGNodeFreeInternal_m7356D471E9F059FA16B76195277197138453D00C((intptr_t)L_2, /*hidden argument*/NULL);
	}

IL_001c:
	{
		return;
	}
}
// System.Void UnityEngine.Yoga.Native::YGNodeFreeInternal(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeFreeInternal_m7356D471E9F059FA16B76195277197138453D00C (intptr_t ___ygNode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Native_YGNodeFreeInternal_m7356D471E9F059FA16B76195277197138453D00C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(Native_YGNodeFreeInternal_m7356D471E9F059FA16B76195277197138453D00C_RuntimeMethod_var);
	typedef void (*Native_YGNodeFreeInternal_m7356D471E9F059FA16B76195277197138453D00C_ftn) (intptr_t);
	static Native_YGNodeFreeInternal_m7356D471E9F059FA16B76195277197138453D00C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeFreeInternal_m7356D471E9F059FA16B76195277197138453D00C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeFreeInternal(System.IntPtr)");
	_il2cpp_icall_func(___ygNode0);
}
// System.Void UnityEngine.Yoga.Native::YGNodeMeasureInvoke(UnityEngine.Yoga.YogaNode,System.Single,UnityEngine.Yoga.YogaMeasureMode,System.Single,UnityEngine.Yoga.YogaMeasureMode,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeMeasureInvoke_mCD2D037E10DBF3D73CC83FC9078F17AA1271B913 (YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * ___node0, float ___width1, int32_t ___widthMode2, float ___height3, int32_t ___heightMode4, intptr_t ___returnValueAddress5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Native_YGNodeMeasureInvoke_mCD2D037E10DBF3D73CC83FC9078F17AA1271B913_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(Native_YGNodeMeasureInvoke_mCD2D037E10DBF3D73CC83FC9078F17AA1271B913_RuntimeMethod_var);
	{
		intptr_t L_0 = ___returnValueAddress5;
		void* L_1 = IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027((intptr_t)L_0, /*hidden argument*/NULL);
		YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * L_2 = ___node0;
		float L_3 = ___width1;
		int32_t L_4 = ___widthMode2;
		float L_5 = ___height3;
		int32_t L_6 = ___heightMode4;
		YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23  L_7 = YogaNode_MeasureInternal_mD8D5E33930941196D36E4689267D168E4F4EC39D(L_2, L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		*(YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23 *)L_1 = L_7;
		return;
	}
}
// System.Void UnityEngine.Yoga.Native::YGNodeBaselineInvoke(UnityEngine.Yoga.YogaNode,System.Single,System.Single,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeBaselineInvoke_m58B37C284F08E57BF28B9E9AB5CA99805F90BEEC (YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * ___node0, float ___width1, float ___height2, intptr_t ___returnValueAddress3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Native_YGNodeBaselineInvoke_m58B37C284F08E57BF28B9E9AB5CA99805F90BEEC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(Native_YGNodeBaselineInvoke_m58B37C284F08E57BF28B9E9AB5CA99805F90BEEC_RuntimeMethod_var);
	{
		intptr_t L_0 = ___returnValueAddress3;
		void* L_1 = IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027((intptr_t)L_0, /*hidden argument*/NULL);
		YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * L_2 = ___node0;
		float L_3 = ___width1;
		float L_4 = ___height2;
		float L_5 = YogaNode_BaselineInternal_m3371DB16710509FE9E0B83AC42EBEB8432ABDC26(L_2, L_3, L_4, /*hidden argument*/NULL);
		*((float*)L_1) = (float)L_5;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Yoga.YogaNode::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_Finalize_m9922E8660343E79D7C22741BD568EFBD4FF10F9E (YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (YogaNode_Finalize_m9922E8660343E79D7C22741BD568EFBD4FF10F9E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(YogaNode_Finalize_m9922E8660343E79D7C22741BD568EFBD4FF10F9E_RuntimeMethod_var);
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		intptr_t L_0 = __this->get__ygNode_0();
		Native_YGNodeFree_mF215AE18EB09B83FFB1F94BF45B0A729FB81C321((intptr_t)L_0, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x18, FINALLY_0011);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0011;
	}

FINALLY_0011:
	{ // begin finally (depth: 1)
		Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(17)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(17)
	{
		IL2CPP_JUMP_TBL(0x18, IL_0018)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0018:
	{
		return;
	}
}
// UnityEngine.Yoga.YogaSize UnityEngine.Yoga.YogaNode::MeasureInternal(UnityEngine.Yoga.YogaNode,System.Single,UnityEngine.Yoga.YogaMeasureMode,System.Single,UnityEngine.Yoga.YogaMeasureMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23  YogaNode_MeasureInternal_mD8D5E33930941196D36E4689267D168E4F4EC39D (YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * ___node0, float ___width1, int32_t ___widthMode2, float ___height3, int32_t ___heightMode4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (YogaNode_MeasureInternal_mD8D5E33930941196D36E4689267D168E4F4EC39D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(YogaNode_MeasureInternal_mD8D5E33930941196D36E4689267D168E4F4EC39D_RuntimeMethod_var);
	YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * L_0 = ___node0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * L_1 = ___node0;
		NullCheck(L_1);
		MeasureFunction_tC5585E81380F4017044CE57AE21E178BAE2607AB * L_2 = L_1->get__measureFunction_2();
		if (L_2)
		{
			goto IL_001e;
		}
	}

IL_0012:
	{
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_3 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_3, _stringLiteral7B7F79DCB0F318BC5C97926F7A6B01DD9AC466F3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, YogaNode_MeasureInternal_mD8D5E33930941196D36E4689267D168E4F4EC39D_RuntimeMethod_var);
	}

IL_001e:
	{
		YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * L_4 = ___node0;
		NullCheck(L_4);
		MeasureFunction_tC5585E81380F4017044CE57AE21E178BAE2607AB * L_5 = L_4->get__measureFunction_2();
		YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * L_6 = ___node0;
		float L_7 = ___width1;
		int32_t L_8 = ___widthMode2;
		float L_9 = ___height3;
		int32_t L_10 = ___heightMode4;
		NullCheck(L_5);
		YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23  L_11 = MeasureFunction_Invoke_mCC3963DDDE51AF75E4795CF0E981093A55CB2D8B(L_5, L_6, L_7, L_8, L_9, L_10, /*hidden argument*/NULL);
		V_0 = L_11;
		goto IL_0035;
	}

IL_0035:
	{
		YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23  L_12 = V_0;
		return L_12;
	}
}
// System.Single UnityEngine.Yoga.YogaNode::BaselineInternal(UnityEngine.Yoga.YogaNode,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_BaselineInternal_m3371DB16710509FE9E0B83AC42EBEB8432ABDC26 (YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * ___node0, float ___width1, float ___height2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (YogaNode_BaselineInternal_m3371DB16710509FE9E0B83AC42EBEB8432ABDC26_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(YogaNode_BaselineInternal_m3371DB16710509FE9E0B83AC42EBEB8432ABDC26_RuntimeMethod_var);
	float V_0 = 0.0f;
	{
		YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * L_0 = ___node0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * L_1 = ___node0;
		NullCheck(L_1);
		BaselineFunction_t0A87479762FB382A84709009E9B6DCC597C6C9DF * L_2 = L_1->get__baselineFunction_3();
		if (L_2)
		{
			goto IL_001e;
		}
	}

IL_0012:
	{
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_3 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_3, _stringLiteral8E00835171ED7C12FAB03A3AB4E021A16E424202, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, YogaNode_BaselineInternal_m3371DB16710509FE9E0B83AC42EBEB8432ABDC26_RuntimeMethod_var);
	}

IL_001e:
	{
		YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * L_4 = ___node0;
		NullCheck(L_4);
		BaselineFunction_t0A87479762FB382A84709009E9B6DCC597C6C9DF * L_5 = L_4->get__baselineFunction_3();
		YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * L_6 = ___node0;
		float L_7 = ___width1;
		float L_8 = ___height2;
		NullCheck(L_5);
		float L_9 = BaselineFunction_Invoke_mDFF741E9FD7678B6F0C4C23DB4F9BA83A2905558(L_5, L_6, L_7, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0032;
	}

IL_0032:
	{
		float L_10 = V_0;
		return L_10;
	}
}
// System.Collections.Generic.IEnumerator`1<UnityEngine.Yoga.YogaNode> UnityEngine.Yoga.YogaNode::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* YogaNode_GetEnumerator_m5F244BCB2268767E9D2C5EE6C9532D777B0B6B2D (YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (YogaNode_GetEnumerator_m5F244BCB2268767E9D2C5EE6C9532D777B0B6B2D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(YogaNode_GetEnumerator_m5F244BCB2268767E9D2C5EE6C9532D777B0B6B2D_RuntimeMethod_var);
	RuntimeObject* V_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	{
		List_1_tC208E7A364FF0C3FDC57107BD002A16939F7EE92 * L_0 = __this->get__children_1();
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		List_1_tC208E7A364FF0C3FDC57107BD002A16939F7EE92 * L_1 = __this->get__children_1();
		NullCheck(L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.Yoga.YogaNode>::GetEnumerator() */, IEnumerable_1_t8C24BBDF55F3238020268B6FE4781778842A87B6_il2cpp_TypeInfo_var, L_1);
		G_B3_0 = L_2;
		goto IL_0026;
	}

IL_001c:
	{
		RuntimeObject* L_3 = Enumerable_Empty_TisYogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C_mB6D39736821B4AAA43AD3D95D17969E04115FCFA(/*hidden argument*/Enumerable_Empty_TisYogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C_mB6D39736821B4AAA43AD3D95D17969E04115FCFA_RuntimeMethod_var);
		NullCheck(L_3);
		RuntimeObject* L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.Yoga.YogaNode>::GetEnumerator() */, IEnumerable_1_t8C24BBDF55F3238020268B6FE4781778842A87B6_il2cpp_TypeInfo_var, L_3);
		G_B3_0 = L_4;
	}

IL_0026:
	{
		V_0 = G_B3_0;
		goto IL_002c;
	}

IL_002c:
	{
		RuntimeObject* L_5 = V_0;
		return L_5;
	}
}
// System.Collections.IEnumerator UnityEngine.Yoga.YogaNode::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* YogaNode_System_Collections_IEnumerable_GetEnumerator_mD6EA56D75E27E27FC10373E2B46D80FEA7AF30CE (YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (YogaNode_System_Collections_IEnumerable_GetEnumerator_mD6EA56D75E27E27FC10373E2B46D80FEA7AF30CE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(YogaNode_System_Collections_IEnumerable_GetEnumerator_mD6EA56D75E27E27FC10373E2B46D80FEA7AF30CE_RuntimeMethod_var);
	RuntimeObject* V_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	{
		List_1_tC208E7A364FF0C3FDC57107BD002A16939F7EE92 * L_0 = __this->get__children_1();
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		List_1_tC208E7A364FF0C3FDC57107BD002A16939F7EE92 * L_1 = __this->get__children_1();
		NullCheck(L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.Yoga.YogaNode>::GetEnumerator() */, IEnumerable_1_t8C24BBDF55F3238020268B6FE4781778842A87B6_il2cpp_TypeInfo_var, L_1);
		G_B3_0 = L_2;
		goto IL_0026;
	}

IL_001c:
	{
		RuntimeObject* L_3 = Enumerable_Empty_TisYogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C_mB6D39736821B4AAA43AD3D95D17969E04115FCFA(/*hidden argument*/Enumerable_Empty_TisYogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C_mB6D39736821B4AAA43AD3D95D17969E04115FCFA_RuntimeMethod_var);
		NullCheck(L_3);
		RuntimeObject* L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.Yoga.YogaNode>::GetEnumerator() */, IEnumerable_1_t8C24BBDF55F3238020268B6FE4781778842A87B6_il2cpp_TypeInfo_var, L_3);
		G_B3_0 = L_4;
	}

IL_0026:
	{
		V_0 = G_B3_0;
		goto IL_002c;
	}

IL_002c:
	{
		RuntimeObject* L_5 = V_0;
		return L_5;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
