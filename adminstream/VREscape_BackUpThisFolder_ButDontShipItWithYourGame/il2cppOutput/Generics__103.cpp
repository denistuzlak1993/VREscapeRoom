#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct ConstrainedFuncInvoker1;
template <typename R, typename T1>
struct ConstrainedFuncInvoker1<R, T1*>
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, &ret);
		return ret;
	}
};

struct U3CGetEnumeratorU3Ed__4_tD234F65AF1F5B370331DBB27E1BAB5B653D02519;
struct U3CGetEnumeratorU3Ed__4_t012650383A2904CA6611BBD4A26BDB24EC48C3F4;
struct U3CGetEnumeratorU3Ed__4_t69F034BBC79CBE2FCAEE74AF85F4A054156D46A9;
struct U3CGetEnumeratorU3Ed__4_t7C1790FE9749D05D292F0267D4F5871D2D3474E6;
struct U3CGetEnumeratorU3Ed__4_t20C1073B540600D5D759EE56C23B9AB48D6D4C2C;
struct U3CGetEnumeratorU3Ed__4_tF71A6602AE028134828814954F1617DD48FF3399;
struct U3CGetEnumeratorU3Ed__4_t2B7FF639B0D0A5F72C476ACC9FF0A11A170EA1A9;
struct U3CGetEnumeratorU3Ed__4_t7E801F836956DD1D087F71216988F2DA333E6827;
struct U3CGetEnumeratorU3Ed__4_t691D0073DA3A771C8663F0006D50EE29A2BBDD5F;
struct U3CGetEnumeratorU3Ed__4_t6901B1C3DB5A8E465EFC4E0ABD6B3F8101868D29;
struct U3CGetEnumeratorU3Ed__4_tE2F70AE5D1600769E0B346A329877341E8EE9AD2;
struct U3CGetEnumeratorU3Ed__4_t6160427C0B6E30E3ECAB15E821DDDD716768AF43;
struct Action_1_t19E6855A63C89A1C9C091E8D2BBBD2C5F47FF2D3;
struct CompareFunc_t206BA89222C56EFDFEE5F338F89010A899541F98;
struct CompareFunc_tC2B7EDBB83306D2599B2D16F41737BC8D902A8D2;
struct CompareFunc_t4B02430CDF25A791E686F7C6A3039E596D79E8A2;
struct CompareFunc_t2AD4AA166CD7D5B8FBF45B10A9D1C4635808B9D3;
struct CompareFunc_t2464B8769683BB7E956DDCC4929754B984A092D0;
struct CompareFunc_t76EB0BBD466A89D78E7675FEACB717FB074BB89B;
struct CompareFunc_t206ED15B484D41AE9042019C27F884344B255783;
struct CompareFunc_t58FEF253929D82FB283FED18BD6AD3795FDC733E;
struct CompareFunc_tCD85A87B3459047F80416071B78FAD3D1804BC87;
struct CompareFunc_t57BD15904CC04693A588AE2C9E2BCA414C67C19B;
struct CompareFunc_t3B70DEE7A10D19DE6F1C7A392495D80CB2F44B76;
struct CompareFunc_t00CE15486F1C87AAA1937F1407C4B99828312A5D;
struct CompareFunc_tA3EC9E99EAAA5F3D786D261BBF941729E7267E9D;
struct CompareFunc2_t98BAE01C5CA178163530C2F03590C69F6FE332C4;
struct CompareFunc2_tC86C57C64D916CAEE553EA7A2A1985D43A64A750;
struct CompareFunc2_t792F53EE6953C55FF25C3F5DEEDFBE2786EE35DD;
struct CompareFunc2_tB4C43ED6E3359E93460DBA47880EF512D1FB295D;
struct CompareFunc2_t6AF6D71121EC4C8E67F51C33A7BAAE63A8B822CF;
struct CompareFunc2_tFEA3BB11B8D5CFD15B1B8038FF0C8C89230C2036;
struct CompareFunc2_tC9F227180BCA310DAF62751E1DEA1A7C4CCDEDEC;
struct CompareFunc2_tD8F814976ED84C2D515E08B134C6B7762BB4A237;
struct CompareFunc2_t45D9D5C19666400DD97BC848BE466970E20163EC;
struct CompareFunc2_t3089DA2331FB2FD299DD42786F063B229E0CD465;
struct CompareFunc2_t942EC01EBBF2D48BDF26D7794667FAAB5210D94B;
struct CompareFunc2_tD6EC93CB1B91D9C4071995650B545B7872439E5C;
struct CompareFunc2_t9ACC862BD3A9584B4536B0660202D64073158D5D;
struct Comparison_1_t3A8CE0813C27FE0CF267707DF0B6452ED64F3D1E;
struct EqualityComparer_1_t7DBAE97102605775DB56BD3370D361BBD64DE5D5;
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC;
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2;
struct EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862;
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC;
struct EqualityComparer_1_tDC51C19B76F007D508C2E2D7CF5399F1E0C69443;
struct EqualityComparer_1_t3D60CA8A640E0FE68A2A24EF9B9A2F530ED94537;
struct EqualityComparer_1_t951752AEC554D078FD5BA75860AB4914942AE117;
struct EqualityComparer_1_t0D37AAA596A74C6F5F0AE68651E5B18034373802;
struct EqualityComparer_1_t23B947F4B4052C9CE965A4087C48BEDA5F132E11;
struct EqualityComparer_1_t922A0F6FFD989B570795F0DB5055CA31A625B1D6;
struct EqualityComparer_1_tA5B2D612E48D47CC5468C19147A56588873B414A;
struct EqualityComparer_1_t805E284DD3F2CCD17BEBA28DD909A248D9FD6B84;
struct IComparer_1_t60213AA7F3148B044D041751AD181C674C37547E;
struct IEnumerable_1_t98DD79B1FA540F938B157790F0338927D4AD37E9;
struct IEnumerator_1_t09094D69506FAF1F35A1C6238C107C7D7417614A;
struct IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452;
struct IEnumerator_1_t43D2E4BA9246755F293DFA74F001FB1A70A648FD;
struct IEnumerator_1_t737E5D96E5E3657734509E507812DBA5E7EDD547;
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
struct IEnumerator_1_t83EC0ED81026A6F478DE79FA8DEDF40968021D54;
struct IEnumerator_1_tC4FCDB25FF0B469937FAFF0B5B76B71A7B3DEB07;
struct IEnumerator_1_t8163FECA4608DD2CADCFF6AC66431BAECA7040EB;
struct IEnumerator_1_t384985F8C3BB55324EC3E36A9145349D4A06BAAE;
struct IEnumerator_1_tFB4A17711E396FE3422160696F37E6BCB2CE70A0;
struct IEnumerator_1_tFAD8D2A4EF6B79C0BE1CACF97DE6C070DE36E2B6;
struct IEnumerator_1_tDB2119DC67A6A4B1141B0E8536D6B98C78ED4F84;
struct IEnumerator_1_tBD06BE75242F06EA1D4E3057083DF71354E06CB0;
struct IEnumerator_1_t7047D3F93569B4886E4FD082A354B108713940D1;
struct IList_1_tBC21DC57C990FA0D593E0266070F581CE95526F7;
struct List_1_t002562281B6798CDCF0267381EF8CB414A349636;
struct List_1_tD9161C536DDAAEB60E4037F293E4A5441702ECFF;
struct List_1_t459EC7969587CD113F95D6E4B78FC6FC1B6DCB87;
struct List_1_t0C79793B7C069C25D3CADB102C04BED5DC6EE39C;
struct List_1_t9FEF61DBA53647F44F11939A07BD5540CCF18BD2;
struct List_1_t5A786ED376945C4ADBD2FA1A9963D195A74EA640;
struct List_1_tC1221FE86255A01D454BF5FF13AD6DF15E9BE844;
struct List_1_tCACD479E29A169CA90AF0CCF99C641EF014769B0;
struct List_1_tB7868517D05AB4986301D3A0FACCA168071E490B;
struct List_1_t4B696A51F9450B2C12B51B8CBC5C8CDAB020295D;
struct List_1_t974883BC9B49D7E31745F06BA5876D5AC469B0A2;
struct List_1_t8BB3929CE0AF32BA36720C0451635D48C141B582;
struct List_1_t3A96D62243E83DB585118DC88423390D159E70F7;
struct List_1_t69D8D3C7171DF1D421BEF5D2DE46252146F5D635;
struct Predicate_1_tBB24C088B9F2C5E92B897C474555BEF1749C9053;
struct ReadOnlyCollection_1_tDE77ACEFEE5F0671F2EA334F16B7C608AF68B26B;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B;
struct ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904;
struct InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549;
struct RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D;
struct SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902;
struct ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350;
struct ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F;
struct InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC;
struct EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA;
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Buffer_t872DD6AD21DB8CF0FBA589EBB1ACD9813724813F;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct Channel_t8642FA69AD5EADAE0380BB1419A1AA1EBFD7F6D0;
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
struct DataNode_t4DE4FF34EED9D2F9AEB2688FB94BA7E50ED1DAD9;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F;
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct IInfrequentUpdateable_t4C5D3A9731898459B07BB0D6E3CB375EA9A6B62B;
struct IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB;
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct Type_t;
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct Bool_tDCB915EFC1E982C5CEAE05C4AB9305574F7302CC;

IL2CPP_EXTERN_C RuntimeClass* ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B;
struct ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904;
struct InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549;
struct RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D;
struct SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902;
struct ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350;
struct ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F;
struct InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC;
struct EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CGetEnumeratorU3Ed__4_t012650383A2904CA6611BBD4A26BDB24EC48C3F4  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	int32_t ___U3CU3E2__current;
	List_1_t459EC7969587CD113F95D6E4B78FC6FC1B6DCB87* ___U3CU3E4__this;
	int32_t ___U3CiU3E5__2;
};
struct U3CGetEnumeratorU3Ed__4_t69F034BBC79CBE2FCAEE74AF85F4A054156D46A9  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	RuntimeObject* ___U3CU3E2__current;
	List_1_t0C79793B7C069C25D3CADB102C04BED5DC6EE39C* ___U3CU3E4__this;
	int32_t ___U3CiU3E5__2;
};
struct U3CGetEnumeratorU3Ed__4_t7C1790FE9749D05D292F0267D4F5871D2D3474E6  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	uint32_t ___U3CU3E2__current;
	List_1_t9FEF61DBA53647F44F11939A07BD5540CCF18BD2* ___U3CU3E4__this;
	int32_t ___U3CiU3E5__2;
};
struct U3CGetEnumeratorU3Ed__4_t47B24BAF67A28949039974CE8D814BE75A7FFF1E : public RuntimeObject {};
struct EqualityComparer_1_t7DBAE97102605775DB56BD3370D361BBD64DE5D5  : public RuntimeObject
{
};
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC  : public RuntimeObject
{
};
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2  : public RuntimeObject
{
};
struct EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862  : public RuntimeObject
{
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC  : public RuntimeObject
{
};
struct EqualityComparer_1_tDC51C19B76F007D508C2E2D7CF5399F1E0C69443  : public RuntimeObject
{
};
struct EqualityComparer_1_t3D60CA8A640E0FE68A2A24EF9B9A2F530ED94537  : public RuntimeObject
{
};
struct EqualityComparer_1_t951752AEC554D078FD5BA75860AB4914942AE117  : public RuntimeObject
{
};
struct EqualityComparer_1_t0D37AAA596A74C6F5F0AE68651E5B18034373802  : public RuntimeObject
{
};
struct EqualityComparer_1_t23B947F4B4052C9CE965A4087C48BEDA5F132E11  : public RuntimeObject
{
};
struct EqualityComparer_1_t922A0F6FFD989B570795F0DB5055CA31A625B1D6  : public RuntimeObject
{
};
struct EqualityComparer_1_tA5B2D612E48D47CC5468C19147A56588873B414A  : public RuntimeObject
{
};
struct EqualityComparer_1_t805E284DD3F2CCD17BEBA28DD909A248D9FD6B84  : public RuntimeObject
{
};
struct List_1_t002562281B6798CDCF0267381EF8CB414A349636  : public RuntimeObject
{
	EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tD9161C536DDAAEB60E4037F293E4A5441702ECFF  : public RuntimeObject
{
	DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* ___buffer;
	int32_t ___size;
};
struct List_1_t459EC7969587CD113F95D6E4B78FC6FC1B6DCB87  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___buffer;
	int32_t ___size;
};
struct List_1_t0C79793B7C069C25D3CADB102C04BED5DC6EE39C  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___buffer;
	int32_t ___size;
};
struct List_1_t9FEF61DBA53647F44F11939A07BD5540CCF18BD2  : public RuntimeObject
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___buffer;
	int32_t ___size;
};
struct List_1_t5A786ED376945C4ADBD2FA1A9963D195A74EA640  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___buffer;
	int32_t ___size;
};
struct List_1_tC1221FE86255A01D454BF5FF13AD6DF15E9BE844  : public RuntimeObject
{
	CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* ___buffer;
	int32_t ___size;
};
struct List_1_tCACD479E29A169CA90AF0CCF99C641EF014769B0  : public RuntimeObject
{
	ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* ___buffer;
	int32_t ___size;
};
struct List_1_tB7868517D05AB4986301D3A0FACCA168071E490B  : public RuntimeObject
{
	InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* ___buffer;
	int32_t ___size;
};
struct List_1_t4B696A51F9450B2C12B51B8CBC5C8CDAB020295D  : public RuntimeObject
{
	RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* ___buffer;
	int32_t ___size;
};
struct List_1_t974883BC9B49D7E31745F06BA5876D5AC469B0A2  : public RuntimeObject
{
	SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* ___buffer;
	int32_t ___size;
};
struct List_1_t8BB3929CE0AF32BA36720C0451635D48C141B582  : public RuntimeObject
{
	ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* ___buffer;
	int32_t ___size;
};
struct List_1_t3A96D62243E83DB585118DC88423390D159E70F7  : public RuntimeObject
{
	ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* ___buffer;
	int32_t ___size;
};
struct List_1_t69D8D3C7171DF1D421BEF5D2DE46252146F5D635  : public RuntimeObject
{
	InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* ___buffer;
	int32_t ___size;
};
struct ReadOnlyCollection_1_tDE77ACEFEE5F0671F2EA334F16B7C608AF68B26B  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
};
struct Datagram_tD135488AC89022CF443533716C9E0751E55B84CA 
{
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___ip;
	Buffer_t872DD6AD21DB8CF0FBA589EBB1ACD9813724813F* ___data;
};
struct Datagram_tD135488AC89022CF443533716C9E0751E55B84CA_marshaled_pinvoke
{
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___ip;
	Buffer_t872DD6AD21DB8CF0FBA589EBB1ACD9813724813F* ___data;
};
struct Datagram_tD135488AC89022CF443533716C9E0751E55B84CA_marshaled_com
{
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___ip;
	Buffer_t872DD6AD21DB8CF0FBA589EBB1ACD9813724813F* ___data;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C 
{
	int32_t ___playerID;
	uint32_t ___objectID;
	uint8_t ___type;
	Buffer_t872DD6AD21DB8CF0FBA589EBB1ACD9813724813F* ___data;
};
struct CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C_marshaled_pinvoke
{
	int32_t ___playerID;
	uint32_t ___objectID;
	uint8_t ___type;
	Buffer_t872DD6AD21DB8CF0FBA589EBB1ACD9813724813F* ___data;
};
struct CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C_marshaled_com
{
	int32_t ___playerID;
	uint32_t ___objectID;
	uint8_t ___type;
	Buffer_t872DD6AD21DB8CF0FBA589EBB1ACD9813724813F* ___data;
};
struct ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159 
{
	uint32_t ___objectID;
	Channel_t8642FA69AD5EADAE0380BB1419A1AA1EBFD7F6D0* ___newChannel;
	uint32_t ___newID;
	int64_t ___expiration;
};
struct ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159_marshaled_pinvoke
{
	uint32_t ___objectID;
	Channel_t8642FA69AD5EADAE0380BB1419A1AA1EBFD7F6D0* ___newChannel;
	uint32_t ___newID;
	int64_t ___expiration;
};
struct ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159_marshaled_com
{
	uint32_t ___objectID;
	Channel_t8642FA69AD5EADAE0380BB1419A1AA1EBFD7F6D0* ___newChannel;
	uint32_t ___newID;
	int64_t ___expiration;
};
struct Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606 
{
	int32_t ___id;
	uint16_t ___players;
	uint16_t ___limit;
	bool ___hasPassword;
	bool ___isPersistent;
	String_t* ___level;
	DataNode_t4DE4FF34EED9D2F9AEB2688FB94BA7E50ED1DAD9* ___data;
};
struct Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606_marshaled_pinvoke
{
	int32_t ___id;
	uint16_t ___players;
	uint16_t ___limit;
	int32_t ___hasPassword;
	int32_t ___isPersistent;
	char* ___level;
	DataNode_t4DE4FF34EED9D2F9AEB2688FB94BA7E50ED1DAD9* ___data;
};
struct Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606_marshaled_com
{
	int32_t ___id;
	uint16_t ___players;
	uint16_t ___limit;
	int32_t ___hasPassword;
	int32_t ___isPersistent;
	Il2CppChar* ___level;
	DataNode_t4DE4FF34EED9D2F9AEB2688FB94BA7E50ED1DAD9* ___data;
};
struct RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF 
{
	uint32_t ___uid;
	String_t* ___functionName;
	Buffer_t872DD6AD21DB8CF0FBA589EBB1ACD9813724813F* ___data;
};
struct RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF_marshaled_pinvoke
{
	uint32_t ___uid;
	char* ___functionName;
	Buffer_t872DD6AD21DB8CF0FBA589EBB1ACD9813724813F* ___data;
};
struct RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF_marshaled_com
{
	uint32_t ___uid;
	Il2CppChar* ___functionName;
	Buffer_t872DD6AD21DB8CF0FBA589EBB1ACD9813724813F* ___data;
};
struct SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114 
{
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___comp;
	DataNode_t4DE4FF34EED9D2F9AEB2688FB94BA7E50ED1DAD9* ___node;
};
struct SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114_marshaled_pinvoke
{
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___comp;
	DataNode_t4DE4FF34EED9D2F9AEB2688FB94BA7E50ED1DAD9* ___node;
};
struct SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114_marshaled_com
{
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___comp;
	DataNode_t4DE4FF34EED9D2F9AEB2688FB94BA7E50ED1DAD9* ___node;
};
struct ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE 
{
	int32_t ___oldChannelID;
	uint32_t ___oldObjectID;
	int32_t ___newChannelID;
	uint32_t ___newObjectID;
	int64_t ___expiration;
};
struct InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02 
{
	float ___nextTime;
	float ___interval;
	RuntimeObject* ___obj;
};
struct InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02_marshaled_pinvoke
{
	float ___nextTime;
	float ___interval;
	RuntimeObject* ___obj;
};
struct InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02_marshaled_com
{
	float ___nextTime;
	float ___interval;
	RuntimeObject* ___obj;
};
struct U3CGetEnumeratorU3Ed__4_tD234F65AF1F5B370331DBB27E1BAB5B653D02519  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	Datagram_tD135488AC89022CF443533716C9E0751E55B84CA ___U3CU3E2__current;
	List_1_tD9161C536DDAAEB60E4037F293E4A5441702ECFF* ___U3CU3E4__this;
	int32_t ___U3CiU3E5__2;
};
struct U3CGetEnumeratorU3Ed__4_t20C1073B540600D5D759EE56C23B9AB48D6D4C2C  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C ___U3CU3E2__current;
	List_1_tC1221FE86255A01D454BF5FF13AD6DF15E9BE844* ___U3CU3E4__this;
	int32_t ___U3CiU3E5__2;
};
struct U3CGetEnumeratorU3Ed__4_tF71A6602AE028134828814954F1617DD48FF3399  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159 ___U3CU3E2__current;
	List_1_tCACD479E29A169CA90AF0CCF99C641EF014769B0* ___U3CU3E4__this;
	int32_t ___U3CiU3E5__2;
};
struct U3CGetEnumeratorU3Ed__4_t2B7FF639B0D0A5F72C476ACC9FF0A11A170EA1A9  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606 ___U3CU3E2__current;
	List_1_tB7868517D05AB4986301D3A0FACCA168071E490B* ___U3CU3E4__this;
	int32_t ___U3CiU3E5__2;
};
struct U3CGetEnumeratorU3Ed__4_t7E801F836956DD1D087F71216988F2DA333E6827  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF ___U3CU3E2__current;
	List_1_t4B696A51F9450B2C12B51B8CBC5C8CDAB020295D* ___U3CU3E4__this;
	int32_t ___U3CiU3E5__2;
};
struct U3CGetEnumeratorU3Ed__4_t691D0073DA3A771C8663F0006D50EE29A2BBDD5F  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114 ___U3CU3E2__current;
	List_1_t974883BC9B49D7E31745F06BA5876D5AC469B0A2* ___U3CU3E4__this;
	int32_t ___U3CiU3E5__2;
};
struct U3CGetEnumeratorU3Ed__4_tE2F70AE5D1600769E0B346A329877341E8EE9AD2  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE ___U3CU3E2__current;
	List_1_t3A96D62243E83DB585118DC88423390D159E70F7* ___U3CU3E4__this;
	int32_t ___U3CiU3E5__2;
};
struct U3CGetEnumeratorU3Ed__4_t6160427C0B6E30E3ECAB15E821DDDD716768AF43  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02 ___U3CU3E2__current;
	List_1_t69D8D3C7171DF1D421BEF5D2DE46252146F5D635* ___U3CU3E4__this;
	int32_t ___U3CiU3E5__2;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct ExceptionArgument_t60E7F8D9DE5362CBE9365893983C30302D83B778 
{
	int32_t ___value__;
};
struct ExceptionResource_t609A85E253A4E615583553D91D839E2E79FDFBD9 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A 
{
	String_t* ___text;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
};
struct ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A_marshaled_pinvoke
{
	char* ___text;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
};
struct ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A_marshaled_com
{
	Il2CppChar* ___text;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
};
struct Bool_tDCB915EFC1E982C5CEAE05C4AB9305574F7302CC 
{
	int32_t ___value__;
};
struct VariantType_t01A161D87BC37DF7EFD343CBB9D8EE954759BC6C 
{
	int32_t ___value__;
};
struct U3CGetEnumeratorU3Ed__4_t6901B1C3DB5A8E465EFC4E0ABD6B3F8101868D29  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A ___U3CU3E2__current;
	List_1_t8BB3929CE0AF32BA36720C0451635D48C141B582* ___U3CU3E4__this;
	int32_t ___U3CiU3E5__2;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct Variant_t1C24D2F331888502CEE4F0CF1646348E0261E25B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___Type;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___Type_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Count_OffsetPadding[4];
			int32_t ___Count;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Count_OffsetPadding_forAlignmentOnly[4];
			int32_t ___Count_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___StringValue_OffsetPadding[8];
			uint8_t* ___StringValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___StringValue_OffsetPadding_forAlignmentOnly[8];
			uint8_t* ___StringValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___LongValue_OffsetPadding[8];
			int64_t ___LongValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___LongValue_OffsetPadding_forAlignmentOnly[8];
			int64_t ___LongValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___DoubleValue_OffsetPadding[8];
			double ___DoubleValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___DoubleValue_OffsetPadding_forAlignmentOnly[8];
			double ___DoubleValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___BoolValue_OffsetPadding[8];
			int32_t ___BoolValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___BoolValue_OffsetPadding_forAlignmentOnly[8];
			int32_t ___BoolValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___StringValues_OffsetPadding[8];
			uint8_t** ___StringValues;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___StringValues_OffsetPadding_forAlignmentOnly[8];
			uint8_t** ___StringValues_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___LongValues_OffsetPadding[8];
			int64_t* ___LongValues;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___LongValues_OffsetPadding_forAlignmentOnly[8];
			int64_t* ___LongValues_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___DoubleValues_OffsetPadding[8];
			double* ___DoubleValues;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___DoubleValues_OffsetPadding_forAlignmentOnly[8];
			double* ___DoubleValues_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___BoolValues_OffsetPadding[8];
			int32_t* ___BoolValues;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___BoolValues_OffsetPadding_forAlignmentOnly[8];
			int32_t* ___BoolValues_forAlignmentOnly;
		};
	};
};
struct CompareFunc_t206BA89222C56EFDFEE5F338F89010A899541F98  : public MulticastDelegate_t
{
};
struct CompareFunc_tC2B7EDBB83306D2599B2D16F41737BC8D902A8D2  : public MulticastDelegate_t
{
};
struct CompareFunc_t4B02430CDF25A791E686F7C6A3039E596D79E8A2  : public MulticastDelegate_t
{
};
struct CompareFunc_t2AD4AA166CD7D5B8FBF45B10A9D1C4635808B9D3  : public MulticastDelegate_t
{
};
struct CompareFunc_t2464B8769683BB7E956DDCC4929754B984A092D0  : public MulticastDelegate_t
{
};
struct CompareFunc_t76EB0BBD466A89D78E7675FEACB717FB074BB89B  : public MulticastDelegate_t
{
};
struct CompareFunc_t206ED15B484D41AE9042019C27F884344B255783  : public MulticastDelegate_t
{
};
struct CompareFunc_t58FEF253929D82FB283FED18BD6AD3795FDC733E  : public MulticastDelegate_t
{
};
struct CompareFunc_tCD85A87B3459047F80416071B78FAD3D1804BC87  : public MulticastDelegate_t
{
};
struct CompareFunc_t57BD15904CC04693A588AE2C9E2BCA414C67C19B  : public MulticastDelegate_t
{
};
struct CompareFunc_t3B70DEE7A10D19DE6F1C7A392495D80CB2F44B76  : public MulticastDelegate_t
{
};
struct CompareFunc_t00CE15486F1C87AAA1937F1407C4B99828312A5D  : public MulticastDelegate_t
{
};
struct CompareFunc_tA3EC9E99EAAA5F3D786D261BBF941729E7267E9D  : public MulticastDelegate_t
{
};
struct CompareFunc2_t98BAE01C5CA178163530C2F03590C69F6FE332C4  : public MulticastDelegate_t
{
};
struct CompareFunc2_tC86C57C64D916CAEE553EA7A2A1985D43A64A750  : public MulticastDelegate_t
{
};
struct CompareFunc2_t792F53EE6953C55FF25C3F5DEEDFBE2786EE35DD  : public MulticastDelegate_t
{
};
struct CompareFunc2_tB4C43ED6E3359E93460DBA47880EF512D1FB295D  : public MulticastDelegate_t
{
};
struct CompareFunc2_t6AF6D71121EC4C8E67F51C33A7BAAE63A8B822CF  : public MulticastDelegate_t
{
};
struct CompareFunc2_tFEA3BB11B8D5CFD15B1B8038FF0C8C89230C2036  : public MulticastDelegate_t
{
};
struct CompareFunc2_tC9F227180BCA310DAF62751E1DEA1A7C4CCDEDEC  : public MulticastDelegate_t
{
};
struct CompareFunc2_tD8F814976ED84C2D515E08B134C6B7762BB4A237  : public MulticastDelegate_t
{
};
struct CompareFunc2_t45D9D5C19666400DD97BC848BE466970E20163EC  : public MulticastDelegate_t
{
};
struct CompareFunc2_t3089DA2331FB2FD299DD42786F063B229E0CD465  : public MulticastDelegate_t
{
};
struct CompareFunc2_t942EC01EBBF2D48BDF26D7794667FAAB5210D94B  : public MulticastDelegate_t
{
};
struct CompareFunc2_tD6EC93CB1B91D9C4071995650B545B7872439E5C  : public MulticastDelegate_t
{
};
struct CompareFunc2_t9ACC862BD3A9584B4536B0660202D64073158D5D  : public MulticastDelegate_t
{
};
struct ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C 
{
	intptr_t ___Key;
	Variant_t1C24D2F331888502CEE4F0CF1646348E0261E25B ___Value;
};
struct Action_1_t19E6855A63C89A1C9C091E8D2BBBD2C5F47FF2D3  : public MulticastDelegate_t
{
};
struct Comparison_1_t3A8CE0813C27FE0CF267707DF0B6452ED64F3D1E  : public MulticastDelegate_t
{
};
struct Enumerator_tB755A1A5DCF3195E182BC363D160AB6086A9E092 
{
	List_1_t002562281B6798CDCF0267381EF8CB414A349636* ____list;
	int32_t ____index;
	int32_t ____version;
	Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C ____current;
};
struct Predicate_1_tBB24C088B9F2C5E92B897C474555BEF1749C9053  : public MulticastDelegate_t
{
};
struct EqualityComparer_1_t7DBAE97102605775DB56BD3370D361BBD64DE5D5_StaticFields
{
	EqualityComparer_1_t7DBAE97102605775DB56BD3370D361BBD64DE5D5* ___defaultComparer;
};
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields
{
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* ___defaultComparer;
};
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields
{
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* ___defaultComparer;
};
struct EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862_StaticFields
{
	EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* ___defaultComparer;
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC_StaticFields
{
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* ___defaultComparer;
};
struct EqualityComparer_1_tDC51C19B76F007D508C2E2D7CF5399F1E0C69443_StaticFields
{
	EqualityComparer_1_tDC51C19B76F007D508C2E2D7CF5399F1E0C69443* ___defaultComparer;
};
struct EqualityComparer_1_t3D60CA8A640E0FE68A2A24EF9B9A2F530ED94537_StaticFields
{
	EqualityComparer_1_t3D60CA8A640E0FE68A2A24EF9B9A2F530ED94537* ___defaultComparer;
};
struct EqualityComparer_1_t951752AEC554D078FD5BA75860AB4914942AE117_StaticFields
{
	EqualityComparer_1_t951752AEC554D078FD5BA75860AB4914942AE117* ___defaultComparer;
};
struct EqualityComparer_1_t0D37AAA596A74C6F5F0AE68651E5B18034373802_StaticFields
{
	EqualityComparer_1_t0D37AAA596A74C6F5F0AE68651E5B18034373802* ___defaultComparer;
};
struct EqualityComparer_1_t23B947F4B4052C9CE965A4087C48BEDA5F132E11_StaticFields
{
	EqualityComparer_1_t23B947F4B4052C9CE965A4087C48BEDA5F132E11* ___defaultComparer;
};
struct EqualityComparer_1_t922A0F6FFD989B570795F0DB5055CA31A625B1D6_StaticFields
{
	EqualityComparer_1_t922A0F6FFD989B570795F0DB5055CA31A625B1D6* ___defaultComparer;
};
struct EqualityComparer_1_tA5B2D612E48D47CC5468C19147A56588873B414A_StaticFields
{
	EqualityComparer_1_tA5B2D612E48D47CC5468C19147A56588873B414A* ___defaultComparer;
};
struct EqualityComparer_1_t805E284DD3F2CCD17BEBA28DD909A248D9FD6B84_StaticFields
{
	EqualityComparer_1_t805E284DD3F2CCD17BEBA28DD909A248D9FD6B84* ___defaultComparer;
};
struct List_1_t002562281B6798CDCF0267381EF8CB414A349636_StaticFields
{
	EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* ___s_emptyArray;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C m_Items[1];

	inline Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C value)
	{
		m_Items[index] = value;
	}
};
struct DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3  : public RuntimeArray
{
	ALIGN_FIELD (8) Datagram_tD135488AC89022CF443533716C9E0751E55B84CA m_Items[1];

	inline Datagram_tD135488AC89022CF443533716C9E0751E55B84CA GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Datagram_tD135488AC89022CF443533716C9E0751E55B84CA* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Datagram_tD135488AC89022CF443533716C9E0751E55B84CA value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___ip), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___data), (void*)NULL);
		#endif
	}
	inline Datagram_tD135488AC89022CF443533716C9E0751E55B84CA GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Datagram_tD135488AC89022CF443533716C9E0751E55B84CA* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Datagram_tD135488AC89022CF443533716C9E0751E55B84CA value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___ip), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___data), (void*)NULL);
		#endif
	}
};
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA  : public RuntimeArray
{
	ALIGN_FIELD (8) uint32_t m_Items[1];

	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B  : public RuntimeArray
{
	ALIGN_FIELD (8) CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C m_Items[1];

	inline CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___data), (void*)NULL);
	}
	inline CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___data), (void*)NULL);
	}
};
struct ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904  : public RuntimeArray
{
	ALIGN_FIELD (8) ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159 m_Items[1];

	inline ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___newChannel), (void*)NULL);
	}
	inline ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___newChannel), (void*)NULL);
	}
};
struct InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549  : public RuntimeArray
{
	ALIGN_FIELD (8) Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606 m_Items[1];

	inline Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___level), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___data), (void*)NULL);
		#endif
	}
	inline Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___level), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___data), (void*)NULL);
		#endif
	}
};
struct RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D  : public RuntimeArray
{
	ALIGN_FIELD (8) RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF m_Items[1];

	inline RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___functionName), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___data), (void*)NULL);
		#endif
	}
	inline RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___functionName), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___data), (void*)NULL);
		#endif
	}
};
struct SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902  : public RuntimeArray
{
	ALIGN_FIELD (8) SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114 m_Items[1];

	inline SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___comp), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___node), (void*)NULL);
		#endif
	}
	inline SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___comp), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___node), (void*)NULL);
		#endif
	}
};
struct ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350  : public RuntimeArray
{
	ALIGN_FIELD (8) ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A m_Items[1];

	inline ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___text), (void*)NULL);
	}
	inline ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___text), (void*)NULL);
	}
};
struct ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F  : public RuntimeArray
{
	ALIGN_FIELD (8) ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE m_Items[1];

	inline ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE value)
	{
		m_Items[index] = value;
	}
};
struct InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC  : public RuntimeArray
{
	ALIGN_FIELD (8) InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02 m_Items[1];

	inline InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___obj), (void*)NULL);
	}
	inline InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___obj), (void*)NULL);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_mFF6EE2023BF05E98F1D1F1A70991BE2B4768AC4F_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C List_1_get_Item_m9DFC6D45BA1324C5192D2CD0BA4AD52F9B8C7944_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisEntry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C_mA52C3FCF1F9707BDC64FFD748F50221C71AC2656_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m1ACB2516EE440762DC87101F4907D2634EC3429D_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, int32_t ___0_index, Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mA0C4AB6BF0EB80C858EAF3F8D18FCD76C7AAC396_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_mE8546716F3785A64B22FB07BBFC7C9EBAF996899_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m1E1C5CCE0C3064A654574163DC7C4CBBA7AC3DB8_gshared_inline (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mCE791BD866BF0868DB63FCECFF18CB64098637CB_gshared_inline (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_mAE9AC1D1A87351B0F8A1D09A2125A482BBF0024E_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1__ctor_m65B57832B37BE3625A4B5918BDF10BAA874D55D6_gshared (ReadOnlyCollection_1_tDE77ACEFEE5F0671F2EA334F16B7C608AF68B26B* __this, RuntimeObject* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisEntry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C_mEF0A21F508496A8D3974B7E397A1670166A056CA_gshared (EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* ___0_array, int32_t ___1_index, int32_t ___2_length, Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_BinarySearch_m737B151A7CD23BDB979BB9C0E1D0C64F4E4F6D50_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, int32_t ___0_index, int32_t ___1_count, Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C ___2_item, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m4FF31271D49A80AF3107DA1D8ED040B2D4FCFCB0_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m35E7C62FFAEBC93EF01CED6E6128E48DCC7859A9_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m020438854E725672CFFDA9E683DCD04A306AB87D_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_mF9A8A603F19D1A5A9A30F990E961EBC24E5B9829_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m9CE5BF53682527AFBFE76F0524A4E218C53E3605_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m2CA7127F10A92482E9F489505C5F3B595DDC7268_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, Predicate_1_tBB24C088B9F2C5E92B897C474555BEF1749C9053* ___0_match, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m621503A57A4F629CFF8121C79F25B33B10F4743F_gshared_inline (Predicate_1_tBB24C088B9F2C5E92B897C474555BEF1749C9053* __this, Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mFD022FF55BF5009CC53918403986EBB838054177_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_mA615C716B7D420A1DD1865796AA3165B31255FA6_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_tBB24C088B9F2C5E92B897C474555BEF1749C9053* ___2_match, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m2C81B638625FF680761E584028BDE4A1FEFE0506_gshared_inline (Action_1_t19E6855A63C89A1C9C091E8D2BBBD2C5F47FF2D3* __this, Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m1E647764FE042A8001FE6452077FCFA376D0826D_gshared (Enumerator_tB755A1A5DCF3195E182BC363D160AB6086A9E092* __this, List_1_t002562281B6798CDCF0267381EF8CB414A349636* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m738E22904782E10BA317E3A0EA2CF775B3E6F101_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisEntry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C_mD0DC10F570E048C4228D118A1254F51259A462AF_gshared (EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* ___0_array, Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m9D38FA896A57E0C98D3DF65BA8473AEE0A3CD791_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, int32_t ___0_index, Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m6B96153B37A55B46E855785C2112344AD5794A0A_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m44E5984F69B2D9EA9EE1358190EF227882A111E8_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m950FFC94E78985169AD84E695AB8FF4BD165F8CF_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisEntry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C_mE7426BAAA3CEC8C3CCBB645FB21FE54557D52F9C_gshared (EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mE5156B14C2C026AFBEECDD5333728FEC80438861_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisEntry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C_m3AFE97CE8F84EC5375C72D5426BA8B33DE5426DB_gshared (EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_m1067939443E7234328453DF9DC2F4EFB3246C66F_gshared (EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_t3A8CE0813C27FE0CF267707DF0B6452ED64F3D1E* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Allocate_m33B573463575A1E41D03FCA89207B42020113080_gshared (List_1_tD9161C536DDAAEB60E4037F293E4A5441702ECFF* __this, int32_t ___0_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__4__ctor_mEDB6CB096A0A5F6F6A00917882D1A5C6E8CDCAB2_gshared (U3CGetEnumeratorU3Ed__4_tD234F65AF1F5B370331DBB27E1BAB5B653D02519* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisDatagram_tD135488AC89022CF443533716C9E0751E55B84CA_m6C988423102F3BF8A4CCB19A8847428508A74D05_gshared (DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AllocateMore_m64237B3E6A965721B9EC4EB88DF4FDA10676BDB6_gshared (List_1_tD9161C536DDAAEB60E4037F293E4A5441702ECFF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mA11774D84804C541AB834FE642A6A697E4BD76FC_gshared (List_1_tD9161C536DDAAEB60E4037F293E4A5441702ECFF* __this, Datagram_tD135488AC89022CF443533716C9E0751E55B84CA ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mDC097FCD15D3606D396A5BD528CA83C806259F14_gshared (List_1_tD9161C536DDAAEB60E4037F293E4A5441702ECFF* __this, Datagram_tD135488AC89022CF443533716C9E0751E55B84CA ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t7DBAE97102605775DB56BD3370D361BBD64DE5D5* EqualityComparer_1_get_Default_mADDE59D704337E529616736474432A412BF9946C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Trim_m458E1F3AB35B95C9C3C9E28470A0096CB12CAC1A_gshared (List_1_tD9161C536DDAAEB60E4037F293E4A5441702ECFF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CompareFunc_Invoke_m1364B63389088E237069575A65370C42D24D6050_gshared_inline (CompareFunc_t206BA89222C56EFDFEE5F338F89010A899541F98* __this, Datagram_tD135488AC89022CF443533716C9E0751E55B84CA ___0_left, Datagram_tD135488AC89022CF443533716C9E0751E55B84CA ___1_right, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CompareFunc2_Invoke_m19F8BA2B4D040F7E75D631C269C7CA4E4576E13D_gshared_inline (CompareFunc2_t98BAE01C5CA178163530C2F03590C69F6FE332C4* __this, Datagram_tD135488AC89022CF443533716C9E0751E55B84CA* ___0_left, Datagram_tD135488AC89022CF443533716C9E0751E55B84CA* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Allocate_m308FFC6C728F24EC770894A3570F8232E84A036F_gshared (List_1_t459EC7969587CD113F95D6E4B78FC6FC1B6DCB87* __this, int32_t ___0_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__4__ctor_mC1B555174D49CB2C319EF7020E7E513B12E09244_gshared (U3CGetEnumeratorU3Ed__4_t012650383A2904CA6611BBD4A26BDB24EC48C3F4* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6BAA7BD6F22421B894347B1476C37052FAC6C916_gshared (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AllocateMore_mB3387E0C0D22F845A930DD18C41105805E83464A_gshared (List_1_t459EC7969587CD113F95D6E4B78FC6FC1B6DCB87* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mF2BB5BF456E07C864A2B65ECFD98DA62467EA633_gshared (List_1_t459EC7969587CD113F95D6E4B78FC6FC1B6DCB87* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m32FB6144EEACF837838D11E9A805DA6FF5E3B027_gshared (List_1_t459EC7969587CD113F95D6E4B78FC6FC1B6DCB87* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Trim_mE4BA2A6929F26C01639037E86BB0889108EFAEB1_gshared (List_1_t459EC7969587CD113F95D6E4B78FC6FC1B6DCB87* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CompareFunc_Invoke_mF6F08E54B282667D5702560D05C662821E3F8620_gshared_inline (CompareFunc_tC2B7EDBB83306D2599B2D16F41737BC8D902A8D2* __this, int32_t ___0_left, int32_t ___1_right, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CompareFunc2_Invoke_m5A7EB4B6126FEA1B206EF583C39A60AE73972F54_gshared_inline (CompareFunc2_tC86C57C64D916CAEE553EA7A2A1985D43A64A750* __this, int32_t* ___0_left, int32_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Allocate_m784E4A5290BBB0CD771AAF3A21DB7D37A6A2F622_gshared (List_1_t0C79793B7C069C25D3CADB102C04BED5DC6EE39C* __this, int32_t ___0_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__4__ctor_m1A624DA1F37A823B0C2BC2BE956EE7F488EA16E5_gshared (U3CGetEnumeratorU3Ed__4_t69F034BBC79CBE2FCAEE74AF85F4A054156D46A9* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisRuntimeObject_mE8D92C287251BAF8256D85E5829F749359EC334E_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AllocateMore_mFCCAC1D02EAE9A3B6CB76147D2A409A5657A2EBC_gshared (List_1_t0C79793B7C069C25D3CADB102C04BED5DC6EE39C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mD2E826D42B39C272581CDE209756EADE7BDC4F9C_gshared (List_1_t0C79793B7C069C25D3CADB102C04BED5DC6EE39C* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mEB5174B6486E1FA27E836AF1D0800D6CC2B26DFB_gshared (List_1_t0C79793B7C069C25D3CADB102C04BED5DC6EE39C* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Trim_mCE45128341A6A117EA26785A430C636963492D61_gshared (List_1_t0C79793B7C069C25D3CADB102C04BED5DC6EE39C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CompareFunc_Invoke_mDF62819E35773C1822470C9685C6D29ACDD5D375_gshared_inline (CompareFunc_t4B02430CDF25A791E686F7C6A3039E596D79E8A2* __this, RuntimeObject* ___0_left, RuntimeObject* ___1_right, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CompareFunc2_Invoke_m2A17CFF0028FC57CAD9E6D2820F451F830B5FD02_gshared_inline (CompareFunc2_t792F53EE6953C55FF25C3F5DEEDFBE2786EE35DD* __this, RuntimeObject** ___0_left, RuntimeObject** ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Allocate_mD4B9F9051E25E6CE874CECEA5CCE9C653280E40E_gshared (List_1_t9FEF61DBA53647F44F11939A07BD5540CCF18BD2* __this, int32_t ___0_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__4__ctor_m80B4177F87193EB9BCC682587A52F6CF745FE3E7_gshared (U3CGetEnumeratorU3Ed__4_t7C1790FE9749D05D292F0267D4F5871D2D3474E6* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m5125BA7C6999C4FE1290349D3F1F691A6E00A039_gshared (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AllocateMore_m1F949557AEF0CD41DE7F787A4E0AA82802D7EC57_gshared (List_1_t9FEF61DBA53647F44F11939A07BD5540CCF18BD2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m025EFD3B747850EA7FF884F4489C0A5326CD821A_gshared (List_1_t9FEF61DBA53647F44F11939A07BD5540CCF18BD2* __this, uint32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE42B8E59B1213BF695BED076A18929659C0D3932_gshared (List_1_t9FEF61DBA53647F44F11939A07BD5540CCF18BD2* __this, uint32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* EqualityComparer_1_get_Default_mF554877B669658FD6449F84AE369214855D0BC40_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Trim_m1D0D42CC82B5335B1A44E099E8D5198767301283_gshared (List_1_t9FEF61DBA53647F44F11939A07BD5540CCF18BD2* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CompareFunc_Invoke_mA91B35EEC7ED42BB081904FCAEA385DCA4CC6AAA_gshared_inline (CompareFunc_t2AD4AA166CD7D5B8FBF45B10A9D1C4635808B9D3* __this, uint32_t ___0_left, uint32_t ___1_right, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CompareFunc2_Invoke_m4DE6E51E303B1C96ED4C6688DC89954B15B8788F_gshared_inline (CompareFunc2_tB4C43ED6E3359E93460DBA47880EF512D1FB295D* __this, uint32_t* ___0_left, uint32_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Allocate_mBF248EC0FF7D2307E8F2FF9EA304C594A2DD8711_gshared (List_1_tC1221FE86255A01D454BF5FF13AD6DF15E9BE844* __this, int32_t ___0_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__4__ctor_m4D80BD542C3AA2D801C88746A32B1264A7C25ADB_gshared (U3CGetEnumeratorU3Ed__4_t20C1073B540600D5D759EE56C23B9AB48D6D4C2C* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisCreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C_m0B8159A222F5A4EFE4DD4FFC145A2AD9BA6C6146_gshared (CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AllocateMore_mD9FC03D27B73E82BE46B2522B08E633D508BBF78_gshared (List_1_tC1221FE86255A01D454BF5FF13AD6DF15E9BE844* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mE797E9A0B413323AAB6CD172BB21183FFBDEED98_gshared (List_1_tC1221FE86255A01D454BF5FF13AD6DF15E9BE844* __this, CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mBDD4B7B7C2A4491C2560E0539F7967EE451016D0_gshared (List_1_tC1221FE86255A01D454BF5FF13AD6DF15E9BE844* __this, CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tDC51C19B76F007D508C2E2D7CF5399F1E0C69443* EqualityComparer_1_get_Default_m4999C45387F95BE585FECA004680BAF261846DBB_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Trim_m69318A97501FA8A045346C833CCFCCF9239476B5_gshared (List_1_tC1221FE86255A01D454BF5FF13AD6DF15E9BE844* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CompareFunc_Invoke_mC718903902546A9ED1B1B2E06AD20B88CE645202_gshared_inline (CompareFunc_t76EB0BBD466A89D78E7675FEACB717FB074BB89B* __this, CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C ___0_left, CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C ___1_right, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CompareFunc2_Invoke_m2F9F3C6F9A9719E132581007CC78C9134F4A2CF4_gshared_inline (CompareFunc2_tFEA3BB11B8D5CFD15B1B8038FF0C8C89230C2036* __this, CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C* ___0_left, CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Allocate_m16D9359DB30B3324FA1385A0155A56E8545D30A8_gshared (List_1_tCACD479E29A169CA90AF0CCF99C641EF014769B0* __this, int32_t ___0_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__4__ctor_mB7211E35FE0CF7AB94C614E5DC5DB9117D8CF7BF_gshared (U3CGetEnumeratorU3Ed__4_tF71A6602AE028134828814954F1617DD48FF3399* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159_m06A92FA5D1D135582B2327E60993DABCF96C958D_gshared (ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AllocateMore_mF0BB57DAA87CBD00F589B1203D5F6A67FCF985FF_gshared (List_1_tCACD479E29A169CA90AF0CCF99C641EF014769B0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mA283750C6BB8790634CE95E7283BE3AF4E3E8DDF_gshared (List_1_tCACD479E29A169CA90AF0CCF99C641EF014769B0* __this, ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m0CF78C8800728BBD2B22BB78CE1387FE65A36E89_gshared (List_1_tCACD479E29A169CA90AF0CCF99C641EF014769B0* __this, ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159 ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t3D60CA8A640E0FE68A2A24EF9B9A2F530ED94537* EqualityComparer_1_get_Default_mBDC223572228738F1141303BE04A30F3F9C80E00_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Trim_m5DEEE863BB3BBFFBD9952AB0AC6086A2A69A82EB_gshared (List_1_tCACD479E29A169CA90AF0CCF99C641EF014769B0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CompareFunc_Invoke_m11FC03C47C5266EE2CF5A04B4B4CCB88FE426CBD_gshared_inline (CompareFunc_t206ED15B484D41AE9042019C27F884344B255783* __this, ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159 ___0_left, ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159 ___1_right, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CompareFunc2_Invoke_m3DA56544470A1EBE123C6801AC1CB3CC43B46105_gshared_inline (CompareFunc2_tC9F227180BCA310DAF62751E1DEA1A7C4CCDEDEC* __this, ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159* ___0_left, ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Allocate_mC7C60762AE8065316551678BC01CB2537CE3B9FA_gshared (List_1_tB7868517D05AB4986301D3A0FACCA168071E490B* __this, int32_t ___0_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__4__ctor_m6F20A01C8F2765B70F96E68F7DD1955C639C629B_gshared (U3CGetEnumeratorU3Ed__4_t2B7FF639B0D0A5F72C476ACC9FF0A11A170EA1A9* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisInfo_t44CC3C8A15C01ED6865494E4962A609C4FDD5606_m55EC5CE62409C8B19BA5A84C0EDD95133C37682F_gshared (InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AllocateMore_m36A3C3BEB49F64E3ADCB91F87C2D3B23DEF947E1_gshared (List_1_tB7868517D05AB4986301D3A0FACCA168071E490B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mA0DC7C93AEB368776DC094FA4089CBFC1B482451_gshared (List_1_tB7868517D05AB4986301D3A0FACCA168071E490B* __this, Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE0836260320B430E8C8C71ACFC47C2F9DE92A99B_gshared (List_1_tB7868517D05AB4986301D3A0FACCA168071E490B* __this, Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606 ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t951752AEC554D078FD5BA75860AB4914942AE117* EqualityComparer_1_get_Default_m04CF7FE794A864F889D6D885B53D7CB2727A3DE9_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Trim_mAE66B47854ECADE387D4B533BFC897DD7CEF810D_gshared (List_1_tB7868517D05AB4986301D3A0FACCA168071E490B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CompareFunc_Invoke_mCD0B31AC9FE8243977C5B4C5E66E1A624F79E0CC_gshared_inline (CompareFunc_t58FEF253929D82FB283FED18BD6AD3795FDC733E* __this, Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606 ___0_left, Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606 ___1_right, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CompareFunc2_Invoke_m35615375F9CF98877A316454F5BB666A97EEFEFA_gshared_inline (CompareFunc2_tD8F814976ED84C2D515E08B134C6B7762BB4A237* __this, Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606* ___0_left, Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Allocate_mC752728C4D6491F5F3E2542FE776144FDFBA2E14_gshared (List_1_t4B696A51F9450B2C12B51B8CBC5C8CDAB020295D* __this, int32_t ___0_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__4__ctor_m59A07599DB71DA3C12E0725CEEA07ED4B75C0F8D_gshared (U3CGetEnumeratorU3Ed__4_t7E801F836956DD1D087F71216988F2DA333E6827* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisRFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF_m8919158CF002E7FC0B30C4E6663F6E970474E0C5_gshared (RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AllocateMore_m0F81B0BE3F946BD2A07DC8F2128B24D1A3591421_gshared (List_1_t4B696A51F9450B2C12B51B8CBC5C8CDAB020295D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mCAB836A92F0DFACCD68ADEA54E7C44049E4C19C9_gshared (List_1_t4B696A51F9450B2C12B51B8CBC5C8CDAB020295D* __this, RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m1ED5D82E540B025C68AE7C547AFB672D20360151_gshared (List_1_t4B696A51F9450B2C12B51B8CBC5C8CDAB020295D* __this, RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t0D37AAA596A74C6F5F0AE68651E5B18034373802* EqualityComparer_1_get_Default_mD91779D28B1869320CE14644046CC4EB8E336E30_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Trim_m7CC0999862EAC154956E8ED69698341FAD3445AE_gshared (List_1_t4B696A51F9450B2C12B51B8CBC5C8CDAB020295D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CompareFunc_Invoke_m4B54AEFD15A1C7354BFDBE32926D513CB5BF80B3_gshared_inline (CompareFunc_tCD85A87B3459047F80416071B78FAD3D1804BC87* __this, RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF ___0_left, RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF ___1_right, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CompareFunc2_Invoke_m113D742BBB1DD0D33B713110079E744E2C52214D_gshared_inline (CompareFunc2_t45D9D5C19666400DD97BC848BE466970E20163EC* __this, RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF* ___0_left, RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Allocate_m28EA0AF146A9EEBF589648E7319C3698DADBE52F_gshared (List_1_t974883BC9B49D7E31745F06BA5876D5AC469B0A2* __this, int32_t ___0_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__4__ctor_m4C4C83A916A259AB84D1E9E7C644E78D1A7E777B_gshared (U3CGetEnumeratorU3Ed__4_t691D0073DA3A771C8663F0006D50EE29A2BBDD5F* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisSerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114_m1668828752488C84CC99EFF24B692280DFD67C1C_gshared (SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AllocateMore_m6A2B61A482CE2AC518A9F76411F7B07DE1346FC6_gshared (List_1_t974883BC9B49D7E31745F06BA5876D5AC469B0A2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mA321E6C9D10C95BA201341DAE119EFEB1B821AD1_gshared (List_1_t974883BC9B49D7E31745F06BA5876D5AC469B0A2* __this, SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mAD2C0D5B38AB741B0D530DC005CA3D03310184CA_gshared (List_1_t974883BC9B49D7E31745F06BA5876D5AC469B0A2* __this, SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114 ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t23B947F4B4052C9CE965A4087C48BEDA5F132E11* EqualityComparer_1_get_Default_m1F6BF9F9EAD31481277A75781DDB8E4F05818D5E_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Trim_mA25D0CBAF07512FC093F58B90580DAC3FE602735_gshared (List_1_t974883BC9B49D7E31745F06BA5876D5AC469B0A2* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CompareFunc_Invoke_mC210317E3E1A1EA7DC945E081265A92D576AE458_gshared_inline (CompareFunc_t57BD15904CC04693A588AE2C9E2BCA414C67C19B* __this, SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114 ___0_left, SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114 ___1_right, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CompareFunc2_Invoke_mA5FD0F55AF25F59CBD75557D18200DB9D1459406_gshared_inline (CompareFunc2_t3089DA2331FB2FD299DD42786F063B229E0CD465* __this, SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114* ___0_left, SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Allocate_m705F151402C625E09FC5280623293A6D272F3055_gshared (List_1_t8BB3929CE0AF32BA36720C0451635D48C141B582* __this, int32_t ___0_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__4__ctor_m87AEC2E1299A222DD59F46198B8F0439CACA8897_gshared (U3CGetEnumeratorU3Ed__4_t6901B1C3DB5A8E465EFC4E0ABD6B3F8101868D29* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A_m6B17A4064CE21D14F343215701B230AD8440E047_gshared (ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AllocateMore_mE63483F9B3A55C1DBA2F82423AE3E57811EB07F2_gshared (List_1_t8BB3929CE0AF32BA36720C0451635D48C141B582* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m914AF3F6859B6EB0A1339740FA7DFA8DDCA6A161_gshared (List_1_t8BB3929CE0AF32BA36720C0451635D48C141B582* __this, ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m5759BD42BAA6A35C4E59F1D9A75FA9256B4011C3_gshared (List_1_t8BB3929CE0AF32BA36720C0451635D48C141B582* __this, ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t922A0F6FFD989B570795F0DB5055CA31A625B1D6* EqualityComparer_1_get_Default_m13778FED77225F5505F75F08CD67D222DAB9F806_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Trim_mC405BF265274F008B59BC88566F414ECD923BBDF_gshared (List_1_t8BB3929CE0AF32BA36720C0451635D48C141B582* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CompareFunc_Invoke_m351179990E33C7C8CC0E941CCC765C52C7E47541_gshared_inline (CompareFunc_t3B70DEE7A10D19DE6F1C7A392495D80CB2F44B76* __this, ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A ___0_left, ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A ___1_right, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CompareFunc2_Invoke_m7AEAE165F749D42182BA1DB4D144F18055BEB165_gshared_inline (CompareFunc2_t942EC01EBBF2D48BDF26D7794667FAAB5210D94B* __this, ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A* ___0_left, ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Allocate_m5E017945064D3ED2B4934922E6D1476AE34A3138_gshared (List_1_t3A96D62243E83DB585118DC88423390D159E70F7* __this, int32_t ___0_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__4__ctor_mFED244EB43A7B1BAD1E46C73CE7FBD41E8B7E96A_gshared (U3CGetEnumeratorU3Ed__4_tE2F70AE5D1600769E0B346A329877341E8EE9AD2* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE_m3126A0A6FB70B2F1686321EFB5E6678B4C0A4CB6_gshared (ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AllocateMore_mD0A96FAA2F13E1B6A463049080D7E5D7F02AFD35_gshared (List_1_t3A96D62243E83DB585118DC88423390D159E70F7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mED171A2B248A13191B58A439764C36404C940BC6_gshared (List_1_t3A96D62243E83DB585118DC88423390D159E70F7* __this, ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE3A0896716329143BB73837C7FB65985890BD18D_gshared (List_1_t3A96D62243E83DB585118DC88423390D159E70F7* __this, ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tA5B2D612E48D47CC5468C19147A56588873B414A* EqualityComparer_1_get_Default_mAD029989C453C4C80CEF435CCBCFA76645C04C49_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Trim_mB5673BD8D2BDDC5D585E68AB0EFAA30903EFA000_gshared (List_1_t3A96D62243E83DB585118DC88423390D159E70F7* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CompareFunc_Invoke_m5C0B1FFD5552AD1F619D3B6A3B7B677052199FCE_gshared_inline (CompareFunc_t00CE15486F1C87AAA1937F1407C4B99828312A5D* __this, ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE ___0_left, ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE ___1_right, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CompareFunc2_Invoke_mB3271E54FD35021D322759F49B849A1C081437B5_gshared_inline (CompareFunc2_tD6EC93CB1B91D9C4071995650B545B7872439E5C* __this, ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE* ___0_left, ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Allocate_m0549ACAFD4E59190F4729D5DA1C6F34ECC98B7B9_gshared (List_1_t69D8D3C7171DF1D421BEF5D2DE46252146F5D635* __this, int32_t ___0_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__4__ctor_m842B22AB193FA3790FD3E241499BA6AC9D037223_gshared (U3CGetEnumeratorU3Ed__4_t6160427C0B6E30E3ECAB15E821DDDD716768AF43* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisInfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02_m385BAA64494E45AAEF83EE34BF430EF798AF61F9_gshared (InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AllocateMore_m3F826679E2F012FB2FFCA11E8C9DAD402930DEF1_gshared (List_1_t69D8D3C7171DF1D421BEF5D2DE46252146F5D635* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mB78521A24BEF47E8291761514BD2D1F8FE5067F5_gshared (List_1_t69D8D3C7171DF1D421BEF5D2DE46252146F5D635* __this, InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m52745FC2D4B45E4025D733A4F0E784CE31013992_gshared (List_1_t69D8D3C7171DF1D421BEF5D2DE46252146F5D635* __this, InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02 ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t805E284DD3F2CCD17BEBA28DD909A248D9FD6B84* EqualityComparer_1_get_Default_m8256B84332556772E273C474F78F2445ACFCC32F_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Trim_m772700FB8D603A6F5FD2DC9482214A59004658A0_gshared (List_1_t69D8D3C7171DF1D421BEF5D2DE46252146F5D635* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CompareFunc_Invoke_m90C6E3D740EE9EED634EF9FB0BA59320CF09B38E_gshared_inline (CompareFunc_tA3EC9E99EAAA5F3D786D261BBF941729E7267E9D* __this, InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02 ___0_left, InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02 ___1_right, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CompareFunc2_Invoke_mDBB7953373F755CF981DD4C012B2E4B1525BFAD5_gshared_inline (CompareFunc2_t9ACC862BD3A9584B4536B0660202D64073158D5D* __this, InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02* ___0_left, InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t7DBAE97102605775DB56BD3370D361BBD64DE5D5* EqualityComparer_1_CreateComparer_mBE6149034713FA43B08655B274FF98AC7056B018_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* EqualityComparer_1_CreateComparer_m64D3D774E7DAF5FC0206DC26D9BA53BF70F1F93B_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tDC51C19B76F007D508C2E2D7CF5399F1E0C69443* EqualityComparer_1_CreateComparer_m09577CB02289F305FEF41DD7EECD6E07BD166DD4_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t3D60CA8A640E0FE68A2A24EF9B9A2F530ED94537* EqualityComparer_1_CreateComparer_m1CD860E480E2F8CCCB452AAD78D8BC4EE41DD014_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t951752AEC554D078FD5BA75860AB4914942AE117* EqualityComparer_1_CreateComparer_m68AA4AE2AFD9E233E70F81E79D056981E7FA6BF6_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t0D37AAA596A74C6F5F0AE68651E5B18034373802* EqualityComparer_1_CreateComparer_mB6696671F3260CA1E6785AC99C876753F438026E_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t23B947F4B4052C9CE965A4087C48BEDA5F132E11* EqualityComparer_1_CreateComparer_m8F32C25BAB52A896B94B95E595DC741349253918_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t922A0F6FFD989B570795F0DB5055CA31A625B1D6* EqualityComparer_1_CreateComparer_mDBDE6F519B25B227D805D9AA6E55424373D5C53F_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tA5B2D612E48D47CC5468C19147A56588873B414A* EqualityComparer_1_CreateComparer_m7A41D59673CDDA80A897C0B7F25F8EA628157BA9_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t805E284DD3F2CCD17BEBA28DD909A248D9FD6B84* EqualityComparer_1_CreateComparer_mCE3AD735F9A03370CED7DB7FD35AB0B0248EE423_gshared (const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F (int32_t ___0_argument, int32_t ___1_resource, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC (int32_t ___0_argument, const RuntimeMethod* method) ;
inline void List_1_AddEnumerable_mFF6EE2023BF05E98F1D1F1A70991BE2B4768AC4F (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method)
{
	((  void (*) (List_1_t002562281B6798CDCF0267381EF8CB414A349636*, RuntimeObject*, const RuntimeMethod*))List_1_AddEnumerable_mFF6EE2023BF05E98F1D1F1A70991BE2B4768AC4F_gshared)(__this, ___0_enumerable, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D (const RuntimeMethod* method) ;
inline Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C List_1_get_Item_m9DFC6D45BA1324C5192D2CD0BA4AD52F9B8C7944 (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C (*) (List_1_t002562281B6798CDCF0267381EF8CB414A349636*, int32_t, const RuntimeMethod*))List_1_get_Item_m9DFC6D45BA1324C5192D2CD0BA4AD52F9B8C7944_gshared)(__this, ___0_index, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisEntry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C_mA52C3FCF1F9707BDC64FFD748F50221C71AC2656 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisEntry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C_mA52C3FCF1F9707BDC64FFD748F50221C71AC2656_gshared)(___0_value, ___1_argName, method);
}
inline void List_1_set_Item_m1ACB2516EE440762DC87101F4907D2634EC3429D (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, int32_t ___0_index, Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t002562281B6798CDCF0267381EF8CB414A349636*, int32_t, Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C, const RuntimeMethod*))List_1_set_Item_m1ACB2516EE440762DC87101F4907D2634EC3429D_gshared)(__this, ___0_index, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910 (RuntimeObject* ___0_value, Type_t* ___1_targetType, const RuntimeMethod* method) ;
inline void List_1_AddWithResize_mA0C4AB6BF0EB80C858EAF3F8D18FCD76C7AAC396 (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t002562281B6798CDCF0267381EF8CB414A349636*, Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C, const RuntimeMethod*))List_1_AddWithResize_mA0C4AB6BF0EB80C858EAF3F8D18FCD76C7AAC396_gshared)(__this, ___0_item, method);
}
inline void List_1_EnsureCapacity_mE8546716F3785A64B22FB07BBFC7C9EBAF996899 (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, int32_t ___0_min, const RuntimeMethod* method)
{
	((  void (*) (List_1_t002562281B6798CDCF0267381EF8CB414A349636*, int32_t, const RuntimeMethod*))List_1_EnsureCapacity_mE8546716F3785A64B22FB07BBFC7C9EBAF996899_gshared)(__this, ___0_min, method);
}
inline void List_1_Add_m1E1C5CCE0C3064A654574163DC7C4CBBA7AC3DB8_inline (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t002562281B6798CDCF0267381EF8CB414A349636*, Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C, const RuntimeMethod*))List_1_Add_m1E1C5CCE0C3064A654574163DC7C4CBBA7AC3DB8_gshared_inline)(__this, ___0_item, method);
}
inline int32_t List_1_get_Count_mCE791BD866BF0868DB63FCECFF18CB64098637CB_inline (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t002562281B6798CDCF0267381EF8CB414A349636*, const RuntimeMethod*))List_1_get_Count_mCE791BD866BF0868DB63FCECFF18CB64098637CB_gshared_inline)(__this, method);
}
inline void List_1_InsertRange_mAE9AC1D1A87351B0F8A1D09A2125A482BBF0024E (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_t002562281B6798CDCF0267381EF8CB414A349636*, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_InsertRange_mAE9AC1D1A87351B0F8A1D09A2125A482BBF0024E_gshared)(__this, ___0_index, ___1_collection, method);
}
inline void ReadOnlyCollection_1__ctor_m65B57832B37BE3625A4B5918BDF10BAA874D55D6 (ReadOnlyCollection_1_tDE77ACEFEE5F0671F2EA334F16B7C608AF68B26B* __this, RuntimeObject* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyCollection_1_tDE77ACEFEE5F0671F2EA334F16B7C608AF68B26B*, RuntimeObject*, const RuntimeMethod*))ReadOnlyCollection_1__ctor_m65B57832B37BE3625A4B5918BDF10BAA874D55D6_gshared)(__this, ___0_list, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA (int32_t ___0_resource, const RuntimeMethod* method) ;
inline int32_t Array_BinarySearch_TisEntry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C_mEF0A21F508496A8D3974B7E397A1670166A056CA (EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* ___0_array, int32_t ___1_index, int32_t ___2_length, Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA*, int32_t, int32_t, Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C, RuntimeObject*, const RuntimeMethod*))Array_BinarySearch_TisEntry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C_mEF0A21F508496A8D3974B7E397A1670166A056CA_gshared)(___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
inline int32_t List_1_BinarySearch_m737B151A7CD23BDB979BB9C0E1D0C64F4E4F6D50 (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, int32_t ___0_index, int32_t ___1_count, Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C ___2_item, RuntimeObject* ___3_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t002562281B6798CDCF0267381EF8CB414A349636*, int32_t, int32_t, Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C, RuntimeObject*, const RuntimeMethod*))List_1_BinarySearch_m737B151A7CD23BDB979BB9C0E1D0C64F4E4F6D50_gshared)(__this, ___0_index, ___1_count, ___2_item, ___3_comparer, method);
}
inline int32_t List_1_IndexOf_m4FF31271D49A80AF3107DA1D8ED040B2D4FCFCB0 (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t002562281B6798CDCF0267381EF8CB414A349636*, Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C, const RuntimeMethod*))List_1_IndexOf_m4FF31271D49A80AF3107DA1D8ED040B2D4FCFCB0_gshared)(__this, ___0_item, method);
}
inline bool List_1_IsCompatibleObject_m35E7C62FFAEBC93EF01CED6E6128E48DCC7859A9 (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))List_1_IsCompatibleObject_m35E7C62FFAEBC93EF01CED6E6128E48DCC7859A9_gshared)(___0_value, method);
}
inline bool List_1_Contains_m020438854E725672CFFDA9E683DCD04A306AB87D (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t002562281B6798CDCF0267381EF8CB414A349636*, Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C, const RuntimeMethod*))List_1_Contains_m020438854E725672CFFDA9E683DCD04A306AB87D_gshared)(__this, ___0_item, method);
}
inline void List_1_CopyTo_mF9A8A603F19D1A5A9A30F990E961EBC24E5B9829 (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method)
{
	((  void (*) (List_1_t002562281B6798CDCF0267381EF8CB414A349636*, EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA*, int32_t, const RuntimeMethod*))List_1_CopyTo_mF9A8A603F19D1A5A9A30F990E961EBC24E5B9829_gshared)(__this, ___0_array, ___1_arrayIndex, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58 (const RuntimeMethod* method) ;
inline void List_1_set_Capacity_m9CE5BF53682527AFBFE76F0524A4E218C53E3605 (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t002562281B6798CDCF0267381EF8CB414A349636*, int32_t, const RuntimeMethod*))List_1_set_Capacity_m9CE5BF53682527AFBFE76F0524A4E218C53E3605_gshared)(__this, ___0_value, method);
}
inline int32_t List_1_FindIndex_m2CA7127F10A92482E9F489505C5F3B595DDC7268 (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, Predicate_1_tBB24C088B9F2C5E92B897C474555BEF1749C9053* ___0_match, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t002562281B6798CDCF0267381EF8CB414A349636*, Predicate_1_tBB24C088B9F2C5E92B897C474555BEF1749C9053*, const RuntimeMethod*))List_1_FindIndex_m2CA7127F10A92482E9F489505C5F3B595DDC7268_gshared)(__this, ___0_match, method);
}
inline bool Predicate_1_Invoke_m621503A57A4F629CFF8121C79F25B33B10F4743F_inline (Predicate_1_tBB24C088B9F2C5E92B897C474555BEF1749C9053* __this, Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_tBB24C088B9F2C5E92B897C474555BEF1749C9053*, Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C, const RuntimeMethod*))Predicate_1_Invoke_m621503A57A4F629CFF8121C79F25B33B10F4743F_gshared_inline)(__this, ___0_obj, method);
}
inline void List_1__ctor_mFD022FF55BF5009CC53918403986EBB838054177 (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t002562281B6798CDCF0267381EF8CB414A349636*, const RuntimeMethod*))List_1__ctor_mFD022FF55BF5009CC53918403986EBB838054177_gshared)(__this, method);
}
inline int32_t List_1_FindIndex_mA615C716B7D420A1DD1865796AA3165B31255FA6 (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_tBB24C088B9F2C5E92B897C474555BEF1749C9053* ___2_match, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t002562281B6798CDCF0267381EF8CB414A349636*, int32_t, int32_t, Predicate_1_tBB24C088B9F2C5E92B897C474555BEF1749C9053*, const RuntimeMethod*))List_1_FindIndex_mA615C716B7D420A1DD1865796AA3165B31255FA6_gshared)(__this, ___0_startIndex, ___1_count, ___2_match, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowStartIndexArgumentOutOfRange_ArgumentOutOfRange_Index_m94BADCC6D7EBBD12BE8323775FFB43AF01499B0F (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowCountArgumentOutOfRange_ArgumentOutOfRange_Count_m6C4A7F645BDD8EB62B50CB76E84416D94620DCC7 (const RuntimeMethod* method) ;
inline void Action_1_Invoke_m2C81B638625FF680761E584028BDE4A1FEFE0506_inline (Action_1_t19E6855A63C89A1C9C091E8D2BBBD2C5F47FF2D3* __this, Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t19E6855A63C89A1C9C091E8D2BBBD2C5F47FF2D3*, Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C, const RuntimeMethod*))Action_1_Invoke_m2C81B638625FF680761E584028BDE4A1FEFE0506_gshared_inline)(__this, ___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion_m5331E2E0EC0E36843D53F439C2529530595ACE9F (const RuntimeMethod* method) ;
inline void Enumerator__ctor_m1E647764FE042A8001FE6452077FCFA376D0826D (Enumerator_tB755A1A5DCF3195E182BC363D160AB6086A9E092* __this, List_1_t002562281B6798CDCF0267381EF8CB414A349636* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB755A1A5DCF3195E182BC363D160AB6086A9E092*, List_1_t002562281B6798CDCF0267381EF8CB414A349636*, const RuntimeMethod*))Enumerator__ctor_m1E647764FE042A8001FE6452077FCFA376D0826D_gshared)(__this, ___0_list, method);
}
inline void List_1__ctor_m738E22904782E10BA317E3A0EA2CF775B3E6F101 (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (List_1_t002562281B6798CDCF0267381EF8CB414A349636*, int32_t, const RuntimeMethod*))List_1__ctor_m738E22904782E10BA317E3A0EA2CF775B3E6F101_gshared)(__this, ___0_capacity, method);
}
inline int32_t Array_IndexOf_TisEntry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C_mD0DC10F570E048C4228D118A1254F51259A462AF (EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* ___0_array, Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA*, Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisEntry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C_mD0DC10F570E048C4228D118A1254F51259A462AF_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline void List_1_Insert_m9D38FA896A57E0C98D3DF65BA8473AEE0A3CD791 (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, int32_t ___0_index, Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C ___1_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t002562281B6798CDCF0267381EF8CB414A349636*, int32_t, Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C, const RuntimeMethod*))List_1_Insert_m9D38FA896A57E0C98D3DF65BA8473AEE0A3CD791_gshared)(__this, ___0_index, ___1_item, method);
}
inline void List_1_RemoveAt_m6B96153B37A55B46E855785C2112344AD5794A0A (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_t002562281B6798CDCF0267381EF8CB414A349636*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m6B96153B37A55B46E855785C2112344AD5794A0A_gshared)(__this, ___0_index, method);
}
inline bool List_1_Remove_m44E5984F69B2D9EA9EE1358190EF227882A111E8 (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t002562281B6798CDCF0267381EF8CB414A349636*, Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C, const RuntimeMethod*))List_1_Remove_m44E5984F69B2D9EA9EE1358190EF227882A111E8_gshared)(__this, ___0_item, method);
}
inline void List_1_Reverse_m950FFC94E78985169AD84E695AB8FF4BD165F8CF (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method)
{
	((  void (*) (List_1_t002562281B6798CDCF0267381EF8CB414A349636*, int32_t, int32_t, const RuntimeMethod*))List_1_Reverse_m950FFC94E78985169AD84E695AB8FF4BD165F8CF_gshared)(__this, ___0_index, ___1_count, method);
}
inline void Array_Reverse_TisEntry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C_mE7426BAAA3CEC8C3CCBB645FB21FE54557D52F9C (EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA*, int32_t, int32_t, const RuntimeMethod*))Array_Reverse_TisEntry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C_mE7426BAAA3CEC8C3CCBB645FB21FE54557D52F9C_gshared)(___0_array, ___1_index, ___2_length, method);
}
inline void List_1_Sort_mE5156B14C2C026AFBEECDD5333728FEC80438861 (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method)
{
	((  void (*) (List_1_t002562281B6798CDCF0267381EF8CB414A349636*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_Sort_mE5156B14C2C026AFBEECDD5333728FEC80438861_gshared)(__this, ___0_index, ___1_count, ___2_comparer, method);
}
inline void Array_Sort_TisEntry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C_m3AFE97CE8F84EC5375C72D5426BA8B33DE5426DB (EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))Array_Sort_TisEntry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C_m3AFE97CE8F84EC5375C72D5426BA8B33DE5426DB_gshared)(___0_array, ___1_index, ___2_length, ___3_comparer, method);
}
inline void ArraySortHelper_1_Sort_m1067939443E7234328453DF9DC2F4EFB3246C66F (EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_t3A8CE0813C27FE0CF267707DF0B6452ED64F3D1E* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA*, int32_t, int32_t, Comparison_1_t3A8CE0813C27FE0CF267707DF0B6452ED64F3D1E*, const RuntimeMethod*))ArraySortHelper_1_Sort_m1067939443E7234328453DF9DC2F4EFB3246C66F_gshared)(___0_keys, ___1_index, ___2_length, ___3_comparer, method);
}
inline void List_1_Allocate_m33B573463575A1E41D03FCA89207B42020113080 (List_1_tD9161C536DDAAEB60E4037F293E4A5441702ECFF* __this, int32_t ___0_newSize, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD9161C536DDAAEB60E4037F293E4A5441702ECFF*, int32_t, const RuntimeMethod*))List_1_Allocate_m33B573463575A1E41D03FCA89207B42020113080_gshared)(__this, ___0_newSize, method);
}
inline void U3CGetEnumeratorU3Ed__4__ctor_mEDB6CB096A0A5F6F6A00917882D1A5C6E8CDCAB2 (U3CGetEnumeratorU3Ed__4_tD234F65AF1F5B370331DBB27E1BAB5B653D02519* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method)
{
	((  void (*) (U3CGetEnumeratorU3Ed__4_tD234F65AF1F5B370331DBB27E1BAB5B653D02519*, int32_t, const RuntimeMethod*))U3CGetEnumeratorU3Ed__4__ctor_mEDB6CB096A0A5F6F6A00917882D1A5C6E8CDCAB2_gshared)(__this, ___0_U3CU3E1__state, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB (RuntimeArray* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
inline void Array_Resize_TisDatagram_tD135488AC89022CF443533716C9E0751E55B84CA_m6C988423102F3BF8A4CCB19A8847428508A74D05 (DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method)
{
	((  void (*) (DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3**, int32_t, const RuntimeMethod*))Array_Resize_TisDatagram_tD135488AC89022CF443533716C9E0751E55B84CA_m6C988423102F3BF8A4CCB19A8847428508A74D05_gshared)(___0_array, ___1_newSize, method);
}
inline void List_1_AllocateMore_m64237B3E6A965721B9EC4EB88DF4FDA10676BDB6 (List_1_tD9161C536DDAAEB60E4037F293E4A5441702ECFF* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD9161C536DDAAEB60E4037F293E4A5441702ECFF*, const RuntimeMethod*))List_1_AllocateMore_m64237B3E6A965721B9EC4EB88DF4FDA10676BDB6_gshared)(__this, method);
}
inline bool List_1_Contains_mA11774D84804C541AB834FE642A6A697E4BD76FC (List_1_tD9161C536DDAAEB60E4037F293E4A5441702ECFF* __this, Datagram_tD135488AC89022CF443533716C9E0751E55B84CA ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tD9161C536DDAAEB60E4037F293E4A5441702ECFF*, Datagram_tD135488AC89022CF443533716C9E0751E55B84CA, const RuntimeMethod*))List_1_Contains_mA11774D84804C541AB834FE642A6A697E4BD76FC_gshared)(__this, ___0_item, method);
}
inline void List_1_Add_mDC097FCD15D3606D396A5BD528CA83C806259F14 (List_1_tD9161C536DDAAEB60E4037F293E4A5441702ECFF* __this, Datagram_tD135488AC89022CF443533716C9E0751E55B84CA ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD9161C536DDAAEB60E4037F293E4A5441702ECFF*, Datagram_tD135488AC89022CF443533716C9E0751E55B84CA, const RuntimeMethod*))List_1_Add_mDC097FCD15D3606D396A5BD528CA83C806259F14_gshared)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
inline EqualityComparer_1_t7DBAE97102605775DB56BD3370D361BBD64DE5D5* EqualityComparer_1_get_Default_mADDE59D704337E529616736474432A412BF9946C_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t7DBAE97102605775DB56BD3370D361BBD64DE5D5* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mADDE59D704337E529616736474432A412BF9946C_gshared_inline)(method);
}
inline void List_1_Trim_m458E1F3AB35B95C9C3C9E28470A0096CB12CAC1A (List_1_tD9161C536DDAAEB60E4037F293E4A5441702ECFF* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD9161C536DDAAEB60E4037F293E4A5441702ECFF*, const RuntimeMethod*))List_1_Trim_m458E1F3AB35B95C9C3C9E28470A0096CB12CAC1A_gshared)(__this, method);
}
inline int32_t CompareFunc_Invoke_m1364B63389088E237069575A65370C42D24D6050_inline (CompareFunc_t206BA89222C56EFDFEE5F338F89010A899541F98* __this, Datagram_tD135488AC89022CF443533716C9E0751E55B84CA ___0_left, Datagram_tD135488AC89022CF443533716C9E0751E55B84CA ___1_right, const RuntimeMethod* method)
{
	return ((  int32_t (*) (CompareFunc_t206BA89222C56EFDFEE5F338F89010A899541F98*, Datagram_tD135488AC89022CF443533716C9E0751E55B84CA, Datagram_tD135488AC89022CF443533716C9E0751E55B84CA, const RuntimeMethod*))CompareFunc_Invoke_m1364B63389088E237069575A65370C42D24D6050_gshared_inline)(__this, ___0_left, ___1_right, method);
}
inline int32_t CompareFunc2_Invoke_m19F8BA2B4D040F7E75D631C269C7CA4E4576E13D_inline (CompareFunc2_t98BAE01C5CA178163530C2F03590C69F6FE332C4* __this, Datagram_tD135488AC89022CF443533716C9E0751E55B84CA* ___0_left, Datagram_tD135488AC89022CF443533716C9E0751E55B84CA* ___1_right, const RuntimeMethod* method)
{
	return ((  int32_t (*) (CompareFunc2_t98BAE01C5CA178163530C2F03590C69F6FE332C4*, Datagram_tD135488AC89022CF443533716C9E0751E55B84CA*, Datagram_tD135488AC89022CF443533716C9E0751E55B84CA*, const RuntimeMethod*))CompareFunc2_Invoke_m19F8BA2B4D040F7E75D631C269C7CA4E4576E13D_gshared_inline)(__this, ___0_left, ___1_right, method);
}
inline void List_1_Allocate_m308FFC6C728F24EC770894A3570F8232E84A036F (List_1_t459EC7969587CD113F95D6E4B78FC6FC1B6DCB87* __this, int32_t ___0_newSize, const RuntimeMethod* method)
{
	((  void (*) (List_1_t459EC7969587CD113F95D6E4B78FC6FC1B6DCB87*, int32_t, const RuntimeMethod*))List_1_Allocate_m308FFC6C728F24EC770894A3570F8232E84A036F_gshared)(__this, ___0_newSize, method);
}
inline void U3CGetEnumeratorU3Ed__4__ctor_mC1B555174D49CB2C319EF7020E7E513B12E09244 (U3CGetEnumeratorU3Ed__4_t012650383A2904CA6611BBD4A26BDB24EC48C3F4* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method)
{
	((  void (*) (U3CGetEnumeratorU3Ed__4_t012650383A2904CA6611BBD4A26BDB24EC48C3F4*, int32_t, const RuntimeMethod*))U3CGetEnumeratorU3Ed__4__ctor_mC1B555174D49CB2C319EF7020E7E513B12E09244_gshared)(__this, ___0_U3CU3E1__state, method);
}
inline void Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6BAA7BD6F22421B894347B1476C37052FAC6C916 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method)
{
	((  void (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C**, int32_t, const RuntimeMethod*))Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6BAA7BD6F22421B894347B1476C37052FAC6C916_gshared)(___0_array, ___1_newSize, method);
}
inline void List_1_AllocateMore_mB3387E0C0D22F845A930DD18C41105805E83464A (List_1_t459EC7969587CD113F95D6E4B78FC6FC1B6DCB87* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t459EC7969587CD113F95D6E4B78FC6FC1B6DCB87*, const RuntimeMethod*))List_1_AllocateMore_mB3387E0C0D22F845A930DD18C41105805E83464A_gshared)(__this, method);
}
inline bool List_1_Contains_mF2BB5BF456E07C864A2B65ECFD98DA62467EA633 (List_1_t459EC7969587CD113F95D6E4B78FC6FC1B6DCB87* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t459EC7969587CD113F95D6E4B78FC6FC1B6DCB87*, int32_t, const RuntimeMethod*))List_1_Contains_mF2BB5BF456E07C864A2B65ECFD98DA62467EA633_gshared)(__this, ___0_item, method);
}
inline void List_1_Add_m32FB6144EEACF837838D11E9A805DA6FF5E3B027 (List_1_t459EC7969587CD113F95D6E4B78FC6FC1B6DCB87* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t459EC7969587CD113F95D6E4B78FC6FC1B6DCB87*, int32_t, const RuntimeMethod*))List_1_Add_m32FB6144EEACF837838D11E9A805DA6FF5E3B027_gshared)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_Equals_m089564150E8AF7C63B419427E2E57E3420659B1B (int32_t* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
inline EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_gshared_inline)(method);
}
inline void List_1_Trim_mE4BA2A6929F26C01639037E86BB0889108EFAEB1 (List_1_t459EC7969587CD113F95D6E4B78FC6FC1B6DCB87* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t459EC7969587CD113F95D6E4B78FC6FC1B6DCB87*, const RuntimeMethod*))List_1_Trim_mE4BA2A6929F26C01639037E86BB0889108EFAEB1_gshared)(__this, method);
}
inline int32_t CompareFunc_Invoke_mF6F08E54B282667D5702560D05C662821E3F8620_inline (CompareFunc_tC2B7EDBB83306D2599B2D16F41737BC8D902A8D2* __this, int32_t ___0_left, int32_t ___1_right, const RuntimeMethod* method)
{
	return ((  int32_t (*) (CompareFunc_tC2B7EDBB83306D2599B2D16F41737BC8D902A8D2*, int32_t, int32_t, const RuntimeMethod*))CompareFunc_Invoke_mF6F08E54B282667D5702560D05C662821E3F8620_gshared_inline)(__this, ___0_left, ___1_right, method);
}
inline int32_t CompareFunc2_Invoke_m5A7EB4B6126FEA1B206EF583C39A60AE73972F54_inline (CompareFunc2_tC86C57C64D916CAEE553EA7A2A1985D43A64A750* __this, int32_t* ___0_left, int32_t* ___1_right, const RuntimeMethod* method)
{
	return ((  int32_t (*) (CompareFunc2_tC86C57C64D916CAEE553EA7A2A1985D43A64A750*, int32_t*, int32_t*, const RuntimeMethod*))CompareFunc2_Invoke_m5A7EB4B6126FEA1B206EF583C39A60AE73972F54_gshared_inline)(__this, ___0_left, ___1_right, method);
}
inline void List_1_Allocate_m784E4A5290BBB0CD771AAF3A21DB7D37A6A2F622 (List_1_t0C79793B7C069C25D3CADB102C04BED5DC6EE39C* __this, int32_t ___0_newSize, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0C79793B7C069C25D3CADB102C04BED5DC6EE39C*, int32_t, const RuntimeMethod*))List_1_Allocate_m784E4A5290BBB0CD771AAF3A21DB7D37A6A2F622_gshared)(__this, ___0_newSize, method);
}
inline void U3CGetEnumeratorU3Ed__4__ctor_m1A624DA1F37A823B0C2BC2BE956EE7F488EA16E5 (U3CGetEnumeratorU3Ed__4_t69F034BBC79CBE2FCAEE74AF85F4A054156D46A9* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method)
{
	((  void (*) (U3CGetEnumeratorU3Ed__4_t69F034BBC79CBE2FCAEE74AF85F4A054156D46A9*, int32_t, const RuntimeMethod*))U3CGetEnumeratorU3Ed__4__ctor_m1A624DA1F37A823B0C2BC2BE956EE7F488EA16E5_gshared)(__this, ___0_U3CU3E1__state, method);
}
inline void Array_Resize_TisRuntimeObject_mE8D92C287251BAF8256D85E5829F749359EC334E (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method)
{
	((  void (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918**, int32_t, const RuntimeMethod*))Array_Resize_TisRuntimeObject_mE8D92C287251BAF8256D85E5829F749359EC334E_gshared)(___0_array, ___1_newSize, method);
}
inline void List_1_AllocateMore_mFCCAC1D02EAE9A3B6CB76147D2A409A5657A2EBC (List_1_t0C79793B7C069C25D3CADB102C04BED5DC6EE39C* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0C79793B7C069C25D3CADB102C04BED5DC6EE39C*, const RuntimeMethod*))List_1_AllocateMore_mFCCAC1D02EAE9A3B6CB76147D2A409A5657A2EBC_gshared)(__this, method);
}
inline bool List_1_Contains_mD2E826D42B39C272581CDE209756EADE7BDC4F9C (List_1_t0C79793B7C069C25D3CADB102C04BED5DC6EE39C* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t0C79793B7C069C25D3CADB102C04BED5DC6EE39C*, RuntimeObject*, const RuntimeMethod*))List_1_Contains_mD2E826D42B39C272581CDE209756EADE7BDC4F9C_gshared)(__this, ___0_item, method);
}
inline void List_1_Add_mEB5174B6486E1FA27E836AF1D0800D6CC2B26DFB (List_1_t0C79793B7C069C25D3CADB102C04BED5DC6EE39C* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0C79793B7C069C25D3CADB102C04BED5DC6EE39C*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEB5174B6486E1FA27E836AF1D0800D6CC2B26DFB_gshared)(__this, ___0_item, method);
}
inline EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_gshared_inline)(method);
}
inline void List_1_Trim_mCE45128341A6A117EA26785A430C636963492D61 (List_1_t0C79793B7C069C25D3CADB102C04BED5DC6EE39C* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0C79793B7C069C25D3CADB102C04BED5DC6EE39C*, const RuntimeMethod*))List_1_Trim_mCE45128341A6A117EA26785A430C636963492D61_gshared)(__this, method);
}
inline int32_t CompareFunc_Invoke_mDF62819E35773C1822470C9685C6D29ACDD5D375_inline (CompareFunc_t4B02430CDF25A791E686F7C6A3039E596D79E8A2* __this, RuntimeObject* ___0_left, RuntimeObject* ___1_right, const RuntimeMethod* method)
{
	return ((  int32_t (*) (CompareFunc_t4B02430CDF25A791E686F7C6A3039E596D79E8A2*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))CompareFunc_Invoke_mDF62819E35773C1822470C9685C6D29ACDD5D375_gshared_inline)(__this, ___0_left, ___1_right, method);
}
inline int32_t CompareFunc2_Invoke_m2A17CFF0028FC57CAD9E6D2820F451F830B5FD02_inline (CompareFunc2_t792F53EE6953C55FF25C3F5DEEDFBE2786EE35DD* __this, RuntimeObject** ___0_left, RuntimeObject** ___1_right, const RuntimeMethod* method)
{
	return ((  int32_t (*) (CompareFunc2_t792F53EE6953C55FF25C3F5DEEDFBE2786EE35DD*, RuntimeObject**, RuntimeObject**, const RuntimeMethod*))CompareFunc2_Invoke_m2A17CFF0028FC57CAD9E6D2820F451F830B5FD02_gshared_inline)(__this, ___0_left, ___1_right, method);
}
inline void List_1_Allocate_mD4B9F9051E25E6CE874CECEA5CCE9C653280E40E (List_1_t9FEF61DBA53647F44F11939A07BD5540CCF18BD2* __this, int32_t ___0_newSize, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9FEF61DBA53647F44F11939A07BD5540CCF18BD2*, int32_t, const RuntimeMethod*))List_1_Allocate_mD4B9F9051E25E6CE874CECEA5CCE9C653280E40E_gshared)(__this, ___0_newSize, method);
}
inline void U3CGetEnumeratorU3Ed__4__ctor_m80B4177F87193EB9BCC682587A52F6CF745FE3E7 (U3CGetEnumeratorU3Ed__4_t7C1790FE9749D05D292F0267D4F5871D2D3474E6* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method)
{
	((  void (*) (U3CGetEnumeratorU3Ed__4_t7C1790FE9749D05D292F0267D4F5871D2D3474E6*, int32_t, const RuntimeMethod*))U3CGetEnumeratorU3Ed__4__ctor_m80B4177F87193EB9BCC682587A52F6CF745FE3E7_gshared)(__this, ___0_U3CU3E1__state, method);
}
inline void Array_Resize_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m5125BA7C6999C4FE1290349D3F1F691A6E00A039 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method)
{
	((  void (*) (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA**, int32_t, const RuntimeMethod*))Array_Resize_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m5125BA7C6999C4FE1290349D3F1F691A6E00A039_gshared)(___0_array, ___1_newSize, method);
}
inline void List_1_AllocateMore_m1F949557AEF0CD41DE7F787A4E0AA82802D7EC57 (List_1_t9FEF61DBA53647F44F11939A07BD5540CCF18BD2* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9FEF61DBA53647F44F11939A07BD5540CCF18BD2*, const RuntimeMethod*))List_1_AllocateMore_m1F949557AEF0CD41DE7F787A4E0AA82802D7EC57_gshared)(__this, method);
}
inline bool List_1_Contains_m025EFD3B747850EA7FF884F4489C0A5326CD821A (List_1_t9FEF61DBA53647F44F11939A07BD5540CCF18BD2* __this, uint32_t ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t9FEF61DBA53647F44F11939A07BD5540CCF18BD2*, uint32_t, const RuntimeMethod*))List_1_Contains_m025EFD3B747850EA7FF884F4489C0A5326CD821A_gshared)(__this, ___0_item, method);
}
inline void List_1_Add_mE42B8E59B1213BF695BED076A18929659C0D3932 (List_1_t9FEF61DBA53647F44F11939A07BD5540CCF18BD2* __this, uint32_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9FEF61DBA53647F44F11939A07BD5540CCF18BD2*, uint32_t, const RuntimeMethod*))List_1_Add_mE42B8E59B1213BF695BED076A18929659C0D3932_gshared)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UInt32_Equals_mC516812849D8243A72D34D830D840A1F1E32795E (uint32_t* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
inline EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* EqualityComparer_1_get_Default_mF554877B669658FD6449F84AE369214855D0BC40_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mF554877B669658FD6449F84AE369214855D0BC40_gshared_inline)(method);
}
inline void List_1_Trim_m1D0D42CC82B5335B1A44E099E8D5198767301283 (List_1_t9FEF61DBA53647F44F11939A07BD5540CCF18BD2* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9FEF61DBA53647F44F11939A07BD5540CCF18BD2*, const RuntimeMethod*))List_1_Trim_m1D0D42CC82B5335B1A44E099E8D5198767301283_gshared)(__this, method);
}
inline int32_t CompareFunc_Invoke_mA91B35EEC7ED42BB081904FCAEA385DCA4CC6AAA_inline (CompareFunc_t2AD4AA166CD7D5B8FBF45B10A9D1C4635808B9D3* __this, uint32_t ___0_left, uint32_t ___1_right, const RuntimeMethod* method)
{
	return ((  int32_t (*) (CompareFunc_t2AD4AA166CD7D5B8FBF45B10A9D1C4635808B9D3*, uint32_t, uint32_t, const RuntimeMethod*))CompareFunc_Invoke_mA91B35EEC7ED42BB081904FCAEA385DCA4CC6AAA_gshared_inline)(__this, ___0_left, ___1_right, method);
}
inline int32_t CompareFunc2_Invoke_m4DE6E51E303B1C96ED4C6688DC89954B15B8788F_inline (CompareFunc2_tB4C43ED6E3359E93460DBA47880EF512D1FB295D* __this, uint32_t* ___0_left, uint32_t* ___1_right, const RuntimeMethod* method)
{
	return ((  int32_t (*) (CompareFunc2_tB4C43ED6E3359E93460DBA47880EF512D1FB295D*, uint32_t*, uint32_t*, const RuntimeMethod*))CompareFunc2_Invoke_m4DE6E51E303B1C96ED4C6688DC89954B15B8788F_gshared_inline)(__this, ___0_left, ___1_right, method);
}
inline void List_1_Allocate_mBF248EC0FF7D2307E8F2FF9EA304C594A2DD8711 (List_1_tC1221FE86255A01D454BF5FF13AD6DF15E9BE844* __this, int32_t ___0_newSize, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC1221FE86255A01D454BF5FF13AD6DF15E9BE844*, int32_t, const RuntimeMethod*))List_1_Allocate_mBF248EC0FF7D2307E8F2FF9EA304C594A2DD8711_gshared)(__this, ___0_newSize, method);
}
inline void U3CGetEnumeratorU3Ed__4__ctor_m4D80BD542C3AA2D801C88746A32B1264A7C25ADB (U3CGetEnumeratorU3Ed__4_t20C1073B540600D5D759EE56C23B9AB48D6D4C2C* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method)
{
	((  void (*) (U3CGetEnumeratorU3Ed__4_t20C1073B540600D5D759EE56C23B9AB48D6D4C2C*, int32_t, const RuntimeMethod*))U3CGetEnumeratorU3Ed__4__ctor_m4D80BD542C3AA2D801C88746A32B1264A7C25ADB_gshared)(__this, ___0_U3CU3E1__state, method);
}
inline void Array_Resize_TisCreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C_m0B8159A222F5A4EFE4DD4FFC145A2AD9BA6C6146 (CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method)
{
	((  void (*) (CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B**, int32_t, const RuntimeMethod*))Array_Resize_TisCreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C_m0B8159A222F5A4EFE4DD4FFC145A2AD9BA6C6146_gshared)(___0_array, ___1_newSize, method);
}
inline void List_1_AllocateMore_mD9FC03D27B73E82BE46B2522B08E633D508BBF78 (List_1_tC1221FE86255A01D454BF5FF13AD6DF15E9BE844* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC1221FE86255A01D454BF5FF13AD6DF15E9BE844*, const RuntimeMethod*))List_1_AllocateMore_mD9FC03D27B73E82BE46B2522B08E633D508BBF78_gshared)(__this, method);
}
inline bool List_1_Contains_mE797E9A0B413323AAB6CD172BB21183FFBDEED98 (List_1_tC1221FE86255A01D454BF5FF13AD6DF15E9BE844* __this, CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tC1221FE86255A01D454BF5FF13AD6DF15E9BE844*, CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C, const RuntimeMethod*))List_1_Contains_mE797E9A0B413323AAB6CD172BB21183FFBDEED98_gshared)(__this, ___0_item, method);
}
inline void List_1_Add_mBDD4B7B7C2A4491C2560E0539F7967EE451016D0 (List_1_tC1221FE86255A01D454BF5FF13AD6DF15E9BE844* __this, CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC1221FE86255A01D454BF5FF13AD6DF15E9BE844*, CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C, const RuntimeMethod*))List_1_Add_mBDD4B7B7C2A4491C2560E0539F7967EE451016D0_gshared)(__this, ___0_item, method);
}
inline EqualityComparer_1_tDC51C19B76F007D508C2E2D7CF5399F1E0C69443* EqualityComparer_1_get_Default_m4999C45387F95BE585FECA004680BAF261846DBB_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tDC51C19B76F007D508C2E2D7CF5399F1E0C69443* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m4999C45387F95BE585FECA004680BAF261846DBB_gshared_inline)(method);
}
inline void List_1_Trim_m69318A97501FA8A045346C833CCFCCF9239476B5 (List_1_tC1221FE86255A01D454BF5FF13AD6DF15E9BE844* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC1221FE86255A01D454BF5FF13AD6DF15E9BE844*, const RuntimeMethod*))List_1_Trim_m69318A97501FA8A045346C833CCFCCF9239476B5_gshared)(__this, method);
}
inline int32_t CompareFunc_Invoke_mC718903902546A9ED1B1B2E06AD20B88CE645202_inline (CompareFunc_t76EB0BBD466A89D78E7675FEACB717FB074BB89B* __this, CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C ___0_left, CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C ___1_right, const RuntimeMethod* method)
{
	return ((  int32_t (*) (CompareFunc_t76EB0BBD466A89D78E7675FEACB717FB074BB89B*, CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C, CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C, const RuntimeMethod*))CompareFunc_Invoke_mC718903902546A9ED1B1B2E06AD20B88CE645202_gshared_inline)(__this, ___0_left, ___1_right, method);
}
inline int32_t CompareFunc2_Invoke_m2F9F3C6F9A9719E132581007CC78C9134F4A2CF4_inline (CompareFunc2_tFEA3BB11B8D5CFD15B1B8038FF0C8C89230C2036* __this, CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C* ___0_left, CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C* ___1_right, const RuntimeMethod* method)
{
	return ((  int32_t (*) (CompareFunc2_tFEA3BB11B8D5CFD15B1B8038FF0C8C89230C2036*, CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C*, CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C*, const RuntimeMethod*))CompareFunc2_Invoke_m2F9F3C6F9A9719E132581007CC78C9134F4A2CF4_gshared_inline)(__this, ___0_left, ___1_right, method);
}
inline void List_1_Allocate_m16D9359DB30B3324FA1385A0155A56E8545D30A8 (List_1_tCACD479E29A169CA90AF0CCF99C641EF014769B0* __this, int32_t ___0_newSize, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCACD479E29A169CA90AF0CCF99C641EF014769B0*, int32_t, const RuntimeMethod*))List_1_Allocate_m16D9359DB30B3324FA1385A0155A56E8545D30A8_gshared)(__this, ___0_newSize, method);
}
inline void U3CGetEnumeratorU3Ed__4__ctor_mB7211E35FE0CF7AB94C614E5DC5DB9117D8CF7BF (U3CGetEnumeratorU3Ed__4_tF71A6602AE028134828814954F1617DD48FF3399* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method)
{
	((  void (*) (U3CGetEnumeratorU3Ed__4_tF71A6602AE028134828814954F1617DD48FF3399*, int32_t, const RuntimeMethod*))U3CGetEnumeratorU3Ed__4__ctor_mB7211E35FE0CF7AB94C614E5DC5DB9117D8CF7BF_gshared)(__this, ___0_U3CU3E1__state, method);
}
inline void Array_Resize_TisForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159_m06A92FA5D1D135582B2327E60993DABCF96C958D (ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method)
{
	((  void (*) (ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904**, int32_t, const RuntimeMethod*))Array_Resize_TisForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159_m06A92FA5D1D135582B2327E60993DABCF96C958D_gshared)(___0_array, ___1_newSize, method);
}
inline void List_1_AllocateMore_mF0BB57DAA87CBD00F589B1203D5F6A67FCF985FF (List_1_tCACD479E29A169CA90AF0CCF99C641EF014769B0* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCACD479E29A169CA90AF0CCF99C641EF014769B0*, const RuntimeMethod*))List_1_AllocateMore_mF0BB57DAA87CBD00F589B1203D5F6A67FCF985FF_gshared)(__this, method);
}
inline bool List_1_Contains_mA283750C6BB8790634CE95E7283BE3AF4E3E8DDF (List_1_tCACD479E29A169CA90AF0CCF99C641EF014769B0* __this, ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159 ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tCACD479E29A169CA90AF0CCF99C641EF014769B0*, ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159, const RuntimeMethod*))List_1_Contains_mA283750C6BB8790634CE95E7283BE3AF4E3E8DDF_gshared)(__this, ___0_item, method);
}
inline void List_1_Add_m0CF78C8800728BBD2B22BB78CE1387FE65A36E89 (List_1_tCACD479E29A169CA90AF0CCF99C641EF014769B0* __this, ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCACD479E29A169CA90AF0CCF99C641EF014769B0*, ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159, const RuntimeMethod*))List_1_Add_m0CF78C8800728BBD2B22BB78CE1387FE65A36E89_gshared)(__this, ___0_item, method);
}
inline EqualityComparer_1_t3D60CA8A640E0FE68A2A24EF9B9A2F530ED94537* EqualityComparer_1_get_Default_mBDC223572228738F1141303BE04A30F3F9C80E00_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t3D60CA8A640E0FE68A2A24EF9B9A2F530ED94537* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mBDC223572228738F1141303BE04A30F3F9C80E00_gshared_inline)(method);
}
inline void List_1_Trim_m5DEEE863BB3BBFFBD9952AB0AC6086A2A69A82EB (List_1_tCACD479E29A169CA90AF0CCF99C641EF014769B0* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCACD479E29A169CA90AF0CCF99C641EF014769B0*, const RuntimeMethod*))List_1_Trim_m5DEEE863BB3BBFFBD9952AB0AC6086A2A69A82EB_gshared)(__this, method);
}
inline int32_t CompareFunc_Invoke_m11FC03C47C5266EE2CF5A04B4B4CCB88FE426CBD_inline (CompareFunc_t206ED15B484D41AE9042019C27F884344B255783* __this, ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159 ___0_left, ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159 ___1_right, const RuntimeMethod* method)
{
	return ((  int32_t (*) (CompareFunc_t206ED15B484D41AE9042019C27F884344B255783*, ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159, ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159, const RuntimeMethod*))CompareFunc_Invoke_m11FC03C47C5266EE2CF5A04B4B4CCB88FE426CBD_gshared_inline)(__this, ___0_left, ___1_right, method);
}
inline int32_t CompareFunc2_Invoke_m3DA56544470A1EBE123C6801AC1CB3CC43B46105_inline (CompareFunc2_tC9F227180BCA310DAF62751E1DEA1A7C4CCDEDEC* __this, ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159* ___0_left, ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159* ___1_right, const RuntimeMethod* method)
{
	return ((  int32_t (*) (CompareFunc2_tC9F227180BCA310DAF62751E1DEA1A7C4CCDEDEC*, ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159*, ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159*, const RuntimeMethod*))CompareFunc2_Invoke_m3DA56544470A1EBE123C6801AC1CB3CC43B46105_gshared_inline)(__this, ___0_left, ___1_right, method);
}
inline void List_1_Allocate_mC7C60762AE8065316551678BC01CB2537CE3B9FA (List_1_tB7868517D05AB4986301D3A0FACCA168071E490B* __this, int32_t ___0_newSize, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB7868517D05AB4986301D3A0FACCA168071E490B*, int32_t, const RuntimeMethod*))List_1_Allocate_mC7C60762AE8065316551678BC01CB2537CE3B9FA_gshared)(__this, ___0_newSize, method);
}
inline void U3CGetEnumeratorU3Ed__4__ctor_m6F20A01C8F2765B70F96E68F7DD1955C639C629B (U3CGetEnumeratorU3Ed__4_t2B7FF639B0D0A5F72C476ACC9FF0A11A170EA1A9* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method)
{
	((  void (*) (U3CGetEnumeratorU3Ed__4_t2B7FF639B0D0A5F72C476ACC9FF0A11A170EA1A9*, int32_t, const RuntimeMethod*))U3CGetEnumeratorU3Ed__4__ctor_m6F20A01C8F2765B70F96E68F7DD1955C639C629B_gshared)(__this, ___0_U3CU3E1__state, method);
}
inline void Array_Resize_TisInfo_t44CC3C8A15C01ED6865494E4962A609C4FDD5606_m55EC5CE62409C8B19BA5A84C0EDD95133C37682F (InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method)
{
	((  void (*) (InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549**, int32_t, const RuntimeMethod*))Array_Resize_TisInfo_t44CC3C8A15C01ED6865494E4962A609C4FDD5606_m55EC5CE62409C8B19BA5A84C0EDD95133C37682F_gshared)(___0_array, ___1_newSize, method);
}
inline void List_1_AllocateMore_m36A3C3BEB49F64E3ADCB91F87C2D3B23DEF947E1 (List_1_tB7868517D05AB4986301D3A0FACCA168071E490B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB7868517D05AB4986301D3A0FACCA168071E490B*, const RuntimeMethod*))List_1_AllocateMore_m36A3C3BEB49F64E3ADCB91F87C2D3B23DEF947E1_gshared)(__this, method);
}
inline bool List_1_Contains_mA0DC7C93AEB368776DC094FA4089CBFC1B482451 (List_1_tB7868517D05AB4986301D3A0FACCA168071E490B* __this, Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606 ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tB7868517D05AB4986301D3A0FACCA168071E490B*, Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606, const RuntimeMethod*))List_1_Contains_mA0DC7C93AEB368776DC094FA4089CBFC1B482451_gshared)(__this, ___0_item, method);
}
inline void List_1_Add_mE0836260320B430E8C8C71ACFC47C2F9DE92A99B (List_1_tB7868517D05AB4986301D3A0FACCA168071E490B* __this, Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB7868517D05AB4986301D3A0FACCA168071E490B*, Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606, const RuntimeMethod*))List_1_Add_mE0836260320B430E8C8C71ACFC47C2F9DE92A99B_gshared)(__this, ___0_item, method);
}
inline EqualityComparer_1_t951752AEC554D078FD5BA75860AB4914942AE117* EqualityComparer_1_get_Default_m04CF7FE794A864F889D6D885B53D7CB2727A3DE9_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t951752AEC554D078FD5BA75860AB4914942AE117* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m04CF7FE794A864F889D6D885B53D7CB2727A3DE9_gshared_inline)(method);
}
inline void List_1_Trim_mAE66B47854ECADE387D4B533BFC897DD7CEF810D (List_1_tB7868517D05AB4986301D3A0FACCA168071E490B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB7868517D05AB4986301D3A0FACCA168071E490B*, const RuntimeMethod*))List_1_Trim_mAE66B47854ECADE387D4B533BFC897DD7CEF810D_gshared)(__this, method);
}
inline int32_t CompareFunc_Invoke_mCD0B31AC9FE8243977C5B4C5E66E1A624F79E0CC_inline (CompareFunc_t58FEF253929D82FB283FED18BD6AD3795FDC733E* __this, Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606 ___0_left, Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606 ___1_right, const RuntimeMethod* method)
{
	return ((  int32_t (*) (CompareFunc_t58FEF253929D82FB283FED18BD6AD3795FDC733E*, Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606, Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606, const RuntimeMethod*))CompareFunc_Invoke_mCD0B31AC9FE8243977C5B4C5E66E1A624F79E0CC_gshared_inline)(__this, ___0_left, ___1_right, method);
}
inline int32_t CompareFunc2_Invoke_m35615375F9CF98877A316454F5BB666A97EEFEFA_inline (CompareFunc2_tD8F814976ED84C2D515E08B134C6B7762BB4A237* __this, Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606* ___0_left, Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606* ___1_right, const RuntimeMethod* method)
{
	return ((  int32_t (*) (CompareFunc2_tD8F814976ED84C2D515E08B134C6B7762BB4A237*, Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606*, Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606*, const RuntimeMethod*))CompareFunc2_Invoke_m35615375F9CF98877A316454F5BB666A97EEFEFA_gshared_inline)(__this, ___0_left, ___1_right, method);
}
inline void List_1_Allocate_mC752728C4D6491F5F3E2542FE776144FDFBA2E14 (List_1_t4B696A51F9450B2C12B51B8CBC5C8CDAB020295D* __this, int32_t ___0_newSize, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4B696A51F9450B2C12B51B8CBC5C8CDAB020295D*, int32_t, const RuntimeMethod*))List_1_Allocate_mC752728C4D6491F5F3E2542FE776144FDFBA2E14_gshared)(__this, ___0_newSize, method);
}
inline void U3CGetEnumeratorU3Ed__4__ctor_m59A07599DB71DA3C12E0725CEEA07ED4B75C0F8D (U3CGetEnumeratorU3Ed__4_t7E801F836956DD1D087F71216988F2DA333E6827* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method)
{
	((  void (*) (U3CGetEnumeratorU3Ed__4_t7E801F836956DD1D087F71216988F2DA333E6827*, int32_t, const RuntimeMethod*))U3CGetEnumeratorU3Ed__4__ctor_m59A07599DB71DA3C12E0725CEEA07ED4B75C0F8D_gshared)(__this, ___0_U3CU3E1__state, method);
}
inline void Array_Resize_TisRFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF_m8919158CF002E7FC0B30C4E6663F6E970474E0C5 (RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method)
{
	((  void (*) (RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D**, int32_t, const RuntimeMethod*))Array_Resize_TisRFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF_m8919158CF002E7FC0B30C4E6663F6E970474E0C5_gshared)(___0_array, ___1_newSize, method);
}
inline void List_1_AllocateMore_m0F81B0BE3F946BD2A07DC8F2128B24D1A3591421 (List_1_t4B696A51F9450B2C12B51B8CBC5C8CDAB020295D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4B696A51F9450B2C12B51B8CBC5C8CDAB020295D*, const RuntimeMethod*))List_1_AllocateMore_m0F81B0BE3F946BD2A07DC8F2128B24D1A3591421_gshared)(__this, method);
}
inline bool List_1_Contains_mCAB836A92F0DFACCD68ADEA54E7C44049E4C19C9 (List_1_t4B696A51F9450B2C12B51B8CBC5C8CDAB020295D* __this, RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t4B696A51F9450B2C12B51B8CBC5C8CDAB020295D*, RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF, const RuntimeMethod*))List_1_Contains_mCAB836A92F0DFACCD68ADEA54E7C44049E4C19C9_gshared)(__this, ___0_item, method);
}
inline void List_1_Add_m1ED5D82E540B025C68AE7C547AFB672D20360151 (List_1_t4B696A51F9450B2C12B51B8CBC5C8CDAB020295D* __this, RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4B696A51F9450B2C12B51B8CBC5C8CDAB020295D*, RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF, const RuntimeMethod*))List_1_Add_m1ED5D82E540B025C68AE7C547AFB672D20360151_gshared)(__this, ___0_item, method);
}
inline EqualityComparer_1_t0D37AAA596A74C6F5F0AE68651E5B18034373802* EqualityComparer_1_get_Default_mD91779D28B1869320CE14644046CC4EB8E336E30_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t0D37AAA596A74C6F5F0AE68651E5B18034373802* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mD91779D28B1869320CE14644046CC4EB8E336E30_gshared_inline)(method);
}
inline void List_1_Trim_m7CC0999862EAC154956E8ED69698341FAD3445AE (List_1_t4B696A51F9450B2C12B51B8CBC5C8CDAB020295D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4B696A51F9450B2C12B51B8CBC5C8CDAB020295D*, const RuntimeMethod*))List_1_Trim_m7CC0999862EAC154956E8ED69698341FAD3445AE_gshared)(__this, method);
}
inline int32_t CompareFunc_Invoke_m4B54AEFD15A1C7354BFDBE32926D513CB5BF80B3_inline (CompareFunc_tCD85A87B3459047F80416071B78FAD3D1804BC87* __this, RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF ___0_left, RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF ___1_right, const RuntimeMethod* method)
{
	return ((  int32_t (*) (CompareFunc_tCD85A87B3459047F80416071B78FAD3D1804BC87*, RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF, RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF, const RuntimeMethod*))CompareFunc_Invoke_m4B54AEFD15A1C7354BFDBE32926D513CB5BF80B3_gshared_inline)(__this, ___0_left, ___1_right, method);
}
inline int32_t CompareFunc2_Invoke_m113D742BBB1DD0D33B713110079E744E2C52214D_inline (CompareFunc2_t45D9D5C19666400DD97BC848BE466970E20163EC* __this, RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF* ___0_left, RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF* ___1_right, const RuntimeMethod* method)
{
	return ((  int32_t (*) (CompareFunc2_t45D9D5C19666400DD97BC848BE466970E20163EC*, RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF*, RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF*, const RuntimeMethod*))CompareFunc2_Invoke_m113D742BBB1DD0D33B713110079E744E2C52214D_gshared_inline)(__this, ___0_left, ___1_right, method);
}
inline void List_1_Allocate_m28EA0AF146A9EEBF589648E7319C3698DADBE52F (List_1_t974883BC9B49D7E31745F06BA5876D5AC469B0A2* __this, int32_t ___0_newSize, const RuntimeMethod* method)
{
	((  void (*) (List_1_t974883BC9B49D7E31745F06BA5876D5AC469B0A2*, int32_t, const RuntimeMethod*))List_1_Allocate_m28EA0AF146A9EEBF589648E7319C3698DADBE52F_gshared)(__this, ___0_newSize, method);
}
inline void U3CGetEnumeratorU3Ed__4__ctor_m4C4C83A916A259AB84D1E9E7C644E78D1A7E777B (U3CGetEnumeratorU3Ed__4_t691D0073DA3A771C8663F0006D50EE29A2BBDD5F* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method)
{
	((  void (*) (U3CGetEnumeratorU3Ed__4_t691D0073DA3A771C8663F0006D50EE29A2BBDD5F*, int32_t, const RuntimeMethod*))U3CGetEnumeratorU3Ed__4__ctor_m4C4C83A916A259AB84D1E9E7C644E78D1A7E777B_gshared)(__this, ___0_U3CU3E1__state, method);
}
inline void Array_Resize_TisSerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114_m1668828752488C84CC99EFF24B692280DFD67C1C (SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method)
{
	((  void (*) (SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902**, int32_t, const RuntimeMethod*))Array_Resize_TisSerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114_m1668828752488C84CC99EFF24B692280DFD67C1C_gshared)(___0_array, ___1_newSize, method);
}
inline void List_1_AllocateMore_m6A2B61A482CE2AC518A9F76411F7B07DE1346FC6 (List_1_t974883BC9B49D7E31745F06BA5876D5AC469B0A2* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t974883BC9B49D7E31745F06BA5876D5AC469B0A2*, const RuntimeMethod*))List_1_AllocateMore_m6A2B61A482CE2AC518A9F76411F7B07DE1346FC6_gshared)(__this, method);
}
inline bool List_1_Contains_mA321E6C9D10C95BA201341DAE119EFEB1B821AD1 (List_1_t974883BC9B49D7E31745F06BA5876D5AC469B0A2* __this, SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114 ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t974883BC9B49D7E31745F06BA5876D5AC469B0A2*, SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114, const RuntimeMethod*))List_1_Contains_mA321E6C9D10C95BA201341DAE119EFEB1B821AD1_gshared)(__this, ___0_item, method);
}
inline void List_1_Add_mAD2C0D5B38AB741B0D530DC005CA3D03310184CA (List_1_t974883BC9B49D7E31745F06BA5876D5AC469B0A2* __this, SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t974883BC9B49D7E31745F06BA5876D5AC469B0A2*, SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114, const RuntimeMethod*))List_1_Add_mAD2C0D5B38AB741B0D530DC005CA3D03310184CA_gshared)(__this, ___0_item, method);
}
inline EqualityComparer_1_t23B947F4B4052C9CE965A4087C48BEDA5F132E11* EqualityComparer_1_get_Default_m1F6BF9F9EAD31481277A75781DDB8E4F05818D5E_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t23B947F4B4052C9CE965A4087C48BEDA5F132E11* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m1F6BF9F9EAD31481277A75781DDB8E4F05818D5E_gshared_inline)(method);
}
inline void List_1_Trim_mA25D0CBAF07512FC093F58B90580DAC3FE602735 (List_1_t974883BC9B49D7E31745F06BA5876D5AC469B0A2* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t974883BC9B49D7E31745F06BA5876D5AC469B0A2*, const RuntimeMethod*))List_1_Trim_mA25D0CBAF07512FC093F58B90580DAC3FE602735_gshared)(__this, method);
}
inline int32_t CompareFunc_Invoke_mC210317E3E1A1EA7DC945E081265A92D576AE458_inline (CompareFunc_t57BD15904CC04693A588AE2C9E2BCA414C67C19B* __this, SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114 ___0_left, SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114 ___1_right, const RuntimeMethod* method)
{
	return ((  int32_t (*) (CompareFunc_t57BD15904CC04693A588AE2C9E2BCA414C67C19B*, SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114, SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114, const RuntimeMethod*))CompareFunc_Invoke_mC210317E3E1A1EA7DC945E081265A92D576AE458_gshared_inline)(__this, ___0_left, ___1_right, method);
}
inline int32_t CompareFunc2_Invoke_mA5FD0F55AF25F59CBD75557D18200DB9D1459406_inline (CompareFunc2_t3089DA2331FB2FD299DD42786F063B229E0CD465* __this, SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114* ___0_left, SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114* ___1_right, const RuntimeMethod* method)
{
	return ((  int32_t (*) (CompareFunc2_t3089DA2331FB2FD299DD42786F063B229E0CD465*, SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114*, SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114*, const RuntimeMethod*))CompareFunc2_Invoke_mA5FD0F55AF25F59CBD75557D18200DB9D1459406_gshared_inline)(__this, ___0_left, ___1_right, method);
}
inline void List_1_Allocate_m705F151402C625E09FC5280623293A6D272F3055 (List_1_t8BB3929CE0AF32BA36720C0451635D48C141B582* __this, int32_t ___0_newSize, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8BB3929CE0AF32BA36720C0451635D48C141B582*, int32_t, const RuntimeMethod*))List_1_Allocate_m705F151402C625E09FC5280623293A6D272F3055_gshared)(__this, ___0_newSize, method);
}
inline void U3CGetEnumeratorU3Ed__4__ctor_m87AEC2E1299A222DD59F46198B8F0439CACA8897 (U3CGetEnumeratorU3Ed__4_t6901B1C3DB5A8E465EFC4E0ABD6B3F8101868D29* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method)
{
	((  void (*) (U3CGetEnumeratorU3Ed__4_t6901B1C3DB5A8E465EFC4E0ABD6B3F8101868D29*, int32_t, const RuntimeMethod*))U3CGetEnumeratorU3Ed__4__ctor_m87AEC2E1299A222DD59F46198B8F0439CACA8897_gshared)(__this, ___0_U3CU3E1__state, method);
}
inline void Array_Resize_TisChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A_m6B17A4064CE21D14F343215701B230AD8440E047 (ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method)
{
	((  void (*) (ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350**, int32_t, const RuntimeMethod*))Array_Resize_TisChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A_m6B17A4064CE21D14F343215701B230AD8440E047_gshared)(___0_array, ___1_newSize, method);
}
inline void List_1_AllocateMore_mE63483F9B3A55C1DBA2F82423AE3E57811EB07F2 (List_1_t8BB3929CE0AF32BA36720C0451635D48C141B582* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8BB3929CE0AF32BA36720C0451635D48C141B582*, const RuntimeMethod*))List_1_AllocateMore_mE63483F9B3A55C1DBA2F82423AE3E57811EB07F2_gshared)(__this, method);
}
inline bool List_1_Contains_m914AF3F6859B6EB0A1339740FA7DFA8DDCA6A161 (List_1_t8BB3929CE0AF32BA36720C0451635D48C141B582* __this, ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t8BB3929CE0AF32BA36720C0451635D48C141B582*, ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A, const RuntimeMethod*))List_1_Contains_m914AF3F6859B6EB0A1339740FA7DFA8DDCA6A161_gshared)(__this, ___0_item, method);
}
inline void List_1_Add_m5759BD42BAA6A35C4E59F1D9A75FA9256B4011C3 (List_1_t8BB3929CE0AF32BA36720C0451635D48C141B582* __this, ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8BB3929CE0AF32BA36720C0451635D48C141B582*, ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A, const RuntimeMethod*))List_1_Add_m5759BD42BAA6A35C4E59F1D9A75FA9256B4011C3_gshared)(__this, ___0_item, method);
}
inline EqualityComparer_1_t922A0F6FFD989B570795F0DB5055CA31A625B1D6* EqualityComparer_1_get_Default_m13778FED77225F5505F75F08CD67D222DAB9F806_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t922A0F6FFD989B570795F0DB5055CA31A625B1D6* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m13778FED77225F5505F75F08CD67D222DAB9F806_gshared_inline)(method);
}
inline void List_1_Trim_mC405BF265274F008B59BC88566F414ECD923BBDF (List_1_t8BB3929CE0AF32BA36720C0451635D48C141B582* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8BB3929CE0AF32BA36720C0451635D48C141B582*, const RuntimeMethod*))List_1_Trim_mC405BF265274F008B59BC88566F414ECD923BBDF_gshared)(__this, method);
}
inline int32_t CompareFunc_Invoke_m351179990E33C7C8CC0E941CCC765C52C7E47541_inline (CompareFunc_t3B70DEE7A10D19DE6F1C7A392495D80CB2F44B76* __this, ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A ___0_left, ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A ___1_right, const RuntimeMethod* method)
{
	return ((  int32_t (*) (CompareFunc_t3B70DEE7A10D19DE6F1C7A392495D80CB2F44B76*, ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A, ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A, const RuntimeMethod*))CompareFunc_Invoke_m351179990E33C7C8CC0E941CCC765C52C7E47541_gshared_inline)(__this, ___0_left, ___1_right, method);
}
inline int32_t CompareFunc2_Invoke_m7AEAE165F749D42182BA1DB4D144F18055BEB165_inline (CompareFunc2_t942EC01EBBF2D48BDF26D7794667FAAB5210D94B* __this, ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A* ___0_left, ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A* ___1_right, const RuntimeMethod* method)
{
	return ((  int32_t (*) (CompareFunc2_t942EC01EBBF2D48BDF26D7794667FAAB5210D94B*, ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A*, ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A*, const RuntimeMethod*))CompareFunc2_Invoke_m7AEAE165F749D42182BA1DB4D144F18055BEB165_gshared_inline)(__this, ___0_left, ___1_right, method);
}
inline void List_1_Allocate_m5E017945064D3ED2B4934922E6D1476AE34A3138 (List_1_t3A96D62243E83DB585118DC88423390D159E70F7* __this, int32_t ___0_newSize, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3A96D62243E83DB585118DC88423390D159E70F7*, int32_t, const RuntimeMethod*))List_1_Allocate_m5E017945064D3ED2B4934922E6D1476AE34A3138_gshared)(__this, ___0_newSize, method);
}
inline void U3CGetEnumeratorU3Ed__4__ctor_mFED244EB43A7B1BAD1E46C73CE7FBD41E8B7E96A (U3CGetEnumeratorU3Ed__4_tE2F70AE5D1600769E0B346A329877341E8EE9AD2* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method)
{
	((  void (*) (U3CGetEnumeratorU3Ed__4_tE2F70AE5D1600769E0B346A329877341E8EE9AD2*, int32_t, const RuntimeMethod*))U3CGetEnumeratorU3Ed__4__ctor_mFED244EB43A7B1BAD1E46C73CE7FBD41E8B7E96A_gshared)(__this, ___0_U3CU3E1__state, method);
}
inline void Array_Resize_TisForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE_m3126A0A6FB70B2F1686321EFB5E6678B4C0A4CB6 (ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method)
{
	((  void (*) (ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F**, int32_t, const RuntimeMethod*))Array_Resize_TisForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE_m3126A0A6FB70B2F1686321EFB5E6678B4C0A4CB6_gshared)(___0_array, ___1_newSize, method);
}
inline void List_1_AllocateMore_mD0A96FAA2F13E1B6A463049080D7E5D7F02AFD35 (List_1_t3A96D62243E83DB585118DC88423390D159E70F7* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3A96D62243E83DB585118DC88423390D159E70F7*, const RuntimeMethod*))List_1_AllocateMore_mD0A96FAA2F13E1B6A463049080D7E5D7F02AFD35_gshared)(__this, method);
}
inline bool List_1_Contains_mED171A2B248A13191B58A439764C36404C940BC6 (List_1_t3A96D62243E83DB585118DC88423390D159E70F7* __this, ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t3A96D62243E83DB585118DC88423390D159E70F7*, ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE, const RuntimeMethod*))List_1_Contains_mED171A2B248A13191B58A439764C36404C940BC6_gshared)(__this, ___0_item, method);
}
inline void List_1_Add_mE3A0896716329143BB73837C7FB65985890BD18D (List_1_t3A96D62243E83DB585118DC88423390D159E70F7* __this, ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3A96D62243E83DB585118DC88423390D159E70F7*, ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE, const RuntimeMethod*))List_1_Add_mE3A0896716329143BB73837C7FB65985890BD18D_gshared)(__this, ___0_item, method);
}
inline EqualityComparer_1_tA5B2D612E48D47CC5468C19147A56588873B414A* EqualityComparer_1_get_Default_mAD029989C453C4C80CEF435CCBCFA76645C04C49_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tA5B2D612E48D47CC5468C19147A56588873B414A* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mAD029989C453C4C80CEF435CCBCFA76645C04C49_gshared_inline)(method);
}
inline void List_1_Trim_mB5673BD8D2BDDC5D585E68AB0EFAA30903EFA000 (List_1_t3A96D62243E83DB585118DC88423390D159E70F7* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3A96D62243E83DB585118DC88423390D159E70F7*, const RuntimeMethod*))List_1_Trim_mB5673BD8D2BDDC5D585E68AB0EFAA30903EFA000_gshared)(__this, method);
}
inline int32_t CompareFunc_Invoke_m5C0B1FFD5552AD1F619D3B6A3B7B677052199FCE_inline (CompareFunc_t00CE15486F1C87AAA1937F1407C4B99828312A5D* __this, ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE ___0_left, ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE ___1_right, const RuntimeMethod* method)
{
	return ((  int32_t (*) (CompareFunc_t00CE15486F1C87AAA1937F1407C4B99828312A5D*, ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE, ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE, const RuntimeMethod*))CompareFunc_Invoke_m5C0B1FFD5552AD1F619D3B6A3B7B677052199FCE_gshared_inline)(__this, ___0_left, ___1_right, method);
}
inline int32_t CompareFunc2_Invoke_mB3271E54FD35021D322759F49B849A1C081437B5_inline (CompareFunc2_tD6EC93CB1B91D9C4071995650B545B7872439E5C* __this, ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE* ___0_left, ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE* ___1_right, const RuntimeMethod* method)
{
	return ((  int32_t (*) (CompareFunc2_tD6EC93CB1B91D9C4071995650B545B7872439E5C*, ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE*, ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE*, const RuntimeMethod*))CompareFunc2_Invoke_mB3271E54FD35021D322759F49B849A1C081437B5_gshared_inline)(__this, ___0_left, ___1_right, method);
}
inline void List_1_Allocate_m0549ACAFD4E59190F4729D5DA1C6F34ECC98B7B9 (List_1_t69D8D3C7171DF1D421BEF5D2DE46252146F5D635* __this, int32_t ___0_newSize, const RuntimeMethod* method)
{
	((  void (*) (List_1_t69D8D3C7171DF1D421BEF5D2DE46252146F5D635*, int32_t, const RuntimeMethod*))List_1_Allocate_m0549ACAFD4E59190F4729D5DA1C6F34ECC98B7B9_gshared)(__this, ___0_newSize, method);
}
inline void U3CGetEnumeratorU3Ed__4__ctor_m842B22AB193FA3790FD3E241499BA6AC9D037223 (U3CGetEnumeratorU3Ed__4_t6160427C0B6E30E3ECAB15E821DDDD716768AF43* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method)
{
	((  void (*) (U3CGetEnumeratorU3Ed__4_t6160427C0B6E30E3ECAB15E821DDDD716768AF43*, int32_t, const RuntimeMethod*))U3CGetEnumeratorU3Ed__4__ctor_m842B22AB193FA3790FD3E241499BA6AC9D037223_gshared)(__this, ___0_U3CU3E1__state, method);
}
inline void Array_Resize_TisInfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02_m385BAA64494E45AAEF83EE34BF430EF798AF61F9 (InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method)
{
	((  void (*) (InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC**, int32_t, const RuntimeMethod*))Array_Resize_TisInfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02_m385BAA64494E45AAEF83EE34BF430EF798AF61F9_gshared)(___0_array, ___1_newSize, method);
}
inline void List_1_AllocateMore_m3F826679E2F012FB2FFCA11E8C9DAD402930DEF1 (List_1_t69D8D3C7171DF1D421BEF5D2DE46252146F5D635* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t69D8D3C7171DF1D421BEF5D2DE46252146F5D635*, const RuntimeMethod*))List_1_AllocateMore_m3F826679E2F012FB2FFCA11E8C9DAD402930DEF1_gshared)(__this, method);
}
inline bool List_1_Contains_mB78521A24BEF47E8291761514BD2D1F8FE5067F5 (List_1_t69D8D3C7171DF1D421BEF5D2DE46252146F5D635* __this, InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02 ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t69D8D3C7171DF1D421BEF5D2DE46252146F5D635*, InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02, const RuntimeMethod*))List_1_Contains_mB78521A24BEF47E8291761514BD2D1F8FE5067F5_gshared)(__this, ___0_item, method);
}
inline void List_1_Add_m52745FC2D4B45E4025D733A4F0E784CE31013992 (List_1_t69D8D3C7171DF1D421BEF5D2DE46252146F5D635* __this, InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t69D8D3C7171DF1D421BEF5D2DE46252146F5D635*, InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02, const RuntimeMethod*))List_1_Add_m52745FC2D4B45E4025D733A4F0E784CE31013992_gshared)(__this, ___0_item, method);
}
inline EqualityComparer_1_t805E284DD3F2CCD17BEBA28DD909A248D9FD6B84* EqualityComparer_1_get_Default_m8256B84332556772E273C474F78F2445ACFCC32F_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t805E284DD3F2CCD17BEBA28DD909A248D9FD6B84* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m8256B84332556772E273C474F78F2445ACFCC32F_gshared_inline)(method);
}
inline void List_1_Trim_m772700FB8D603A6F5FD2DC9482214A59004658A0 (List_1_t69D8D3C7171DF1D421BEF5D2DE46252146F5D635* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t69D8D3C7171DF1D421BEF5D2DE46252146F5D635*, const RuntimeMethod*))List_1_Trim_m772700FB8D603A6F5FD2DC9482214A59004658A0_gshared)(__this, method);
}
inline int32_t CompareFunc_Invoke_m90C6E3D740EE9EED634EF9FB0BA59320CF09B38E_inline (CompareFunc_tA3EC9E99EAAA5F3D786D261BBF941729E7267E9D* __this, InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02 ___0_left, InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02 ___1_right, const RuntimeMethod* method)
{
	return ((  int32_t (*) (CompareFunc_tA3EC9E99EAAA5F3D786D261BBF941729E7267E9D*, InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02, InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02, const RuntimeMethod*))CompareFunc_Invoke_m90C6E3D740EE9EED634EF9FB0BA59320CF09B38E_gshared_inline)(__this, ___0_left, ___1_right, method);
}
inline int32_t CompareFunc2_Invoke_mDBB7953373F755CF981DD4C012B2E4B1525BFAD5_inline (CompareFunc2_t9ACC862BD3A9584B4536B0660202D64073158D5D* __this, InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02* ___0_left, InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02* ___1_right, const RuntimeMethod* method)
{
	return ((  int32_t (*) (CompareFunc2_t9ACC862BD3A9584B4536B0660202D64073158D5D*, InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02*, InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02*, const RuntimeMethod*))CompareFunc2_Invoke_mDBB7953373F755CF981DD4C012B2E4B1525BFAD5_gshared_inline)(__this, ___0_left, ___1_right, method);
}
inline EqualityComparer_1_t7DBAE97102605775DB56BD3370D361BBD64DE5D5* EqualityComparer_1_CreateComparer_mBE6149034713FA43B08655B274FF98AC7056B018 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t7DBAE97102605775DB56BD3370D361BBD64DE5D5* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mBE6149034713FA43B08655B274FF98AC7056B018_gshared)(method);
}
inline EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E_gshared)(method);
}
inline EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634_gshared)(method);
}
inline EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* EqualityComparer_1_CreateComparer_m64D3D774E7DAF5FC0206DC26D9BA53BF70F1F93B (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m64D3D774E7DAF5FC0206DC26D9BA53BF70F1F93B_gshared)(method);
}
inline EqualityComparer_1_tDC51C19B76F007D508C2E2D7CF5399F1E0C69443* EqualityComparer_1_CreateComparer_m09577CB02289F305FEF41DD7EECD6E07BD166DD4 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tDC51C19B76F007D508C2E2D7CF5399F1E0C69443* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m09577CB02289F305FEF41DD7EECD6E07BD166DD4_gshared)(method);
}
inline EqualityComparer_1_t3D60CA8A640E0FE68A2A24EF9B9A2F530ED94537* EqualityComparer_1_CreateComparer_m1CD860E480E2F8CCCB452AAD78D8BC4EE41DD014 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t3D60CA8A640E0FE68A2A24EF9B9A2F530ED94537* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m1CD860E480E2F8CCCB452AAD78D8BC4EE41DD014_gshared)(method);
}
inline EqualityComparer_1_t951752AEC554D078FD5BA75860AB4914942AE117* EqualityComparer_1_CreateComparer_m68AA4AE2AFD9E233E70F81E79D056981E7FA6BF6 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t951752AEC554D078FD5BA75860AB4914942AE117* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m68AA4AE2AFD9E233E70F81E79D056981E7FA6BF6_gshared)(method);
}
inline EqualityComparer_1_t0D37AAA596A74C6F5F0AE68651E5B18034373802* EqualityComparer_1_CreateComparer_mB6696671F3260CA1E6785AC99C876753F438026E (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t0D37AAA596A74C6F5F0AE68651E5B18034373802* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mB6696671F3260CA1E6785AC99C876753F438026E_gshared)(method);
}
inline EqualityComparer_1_t23B947F4B4052C9CE965A4087C48BEDA5F132E11* EqualityComparer_1_CreateComparer_m8F32C25BAB52A896B94B95E595DC741349253918 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t23B947F4B4052C9CE965A4087C48BEDA5F132E11* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m8F32C25BAB52A896B94B95E595DC741349253918_gshared)(method);
}
inline EqualityComparer_1_t922A0F6FFD989B570795F0DB5055CA31A625B1D6* EqualityComparer_1_CreateComparer_mDBDE6F519B25B227D805D9AA6E55424373D5C53F (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t922A0F6FFD989B570795F0DB5055CA31A625B1D6* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mDBDE6F519B25B227D805D9AA6E55424373D5C53F_gshared)(method);
}
inline EqualityComparer_1_tA5B2D612E48D47CC5468C19147A56588873B414A* EqualityComparer_1_CreateComparer_m7A41D59673CDDA80A897C0B7F25F8EA628157BA9 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tA5B2D612E48D47CC5468C19147A56588873B414A* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m7A41D59673CDDA80A897C0B7F25F8EA628157BA9_gshared)(method);
}
inline EqualityComparer_1_t805E284DD3F2CCD17BEBA28DD909A248D9FD6B84* EqualityComparer_1_CreateComparer_mCE3AD735F9A03370CED7DB7FD35AB0B0248EE423 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t805E284DD3F2CCD17BEBA28DD909A248D9FD6B84* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mCE3AD735F9A03370CED7DB7FD35AB0B0248EE423_gshared)(method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mFD022FF55BF5009CC53918403986EBB838054177_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_0 = ((List_1_t002562281B6798CDCF0267381EF8CB414A349636_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m738E22904782E10BA317E3A0EA2CF775B3E6F101_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)12), (int32_t)4, NULL);
	}

IL_0012:
	{
		int32_t L_1 = ___0_capacity;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_2 = ((List_1_t002562281B6798CDCF0267381EF8CB414A349636_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_2);
		return;
	}

IL_0021:
	{
		int32_t L_3 = ___0_capacity;
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_4 = (EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA*)(EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_3);
		__this->____items = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m2723C9B0067579642D6CE0F67309C6A6F8BDF379_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_000f:
	{
		RuntimeObject* L_1 = ___0_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_3);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_6 = ((List_1_t002562281B6798CDCF0267381EF8CB414A349636_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_6);
		return;
	}

IL_002f:
	{
		int32_t L_7 = V_1;
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_8 = (EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA*)(EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_7);
		__this->____items = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_8);
		RuntimeObject* L_9 = V_0;
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_10 = __this->____items;
		NullCheck(L_9);
		InterfaceActionInvoker2< EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_9, L_10, 0);
		int32_t L_11 = V_1;
		__this->____size = L_11;
		return;
	}

IL_0050:
	{
		__this->____size = 0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_12 = ((List_1_t002562281B6798CDCF0267381EF8CB414A349636_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		RuntimeObject* L_13 = ___0_collection;
		List_1_AddEnumerable_mFF6EE2023BF05E98F1D1F1A70991BE2B4768AC4F(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Capacity_mA55B71708B470B4FFD151DF427992098722F689D_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, const RuntimeMethod* method) 
{
	{
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_0 = __this->____items;
		NullCheck(L_0);
		return ((int32_t)(((RuntimeArray*)L_0)->max_length));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m9CE5BF53682527AFBFE76F0524A4E218C53E3605_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* V_0 = NULL;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)15), (int32_t)((int32_t)21), NULL);
	}

IL_0012:
	{
		int32_t L_2 = ___0_value;
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_3 = __this->____items;
		NullCheck(L_3);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_4 = ___0_value;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_5 = ___0_value;
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_6 = (EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA*)(EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		V_0 = L_6;
		int32_t L_7 = __this->____size;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_8 = __this->____items;
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_9 = V_0;
		int32_t L_10 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, 0, (RuntimeArray*)L_9, 0, L_10, NULL);
	}

IL_0045:
	{
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_11 = V_0;
		__this->____items = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_11);
		return;
	}

IL_004d:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_12 = ((List_1_t002562281B6798CDCF0267381EF8CB414A349636_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
	}

IL_0058:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mCE791BD866BF0868DB63FCECFF18CB64098637CB_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_get_IsFixedSize_mFE2BA6C5252AA95AC5FD4687256DABD3ACB309AE_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_mBB30A57CF20557BBFD3FCE8F1D7E9AE2D7E17D5A_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_get_IsReadOnly_m9777EBA902FC456E5B9A4999537CC1998C843544_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_ICollection_get_IsSynchronized_m0A20FDBFC00336F7A9DE7082E44BD2E2FA396493_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_ICollection_get_SyncRoot_mAC6C29277BD99A42E25100230BFC5523C09E2A4D_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C List_1_get_Item_m9DFC6D45BA1324C5192D2CD0BA4AD52F9B8C7944_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m1ACB2516EE440762DC87101F4907D2634EC3429D_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, int32_t ___0_index, Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C L_4 = ___1_value;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C)L_4);
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m35E7C62FFAEBC93EF01CED6E6128E48DCC7859A9_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C));
		Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IList_get_Item_mF98C5BC7F66B3D164E2F2C3A07C05839073D7F60_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C L_1;
		L_1 = List_1_get_Item_m9DFC6D45BA1324C5192D2CD0BA4AD52F9B8C7944(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), &L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_set_Item_m325F1CF27A44294E2211DCC82D49A759E562F864_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisEntry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C_mA52C3FCF1F9707BDC64FFD748F50221C71AC2656(L_0, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_value;
		List_1_set_Item_m1ACB2516EE440762DC87101F4907D2634EC3429D(__this, L_1, ((*(Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C*)((Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C*)(Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m1E1C5CCE0C3064A654574163DC7C4CBBA7AC3DB8_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C ___0_item, const RuntimeMethod* method) 
{
	EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_6 = V_0;
		int32_t L_7 = V_1;
		Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C)L_8);
		return;
	}

IL_0034:
	{
		Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C L_9 = ___0_item;
		List_1_AddWithResize_mA0C4AB6BF0EB80C858EAF3F8D18FCD76C7AAC396(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mA0C4AB6BF0EB80C858EAF3F8D18FCD76C7AAC396_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		int32_t L_1 = V_0;
		List_1_EnsureCapacity_mE8546716F3785A64B22FB07BBFC7C9EBAF996899(__this, ((int32_t)il2cpp_codegen_add(L_1, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_2 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_2, 1));
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_3 = __this->____items;
		int32_t L_4 = V_0;
		Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C L_5 = ___0_item;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_Add_m664CA11E2079452119EACC253B2A7D505BE2289B_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisEntry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C_mA52C3FCF1F9707BDC64FFD748F50221C71AC2656(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		RuntimeObject* L_1 = ___0_item;
		List_1_Add_m1E1C5CCE0C3064A654574163DC7C4CBBA7AC3DB8_inline(__this, ((*(Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C*)((Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C*)(Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		goto IL_0029;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_3 = ___0_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_3, L_5, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0029;
	}

IL_0029:
	{
		int32_t L_6;
		L_6 = List_1_get_Count_mCE791BD866BF0868DB63FCECFF18CB64098637CB_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return ((int32_t)il2cpp_codegen_subtract(L_6, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_mF9A789B446F2EDADF8B079F48C097155B6915B09_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_collection;
		List_1_InsertRange_mAE9AC1D1A87351B0F8A1D09A2125A482BBF0024E(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_tDE77ACEFEE5F0671F2EA334F16B7C608AF68B26B* List_1_AsReadOnly_m9748587764ADD100283FB971CA451A4CBD1CE401_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, const RuntimeMethod* method) 
{
	{
		ReadOnlyCollection_1_tDE77ACEFEE5F0671F2EA334F16B7C608AF68B26B* L_0 = (ReadOnlyCollection_1_tDE77ACEFEE5F0671F2EA334F16B7C608AF68B26B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 19));
		ReadOnlyCollection_1__ctor_m65B57832B37BE3625A4B5918BDF10BAA874D55D6(L_0, (RuntimeObject*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_BinarySearch_m737B151A7CD23BDB979BB9C0E1D0C64F4E4F6D50_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, int32_t ___0_index, int32_t ___1_count, Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C ___2_item, RuntimeObject* ___3_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_5 = __this->____items;
		int32_t L_6 = ___0_index;
		int32_t L_7 = ___1_count;
		Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C L_8 = ___2_item;
		RuntimeObject* L_9 = ___3_comparer;
		int32_t L_10;
		L_10 = Array_BinarySearch_TisEntry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C_mEF0A21F508496A8D3974B7E397A1670166A056CA(L_5, L_6, L_7, L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_BinarySearch_m69F9DDC16D3AC7E1544781049E3CAFB53903DC42_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_mCE791BD866BF0868DB63FCECFF18CB64098637CB_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C L_1 = ___0_item;
		int32_t L_2;
		L_2 = List_1_BinarySearch_m737B151A7CD23BDB979BB9C0E1D0C64F4E4F6D50(__this, 0, L_0, L_1, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_BinarySearch_m4C33A1BE40747A46755690F95BF59F23D67107F5_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C ___0_item, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_mCE791BD866BF0868DB63FCECFF18CB64098637CB_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C L_1 = ___0_item;
		RuntimeObject* L_2 = ___1_comparer;
		int32_t L_3;
		L_3 = List_1_BinarySearch_m737B151A7CD23BDB979BB9C0E1D0C64F4E4F6D50(__this, 0, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m83D9DDC2A4CAE8E73D560A21C712D58EEC00BE10_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		goto IL_0035;
	}

IL_0035:
	{
		__this->____size = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m020438854E725672CFFDA9E683DCD04A306AB87D_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C L_1 = ___0_item;
		int32_t L_2;
		L_2 = List_1_IndexOf_m4FF31271D49A80AF3107DA1D8ED040B2D4FCFCB0(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		return (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0016:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_Contains_m88AC419C4EB035272075B946F207A5590D90A69B_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m35E7C62FFAEBC93EF01CED6E6128E48DCC7859A9(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Contains_m020438854E725672CFFDA9E683DCD04A306AB87D(__this, ((*(Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C*)((Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C*)(Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m5A0F7D8C13FB8727EA989B2BB55E507C2449F812_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* ___0_array, const RuntimeMethod* method) 
{
	{
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_0 = ___0_array;
		List_1_CopyTo_mF9A8A603F19D1A5A9A30F990E961EBC24E5B9829(__this, L_0, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_ICollection_CopyTo_m48AE97F2C43D9BCF1562C0B5E8D6B571097ACAB2_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, RuntimeArray* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0012:
	{
	}
	try
	{
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_3 = __this->____items;
		RuntimeArray* L_4 = ___0_array;
		int32_t L_5 = ___1_arrayIndex;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, L_4, L_5, L_6, NULL);
		goto IL_0031;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0029;
		}
		throw e;
	}

CATCH_0029:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_7 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0031;
	}

IL_0031:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_mF9A8A603F19D1A5A9A30F990E961EBC24E5B9829_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_0 = __this->____items;
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_1 = ___0_array;
		int32_t L_2 = ___1_arrayIndex;
		int32_t L_3 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_0, 0, (RuntimeArray*)L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_mE8546716F3785A64B22FB07BBFC7C9EBAF996899_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_0 = __this->____items;
		NullCheck(L_0);
		int32_t L_1 = ___0_min;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) >= ((int32_t)L_1)))
		{
			goto IL_003d;
		}
	}
	{
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_2 = __this->____items;
		NullCheck(L_2);
		if (!(((RuntimeArray*)L_2)->max_length))
		{
			goto IL_0020;
		}
	}
	{
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_3 = __this->____items;
		NullCheck(L_3);
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_3)->max_length)), 2));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) > ((uint32_t)((int32_t)2146435071)))))
		{
			goto IL_0030;
		}
	}
	{
		V_0 = ((int32_t)2146435071);
	}

IL_0030:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_min;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_7 = ___0_min;
		V_0 = L_7;
	}

IL_0036:
	{
		int32_t L_8 = V_0;
		List_1_set_Capacity_m9CE5BF53682527AFBFE76F0524A4E218C53E3605(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
	}

IL_003d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Exists_m3651FAFF77E0C27CC3DB7C62870ADAEBC23612A3_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, Predicate_1_tBB24C088B9F2C5E92B897C474555BEF1749C9053* ___0_match, const RuntimeMethod* method) 
{
	{
		Predicate_1_tBB24C088B9F2C5E92B897C474555BEF1749C9053* L_0 = ___0_match;
		int32_t L_1;
		L_1 = List_1_FindIndex_m2CA7127F10A92482E9F489505C5F3B595DDC7268(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C List_1_Find_mDC38D51CD1776783D61CBE1E0B7B77DC58828A2E_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, Predicate_1_tBB24C088B9F2C5E92B897C474555BEF1749C9053* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Predicate_1_tBB24C088B9F2C5E92B897C474555BEF1749C9053* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0032;
	}

IL_000d:
	{
		Predicate_1_tBB24C088B9F2C5E92B897C474555BEF1749C9053* L_1 = ___0_match;
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_2 = __this->____items;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_1);
		bool L_6;
		L_6 = Predicate_1_Invoke_m621503A57A4F629CFF8121C79F25B33B10F4743F_inline(L_1, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		if (!L_6)
		{
			goto IL_002e;
		}
	}
	{
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_7 = __this->____items;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		return L_10;
	}

IL_002e:
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0032:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->____size;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C));
		Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C L_14 = V_1;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t002562281B6798CDCF0267381EF8CB414A349636* List_1_FindAll_m53BDDD10E017BFC3CE9B2C968D13F013C58BDFEC_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, Predicate_1_tBB24C088B9F2C5E92B897C474555BEF1749C9053* ___0_match, const RuntimeMethod* method) 
{
	List_1_t002562281B6798CDCF0267381EF8CB414A349636* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Predicate_1_tBB24C088B9F2C5E92B897C474555BEF1749C9053* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_0009:
	{
		List_1_t002562281B6798CDCF0267381EF8CB414A349636* L_1 = (List_1_t002562281B6798CDCF0267381EF8CB414A349636*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		List_1__ctor_mFD022FF55BF5009CC53918403986EBB838054177(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		V_0 = L_1;
		V_1 = 0;
		goto IL_003d;
	}

IL_0013:
	{
		Predicate_1_tBB24C088B9F2C5E92B897C474555BEF1749C9053* L_2 = ___0_match;
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_3 = __this->____items;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_2);
		bool L_7;
		L_7 = Predicate_1_Invoke_m621503A57A4F629CFF8121C79F25B33B10F4743F_inline(L_2, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		if (!L_7)
		{
			goto IL_0039;
		}
	}
	{
		List_1_t002562281B6798CDCF0267381EF8CB414A349636* L_8 = V_0;
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_9 = __this->____items;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_8);
		List_1_Add_m1E1C5CCE0C3064A654574163DC7C4CBBA7AC3DB8_inline(L_8, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
	}

IL_0039:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_003d:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->____size;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0013;
		}
	}
	{
		List_1_t002562281B6798CDCF0267381EF8CB414A349636* L_16 = V_0;
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m2CA7127F10A92482E9F489505C5F3B595DDC7268_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, Predicate_1_tBB24C088B9F2C5E92B897C474555BEF1749C9053* ___0_match, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		Predicate_1_tBB24C088B9F2C5E92B897C474555BEF1749C9053* L_1 = ___0_match;
		int32_t L_2;
		L_2 = List_1_FindIndex_mA615C716B7D420A1DD1865796AA3165B31255FA6(__this, 0, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_mA615C716B7D420A1DD1865796AA3165B31255FA6_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_tBB24C088B9F2C5E92B897C474555BEF1749C9053* ___2_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_startIndex;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowStartIndexArgumentOutOfRange_ArgumentOutOfRange_Index_m94BADCC6D7EBBD12BE8323775FFB43AF01499B0F(NULL);
	}

IL_000e:
	{
		int32_t L_2 = ___1_count;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_3 = ___0_startIndex;
		int32_t L_4 = __this->____size;
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_4, L_5)))))
		{
			goto IL_0022;
		}
	}

IL_001d:
	{
		ThrowHelper_ThrowCountArgumentOutOfRange_ArgumentOutOfRange_Count_m6C4A7F645BDD8EB62B50CB76E84416D94620DCC7(NULL);
	}

IL_0022:
	{
		Predicate_1_tBB24C088B9F2C5E92B897C474555BEF1749C9053* L_6 = ___2_match;
		if (L_6)
		{
			goto IL_002b;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_002b:
	{
		int32_t L_7 = ___0_startIndex;
		int32_t L_8 = ___1_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
		int32_t L_9 = ___0_startIndex;
		V_1 = L_9;
		goto IL_004d;
	}

IL_0033:
	{
		Predicate_1_tBB24C088B9F2C5E92B897C474555BEF1749C9053* L_10 = ___2_match;
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_11 = __this->____items;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_10);
		bool L_15;
		L_15 = Predicate_1_Invoke_m621503A57A4F629CFF8121C79F25B33B10F4743F_inline(L_10, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		if (!L_15)
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_16 = V_1;
		return L_16;
	}

IL_0049:
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_004d:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = V_0;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0033;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_ForEach_m661DCE777B570E53CFA87DDB67B89B0CB901AF54_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, Action_1_t19E6855A63C89A1C9C091E8D2BBBD2C5F47FF2D3* ___0_action, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Action_1_t19E6855A63C89A1C9C091E8D2BBBD2C5F47FF2D3* L_0 = ___0_action;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)((int32_t)33), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____version;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0034;
	}

IL_0015:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____version;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_003d;
		}
	}
	{
		Action_1_t19E6855A63C89A1C9C091E8D2BBBD2C5F47FF2D3* L_4 = ___0_action;
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_5 = __this->____items;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_4);
		Action_1_Invoke_m2C81B638625FF680761E584028BDE4A1FEFE0506_inline(L_4, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0034:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0015;
		}
	}

IL_003d:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->____version;
		if ((((int32_t)L_12) == ((int32_t)L_13)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion_m5331E2E0EC0E36843D53F439C2529530595ACE9F(NULL);
	}

IL_004b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB755A1A5DCF3195E182BC363D160AB6086A9E092 List_1_GetEnumerator_m9FD6837E084A21941FAAD31ADCC0A8796B896F23_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tB755A1A5DCF3195E182BC363D160AB6086A9E092 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m1E647764FE042A8001FE6452077FCFA376D0826D((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mF20C121972E1B472D6D0B355147F87E21E07F8E3_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tB755A1A5DCF3195E182BC363D160AB6086A9E092 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m1E647764FE042A8001FE6452077FCFA376D0826D((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		Enumerator_tB755A1A5DCF3195E182BC363D160AB6086A9E092 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 38), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IEnumerable_GetEnumerator_m6DCC62E7AB4A59DD39BFA339C74DB6F15E2D1E21_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tB755A1A5DCF3195E182BC363D160AB6086A9E092 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m1E647764FE042A8001FE6452077FCFA376D0826D((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		Enumerator_tB755A1A5DCF3195E182BC363D160AB6086A9E092 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 38), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t002562281B6798CDCF0267381EF8CB414A349636* List_1_GetRange_m942B9358CC4C36DC22D1CFA8C5FFC882817A9231_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	List_1_t002562281B6798CDCF0267381EF8CB414A349636* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		List_1_t002562281B6798CDCF0267381EF8CB414A349636* L_6 = (List_1_t002562281B6798CDCF0267381EF8CB414A349636*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		List_1__ctor_m738E22904782E10BA317E3A0EA2CF775B3E6F101(L_6, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		V_0 = L_6;
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		List_1_t002562281B6798CDCF0267381EF8CB414A349636* L_9 = V_0;
		NullCheck(L_9);
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_10 = L_9->____items;
		int32_t L_11 = ___1_count;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, L_8, (RuntimeArray*)L_10, 0, L_11, NULL);
		List_1_t002562281B6798CDCF0267381EF8CB414A349636* L_12 = V_0;
		int32_t L_13 = ___1_count;
		NullCheck(L_12);
		L_12->____size = L_13;
		List_1_t002562281B6798CDCF0267381EF8CB414A349636* L_14 = V_0;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m4FF31271D49A80AF3107DA1D8ED040B2D4FCFCB0_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C ___0_item, const RuntimeMethod* method) 
{
	{
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_0 = __this->____items;
		Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C L_1 = ___0_item;
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = Array_IndexOf_TisEntry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C_mD0DC10F570E048C4228D118A1254F51259A462AF(L_0, L_1, 0, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_IndexOf_m4FB49089D1AA0F36BC0D8E88A9D0A07C14A930FF_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m35E7C62FFAEBC93EF01CED6E6128E48DCC7859A9(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		int32_t L_3;
		L_3 = List_1_IndexOf_m4FF31271D49A80AF3107DA1D8ED040B2D4FCFCB0(__this, ((*(Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C*)((Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C*)(Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m9D38FA896A57E0C98D3DF65BA8473AEE0A3CD791_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, int32_t ___0_index, Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C ___1_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)13), (int32_t)((int32_t)27), NULL);
	}

IL_0012:
	{
		int32_t L_2 = __this->____size;
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_3 = __this->____items;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_4 = __this->____size;
		List_1_EnsureCapacity_mE8546716F3785A64B22FB07BBFC7C9EBAF996899(__this, ((int32_t)il2cpp_codegen_add(L_4, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
	}

IL_0030:
	{
		int32_t L_5 = ___0_index;
		int32_t L_6 = __this->____size;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0056;
		}
	}
	{
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_9 = __this->____items;
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		int32_t L_12 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, L_8, (RuntimeArray*)L_9, ((int32_t)il2cpp_codegen_add(L_10, 1)), ((int32_t)il2cpp_codegen_subtract(L_11, L_12)), NULL);
	}

IL_0056:
	{
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_13 = __this->____items;
		int32_t L_14 = ___0_index;
		Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C L_15 = ___1_item;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C)L_15);
		int32_t L_16 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_16, 1));
		int32_t L_17 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_17, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Insert_m83229EA4AF0E600B221AE13D84392ACF668484AA_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisEntry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C_mA52C3FCF1F9707BDC64FFD748F50221C71AC2656(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_item;
		List_1_Insert_m9D38FA896A57E0C98D3DF65BA8473AEE0A3CD791(__this, L_1, ((*(Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C*)((Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C*)(Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_mAE9AC1D1A87351B0F8A1D09A2125A482BBF0024E_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___1_collection;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0017;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___1_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_00bc;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_5);
		V_1 = L_6;
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_00fb;
		}
	}
	{
		int32_t L_8 = __this->____size;
		int32_t L_9 = V_1;
		List_1_EnsureCapacity_mE8546716F3785A64B22FB07BBFC7C9EBAF996899(__this, ((int32_t)il2cpp_codegen_add(L_8, L_9)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_0066;
		}
	}
	{
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_12 = __this->____items;
		int32_t L_13 = ___0_index;
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = V_1;
		int32_t L_17 = __this->____size;
		int32_t L_18 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), ((int32_t)il2cpp_codegen_subtract(L_17, L_18)), NULL);
	}

IL_0066:
	{
		RuntimeObject* L_19 = V_0;
		if ((!(((RuntimeObject*)(List_1_t002562281B6798CDCF0267381EF8CB414A349636*)__this) == ((RuntimeObject*)(RuntimeObject*)L_19))))
		{
			goto IL_009f;
		}
	}
	{
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_20 = __this->____items;
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_21 = __this->____items;
		int32_t L_22 = ___0_index;
		int32_t L_23 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_20, 0, (RuntimeArray*)L_21, L_22, L_23, NULL);
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_24 = __this->____items;
		int32_t L_25 = ___0_index;
		int32_t L_26 = V_1;
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_27 = __this->____items;
		int32_t L_28 = ___0_index;
		int32_t L_29 = __this->____size;
		int32_t L_30 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_24, ((int32_t)il2cpp_codegen_add(L_25, L_26)), (RuntimeArray*)L_27, ((int32_t)il2cpp_codegen_multiply(L_28, 2)), ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
		goto IL_00ac;
	}

IL_009f:
	{
		RuntimeObject* L_31 = V_0;
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_32 = __this->____items;
		int32_t L_33 = ___0_index;
		NullCheck(L_31);
		InterfaceActionInvoker2< EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_31, L_32, L_33);
	}

IL_00ac:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_34, L_35));
		goto IL_00fb;
	}

IL_00bc:
	{
		int32_t L_36 = ___0_index;
		int32_t L_37 = __this->____size;
		if ((((int32_t)L_36) >= ((int32_t)L_37)))
		{
			goto IL_00f4;
		}
	}
	{
		RuntimeObject* L_38 = ___1_collection;
		NullCheck(L_38);
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_38);
		V_2 = L_39;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ea:
			{
				{
					RuntimeObject* L_40 = V_2;
					if (!L_40)
					{
						goto IL_00f3;
					}
				}
				{
					RuntimeObject* L_41 = V_2;
					NullCheck((RuntimeObject*)L_41);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
				}

IL_00f3:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00e0_1;
			}

IL_00ce_1:
			{
				int32_t L_42 = ___0_index;
				int32_t L_43 = L_42;
				___0_index = ((int32_t)il2cpp_codegen_add(L_43, 1));
				RuntimeObject* L_44 = V_2;
				NullCheck(L_44);
				Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C L_45;
				L_45 = InterfaceFuncInvoker0< Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 40), L_44);
				List_1_Insert_m9D38FA896A57E0C98D3DF65BA8473AEE0A3CD791(__this, L_43, L_45, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
			}

IL_00e0_1:
			{
				RuntimeObject* L_46 = V_2;
				NullCheck((RuntimeObject*)L_46);
				bool L_47;
				L_47 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_46);
				if (L_47)
				{
					goto IL_00ce_1;
				}
			}
			{
				goto IL_00fb;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f4:
	{
		RuntimeObject* L_48 = ___1_collection;
		List_1_AddEnumerable_mFF6EE2023BF05E98F1D1F1A70991BE2B4768AC4F(__this, L_48, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
	}

IL_00fb:
	{
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m44E5984F69B2D9EA9EE1358190EF227882A111E8_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C L_0 = ___0_item;
		int32_t L_1;
		L_1 = List_1_IndexOf_m4FF31271D49A80AF3107DA1D8ED040B2D4FCFCB0(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		List_1_RemoveAt_m6B96153B37A55B46E855785C2112344AD5794A0A(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Remove_mB11683682FBA057A467E455DFF5DCF2110D964EE_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m35E7C62FFAEBC93EF01CED6E6128E48DCC7859A9(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Remove_m44E5984F69B2D9EA9EE1358190EF227882A111E8(__this, ((*(Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C*)((Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C*)(Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 47));
	}

IL_0015:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_m0B5DCC4B9894B8B80FC0F18954F703D30D7FB4FB_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, Predicate_1_tBB24C088B9F2C5E92B897C474555BEF1749C9053* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_tBB24C088B9F2C5E92B897C474555BEF1749C9053* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0011;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
	}

IL_0011:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_002e;
		}
	}
	{
		Predicate_1_tBB24C088B9F2C5E92B897C474555BEF1749C9053* L_4 = ___0_match;
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_5 = __this->____items;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_4);
		bool L_9;
		L_9 = Predicate_1_Invoke_m621503A57A4F629CFF8121C79F25B33B10F4743F_inline(L_4, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		if (!L_9)
		{
			goto IL_000d;
		}
	}

IL_002e:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0039;
		}
	}
	{
		return 0;
	}

IL_0039:
	{
		int32_t L_12 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		goto IL_0089;
	}

IL_003f:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0043:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->____size;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0060;
		}
	}
	{
		Predicate_1_tBB24C088B9F2C5E92B897C474555BEF1749C9053* L_16 = ___0_match;
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_17 = __this->____items;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_16);
		bool L_21;
		L_21 = Predicate_1_Invoke_m621503A57A4F629CFF8121C79F25B33B10F4743F_inline(L_16, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		if (L_21)
		{
			goto IL_003f;
		}
	}

IL_0060:
	{
		int32_t L_22 = V_1;
		int32_t L_23 = __this->____size;
		if ((((int32_t)L_22) >= ((int32_t)L_23)))
		{
			goto IL_0089;
		}
	}
	{
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_24 = __this->____items;
		int32_t L_25 = V_0;
		int32_t L_26 = L_25;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_27 = __this->____items;
		int32_t L_28 = V_1;
		int32_t L_29 = L_28;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		NullCheck(L_27);
		int32_t L_30 = L_29;
		Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C L_31 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C)L_31);
	}

IL_0089:
	{
		int32_t L_32 = V_1;
		int32_t L_33 = __this->____size;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0043;
		}
	}
	{
		goto IL_00ad;
	}

IL_00ad:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_0;
		int32_t L_36 = V_0;
		__this->____size = L_36;
		int32_t L_37 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_37, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m6B96153B37A55B46E855785C2112344AD5794A0A_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = ___0_index;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0042;
		}
	}
	{
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_5 = __this->____items;
		int32_t L_6 = ___0_index;
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		int32_t L_9 = __this->____size;
		int32_t L_10 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), (RuntimeArray*)L_7, L_8, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
	}

IL_0042:
	{
		goto IL_0063;
	}

IL_0063:
	{
		int32_t L_11 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_11, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m7FE3B4C1EC8D7F530D5E3C385754D636BDE2608E_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_6 = __this->____size;
		int32_t L_7 = __this->____size;
		int32_t L_8 = ___1_count;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->____size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_11 = __this->____items;
		int32_t L_12 = ___0_index;
		int32_t L_13 = ___1_count;
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = __this->____size;
		int32_t L_17 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, L_13)), (RuntimeArray*)L_14, L_15, ((int32_t)il2cpp_codegen_subtract(L_16, L_17)), NULL);
	}

IL_0066:
	{
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		goto IL_008d;
	}

IL_008d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mE1C1A7F594EAE2CBF629D82F4B44F4BDABBD2F0C_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_mCE791BD866BF0868DB63FCECFF18CB64098637CB_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		List_1_Reverse_m950FFC94E78985169AD84E695AB8FF4BD165F8CF(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m950FFC94E78985169AD84E695AB8FF4BD165F8CF_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		Array_Reverse_TisEntry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C_mE7426BAAA3CEC8C3CCBB645FB21FE54557D52F9C(L_6, L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
	}

IL_0038:
	{
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m8084848453ABAF700644C3E6130DC7E27F22A9EB_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_mCE791BD866BF0868DB63FCECFF18CB64098637CB_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		List_1_Sort_mE5156B14C2C026AFBEECDD5333728FEC80438861(__this, 0, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 50));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m699AE6A265058889194903F4745F8EA5AD9B1CA2_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_mCE791BD866BF0868DB63FCECFF18CB64098637CB_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		RuntimeObject* L_1 = ___0_comparer;
		List_1_Sort_mE5156B14C2C026AFBEECDD5333728FEC80438861(__this, 0, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 50));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mE5156B14C2C026AFBEECDD5333728FEC80438861_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		RuntimeObject* L_9 = ___2_comparer;
		Array_Sort_TisEntry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C_m3AFE97CE8F84EC5375C72D5426BA8B33DE5426DB(L_6, L_7, L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 51));
	}

IL_0039:
	{
		int32_t L_10 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_10, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m2A31F765535E72E3C2C1EAD424B00CE80BCAC204_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, Comparison_1_t3A8CE0813C27FE0CF267707DF0B6452ED64F3D1E* ___0_comparison, const RuntimeMethod* method) 
{
	{
		Comparison_1_t3A8CE0813C27FE0CF267707DF0B6452ED64F3D1E* L_0 = ___0_comparison;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)((int32_t)34), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_2 = __this->____items;
		int32_t L_3 = __this->____size;
		Comparison_1_t3A8CE0813C27FE0CF267707DF0B6452ED64F3D1E* L_4 = ___0_comparison;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 54));
		ArraySortHelper_1_Sort_m1067939443E7234328453DF9DC2F4EFB3246C66F(L_2, 0, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 53));
	}

IL_0026:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* List_1_ToArray_mF8421DA70E848693C7F98DB6DAD888411CEA5E8A_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, const RuntimeMethod* method) 
{
	EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_1 = ((List_1_t002562281B6798CDCF0267381EF8CB414A349636_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_3 = (EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA*)(EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_4 = __this->____items;
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_5 = V_0;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, 0, L_6, NULL);
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_TrimExcess_m93D379B07FCABC6673D79BAE64E0579EC0D66D1F_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_0 = __this->____items;
		NullCheck(L_0);
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(((double)((int32_t)(((RuntimeArray*)L_0)->max_length))), (0.90000000000000002))));
		int32_t L_1 = __this->____size;
		int32_t L_2 = V_0;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_3 = __this->____size;
		List_1_set_Capacity_m9CE5BF53682527AFBFE76F0524A4E218C53E3605(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_TrueForAll_mEA20202055948743F03D5111F93DAEB8BBE42AD7_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, Predicate_1_tBB24C088B9F2C5E92B897C474555BEF1749C9053* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Predicate_1_tBB24C088B9F2C5E92B897C474555BEF1749C9053* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0027;
	}

IL_000d:
	{
		Predicate_1_tBB24C088B9F2C5E92B897C474555BEF1749C9053* L_1 = ___0_match;
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_2 = __this->____items;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_1);
		bool L_6;
		L_6 = Predicate_1_Invoke_m621503A57A4F629CFF8121C79F25B33B10F4743F_inline(L_1, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		if (L_6)
		{
			goto IL_0023;
		}
	}
	{
		return (bool)0;
	}

IL_0023:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0027:
	{
		int32_t L_8 = V_0;
		int32_t L_9 = __this->____size;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_000d;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_mFF6EE2023BF05E98F1D1F1A70991BE2B4768AC4F_gshared (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		RuntimeObject* L_1 = ___0_enumerable;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_006c;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					NullCheck((RuntimeObject*)L_4);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
				}

IL_006c:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0059_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C L_6;
				L_6 = InterfaceFuncInvoker0< Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 40), L_5);
				V_1 = L_6;
				int32_t L_7 = __this->____size;
				EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_8 = __this->____items;
				NullCheck(L_8);
				if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
				{
					goto IL_003c_1;
				}
			}
			{
				int32_t L_9 = __this->____size;
				List_1_EnsureCapacity_mE8546716F3785A64B22FB07BBFC7C9EBAF996899(__this, ((int32_t)il2cpp_codegen_add(L_9, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
			}

IL_003c_1:
			{
				EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_10 = __this->____items;
				int32_t L_11 = __this->____size;
				V_2 = L_11;
				int32_t L_12 = V_2;
				__this->____size = ((int32_t)il2cpp_codegen_add(L_12, 1));
				int32_t L_13 = V_2;
				Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C L_14 = V_1;
				NullCheck(L_10);
				(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C)L_14);
			}

IL_0059_1:
			{
				RuntimeObject* L_15 = V_0;
				NullCheck((RuntimeObject*)L_15);
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_15);
				if (L_16)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_006d;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__cctor_m1CA31660B0FAD085C1E4AC706131F168BFD18F7E_gshared (const RuntimeMethod* method) 
{
	{
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_0 = (EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA*)(EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), (uint32_t)0);
		((List_1_t002562281B6798CDCF0267381EF8CB414A349636_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((List_1_t002562281B6798CDCF0267381EF8CB414A349636_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC49C17CAB67276BEA747913974860EBDE6C85A8D_gshared (List_1_tD9161C536DDAAEB60E4037F293E4A5441702ECFF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mF73607A68A57669C42163D887A9201CA92668AEC_gshared (List_1_tD9161C536DDAAEB60E4037F293E4A5441702ECFF* __this, int32_t ___0_size, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_size;
		List_1_Allocate_m33B573463575A1E41D03FCA89207B42020113080(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_GetEnumerator_mDAB563483FD83FBFB088285B94B48AD0E8A72850_gshared (List_1_tD9161C536DDAAEB60E4037F293E4A5441702ECFF* __this, const RuntimeMethod* method) 
{
	{
		U3CGetEnumeratorU3Ed__4_tD234F65AF1F5B370331DBB27E1BAB5B653D02519* L_0 = (U3CGetEnumeratorU3Ed__4_tD234F65AF1F5B370331DBB27E1BAB5B653D02519*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		U3CGetEnumeratorU3Ed__4__ctor_mEDB6CB096A0A5F6F6A00917882D1A5C6E8CDCAB2(L_0, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		U3CGetEnumeratorU3Ed__4_tD234F65AF1F5B370331DBB27E1BAB5B653D02519* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Datagram_tD135488AC89022CF443533716C9E0751E55B84CA List_1_get_Item_m319A15329C50896554E6843C7FD407B4157EF42D_gshared (List_1_tD9161C536DDAAEB60E4037F293E4A5441702ECFF* __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	{
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_0 = __this->___buffer;
		int32_t L_1 = ___0_i;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Datagram_tD135488AC89022CF443533716C9E0751E55B84CA L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m996D1C1A658785E1EC37C61F46E2A69CA4B3E166_gshared (List_1_tD9161C536DDAAEB60E4037F293E4A5441702ECFF* __this, int32_t ___0_i, Datagram_tD135488AC89022CF443533716C9E0751E55B84CA ___1_value, const RuntimeMethod* method) 
{
	{
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_0 = __this->___buffer;
		int32_t L_1 = ___0_i;
		Datagram_tD135488AC89022CF443533716C9E0751E55B84CA L_2 = ___1_value;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (Datagram_tD135488AC89022CF443533716C9E0751E55B84CA)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD520CFF295D68C5AD21D82C2E3AC8F2A18D6340E_gshared (List_1_tD9161C536DDAAEB60E4037F293E4A5441702ECFF* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_Get_mF0517230DD139CAC2A818A7E58DBEDBC64694FA9_gshared (List_1_tD9161C536DDAAEB60E4037F293E4A5441702ECFF* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_0 = __this->___buffer;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Datagram_tD135488AC89022CF443533716C9E0751E55B84CA L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		Datagram_tD135488AC89022CF443533716C9E0751E55B84CA L_4 = L_3;
		RuntimeObject* L_5 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6), &L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Allocate_m33B573463575A1E41D03FCA89207B42020113080_gshared (List_1_tD9161C536DDAAEB60E4037F293E4A5441702ECFF* __this, int32_t ___0_newSize, const RuntimeMethod* method) 
{
	DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* V_0 = NULL;
	{
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_1 = __this->___buffer;
		NullCheck(L_1);
		int32_t L_2 = ___0_newSize;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))) >= ((int32_t)L_2)))
		{
			goto IL_003f;
		}
	}

IL_0013:
	{
		int32_t L_3 = ___0_newSize;
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_4 = (DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3*)(DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 7), (uint32_t)L_3);
		V_0 = L_4;
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_5 = __this->___buffer;
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_6 = __this->___size;
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_7 = __this->___buffer;
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_8 = V_0;
		NullCheck((RuntimeArray*)L_7);
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_7, (RuntimeArray*)L_8, 0, NULL);
	}

IL_0038:
	{
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_9 = V_0;
		__this->___buffer = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)L_9);
	}

IL_003f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AllocateMore_m64237B3E6A965721B9EC4EB88DF4FDA10676BDB6_gshared (List_1_tD9161C536DDAAEB60E4037F293E4A5441702ECFF* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* V_1 = NULL;
	int32_t G_B3_0 = 0;
	{
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_1 = __this->___buffer;
		NullCheck(L_1);
		G_B3_0 = ((int32_t)(((int32_t)(((RuntimeArray*)L_1)->max_length))<<1));
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 0;
	}

IL_0015:
	{
		V_0 = G_B3_0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)32))))
		{
			goto IL_001e;
		}
	}
	{
		V_0 = ((int32_t)32);
	}

IL_001e:
	{
		int32_t L_3 = V_0;
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_4 = (DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3*)(DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 7), (uint32_t)L_3);
		V_1 = L_4;
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_5 = __this->___buffer;
		if (!L_5)
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_6 = __this->___size;
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0043;
		}
	}
	{
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_7 = __this->___buffer;
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_8 = V_1;
		NullCheck((RuntimeArray*)L_7);
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_7, (RuntimeArray*)L_8, 0, NULL);
	}

IL_0043:
	{
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_9 = V_1;
		__this->___buffer = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)L_9);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Resize_m53B1F1644EECFEB239DE2B872E8BA9177798C209_gshared (List_1_tD9161C536DDAAEB60E4037F293E4A5441702ECFF* __this, int32_t ___0_newSize, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___size;
		int32_t L_1 = ___0_newSize;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0032;
		}
	}
	{
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_2 = __this->___buffer;
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_3 = ___0_newSize;
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_4 = (DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3*)(DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 7), (uint32_t)L_3);
		__this->___buffer = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)L_4);
		goto IL_002b;
	}

IL_001f:
	{
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3** L_5 = (DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3**)(&__this->___buffer);
		int32_t L_6 = ___0_newSize;
		Array_Resize_TisDatagram_tD135488AC89022CF443533716C9E0751E55B84CA_m6C988423102F3BF8A4CCB19A8847428508A74D05(L_5, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
	}

IL_002b:
	{
		int32_t L_7 = ___0_newSize;
		__this->___size = L_7;
	}

IL_0032:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Trim_m458E1F3AB35B95C9C3C9E28470A0096CB12CAC1A_gshared (List_1_tD9161C536DDAAEB60E4037F293E4A5441702ECFF* __this, const RuntimeMethod* method) 
{
	DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->___size;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_1 = __this->___size;
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_2 = __this->___buffer;
		NullCheck(L_2);
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))
		{
			goto IL_005d;
		}
	}
	{
		int32_t L_3 = __this->___size;
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_4 = (DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3*)(DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 7), (uint32_t)L_3);
		V_0 = L_4;
		V_1 = 0;
		goto IL_0040;
	}

IL_0029:
	{
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_5 = V_0;
		int32_t L_6 = V_1;
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_7 = __this->___buffer;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Datagram_tD135488AC89022CF443533716C9E0751E55B84CA L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (Datagram_tD135488AC89022CF443533716C9E0751E55B84CA)L_10);
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0040:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = __this->___size;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0029;
		}
	}
	{
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_14 = V_0;
		__this->___buffer = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)L_14);
		return;
	}

IL_0051:
	{
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_15 = (DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3*)(DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 7), (uint32_t)0);
		__this->___buffer = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)L_15);
	}

IL_005d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m31E8403BF2247542E922466FD166F9364BC2C833_gshared (List_1_tD9161C536DDAAEB60E4037F293E4A5441702ECFF* __this, const RuntimeMethod* method) 
{
	{
		__this->___size = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m19A998A77657AAC391C6A2A5BAA49BCB7FB9AA8D_gshared (List_1_tD9161C536DDAAEB60E4037F293E4A5441702ECFF* __this, int32_t ___0_allocateSize, const RuntimeMethod* method) 
{
	{
		__this->___size = 0;
		int32_t L_0 = ___0_allocateSize;
		List_1_Allocate_m33B573463575A1E41D03FCA89207B42020113080(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Release_m055140CD8441A0CA8E873B10EAEC4780BFB0572A_gshared (List_1_tD9161C536DDAAEB60E4037F293E4A5441702ECFF* __this, const RuntimeMethod* method) 
{
	{
		__this->___size = 0;
		__this->___buffer = (DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)(DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_Expand_mBA491DAA9CB8D9867018E78BB4C1103FB9C832A7_gshared (List_1_tD9161C536DDAAEB60E4037F293E4A5441702ECFF* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->___size;
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_2 = __this->___buffer;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_001e;
		}
	}

IL_0018:
	{
		List_1_AllocateMore_m64237B3E6A965721B9EC4EB88DF4FDA10676BDB6(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001e:
	{
		int32_t L_3 = __this->___size;
		V_0 = L_3;
		int32_t L_4 = V_0;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_4, 1));
		int32_t L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_Expand_m8164B434E34772161BBDD5F1636D277D452C9B48_gshared (List_1_tD9161C536DDAAEB60E4037F293E4A5441702ECFF* __this, int32_t ___0_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = __this->___size;
		int32_t L_1 = __this->___size;
		int32_t L_2 = ___0_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_3 = __this->___buffer;
		if (!L_3)
		{
			G_B2_0 = L_0;
			goto IL_0029;
		}
		G_B1_0 = L_0;
	}
	{
		int32_t L_4 = __this->___size;
		int32_t L_5 = V_0;
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_6 = __this->___buffer;
		NullCheck(L_6);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_4, L_5))) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			G_B3_0 = G_B1_0;
			goto IL_0037;
		}
		G_B2_0 = G_B1_0;
	}

IL_0029:
	{
		int32_t L_7 = __this->___size;
		int32_t L_8 = V_0;
		List_1_Allocate_m33B573463575A1E41D03FCA89207B42020113080(__this, ((int32_t)il2cpp_codegen_add(L_7, L_8)), il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		G_B3_0 = G_B2_0;
	}

IL_0037:
	{
		int32_t L_9 = __this->___size;
		int32_t L_10 = ___0_count;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_9, L_10));
		return G_B3_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mDC097FCD15D3606D396A5BD528CA83C806259F14_gshared (List_1_tD9161C536DDAAEB60E4037F293E4A5441702ECFF* __this, Datagram_tD135488AC89022CF443533716C9E0751E55B84CA ___0_item, const RuntimeMethod* method) 
{
	{
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->___size;
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_2 = __this->___buffer;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_001e;
		}
	}

IL_0018:
	{
		List_1_AllocateMore_m64237B3E6A965721B9EC4EB88DF4FDA10676BDB6(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001e:
	{
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_3 = __this->___buffer;
		int32_t L_4 = __this->___size;
		Datagram_tD135488AC89022CF443533716C9E0751E55B84CA L_5 = ___0_item;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (Datagram_tD135488AC89022CF443533716C9E0751E55B84CA)L_5);
		int32_t L_6 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m749E3F16F52A705F4EF22260502A85F4B9E192E8_gshared (List_1_tD9161C536DDAAEB60E4037F293E4A5441702ECFF* __this, DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* ___0_items, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___size;
		int32_t L_1 = ___2_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_2 = __this->___buffer;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_3 = __this->___size;
		int32_t L_4 = V_0;
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_5 = __this->___buffer;
		NullCheck(L_5);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_3, L_4))) < ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))))
		{
			goto IL_0031;
		}
	}

IL_0023:
	{
		int32_t L_6 = __this->___size;
		int32_t L_7 = V_0;
		List_1_Allocate_m33B573463575A1E41D03FCA89207B42020113080(__this, ((int32_t)il2cpp_codegen_add(L_6, L_7)), il2cpp_rgctx_method(method->klass->rgctx_data, 0));
	}

IL_0031:
	{
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_8 = ___0_items;
		int32_t L_9 = ___1_offset;
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_10 = __this->___buffer;
		int32_t L_11 = __this->___size;
		int32_t L_12 = ___2_count;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, L_9, (RuntimeArray*)L_10, L_11, L_12, NULL);
		int32_t L_13 = __this->___size;
		int32_t L_14 = ___2_count;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_13, L_14));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6F4818CED88B632409D2289BAC233356E6F74016_gshared (List_1_tD9161C536DDAAEB60E4037F293E4A5441702ECFF* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->___size;
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_2 = __this->___buffer;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_001e;
		}
	}

IL_0018:
	{
		List_1_AllocateMore_m64237B3E6A965721B9EC4EB88DF4FDA10676BDB6(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001e:
	{
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_3 = __this->___buffer;
		int32_t L_4 = __this->___size;
		RuntimeObject* L_5 = ___0_item;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (Datagram_tD135488AC89022CF443533716C9E0751E55B84CA)((*(Datagram_tD135488AC89022CF443533716C9E0751E55B84CA*)((Datagram_tD135488AC89022CF443533716C9E0751E55B84CA*)(Datagram_tD135488AC89022CF443533716C9E0751E55B84CA*)UnBox(L_5, il2cpp_rgctx_data(method->klass->rgctx_data, 6))))));
		int32_t L_6 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Add_mD354FA12A2E6CACEB05DF2238DD0335A81413353_gshared (List_1_tD9161C536DDAAEB60E4037F293E4A5441702ECFF* __this, Datagram_tD135488AC89022CF443533716C9E0751E55B84CA ___0_item, bool ___1_unique, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___1_unique;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		Datagram_tD135488AC89022CF443533716C9E0751E55B84CA L_1 = ___0_item;
		bool L_2;
		L_2 = List_1_Contains_mA11774D84804C541AB834FE642A6A697E4BD76FC(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		return (bool)0;
	}

IL_000e:
	{
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_3 = __this->___buffer;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_4 = __this->___size;
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_5 = __this->___buffer;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_002c;
		}
	}

IL_0026:
	{
		List_1_AllocateMore_m64237B3E6A965721B9EC4EB88DF4FDA10676BDB6(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_002c:
	{
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_6 = __this->___buffer;
		int32_t L_7 = __this->___size;
		Datagram_tD135488AC89022CF443533716C9E0751E55B84CA L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Datagram_tD135488AC89022CF443533716C9E0751E55B84CA)L_8);
		int32_t L_9 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Add_m0BD1A66AD111EB53C7FE8318D34C7005BA1CD5FC_gshared (List_1_tD9161C536DDAAEB60E4037F293E4A5441702ECFF* __this, RuntimeObject* ___0_item, bool ___1_unique, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___1_unique;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = ___0_item;
		bool L_2;
		L_2 = List_1_Contains_mA11774D84804C541AB834FE642A6A697E4BD76FC(__this, ((*(Datagram_tD135488AC89022CF443533716C9E0751E55B84CA*)((Datagram_tD135488AC89022CF443533716C9E0751E55B84CA*)(Datagram_tD135488AC89022CF443533716C9E0751E55B84CA*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 6))))), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_3 = __this->___buffer;
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_4 = __this->___size;
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_5 = __this->___buffer;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0031;
		}
	}

IL_002b:
	{
		List_1_AllocateMore_m64237B3E6A965721B9EC4EB88DF4FDA10676BDB6(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_0031:
	{
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_6 = __this->___buffer;
		int32_t L_7 = __this->___size;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Datagram_tD135488AC89022CF443533716C9E0751E55B84CA)((*(Datagram_tD135488AC89022CF443533716C9E0751E55B84CA*)((Datagram_tD135488AC89022CF443533716C9E0751E55B84CA*)(Datagram_tD135488AC89022CF443533716C9E0751E55B84CA*)UnBox(L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 6))))));
		int32_t L_9 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m61250C0E3DA52560C55A705E712E151DACB701D9_gshared (List_1_tD9161C536DDAAEB60E4037F293E4A5441702ECFF* __this, int32_t ___0_index, Datagram_tD135488AC89022CF443533716C9E0751E55B84CA ___1_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->___size;
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_2 = __this->___buffer;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_001e;
		}
	}

IL_0018:
	{
		List_1_AllocateMore_m64237B3E6A965721B9EC4EB88DF4FDA10676BDB6(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001e:
	{
		int32_t L_3 = ___0_index;
		if ((((int32_t)L_3) <= ((int32_t)(-1))))
		{
			goto IL_0072;
		}
	}
	{
		int32_t L_4 = ___0_index;
		int32_t L_5 = __this->___size;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0072;
		}
	}
	{
		int32_t L_6 = __this->___size;
		V_0 = L_6;
		goto IL_0052;
	}

IL_0034:
	{
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_7 = __this->___buffer;
		int32_t L_8 = V_0;
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_9 = __this->___buffer;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		Datagram_tD135488AC89022CF443533716C9E0751E55B84CA L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (Datagram_tD135488AC89022CF443533716C9E0751E55B84CA)L_12);
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
	}

IL_0052:
	{
		int32_t L_14 = V_0;
		int32_t L_15 = ___0_index;
		if ((((int32_t)L_14) > ((int32_t)L_15)))
		{
			goto IL_0034;
		}
	}
	{
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_16 = __this->___buffer;
		int32_t L_17 = ___0_index;
		Datagram_tD135488AC89022CF443533716C9E0751E55B84CA L_18 = ___1_item;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (Datagram_tD135488AC89022CF443533716C9E0751E55B84CA)L_18);
		int32_t L_19 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_19, 1));
		return;
	}

IL_0072:
	{
		Datagram_tD135488AC89022CF443533716C9E0751E55B84CA L_20 = ___1_item;
		List_1_Add_mDC097FCD15D3606D396A5BD528CA83C806259F14(__this, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mA11774D84804C541AB834FE642A6A697E4BD76FC_gshared (List_1_tD9161C536DDAAEB60E4037F293E4A5441702ECFF* __this, Datagram_tD135488AC89022CF443533716C9E0751E55B84CA ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_0 = __this->___buffer;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		V_0 = 0;
		goto IL_0048;
	}

IL_000e:
	{
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_1 = __this->___buffer;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Datagram_tD135488AC89022CF443533716C9E0751E55B84CA L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
	}
	{
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_5 = __this->___buffer;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		Datagram_tD135488AC89022CF443533716C9E0751E55B84CA L_7 = ___0_item;
		Datagram_tD135488AC89022CF443533716C9E0751E55B84CA L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6), &L_8);
		Il2CppFakeBox<Datagram_tD135488AC89022CF443533716C9E0751E55B84CA> L_10(il2cpp_rgctx_data(method->klass->rgctx_data, 6), ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6))));
		bool L_11;
		L_11 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_10), L_9, NULL);
		if (!L_11)
		{
			goto IL_0044;
		}
	}
	{
		return (bool)1;
	}

IL_0044:
	{
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0048:
	{
		int32_t L_13 = V_0;
		int32_t L_14 = __this->___size;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_000e;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m9FB6FE9163568322E178318524F2AF331DDBE570_gshared (List_1_tD9161C536DDAAEB60E4037F293E4A5441702ECFF* __this, Datagram_tD135488AC89022CF443533716C9E0751E55B84CA ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_0 = __this->___buffer;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (-1);
	}

IL_000a:
	{
		V_0 = 0;
		goto IL_0048;
	}

IL_000e:
	{
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_1 = __this->___buffer;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Datagram_tD135488AC89022CF443533716C9E0751E55B84CA L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
	}
	{
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_5 = __this->___buffer;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		Datagram_tD135488AC89022CF443533716C9E0751E55B84CA L_7 = ___0_item;
		Datagram_tD135488AC89022CF443533716C9E0751E55B84CA L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6), &L_8);
		Il2CppFakeBox<Datagram_tD135488AC89022CF443533716C9E0751E55B84CA> L_10(il2cpp_rgctx_data(method->klass->rgctx_data, 6), ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6))));
		bool L_11;
		L_11 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_10), L_9, NULL);
		if (!L_11)
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_12 = V_0;
		return L_12;
	}

IL_0044:
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0048:
	{
		int32_t L_14 = V_0;
		int32_t L_15 = __this->___size;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_000e;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_mB5B224D620ECCAE8B4068720AC2F4777B052853F_gshared (List_1_tD9161C536DDAAEB60E4037F293E4A5441702ECFF* __this, Datagram_tD135488AC89022CF443533716C9E0751E55B84CA ___0_item, const RuntimeMethod* method) 
{
	EqualityComparer_1_t7DBAE97102605775DB56BD3370D361BBD64DE5D5* V_0 = NULL;
	int32_t V_1 = 0;
	{
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_006e;
		}
	}
	{
		EqualityComparer_1_t7DBAE97102605775DB56BD3370D361BBD64DE5D5* L_1;
		L_1 = EqualityComparer_1_get_Default_mADDE59D704337E529616736474432A412BF9946C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		V_0 = L_1;
		V_1 = 0;
		goto IL_0065;
	}

IL_0012:
	{
		EqualityComparer_1_t7DBAE97102605775DB56BD3370D361BBD64DE5D5* L_2 = V_0;
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_3 = __this->___buffer;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Datagram_tD135488AC89022CF443533716C9E0751E55B84CA L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		Datagram_tD135488AC89022CF443533716C9E0751E55B84CA L_7 = ___0_item;
		NullCheck(L_2);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Datagram_tD135488AC89022CF443533716C9E0751E55B84CA, Datagram_tD135488AC89022CF443533716C9E0751E55B84CA >::Invoke(8, L_2, L_6, L_7);
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10 = __this->___size;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_9, 1))) >= ((int32_t)L_10)))
		{
			goto IL_0051;
		}
	}
	{
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_11 = __this->___buffer;
		int32_t L_12 = V_1;
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_13 = __this->___buffer;
		int32_t L_14 = V_1;
		int32_t L_15 = __this->___size;
		int32_t L_16 = V_1;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, 1)), (RuntimeArray*)L_13, L_14, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_15, L_16)), 1)), NULL);
	}

IL_0051:
	{
		int32_t L_17 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
		return (bool)1;
	}

IL_0061:
	{
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0065:
	{
		int32_t L_19 = V_1;
		int32_t L_20 = __this->___size;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0012;
		}
	}

IL_006e:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m0B1AD5F90FD76F442BFA02BAD5F28C06B2823FBF_gshared (List_1_tD9161C536DDAAEB60E4037F293E4A5441702ECFF* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_1 = ___0_index;
		if ((((int32_t)L_1) <= ((int32_t)(-1))))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_2 = ___0_index;
		int32_t L_3 = __this->___size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_4 = ___0_index;
		int32_t L_5 = __this->___size;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_4, 1))) >= ((int32_t)L_5)))
		{
			goto IL_003f;
		}
	}
	{
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_6 = __this->___buffer;
		int32_t L_7 = ___0_index;
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_8 = __this->___buffer;
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->___size;
		int32_t L_11 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, ((int32_t)il2cpp_codegen_add(L_7, 1)), (RuntimeArray*)L_8, L_9, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_10, L_11)), 1)), NULL);
	}

IL_003f:
	{
		int32_t L_12 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
	}

IL_004d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_mE29475090CA0A743D19969ECB72FB9274951A93B_gshared (List_1_tD9161C536DDAAEB60E4037F293E4A5441702ECFF* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = ___1_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		int32_t L_2 = V_0;
		int32_t L_3 = __this->___size;
		if ((((int32_t)L_2) <= ((int32_t)L_3)))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_4 = __this->___size;
		V_0 = L_4;
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_index;
		___1_count = ((int32_t)il2cpp_codegen_subtract(L_5, L_6));
	}

IL_0019:
	{
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_7 = __this->___buffer;
		if (!L_7)
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_8 = ___0_index;
		if ((((int32_t)L_8) <= ((int32_t)(-1))))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->___size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_11 = ___0_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) >= ((int32_t)L_12)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_13 = V_0;
		int32_t L_14 = __this->___size;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_13, 1))) >= ((int32_t)L_14)))
		{
			goto IL_0058;
		}
	}
	{
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_15 = __this->___buffer;
		int32_t L_16 = V_0;
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_17 = __this->___buffer;
		int32_t L_18 = ___0_index;
		int32_t L_19 = __this->___size;
		int32_t L_20 = V_0;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, L_16, (RuntimeArray*)L_17, L_18, ((int32_t)il2cpp_codegen_subtract(L_19, L_20)), NULL);
	}

IL_0058:
	{
		int32_t L_21 = __this->___size;
		int32_t L_22 = ___1_count;
		__this->___size = ((int32_t)il2cpp_codegen_subtract(L_21, L_22));
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Datagram_tD135488AC89022CF443533716C9E0751E55B84CA List_1_Pop_m0497AA15B236BD7E5FE85E3C118CCF1DAE7CB06C_gshared (List_1_tD9161C536DDAAEB60E4037F293E4A5441702ECFF* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Datagram_tD135488AC89022CF443533716C9E0751E55B84CA V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_1 = __this->___size;
		if (!L_1)
		{
			goto IL_0047;
		}
	}
	{
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_2 = __this->___buffer;
		int32_t L_3 = __this->___size;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		int32_t L_4 = V_0;
		__this->___size = L_4;
		int32_t L_5 = V_0;
		NullCheck(L_2);
		int32_t L_6 = L_5;
		Datagram_tD135488AC89022CF443533716C9E0751E55B84CA L_7 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_8 = __this->___buffer;
		int32_t L_9 = __this->___size;
		il2cpp_codegen_initobj((&V_1), sizeof(Datagram_tD135488AC89022CF443533716C9E0751E55B84CA));
		Datagram_tD135488AC89022CF443533716C9E0751E55B84CA L_10 = V_1;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (Datagram_tD135488AC89022CF443533716C9E0751E55B84CA)L_10);
		return L_7;
	}

IL_0047:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Datagram_tD135488AC89022CF443533716C9E0751E55B84CA));
		Datagram_tD135488AC89022CF443533716C9E0751E55B84CA L_11 = V_1;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* List_1_ToArray_m57A108381FC2A46EB3694BB9F86110233F842524_gshared (List_1_tD9161C536DDAAEB60E4037F293E4A5441702ECFF* __this, const RuntimeMethod* method) 
{
	{
		List_1_Trim_m458E1F3AB35B95C9C3C9E28470A0096CB12CAC1A(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_0 = __this->___buffer;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mFADDD373C331ECA314828F9F697CAA63D0401C23_gshared (List_1_tD9161C536DDAAEB60E4037F293E4A5441702ECFF* __this, CompareFunc_t206BA89222C56EFDFEE5F338F89010A899541F98* ___0_comparer, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	Datagram_tD135488AC89022CF443533716C9E0751E55B84CA V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t G_B8_0 = 0;
	{
		V_0 = 0;
		int32_t L_0 = __this->___size;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		V_2 = (bool)1;
		goto IL_0089;
	}

IL_000f:
	{
		V_2 = (bool)0;
		int32_t L_1 = V_0;
		V_3 = L_1;
		goto IL_0085;
	}

IL_0015:
	{
		CompareFunc_t206BA89222C56EFDFEE5F338F89010A899541F98* L_2 = ___0_comparer;
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_3 = __this->___buffer;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Datagram_tD135488AC89022CF443533716C9E0751E55B84CA L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_7 = __this->___buffer;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		Datagram_tD135488AC89022CF443533716C9E0751E55B84CA L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_2);
		int32_t L_11;
		L_11 = CompareFunc_Invoke_m1364B63389088E237069575A65370C42D24D6050_inline(L_2, L_6, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		if ((((int32_t)L_11) <= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_12 = __this->___buffer;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		Datagram_tD135488AC89022CF443533716C9E0751E55B84CA L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_4 = L_15;
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_16 = __this->___buffer;
		int32_t L_17 = V_3;
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_18 = __this->___buffer;
		int32_t L_19 = V_3;
		NullCheck(L_18);
		int32_t L_20 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		Datagram_tD135488AC89022CF443533716C9E0751E55B84CA L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (Datagram_tD135488AC89022CF443533716C9E0751E55B84CA)L_21);
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_22 = __this->___buffer;
		int32_t L_23 = V_3;
		Datagram_tD135488AC89022CF443533716C9E0751E55B84CA L_24 = V_4;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_23, 1))), (Datagram_tD135488AC89022CF443533716C9E0751E55B84CA)L_24);
		V_2 = (bool)1;
		goto IL_0081;
	}

IL_0074:
	{
		bool L_25 = V_2;
		if (L_25)
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_26 = V_3;
		if (!L_26)
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_27 = V_3;
		G_B8_0 = ((int32_t)il2cpp_codegen_subtract(L_27, 1));
		goto IL_0080;
	}

IL_007f:
	{
		G_B8_0 = 0;
	}

IL_0080:
	{
		V_0 = G_B8_0;
	}

IL_0081:
	{
		int32_t L_28 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0085:
	{
		int32_t L_29 = V_3;
		int32_t L_30 = V_1;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_0015;
		}
	}

IL_0089:
	{
		bool L_31 = V_2;
		if (L_31)
		{
			goto IL_000f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m788CF30A07BE8B74960A06B1F5B7388321B853F5_gshared (List_1_tD9161C536DDAAEB60E4037F293E4A5441702ECFF* __this, CompareFunc2_t98BAE01C5CA178163530C2F03590C69F6FE332C4* ___0_comparer, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	Datagram_tD135488AC89022CF443533716C9E0751E55B84CA V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t G_B8_0 = 0;
	{
		V_0 = 0;
		int32_t L_0 = __this->___size;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		V_2 = (bool)1;
		goto IL_0089;
	}

IL_000f:
	{
		V_2 = (bool)0;
		int32_t L_1 = V_0;
		V_3 = L_1;
		goto IL_0085;
	}

IL_0015:
	{
		CompareFunc2_t98BAE01C5CA178163530C2F03590C69F6FE332C4* L_2 = ___0_comparer;
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_3 = __this->___buffer;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_5 = __this->___buffer;
		int32_t L_6 = V_3;
		NullCheck(L_5);
		NullCheck(L_2);
		int32_t L_7;
		L_7 = CompareFunc2_Invoke_m19F8BA2B4D040F7E75D631C269C7CA4E4576E13D_inline(L_2, ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4))), ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_6, 1))))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_8 = __this->___buffer;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		Datagram_tD135488AC89022CF443533716C9E0751E55B84CA L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_4 = L_11;
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_12 = __this->___buffer;
		int32_t L_13 = V_3;
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_14 = __this->___buffer;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		Datagram_tD135488AC89022CF443533716C9E0751E55B84CA L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (Datagram_tD135488AC89022CF443533716C9E0751E55B84CA)L_17);
		DatagramU5BU5D_tDCE726B7B47B207AEC19ED3D4539214A066929D3* L_18 = __this->___buffer;
		int32_t L_19 = V_3;
		Datagram_tD135488AC89022CF443533716C9E0751E55B84CA L_20 = V_4;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_19, 1))), (Datagram_tD135488AC89022CF443533716C9E0751E55B84CA)L_20);
		V_2 = (bool)1;
		goto IL_0081;
	}

IL_0074:
	{
		bool L_21 = V_2;
		if (L_21)
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_22 = V_3;
		if (!L_22)
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_23 = V_3;
		G_B8_0 = ((int32_t)il2cpp_codegen_subtract(L_23, 1));
		goto IL_0080;
	}

IL_007f:
	{
		G_B8_0 = 0;
	}

IL_0080:
	{
		V_0 = G_B8_0;
	}

IL_0081:
	{
		int32_t L_24 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0085:
	{
		int32_t L_25 = V_3;
		int32_t L_26 = V_1;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0015;
		}
	}

IL_0089:
	{
		bool L_27 = V_2;
		if (L_27)
		{
			goto IL_000f;
		}
	}
	{
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC9AECBEEE5C6622B7A528BCA1D4FD1F0B6074463_gshared (List_1_t459EC7969587CD113F95D6E4B78FC6FC1B6DCB87* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mE3B76F8F84A42A988611641056C6B10C1C22C059_gshared (List_1_t459EC7969587CD113F95D6E4B78FC6FC1B6DCB87* __this, int32_t ___0_size, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_size;
		List_1_Allocate_m308FFC6C728F24EC770894A3570F8232E84A036F(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_GetEnumerator_mC2F5423A624A67A8695C7C39495EA2017838D9B2_gshared (List_1_t459EC7969587CD113F95D6E4B78FC6FC1B6DCB87* __this, const RuntimeMethod* method) 
{
	{
		U3CGetEnumeratorU3Ed__4_t012650383A2904CA6611BBD4A26BDB24EC48C3F4* L_0 = (U3CGetEnumeratorU3Ed__4_t012650383A2904CA6611BBD4A26BDB24EC48C3F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		U3CGetEnumeratorU3Ed__4__ctor_mC1B555174D49CB2C319EF7020E7E513B12E09244(L_0, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		U3CGetEnumeratorU3Ed__4_t012650383A2904CA6611BBD4A26BDB24EC48C3F4* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Item_mF302430E0110D9D06C94B5490BD1C1249D71E969_gshared (List_1_t459EC7969587CD113F95D6E4B78FC6FC1B6DCB87* __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___buffer;
		int32_t L_1 = ___0_i;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_mA5EAE58E818BBE35137B089D55519E6C348FD2A9_gshared (List_1_t459EC7969587CD113F95D6E4B78FC6FC1B6DCB87* __this, int32_t ___0_i, int32_t ___1_value, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___buffer;
		int32_t L_1 = ___0_i;
		int32_t L_2 = ___1_value;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (int32_t)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m60343623816E8B0484502BDCF6FB749AB203B204_gshared (List_1_t459EC7969587CD113F95D6E4B78FC6FC1B6DCB87* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_Get_m5D72268680BC86C6F767A543B9C0242ACF867078_gshared (List_1_t459EC7969587CD113F95D6E4B78FC6FC1B6DCB87* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___buffer;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6), &L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Allocate_m308FFC6C728F24EC770894A3570F8232E84A036F_gshared (List_1_t459EC7969587CD113F95D6E4B78FC6FC1B6DCB87* __this, int32_t ___0_newSize, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->___buffer;
		NullCheck(L_1);
		int32_t L_2 = ___0_newSize;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))) >= ((int32_t)L_2)))
		{
			goto IL_003f;
		}
	}

IL_0013:
	{
		int32_t L_3 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 7), (uint32_t)L_3);
		V_0 = L_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->___buffer;
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_6 = __this->___size;
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->___buffer;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = V_0;
		NullCheck((RuntimeArray*)L_7);
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_7, (RuntimeArray*)L_8, 0, NULL);
	}

IL_0038:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_0;
		__this->___buffer = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)L_9);
	}

IL_003f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AllocateMore_mB3387E0C0D22F845A930DD18C41105805E83464A_gshared (List_1_t459EC7969587CD113F95D6E4B78FC6FC1B6DCB87* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	int32_t G_B3_0 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->___buffer;
		NullCheck(L_1);
		G_B3_0 = ((int32_t)(((int32_t)(((RuntimeArray*)L_1)->max_length))<<1));
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 0;
	}

IL_0015:
	{
		V_0 = G_B3_0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)32))))
		{
			goto IL_001e;
		}
	}
	{
		V_0 = ((int32_t)32);
	}

IL_001e:
	{
		int32_t L_3 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 7), (uint32_t)L_3);
		V_1 = L_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->___buffer;
		if (!L_5)
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_6 = __this->___size;
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0043;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->___buffer;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = V_1;
		NullCheck((RuntimeArray*)L_7);
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_7, (RuntimeArray*)L_8, 0, NULL);
	}

IL_0043:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		__this->___buffer = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)L_9);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Resize_mAD5B2489D760BA45A9F57E9480DBB67131FD3FC1_gshared (List_1_t459EC7969587CD113F95D6E4B78FC6FC1B6DCB87* __this, int32_t ___0_newSize, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___size;
		int32_t L_1 = ___0_newSize;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0032;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->___buffer;
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_3 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 7), (uint32_t)L_3);
		__this->___buffer = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)L_4);
		goto IL_002b;
	}

IL_001f:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** L_5 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C**)(&__this->___buffer);
		int32_t L_6 = ___0_newSize;
		Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6BAA7BD6F22421B894347B1476C37052FAC6C916(L_5, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
	}

IL_002b:
	{
		int32_t L_7 = ___0_newSize;
		__this->___size = L_7;
	}

IL_0032:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Trim_mE4BA2A6929F26C01639037E86BB0889108EFAEB1_gshared (List_1_t459EC7969587CD113F95D6E4B78FC6FC1B6DCB87* __this, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->___size;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_1 = __this->___size;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->___buffer;
		NullCheck(L_2);
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))
		{
			goto IL_005d;
		}
	}
	{
		int32_t L_3 = __this->___size;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 7), (uint32_t)L_3);
		V_0 = L_4;
		V_1 = 0;
		goto IL_0040;
	}

IL_0029:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = V_0;
		int32_t L_6 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->___buffer;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		int32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (int32_t)L_10);
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0040:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = __this->___size;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0029;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_0;
		__this->___buffer = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)L_14);
		return;
	}

IL_0051:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 7), (uint32_t)0);
		__this->___buffer = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)L_15);
	}

IL_005d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m40CF70E98143A98A6B6DF0690FD8429A0F7BBB4D_gshared (List_1_t459EC7969587CD113F95D6E4B78FC6FC1B6DCB87* __this, const RuntimeMethod* method) 
{
	{
		__this->___size = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m4816225D91DB638AE390F01BE80841832601D9C8_gshared (List_1_t459EC7969587CD113F95D6E4B78FC6FC1B6DCB87* __this, int32_t ___0_allocateSize, const RuntimeMethod* method) 
{
	{
		__this->___size = 0;
		int32_t L_0 = ___0_allocateSize;
		List_1_Allocate_m308FFC6C728F24EC770894A3570F8232E84A036F(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Release_m4D8DCCD4F5585C579A6761B6B20C938BCF913F77_gshared (List_1_t459EC7969587CD113F95D6E4B78FC6FC1B6DCB87* __this, const RuntimeMethod* method) 
{
	{
		__this->___size = 0;
		__this->___buffer = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_Expand_mAAEAA4E836F9CC5DAA0EC7575C7907F96807CCE6_gshared (List_1_t459EC7969587CD113F95D6E4B78FC6FC1B6DCB87* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->___size;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->___buffer;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_001e;
		}
	}

IL_0018:
	{
		List_1_AllocateMore_mB3387E0C0D22F845A930DD18C41105805E83464A(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001e:
	{
		int32_t L_3 = __this->___size;
		V_0 = L_3;
		int32_t L_4 = V_0;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_4, 1));
		int32_t L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_Expand_m2132008D9F632D3EC774B2DD2EC75C71B5CE92B6_gshared (List_1_t459EC7969587CD113F95D6E4B78FC6FC1B6DCB87* __this, int32_t ___0_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = __this->___size;
		int32_t L_1 = __this->___size;
		int32_t L_2 = ___0_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->___buffer;
		if (!L_3)
		{
			G_B2_0 = L_0;
			goto IL_0029;
		}
		G_B1_0 = L_0;
	}
	{
		int32_t L_4 = __this->___size;
		int32_t L_5 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->___buffer;
		NullCheck(L_6);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_4, L_5))) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			G_B3_0 = G_B1_0;
			goto IL_0037;
		}
		G_B2_0 = G_B1_0;
	}

IL_0029:
	{
		int32_t L_7 = __this->___size;
		int32_t L_8 = V_0;
		List_1_Allocate_m308FFC6C728F24EC770894A3570F8232E84A036F(__this, ((int32_t)il2cpp_codegen_add(L_7, L_8)), il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		G_B3_0 = G_B2_0;
	}

IL_0037:
	{
		int32_t L_9 = __this->___size;
		int32_t L_10 = ___0_count;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_9, L_10));
		return G_B3_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m32FB6144EEACF837838D11E9A805DA6FF5E3B027_gshared (List_1_t459EC7969587CD113F95D6E4B78FC6FC1B6DCB87* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->___size;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->___buffer;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_001e;
		}
	}

IL_0018:
	{
		List_1_AllocateMore_mB3387E0C0D22F845A930DD18C41105805E83464A(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->___buffer;
		int32_t L_4 = __this->___size;
		int32_t L_5 = ___0_item;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (int32_t)L_5);
		int32_t L_6 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE01FD589A2778CE1AC281D2246C82E70562241DD_gshared (List_1_t459EC7969587CD113F95D6E4B78FC6FC1B6DCB87* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_items, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___size;
		int32_t L_1 = ___2_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->___buffer;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_3 = __this->___size;
		int32_t L_4 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->___buffer;
		NullCheck(L_5);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_3, L_4))) < ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))))
		{
			goto IL_0031;
		}
	}

IL_0023:
	{
		int32_t L_6 = __this->___size;
		int32_t L_7 = V_0;
		List_1_Allocate_m308FFC6C728F24EC770894A3570F8232E84A036F(__this, ((int32_t)il2cpp_codegen_add(L_6, L_7)), il2cpp_rgctx_method(method->klass->rgctx_data, 0));
	}

IL_0031:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = ___0_items;
		int32_t L_9 = ___1_offset;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->___buffer;
		int32_t L_11 = __this->___size;
		int32_t L_12 = ___2_count;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, L_9, (RuntimeArray*)L_10, L_11, L_12, NULL);
		int32_t L_13 = __this->___size;
		int32_t L_14 = ___2_count;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_13, L_14));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m1B3D438E6C3EF4888E75F78F9A781A88AC5550FA_gshared (List_1_t459EC7969587CD113F95D6E4B78FC6FC1B6DCB87* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->___size;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->___buffer;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_001e;
		}
	}

IL_0018:
	{
		List_1_AllocateMore_mB3387E0C0D22F845A930DD18C41105805E83464A(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->___buffer;
		int32_t L_4 = __this->___size;
		RuntimeObject* L_5 = ___0_item;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (int32_t)((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_5, il2cpp_rgctx_data(method->klass->rgctx_data, 6))))));
		int32_t L_6 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Add_mB32CD47C9B08F4F1DD7981F7A641D1B7EDF7FCC1_gshared (List_1_t459EC7969587CD113F95D6E4B78FC6FC1B6DCB87* __this, int32_t ___0_item, bool ___1_unique, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___1_unique;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_1 = ___0_item;
		bool L_2;
		L_2 = List_1_Contains_mF2BB5BF456E07C864A2B65ECFD98DA62467EA633(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		return (bool)0;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->___buffer;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_4 = __this->___size;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->___buffer;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_002c;
		}
	}

IL_0026:
	{
		List_1_AllocateMore_mB3387E0C0D22F845A930DD18C41105805E83464A(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_002c:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->___buffer;
		int32_t L_7 = __this->___size;
		int32_t L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (int32_t)L_8);
		int32_t L_9 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Add_m27AFCA2AC23CD89D3AA214F9608646C5AB2422A4_gshared (List_1_t459EC7969587CD113F95D6E4B78FC6FC1B6DCB87* __this, RuntimeObject* ___0_item, bool ___1_unique, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___1_unique;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = ___0_item;
		bool L_2;
		L_2 = List_1_Contains_mF2BB5BF456E07C864A2B65ECFD98DA62467EA633(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 6))))), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->___buffer;
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_4 = __this->___size;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->___buffer;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0031;
		}
	}

IL_002b:
	{
		List_1_AllocateMore_mB3387E0C0D22F845A930DD18C41105805E83464A(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_0031:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->___buffer;
		int32_t L_7 = __this->___size;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (int32_t)((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 6))))));
		int32_t L_9 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mD2BA1CBD0301D669BD700919A2895F7987030D25_gshared (List_1_t459EC7969587CD113F95D6E4B78FC6FC1B6DCB87* __this, int32_t ___0_index, int32_t ___1_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->___size;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->___buffer;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_001e;
		}
	}

IL_0018:
	{
		List_1_AllocateMore_mB3387E0C0D22F845A930DD18C41105805E83464A(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001e:
	{
		int32_t L_3 = ___0_index;
		if ((((int32_t)L_3) <= ((int32_t)(-1))))
		{
			goto IL_0072;
		}
	}
	{
		int32_t L_4 = ___0_index;
		int32_t L_5 = __this->___size;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0072;
		}
	}
	{
		int32_t L_6 = __this->___size;
		V_0 = L_6;
		goto IL_0052;
	}

IL_0034:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->___buffer;
		int32_t L_8 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->___buffer;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (int32_t)L_12);
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
	}

IL_0052:
	{
		int32_t L_14 = V_0;
		int32_t L_15 = ___0_index;
		if ((((int32_t)L_14) > ((int32_t)L_15)))
		{
			goto IL_0034;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = __this->___buffer;
		int32_t L_17 = ___0_index;
		int32_t L_18 = ___1_item;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (int32_t)L_18);
		int32_t L_19 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_19, 1));
		return;
	}

IL_0072:
	{
		int32_t L_20 = ___1_item;
		List_1_Add_m32FB6144EEACF837838D11E9A805DA6FF5E3B027(__this, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mF2BB5BF456E07C864A2B65ECFD98DA62467EA633_gshared (List_1_t459EC7969587CD113F95D6E4B78FC6FC1B6DCB87* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___buffer;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		V_0 = 0;
		goto IL_0048;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->___buffer;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->___buffer;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = ___0_item;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6), &L_8);
		bool L_10;
		L_10 = Int32_Equals_m089564150E8AF7C63B419427E2E57E3420659B1B(((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6))), L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0044;
		}
	}
	{
		return (bool)1;
	}

IL_0044:
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0048:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->___size;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_000e;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m29691BA608E77DA2AC47E320CA97426C59E9B5BA_gshared (List_1_t459EC7969587CD113F95D6E4B78FC6FC1B6DCB87* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___buffer;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (-1);
	}

IL_000a:
	{
		V_0 = 0;
		goto IL_0048;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->___buffer;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->___buffer;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = ___0_item;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6), &L_8);
		bool L_10;
		L_10 = Int32_Equals_m089564150E8AF7C63B419427E2E57E3420659B1B(((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6))), L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_11 = V_0;
		return L_11;
	}

IL_0044:
	{
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0048:
	{
		int32_t L_13 = V_0;
		int32_t L_14 = __this->___size;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_000e;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m72B40D1DF0BA8F15B8830611925816583EDE009C_gshared (List_1_t459EC7969587CD113F95D6E4B78FC6FC1B6DCB87* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_006e;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_1;
		L_1 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		V_0 = L_1;
		V_1 = 0;
		goto IL_0065;
	}

IL_0012:
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->___buffer;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		int32_t L_7 = ___0_item;
		NullCheck(L_2);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_2, L_6, L_7);
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10 = __this->___size;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_9, 1))) >= ((int32_t)L_10)))
		{
			goto IL_0051;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->___buffer;
		int32_t L_12 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->___buffer;
		int32_t L_14 = V_1;
		int32_t L_15 = __this->___size;
		int32_t L_16 = V_1;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, 1)), (RuntimeArray*)L_13, L_14, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_15, L_16)), 1)), NULL);
	}

IL_0051:
	{
		int32_t L_17 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
		return (bool)1;
	}

IL_0061:
	{
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0065:
	{
		int32_t L_19 = V_1;
		int32_t L_20 = __this->___size;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0012;
		}
	}

IL_006e:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mF0F6F4BAB4E9EC6DD8D2ABBA54D952764BCB302B_gshared (List_1_t459EC7969587CD113F95D6E4B78FC6FC1B6DCB87* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_1 = ___0_index;
		if ((((int32_t)L_1) <= ((int32_t)(-1))))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_2 = ___0_index;
		int32_t L_3 = __this->___size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_4 = ___0_index;
		int32_t L_5 = __this->___size;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_4, 1))) >= ((int32_t)L_5)))
		{
			goto IL_003f;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->___buffer;
		int32_t L_7 = ___0_index;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->___buffer;
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->___size;
		int32_t L_11 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, ((int32_t)il2cpp_codegen_add(L_7, 1)), (RuntimeArray*)L_8, L_9, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_10, L_11)), 1)), NULL);
	}

IL_003f:
	{
		int32_t L_12 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
	}

IL_004d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m0AE339C223CAFA10770549AF1A4F4720474EF244_gshared (List_1_t459EC7969587CD113F95D6E4B78FC6FC1B6DCB87* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = ___1_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		int32_t L_2 = V_0;
		int32_t L_3 = __this->___size;
		if ((((int32_t)L_2) <= ((int32_t)L_3)))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_4 = __this->___size;
		V_0 = L_4;
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_index;
		___1_count = ((int32_t)il2cpp_codegen_subtract(L_5, L_6));
	}

IL_0019:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->___buffer;
		if (!L_7)
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_8 = ___0_index;
		if ((((int32_t)L_8) <= ((int32_t)(-1))))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->___size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_11 = ___0_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) >= ((int32_t)L_12)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_13 = V_0;
		int32_t L_14 = __this->___size;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_13, 1))) >= ((int32_t)L_14)))
		{
			goto IL_0058;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = __this->___buffer;
		int32_t L_16 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = __this->___buffer;
		int32_t L_18 = ___0_index;
		int32_t L_19 = __this->___size;
		int32_t L_20 = V_0;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, L_16, (RuntimeArray*)L_17, L_18, ((int32_t)il2cpp_codegen_subtract(L_19, L_20)), NULL);
	}

IL_0058:
	{
		int32_t L_21 = __this->___size;
		int32_t L_22 = ___1_count;
		__this->___size = ((int32_t)il2cpp_codegen_subtract(L_21, L_22));
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_Pop_mCB724DCBBE138C0F6342A932EE7635BFD52DB995_gshared (List_1_t459EC7969587CD113F95D6E4B78FC6FC1B6DCB87* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_1 = __this->___size;
		if (!L_1)
		{
			goto IL_0047;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->___buffer;
		int32_t L_3 = __this->___size;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		int32_t L_4 = V_0;
		__this->___size = L_4;
		int32_t L_5 = V_0;
		NullCheck(L_2);
		int32_t L_6 = L_5;
		int32_t L_7 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->___buffer;
		int32_t L_9 = __this->___size;
		il2cpp_codegen_initobj((&V_1), sizeof(int32_t));
		int32_t L_10 = V_1;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (int32_t)L_10);
		return L_7;
	}

IL_0047:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(int32_t));
		int32_t L_11 = V_1;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* List_1_ToArray_m14F5F385525E14D8495D63EA3E2B366932DF8FB3_gshared (List_1_t459EC7969587CD113F95D6E4B78FC6FC1B6DCB87* __this, const RuntimeMethod* method) 
{
	{
		List_1_Trim_mE4BA2A6929F26C01639037E86BB0889108EFAEB1(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___buffer;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m4479998C0EADF4A6C3EF445993CC8F8BB03D683B_gshared (List_1_t459EC7969587CD113F95D6E4B78FC6FC1B6DCB87* __this, CompareFunc_tC2B7EDBB83306D2599B2D16F41737BC8D902A8D2* ___0_comparer, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t G_B8_0 = 0;
	{
		V_0 = 0;
		int32_t L_0 = __this->___size;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		V_2 = (bool)1;
		goto IL_0089;
	}

IL_000f:
	{
		V_2 = (bool)0;
		int32_t L_1 = V_0;
		V_3 = L_1;
		goto IL_0085;
	}

IL_0015:
	{
		CompareFunc_tC2B7EDBB83306D2599B2D16F41737BC8D902A8D2* L_2 = ___0_comparer;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->___buffer;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->___buffer;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		int32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_2);
		int32_t L_11;
		L_11 = CompareFunc_Invoke_mF6F08E54B282667D5702560D05C662821E3F8620_inline(L_2, L_6, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		if ((((int32_t)L_11) <= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->___buffer;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		int32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_4 = L_15;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = __this->___buffer;
		int32_t L_17 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = __this->___buffer;
		int32_t L_19 = V_3;
		NullCheck(L_18);
		int32_t L_20 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		int32_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (int32_t)L_21);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = __this->___buffer;
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_23, 1))), (int32_t)L_24);
		V_2 = (bool)1;
		goto IL_0081;
	}

IL_0074:
	{
		bool L_25 = V_2;
		if (L_25)
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_26 = V_3;
		if (!L_26)
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_27 = V_3;
		G_B8_0 = ((int32_t)il2cpp_codegen_subtract(L_27, 1));
		goto IL_0080;
	}

IL_007f:
	{
		G_B8_0 = 0;
	}

IL_0080:
	{
		V_0 = G_B8_0;
	}

IL_0081:
	{
		int32_t L_28 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0085:
	{
		int32_t L_29 = V_3;
		int32_t L_30 = V_1;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_0015;
		}
	}

IL_0089:
	{
		bool L_31 = V_2;
		if (L_31)
		{
			goto IL_000f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m5EFC1DD8971DC0246B14221714C5EA85A4D17C95_gshared (List_1_t459EC7969587CD113F95D6E4B78FC6FC1B6DCB87* __this, CompareFunc2_tC86C57C64D916CAEE553EA7A2A1985D43A64A750* ___0_comparer, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t G_B8_0 = 0;
	{
		V_0 = 0;
		int32_t L_0 = __this->___size;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		V_2 = (bool)1;
		goto IL_0089;
	}

IL_000f:
	{
		V_2 = (bool)0;
		int32_t L_1 = V_0;
		V_3 = L_1;
		goto IL_0085;
	}

IL_0015:
	{
		CompareFunc2_tC86C57C64D916CAEE553EA7A2A1985D43A64A750* L_2 = ___0_comparer;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->___buffer;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->___buffer;
		int32_t L_6 = V_3;
		NullCheck(L_5);
		NullCheck(L_2);
		int32_t L_7;
		L_7 = CompareFunc2_Invoke_m5A7EB4B6126FEA1B206EF583C39A60AE73972F54_inline(L_2, ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4))), ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_6, 1))))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->___buffer;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		int32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_4 = L_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->___buffer;
		int32_t L_13 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->___buffer;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		int32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (int32_t)L_17);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = __this->___buffer;
		int32_t L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_19, 1))), (int32_t)L_20);
		V_2 = (bool)1;
		goto IL_0081;
	}

IL_0074:
	{
		bool L_21 = V_2;
		if (L_21)
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_22 = V_3;
		if (!L_22)
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_23 = V_3;
		G_B8_0 = ((int32_t)il2cpp_codegen_subtract(L_23, 1));
		goto IL_0080;
	}

IL_007f:
	{
		G_B8_0 = 0;
	}

IL_0080:
	{
		V_0 = G_B8_0;
	}

IL_0081:
	{
		int32_t L_24 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0085:
	{
		int32_t L_25 = V_3;
		int32_t L_26 = V_1;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0015;
		}
	}

IL_0089:
	{
		bool L_27 = V_2;
		if (L_27)
		{
			goto IL_000f;
		}
	}
	{
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mD33FBF86A27E76E963129F292D41037D9F3433F3_gshared (List_1_t0C79793B7C069C25D3CADB102C04BED5DC6EE39C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m3F96B2E7A8763A0C054A798672FE3FFEB99F6409_gshared (List_1_t0C79793B7C069C25D3CADB102C04BED5DC6EE39C* __this, int32_t ___0_size, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_size;
		List_1_Allocate_m784E4A5290BBB0CD771AAF3A21DB7D37A6A2F622(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_GetEnumerator_m073E988A20F3EF7A6FA5E7681B0A0FF2219E6403_gshared (List_1_t0C79793B7C069C25D3CADB102C04BED5DC6EE39C* __this, const RuntimeMethod* method) 
{
	{
		U3CGetEnumeratorU3Ed__4_t69F034BBC79CBE2FCAEE74AF85F4A054156D46A9* L_0 = (U3CGetEnumeratorU3Ed__4_t69F034BBC79CBE2FCAEE74AF85F4A054156D46A9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		U3CGetEnumeratorU3Ed__4__ctor_m1A624DA1F37A823B0C2BC2BE956EE7F488EA16E5(L_0, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		U3CGetEnumeratorU3Ed__4_t69F034BBC79CBE2FCAEE74AF85F4A054156D46A9* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_mAF2B2912025793CA1BAD2CE27576B45B9F0BC584_gshared (List_1_t0C79793B7C069C25D3CADB102C04BED5DC6EE39C* __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->___buffer;
		int32_t L_1 = ___0_i;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m3E84C9A211961B4F60CA68AA73DC1930710CEC43_gshared (List_1_t0C79793B7C069C25D3CADB102C04BED5DC6EE39C* __this, int32_t ___0_i, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->___buffer;
		int32_t L_1 = ___0_i;
		RuntimeObject* L_2 = ___1_value;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (RuntimeObject*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mC0BEA755B9905D6858AE9DC16265BA568C2D1B8F_gshared (List_1_t0C79793B7C069C25D3CADB102C04BED5DC6EE39C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_Get_m83F4F06EB510E9679D4F1CDFE0A92EED41D697E6_gshared (List_1_t0C79793B7C069C25D3CADB102C04BED5DC6EE39C* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->___buffer;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Allocate_m784E4A5290BBB0CD771AAF3A21DB7D37A6A2F622_gshared (List_1_t0C79793B7C069C25D3CADB102C04BED5DC6EE39C* __this, int32_t ___0_newSize, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->___buffer;
		NullCheck(L_1);
		int32_t L_2 = ___0_newSize;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))) >= ((int32_t)L_2)))
		{
			goto IL_003f;
		}
	}

IL_0013:
	{
		int32_t L_3 = ___0_newSize;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 7), (uint32_t)L_3);
		V_0 = L_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = __this->___buffer;
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_6 = __this->___size;
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = __this->___buffer;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = V_0;
		NullCheck((RuntimeArray*)L_7);
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_7, (RuntimeArray*)L_8, 0, NULL);
	}

IL_0038:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = V_0;
		__this->___buffer = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)L_9);
	}

IL_003f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AllocateMore_mFCCAC1D02EAE9A3B6CB76147D2A409A5657A2EBC_gshared (List_1_t0C79793B7C069C25D3CADB102C04BED5DC6EE39C* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t G_B3_0 = 0;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->___buffer;
		NullCheck(L_1);
		G_B3_0 = ((int32_t)(((int32_t)(((RuntimeArray*)L_1)->max_length))<<1));
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 0;
	}

IL_0015:
	{
		V_0 = G_B3_0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)32))))
		{
			goto IL_001e;
		}
	}
	{
		V_0 = ((int32_t)32);
	}

IL_001e:
	{
		int32_t L_3 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 7), (uint32_t)L_3);
		V_1 = L_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = __this->___buffer;
		if (!L_5)
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_6 = __this->___size;
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0043;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = __this->___buffer;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = V_1;
		NullCheck((RuntimeArray*)L_7);
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_7, (RuntimeArray*)L_8, 0, NULL);
	}

IL_0043:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = V_1;
		__this->___buffer = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)L_9);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Resize_mF4B3385B7E608BBED4303CCB7017EA4F49491C21_gshared (List_1_t0C79793B7C069C25D3CADB102C04BED5DC6EE39C* __this, int32_t ___0_newSize, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___size;
		int32_t L_1 = ___0_newSize;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0032;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = __this->___buffer;
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_3 = ___0_newSize;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 7), (uint32_t)L_3);
		__this->___buffer = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)L_4);
		goto IL_002b;
	}

IL_001f:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918** L_5 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918**)(&__this->___buffer);
		int32_t L_6 = ___0_newSize;
		Array_Resize_TisRuntimeObject_mE8D92C287251BAF8256D85E5829F749359EC334E(L_5, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
	}

IL_002b:
	{
		int32_t L_7 = ___0_newSize;
		__this->___size = L_7;
	}

IL_0032:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Trim_mCE45128341A6A117EA26785A430C636963492D61_gshared (List_1_t0C79793B7C069C25D3CADB102C04BED5DC6EE39C* __this, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->___size;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_1 = __this->___size;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = __this->___buffer;
		NullCheck(L_2);
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))
		{
			goto IL_005d;
		}
	}
	{
		int32_t L_3 = __this->___size;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 7), (uint32_t)L_3);
		V_0 = L_4;
		V_1 = 0;
		goto IL_0040;
	}

IL_0029:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = V_0;
		int32_t L_6 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = __this->___buffer;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (RuntimeObject*)L_10);
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0040:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = __this->___size;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0029;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_0;
		__this->___buffer = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)L_14);
		return;
	}

IL_0051:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 7), (uint32_t)0);
		__this->___buffer = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)L_15);
	}

IL_005d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mA6A952C268E1B87E8CC9CD91934D166A8DC5E480_gshared (List_1_t0C79793B7C069C25D3CADB102C04BED5DC6EE39C* __this, const RuntimeMethod* method) 
{
	{
		__this->___size = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mDB80354B4F7F73EBC6BDF1CA0250AA4127C3ADE3_gshared (List_1_t0C79793B7C069C25D3CADB102C04BED5DC6EE39C* __this, int32_t ___0_allocateSize, const RuntimeMethod* method) 
{
	{
		__this->___size = 0;
		int32_t L_0 = ___0_allocateSize;
		List_1_Allocate_m784E4A5290BBB0CD771AAF3A21DB7D37A6A2F622(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Release_m4A1737878620BB6409C2703CBF2717F88FFAD944_gshared (List_1_t0C79793B7C069C25D3CADB102C04BED5DC6EE39C* __this, const RuntimeMethod* method) 
{
	{
		__this->___size = 0;
		__this->___buffer = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_Expand_mAEBB40FCD40BB1041C68F27107BF4514D06431B7_gshared (List_1_t0C79793B7C069C25D3CADB102C04BED5DC6EE39C* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->___size;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = __this->___buffer;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_001e;
		}
	}

IL_0018:
	{
		List_1_AllocateMore_mFCCAC1D02EAE9A3B6CB76147D2A409A5657A2EBC(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001e:
	{
		int32_t L_3 = __this->___size;
		V_0 = L_3;
		int32_t L_4 = V_0;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_4, 1));
		int32_t L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_Expand_mE77907E92CFBE4C26DC3542B7EA17A5D6237C31B_gshared (List_1_t0C79793B7C069C25D3CADB102C04BED5DC6EE39C* __this, int32_t ___0_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = __this->___size;
		int32_t L_1 = __this->___size;
		int32_t L_2 = ___0_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->___buffer;
		if (!L_3)
		{
			G_B2_0 = L_0;
			goto IL_0029;
		}
		G_B1_0 = L_0;
	}
	{
		int32_t L_4 = __this->___size;
		int32_t L_5 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = __this->___buffer;
		NullCheck(L_6);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_4, L_5))) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			G_B3_0 = G_B1_0;
			goto IL_0037;
		}
		G_B2_0 = G_B1_0;
	}

IL_0029:
	{
		int32_t L_7 = __this->___size;
		int32_t L_8 = V_0;
		List_1_Allocate_m784E4A5290BBB0CD771AAF3A21DB7D37A6A2F622(__this, ((int32_t)il2cpp_codegen_add(L_7, L_8)), il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		G_B3_0 = G_B2_0;
	}

IL_0037:
	{
		int32_t L_9 = __this->___size;
		int32_t L_10 = ___0_count;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_9, L_10));
		return G_B3_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mEB5174B6486E1FA27E836AF1D0800D6CC2B26DFB_gshared (List_1_t0C79793B7C069C25D3CADB102C04BED5DC6EE39C* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->___size;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = __this->___buffer;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_001e;
		}
	}

IL_0018:
	{
		List_1_AllocateMore_mFCCAC1D02EAE9A3B6CB76147D2A409A5657A2EBC(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001e:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->___buffer;
		int32_t L_4 = __this->___size;
		RuntimeObject* L_5 = ___0_item;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (RuntimeObject*)L_5);
		int32_t L_6 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m34C3ACC0F6B8F5C4EE207D6DF62B3A5FAAAB66B4_gshared (List_1_t0C79793B7C069C25D3CADB102C04BED5DC6EE39C* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_items, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___size;
		int32_t L_1 = ___2_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = __this->___buffer;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_3 = __this->___size;
		int32_t L_4 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = __this->___buffer;
		NullCheck(L_5);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_3, L_4))) < ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))))
		{
			goto IL_0031;
		}
	}

IL_0023:
	{
		int32_t L_6 = __this->___size;
		int32_t L_7 = V_0;
		List_1_Allocate_m784E4A5290BBB0CD771AAF3A21DB7D37A6A2F622(__this, ((int32_t)il2cpp_codegen_add(L_6, L_7)), il2cpp_rgctx_method(method->klass->rgctx_data, 0));
	}

IL_0031:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = ___0_items;
		int32_t L_9 = ___1_offset;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = __this->___buffer;
		int32_t L_11 = __this->___size;
		int32_t L_12 = ___2_count;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, L_9, (RuntimeArray*)L_10, L_11, L_12, NULL);
		int32_t L_13 = __this->___size;
		int32_t L_14 = ___2_count;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_13, L_14));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mA5EE54F49250953795C1D8508FF731EB1EFE2048_gshared (List_1_t0C79793B7C069C25D3CADB102C04BED5DC6EE39C* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->___size;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = __this->___buffer;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_001e;
		}
	}

IL_0018:
	{
		List_1_AllocateMore_mFCCAC1D02EAE9A3B6CB76147D2A409A5657A2EBC(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001e:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->___buffer;
		int32_t L_4 = __this->___size;
		RuntimeObject* L_5 = ___0_item;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (RuntimeObject*)((RuntimeObject*)Castclass((RuntimeObject*)L_5, il2cpp_rgctx_data(method->klass->rgctx_data, 6))));
		int32_t L_6 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Add_m96D5BAA9D5C92A661C31FED5B2C35E1C80C4882A_gshared (List_1_t0C79793B7C069C25D3CADB102C04BED5DC6EE39C* __this, RuntimeObject* ___0_item, bool ___1_unique, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___1_unique;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		RuntimeObject* L_1 = ___0_item;
		bool L_2;
		L_2 = List_1_Contains_mD2E826D42B39C272581CDE209756EADE7BDC4F9C(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		return (bool)0;
	}

IL_000e:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->___buffer;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_4 = __this->___size;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = __this->___buffer;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_002c;
		}
	}

IL_0026:
	{
		List_1_AllocateMore_mFCCAC1D02EAE9A3B6CB76147D2A409A5657A2EBC(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_002c:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = __this->___buffer;
		int32_t L_7 = __this->___size;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		int32_t L_9 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Add_mBA1E8402977347EA7148C7EB2105A28B04068AF8_gshared (List_1_t0C79793B7C069C25D3CADB102C04BED5DC6EE39C* __this, RuntimeObject* ___0_item, bool ___1_unique, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___1_unique;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = ___0_item;
		bool L_2;
		L_2 = List_1_Contains_mD2E826D42B39C272581CDE209756EADE7BDC4F9C(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 6))), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->___buffer;
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_4 = __this->___size;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = __this->___buffer;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0031;
		}
	}

IL_002b:
	{
		List_1_AllocateMore_mFCCAC1D02EAE9A3B6CB76147D2A409A5657A2EBC(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_0031:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = __this->___buffer;
		int32_t L_7 = __this->___size;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)((RuntimeObject*)Castclass((RuntimeObject*)L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 6))));
		int32_t L_9 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m414773B0DA057B041216EBE229591F14BF00BFDB_gshared (List_1_t0C79793B7C069C25D3CADB102C04BED5DC6EE39C* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->___size;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = __this->___buffer;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_001e;
		}
	}

IL_0018:
	{
		List_1_AllocateMore_mFCCAC1D02EAE9A3B6CB76147D2A409A5657A2EBC(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001e:
	{
		int32_t L_3 = ___0_index;
		if ((((int32_t)L_3) <= ((int32_t)(-1))))
		{
			goto IL_0072;
		}
	}
	{
		int32_t L_4 = ___0_index;
		int32_t L_5 = __this->___size;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0072;
		}
	}
	{
		int32_t L_6 = __this->___size;
		V_0 = L_6;
		goto IL_0052;
	}

IL_0034:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = __this->___buffer;
		int32_t L_8 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = __this->___buffer;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		RuntimeObject* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (RuntimeObject*)L_12);
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
	}

IL_0052:
	{
		int32_t L_14 = V_0;
		int32_t L_15 = ___0_index;
		if ((((int32_t)L_14) > ((int32_t)L_15)))
		{
			goto IL_0034;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = __this->___buffer;
		int32_t L_17 = ___0_index;
		RuntimeObject* L_18 = ___1_item;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (RuntimeObject*)L_18);
		int32_t L_19 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_19, 1));
		return;
	}

IL_0072:
	{
		RuntimeObject* L_20 = ___1_item;
		List_1_Add_mEB5174B6486E1FA27E836AF1D0800D6CC2B26DFB(__this, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mD2E826D42B39C272581CDE209756EADE7BDC4F9C_gshared (List_1_t0C79793B7C069C25D3CADB102C04BED5DC6EE39C* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->___buffer;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		V_0 = 0;
		goto IL_0048;
	}

IL_000e:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->___buffer;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if (!L_4)
		{
			goto IL_0044;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = __this->___buffer;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_7 = ___0_item;
		NullCheck((*((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))));
		bool L_8;
		L_8 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0, (*((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))), L_7);
		if (!L_8)
		{
			goto IL_0044;
		}
	}
	{
		return (bool)1;
	}

IL_0044:
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0048:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = __this->___size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_000e;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_mA33214D2A7A9D5DEEC719022480AAC36E8945555_gshared (List_1_t0C79793B7C069C25D3CADB102C04BED5DC6EE39C* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->___buffer;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (-1);
	}

IL_000a:
	{
		V_0 = 0;
		goto IL_0048;
	}

IL_000e:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->___buffer;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if (!L_4)
		{
			goto IL_0044;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = __this->___buffer;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_7 = ___0_item;
		NullCheck((*((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))));
		bool L_8;
		L_8 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0, (*((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))), L_7);
		if (!L_8)
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_9 = V_0;
		return L_9;
	}

IL_0044:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0048:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = __this->___size;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_000e;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m0B3E9F0E353F4D2760A89BC1E5F7A00E111AE307_gshared (List_1_t0C79793B7C069C25D3CADB102C04BED5DC6EE39C* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_006e;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_1;
		L_1 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		V_0 = L_1;
		V_1 = 0;
		goto IL_0065;
	}

IL_0012:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_2 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->___buffer;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		RuntimeObject* L_7 = ___0_item;
		NullCheck(L_2);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_2, L_6, L_7);
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10 = __this->___size;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_9, 1))) >= ((int32_t)L_10)))
		{
			goto IL_0051;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = __this->___buffer;
		int32_t L_12 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = __this->___buffer;
		int32_t L_14 = V_1;
		int32_t L_15 = __this->___size;
		int32_t L_16 = V_1;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, 1)), (RuntimeArray*)L_13, L_14, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_15, L_16)), 1)), NULL);
	}

IL_0051:
	{
		int32_t L_17 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
		return (bool)1;
	}

IL_0061:
	{
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0065:
	{
		int32_t L_19 = V_1;
		int32_t L_20 = __this->___size;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0012;
		}
	}

IL_006e:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mD3155B1A125A2A871A74C8FCCE661FB30F95AD7D_gshared (List_1_t0C79793B7C069C25D3CADB102C04BED5DC6EE39C* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_1 = ___0_index;
		if ((((int32_t)L_1) <= ((int32_t)(-1))))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_2 = ___0_index;
		int32_t L_3 = __this->___size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_4 = ___0_index;
		int32_t L_5 = __this->___size;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_4, 1))) >= ((int32_t)L_5)))
		{
			goto IL_003f;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = __this->___buffer;
		int32_t L_7 = ___0_index;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = __this->___buffer;
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->___size;
		int32_t L_11 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, ((int32_t)il2cpp_codegen_add(L_7, 1)), (RuntimeArray*)L_8, L_9, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_10, L_11)), 1)), NULL);
	}

IL_003f:
	{
		int32_t L_12 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
	}

IL_004d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_mF69172E8BB29BB77B39BFDF78A2AC3F2056389B6_gshared (List_1_t0C79793B7C069C25D3CADB102C04BED5DC6EE39C* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = ___1_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		int32_t L_2 = V_0;
		int32_t L_3 = __this->___size;
		if ((((int32_t)L_2) <= ((int32_t)L_3)))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_4 = __this->___size;
		V_0 = L_4;
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_index;
		___1_count = ((int32_t)il2cpp_codegen_subtract(L_5, L_6));
	}

IL_0019:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = __this->___buffer;
		if (!L_7)
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_8 = ___0_index;
		if ((((int32_t)L_8) <= ((int32_t)(-1))))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->___size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_11 = ___0_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) >= ((int32_t)L_12)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_13 = V_0;
		int32_t L_14 = __this->___size;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_13, 1))) >= ((int32_t)L_14)))
		{
			goto IL_0058;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = __this->___buffer;
		int32_t L_16 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = __this->___buffer;
		int32_t L_18 = ___0_index;
		int32_t L_19 = __this->___size;
		int32_t L_20 = V_0;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, L_16, (RuntimeArray*)L_17, L_18, ((int32_t)il2cpp_codegen_subtract(L_19, L_20)), NULL);
	}

IL_0058:
	{
		int32_t L_21 = __this->___size;
		int32_t L_22 = ___1_count;
		__this->___size = ((int32_t)il2cpp_codegen_subtract(L_21, L_22));
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_Pop_mCC17E1AB7B2FA25DC7301481B91D1B5E76C0CC83_gshared (List_1_t0C79793B7C069C25D3CADB102C04BED5DC6EE39C* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_1 = __this->___size;
		if (!L_1)
		{
			goto IL_0047;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = __this->___buffer;
		int32_t L_3 = __this->___size;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		int32_t L_4 = V_0;
		__this->___size = L_4;
		int32_t L_5 = V_0;
		NullCheck(L_2);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = __this->___buffer;
		int32_t L_9 = __this->___size;
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_10 = V_1;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (RuntimeObject*)L_10);
		return L_7;
	}

IL_0047:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_11 = V_1;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mFD03103FD785452FFE78584B330666155B66DB6A_gshared (List_1_t0C79793B7C069C25D3CADB102C04BED5DC6EE39C* __this, const RuntimeMethod* method) 
{
	{
		List_1_Trim_mCE45128341A6A117EA26785A430C636963492D61(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->___buffer;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m8802881505658123538D52BC6F2871B66656EB0F_gshared (List_1_t0C79793B7C069C25D3CADB102C04BED5DC6EE39C* __this, CompareFunc_t4B02430CDF25A791E686F7C6A3039E596D79E8A2* ___0_comparer, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t G_B8_0 = 0;
	{
		V_0 = 0;
		int32_t L_0 = __this->___size;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		V_2 = (bool)1;
		goto IL_0089;
	}

IL_000f:
	{
		V_2 = (bool)0;
		int32_t L_1 = V_0;
		V_3 = L_1;
		goto IL_0085;
	}

IL_0015:
	{
		CompareFunc_t4B02430CDF25A791E686F7C6A3039E596D79E8A2* L_2 = ___0_comparer;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->___buffer;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = __this->___buffer;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		RuntimeObject* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_2);
		int32_t L_11;
		L_11 = CompareFunc_Invoke_mDF62819E35773C1822470C9685C6D29ACDD5D375_inline(L_2, L_6, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		if ((((int32_t)L_11) <= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = __this->___buffer;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_4 = L_15;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = __this->___buffer;
		int32_t L_17 = V_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = __this->___buffer;
		int32_t L_19 = V_3;
		NullCheck(L_18);
		int32_t L_20 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		RuntimeObject* L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (RuntimeObject*)L_21);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_22 = __this->___buffer;
		int32_t L_23 = V_3;
		RuntimeObject* L_24 = V_4;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_23, 1))), (RuntimeObject*)L_24);
		V_2 = (bool)1;
		goto IL_0081;
	}

IL_0074:
	{
		bool L_25 = V_2;
		if (L_25)
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_26 = V_3;
		if (!L_26)
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_27 = V_3;
		G_B8_0 = ((int32_t)il2cpp_codegen_subtract(L_27, 1));
		goto IL_0080;
	}

IL_007f:
	{
		G_B8_0 = 0;
	}

IL_0080:
	{
		V_0 = G_B8_0;
	}

IL_0081:
	{
		int32_t L_28 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0085:
	{
		int32_t L_29 = V_3;
		int32_t L_30 = V_1;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_0015;
		}
	}

IL_0089:
	{
		bool L_31 = V_2;
		if (L_31)
		{
			goto IL_000f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mBD826ACD0E09C36B564613A60A83138A753F8021_gshared (List_1_t0C79793B7C069C25D3CADB102C04BED5DC6EE39C* __this, CompareFunc2_t792F53EE6953C55FF25C3F5DEEDFBE2786EE35DD* ___0_comparer, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t G_B8_0 = 0;
	{
		V_0 = 0;
		int32_t L_0 = __this->___size;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		V_2 = (bool)1;
		goto IL_0089;
	}

IL_000f:
	{
		V_2 = (bool)0;
		int32_t L_1 = V_0;
		V_3 = L_1;
		goto IL_0085;
	}

IL_0015:
	{
		CompareFunc2_t792F53EE6953C55FF25C3F5DEEDFBE2786EE35DD* L_2 = ___0_comparer;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->___buffer;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = __this->___buffer;
		int32_t L_6 = V_3;
		NullCheck(L_5);
		NullCheck(L_2);
		int32_t L_7;
		L_7 = CompareFunc2_Invoke_m2A17CFF0028FC57CAD9E6D2820F451F830B5FD02_inline(L_2, ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4))), ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_6, 1))))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = __this->___buffer;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_4 = L_11;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = __this->___buffer;
		int32_t L_13 = V_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = __this->___buffer;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		RuntimeObject* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (RuntimeObject*)L_17);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = __this->___buffer;
		int32_t L_19 = V_3;
		RuntimeObject* L_20 = V_4;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_19, 1))), (RuntimeObject*)L_20);
		V_2 = (bool)1;
		goto IL_0081;
	}

IL_0074:
	{
		bool L_21 = V_2;
		if (L_21)
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_22 = V_3;
		if (!L_22)
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_23 = V_3;
		G_B8_0 = ((int32_t)il2cpp_codegen_subtract(L_23, 1));
		goto IL_0080;
	}

IL_007f:
	{
		G_B8_0 = 0;
	}

IL_0080:
	{
		V_0 = G_B8_0;
	}

IL_0081:
	{
		int32_t L_24 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0085:
	{
		int32_t L_25 = V_3;
		int32_t L_26 = V_1;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0015;
		}
	}

IL_0089:
	{
		bool L_27 = V_2;
		if (L_27)
		{
			goto IL_000f;
		}
	}
	{
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mB5CDC01143C6B3B3634FCDE1C4C85D7194A99DA9_gshared (List_1_t9FEF61DBA53647F44F11939A07BD5540CCF18BD2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m070C37CFD5ABEBE8200BFEEBAB7710BE0126E736_gshared (List_1_t9FEF61DBA53647F44F11939A07BD5540CCF18BD2* __this, int32_t ___0_size, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_size;
		List_1_Allocate_mD4B9F9051E25E6CE874CECEA5CCE9C653280E40E(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_GetEnumerator_mDCA25CAF1A2E6593A42EBAF9CC32A3497DF9CE42_gshared (List_1_t9FEF61DBA53647F44F11939A07BD5540CCF18BD2* __this, const RuntimeMethod* method) 
{
	{
		U3CGetEnumeratorU3Ed__4_t7C1790FE9749D05D292F0267D4F5871D2D3474E6* L_0 = (U3CGetEnumeratorU3Ed__4_t7C1790FE9749D05D292F0267D4F5871D2D3474E6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		U3CGetEnumeratorU3Ed__4__ctor_m80B4177F87193EB9BCC682587A52F6CF745FE3E7(L_0, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		U3CGetEnumeratorU3Ed__4_t7C1790FE9749D05D292F0267D4F5871D2D3474E6* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t List_1_get_Item_m9FA4039E574AC91C5B41092812E0889F08870E31_gshared (List_1_t9FEF61DBA53647F44F11939A07BD5540CCF18BD2* __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = __this->___buffer;
		int32_t L_1 = ___0_i;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m799512FF631AC787103CAFF388AB624F2CEA7F67_gshared (List_1_t9FEF61DBA53647F44F11939A07BD5540CCF18BD2* __this, int32_t ___0_i, uint32_t ___1_value, const RuntimeMethod* method) 
{
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = __this->___buffer;
		int32_t L_1 = ___0_i;
		uint32_t L_2 = ___1_value;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint32_t)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mB3C40E264A16D31826331317E2BAF19342CF9452_gshared (List_1_t9FEF61DBA53647F44F11939A07BD5540CCF18BD2* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_Get_m1671A1A5898E00AC99C7448D2D2F4D3ECDF6B39E_gshared (List_1_t9FEF61DBA53647F44F11939A07BD5540CCF18BD2* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = __this->___buffer;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		uint32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6), &L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Allocate_mD4B9F9051E25E6CE874CECEA5CCE9C653280E40E_gshared (List_1_t9FEF61DBA53647F44F11939A07BD5540CCF18BD2* __this, int32_t ___0_newSize, const RuntimeMethod* method) 
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = __this->___buffer;
		NullCheck(L_1);
		int32_t L_2 = ___0_newSize;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))) >= ((int32_t)L_2)))
		{
			goto IL_003f;
		}
	}

IL_0013:
	{
		int32_t L_3 = ___0_newSize;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 7), (uint32_t)L_3);
		V_0 = L_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = __this->___buffer;
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_6 = __this->___size;
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = __this->___buffer;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = V_0;
		NullCheck((RuntimeArray*)L_7);
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_7, (RuntimeArray*)L_8, 0, NULL);
	}

IL_0038:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = V_0;
		__this->___buffer = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)L_9);
	}

IL_003f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AllocateMore_m1F949557AEF0CD41DE7F787A4E0AA82802D7EC57_gshared (List_1_t9FEF61DBA53647F44F11939A07BD5540CCF18BD2* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	int32_t G_B3_0 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = __this->___buffer;
		NullCheck(L_1);
		G_B3_0 = ((int32_t)(((int32_t)(((RuntimeArray*)L_1)->max_length))<<1));
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 0;
	}

IL_0015:
	{
		V_0 = G_B3_0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)32))))
		{
			goto IL_001e;
		}
	}
	{
		V_0 = ((int32_t)32);
	}

IL_001e:
	{
		int32_t L_3 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 7), (uint32_t)L_3);
		V_1 = L_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = __this->___buffer;
		if (!L_5)
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_6 = __this->___size;
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0043;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = __this->___buffer;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = V_1;
		NullCheck((RuntimeArray*)L_7);
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_7, (RuntimeArray*)L_8, 0, NULL);
	}

IL_0043:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = V_1;
		__this->___buffer = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)L_9);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Resize_m415C3A78F4B4BFF6853D47B24DCC30EF933BE9DD_gshared (List_1_t9FEF61DBA53647F44F11939A07BD5540CCF18BD2* __this, int32_t ___0_newSize, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___size;
		int32_t L_1 = ___0_newSize;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0032;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = __this->___buffer;
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_3 = ___0_newSize;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 7), (uint32_t)L_3);
		__this->___buffer = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)L_4);
		goto IL_002b;
	}

IL_001f:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA** L_5 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA**)(&__this->___buffer);
		int32_t L_6 = ___0_newSize;
		Array_Resize_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m5125BA7C6999C4FE1290349D3F1F691A6E00A039(L_5, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
	}

IL_002b:
	{
		int32_t L_7 = ___0_newSize;
		__this->___size = L_7;
	}

IL_0032:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Trim_m1D0D42CC82B5335B1A44E099E8D5198767301283_gshared (List_1_t9FEF61DBA53647F44F11939A07BD5540CCF18BD2* __this, const RuntimeMethod* method) 
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->___size;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_1 = __this->___size;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = __this->___buffer;
		NullCheck(L_2);
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))
		{
			goto IL_005d;
		}
	}
	{
		int32_t L_3 = __this->___size;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 7), (uint32_t)L_3);
		V_0 = L_4;
		V_1 = 0;
		goto IL_0040;
	}

IL_0029:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = V_0;
		int32_t L_6 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = __this->___buffer;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		uint32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (uint32_t)L_10);
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0040:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = __this->___size;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0029;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = V_0;
		__this->___buffer = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)L_14);
		return;
	}

IL_0051:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 7), (uint32_t)0);
		__this->___buffer = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)L_15);
	}

IL_005d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mCD2FE33B9104B600EF6F9A13A5DAD6F83A1923BC_gshared (List_1_t9FEF61DBA53647F44F11939A07BD5540CCF18BD2* __this, const RuntimeMethod* method) 
{
	{
		__this->___size = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mEEB503ADAB95D561E3CD016FE1407D0BE3C85622_gshared (List_1_t9FEF61DBA53647F44F11939A07BD5540CCF18BD2* __this, int32_t ___0_allocateSize, const RuntimeMethod* method) 
{
	{
		__this->___size = 0;
		int32_t L_0 = ___0_allocateSize;
		List_1_Allocate_mD4B9F9051E25E6CE874CECEA5CCE9C653280E40E(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Release_m30B12954600D1FE87AB91CDADD6F0234949CFB27_gshared (List_1_t9FEF61DBA53647F44F11939A07BD5540CCF18BD2* __this, const RuntimeMethod* method) 
{
	{
		__this->___size = 0;
		__this->___buffer = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_Expand_m59C599DF67A957B27FC3E6BC8136950FE67F3029_gshared (List_1_t9FEF61DBA53647F44F11939A07BD5540CCF18BD2* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->___size;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = __this->___buffer;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_001e;
		}
	}

IL_0018:
	{
		List_1_AllocateMore_m1F949557AEF0CD41DE7F787A4E0AA82802D7EC57(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001e:
	{
		int32_t L_3 = __this->___size;
		V_0 = L_3;
		int32_t L_4 = V_0;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_4, 1));
		int32_t L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_Expand_m5463AEAFB4F0CD0C409C6C04E09D119ED736222C_gshared (List_1_t9FEF61DBA53647F44F11939A07BD5540CCF18BD2* __this, int32_t ___0_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = __this->___size;
		int32_t L_1 = __this->___size;
		int32_t L_2 = ___0_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = __this->___buffer;
		if (!L_3)
		{
			G_B2_0 = L_0;
			goto IL_0029;
		}
		G_B1_0 = L_0;
	}
	{
		int32_t L_4 = __this->___size;
		int32_t L_5 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = __this->___buffer;
		NullCheck(L_6);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_4, L_5))) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			G_B3_0 = G_B1_0;
			goto IL_0037;
		}
		G_B2_0 = G_B1_0;
	}

IL_0029:
	{
		int32_t L_7 = __this->___size;
		int32_t L_8 = V_0;
		List_1_Allocate_mD4B9F9051E25E6CE874CECEA5CCE9C653280E40E(__this, ((int32_t)il2cpp_codegen_add(L_7, L_8)), il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		G_B3_0 = G_B2_0;
	}

IL_0037:
	{
		int32_t L_9 = __this->___size;
		int32_t L_10 = ___0_count;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_9, L_10));
		return G_B3_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE42B8E59B1213BF695BED076A18929659C0D3932_gshared (List_1_t9FEF61DBA53647F44F11939A07BD5540CCF18BD2* __this, uint32_t ___0_item, const RuntimeMethod* method) 
{
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->___size;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = __this->___buffer;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_001e;
		}
	}

IL_0018:
	{
		List_1_AllocateMore_m1F949557AEF0CD41DE7F787A4E0AA82802D7EC57(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001e:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = __this->___buffer;
		int32_t L_4 = __this->___size;
		uint32_t L_5 = ___0_item;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (uint32_t)L_5);
		int32_t L_6 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mBB507CCDE3752BA0B8BA9FFF5145450372B43699_gshared (List_1_t9FEF61DBA53647F44F11939A07BD5540CCF18BD2* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_items, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___size;
		int32_t L_1 = ___2_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = __this->___buffer;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_3 = __this->___size;
		int32_t L_4 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = __this->___buffer;
		NullCheck(L_5);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_3, L_4))) < ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))))
		{
			goto IL_0031;
		}
	}

IL_0023:
	{
		int32_t L_6 = __this->___size;
		int32_t L_7 = V_0;
		List_1_Allocate_mD4B9F9051E25E6CE874CECEA5CCE9C653280E40E(__this, ((int32_t)il2cpp_codegen_add(L_6, L_7)), il2cpp_rgctx_method(method->klass->rgctx_data, 0));
	}

IL_0031:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___0_items;
		int32_t L_9 = ___1_offset;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = __this->___buffer;
		int32_t L_11 = __this->___size;
		int32_t L_12 = ___2_count;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, L_9, (RuntimeArray*)L_10, L_11, L_12, NULL);
		int32_t L_13 = __this->___size;
		int32_t L_14 = ___2_count;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_13, L_14));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mDE143BF2543A3BF5679D3E23F1BF0146355A979B_gshared (List_1_t9FEF61DBA53647F44F11939A07BD5540CCF18BD2* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->___size;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = __this->___buffer;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_001e;
		}
	}

IL_0018:
	{
		List_1_AllocateMore_m1F949557AEF0CD41DE7F787A4E0AA82802D7EC57(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001e:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = __this->___buffer;
		int32_t L_4 = __this->___size;
		RuntimeObject* L_5 = ___0_item;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (uint32_t)((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_5, il2cpp_rgctx_data(method->klass->rgctx_data, 6))))));
		int32_t L_6 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Add_mCC887FAEAB7091EB194B888C02BED8E14BC0C013_gshared (List_1_t9FEF61DBA53647F44F11939A07BD5540CCF18BD2* __this, uint32_t ___0_item, bool ___1_unique, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___1_unique;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		uint32_t L_1 = ___0_item;
		bool L_2;
		L_2 = List_1_Contains_m025EFD3B747850EA7FF884F4489C0A5326CD821A(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		return (bool)0;
	}

IL_000e:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = __this->___buffer;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_4 = __this->___size;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = __this->___buffer;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_002c;
		}
	}

IL_0026:
	{
		List_1_AllocateMore_m1F949557AEF0CD41DE7F787A4E0AA82802D7EC57(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_002c:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = __this->___buffer;
		int32_t L_7 = __this->___size;
		uint32_t L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (uint32_t)L_8);
		int32_t L_9 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Add_m078E9B5061C30BB35446FCAA15BBA4D73099528B_gshared (List_1_t9FEF61DBA53647F44F11939A07BD5540CCF18BD2* __this, RuntimeObject* ___0_item, bool ___1_unique, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___1_unique;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = ___0_item;
		bool L_2;
		L_2 = List_1_Contains_m025EFD3B747850EA7FF884F4489C0A5326CD821A(__this, ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 6))))), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = __this->___buffer;
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_4 = __this->___size;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = __this->___buffer;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0031;
		}
	}

IL_002b:
	{
		List_1_AllocateMore_m1F949557AEF0CD41DE7F787A4E0AA82802D7EC57(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_0031:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = __this->___buffer;
		int32_t L_7 = __this->___size;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (uint32_t)((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 6))))));
		int32_t L_9 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m28A9156A238DC82B40C7E9D8A737A21EC52A6629_gshared (List_1_t9FEF61DBA53647F44F11939A07BD5540CCF18BD2* __this, int32_t ___0_index, uint32_t ___1_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->___size;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = __this->___buffer;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_001e;
		}
	}

IL_0018:
	{
		List_1_AllocateMore_m1F949557AEF0CD41DE7F787A4E0AA82802D7EC57(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001e:
	{
		int32_t L_3 = ___0_index;
		if ((((int32_t)L_3) <= ((int32_t)(-1))))
		{
			goto IL_0072;
		}
	}
	{
		int32_t L_4 = ___0_index;
		int32_t L_5 = __this->___size;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0072;
		}
	}
	{
		int32_t L_6 = __this->___size;
		V_0 = L_6;
		goto IL_0052;
	}

IL_0034:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = __this->___buffer;
		int32_t L_8 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = __this->___buffer;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		uint32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (uint32_t)L_12);
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
	}

IL_0052:
	{
		int32_t L_14 = V_0;
		int32_t L_15 = ___0_index;
		if ((((int32_t)L_14) > ((int32_t)L_15)))
		{
			goto IL_0034;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = __this->___buffer;
		int32_t L_17 = ___0_index;
		uint32_t L_18 = ___1_item;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (uint32_t)L_18);
		int32_t L_19 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_19, 1));
		return;
	}

IL_0072:
	{
		uint32_t L_20 = ___1_item;
		List_1_Add_mE42B8E59B1213BF695BED076A18929659C0D3932(__this, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m025EFD3B747850EA7FF884F4489C0A5326CD821A_gshared (List_1_t9FEF61DBA53647F44F11939A07BD5540CCF18BD2* __this, uint32_t ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = __this->___buffer;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		V_0 = 0;
		goto IL_0048;
	}

IL_000e:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = __this->___buffer;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = __this->___buffer;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		uint32_t L_7 = ___0_item;
		uint32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6), &L_8);
		bool L_10;
		L_10 = UInt32_Equals_mC516812849D8243A72D34D830D840A1F1E32795E(((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6))), L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0044;
		}
	}
	{
		return (bool)1;
	}

IL_0044:
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0048:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->___size;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_000e;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m39B26780691896ECA5DE9B724AC885D4AC242FEC_gshared (List_1_t9FEF61DBA53647F44F11939A07BD5540CCF18BD2* __this, uint32_t ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = __this->___buffer;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (-1);
	}

IL_000a:
	{
		V_0 = 0;
		goto IL_0048;
	}

IL_000e:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = __this->___buffer;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = __this->___buffer;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		uint32_t L_7 = ___0_item;
		uint32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6), &L_8);
		bool L_10;
		L_10 = UInt32_Equals_mC516812849D8243A72D34D830D840A1F1E32795E(((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6))), L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_11 = V_0;
		return L_11;
	}

IL_0044:
	{
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0048:
	{
		int32_t L_13 = V_0;
		int32_t L_14 = __this->___size;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_000e;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_mC9985E50AE71A6ED1CB6BBA151BA0D77C9A9327E_gshared (List_1_t9FEF61DBA53647F44F11939A07BD5540CCF18BD2* __this, uint32_t ___0_item, const RuntimeMethod* method) 
{
	EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* V_0 = NULL;
	int32_t V_1 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_006e;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_1;
		L_1 = EqualityComparer_1_get_Default_mF554877B669658FD6449F84AE369214855D0BC40_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		V_0 = L_1;
		V_1 = 0;
		goto IL_0065;
	}

IL_0012:
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_2 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = __this->___buffer;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		uint32_t L_7 = ___0_item;
		NullCheck(L_2);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(8, L_2, L_6, L_7);
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10 = __this->___size;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_9, 1))) >= ((int32_t)L_10)))
		{
			goto IL_0051;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = __this->___buffer;
		int32_t L_12 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = __this->___buffer;
		int32_t L_14 = V_1;
		int32_t L_15 = __this->___size;
		int32_t L_16 = V_1;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, 1)), (RuntimeArray*)L_13, L_14, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_15, L_16)), 1)), NULL);
	}

IL_0051:
	{
		int32_t L_17 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
		return (bool)1;
	}

IL_0061:
	{
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0065:
	{
		int32_t L_19 = V_1;
		int32_t L_20 = __this->___size;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0012;
		}
	}

IL_006e:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mDE9F5260AE318FA50D4D05786A7B3E73D07E87BE_gshared (List_1_t9FEF61DBA53647F44F11939A07BD5540CCF18BD2* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_1 = ___0_index;
		if ((((int32_t)L_1) <= ((int32_t)(-1))))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_2 = ___0_index;
		int32_t L_3 = __this->___size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_4 = ___0_index;
		int32_t L_5 = __this->___size;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_4, 1))) >= ((int32_t)L_5)))
		{
			goto IL_003f;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = __this->___buffer;
		int32_t L_7 = ___0_index;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = __this->___buffer;
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->___size;
		int32_t L_11 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, ((int32_t)il2cpp_codegen_add(L_7, 1)), (RuntimeArray*)L_8, L_9, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_10, L_11)), 1)), NULL);
	}

IL_003f:
	{
		int32_t L_12 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
	}

IL_004d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m5B89E7CC09169273D0AA7EDAD47B3515D7BD4D83_gshared (List_1_t9FEF61DBA53647F44F11939A07BD5540CCF18BD2* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = ___1_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		int32_t L_2 = V_0;
		int32_t L_3 = __this->___size;
		if ((((int32_t)L_2) <= ((int32_t)L_3)))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_4 = __this->___size;
		V_0 = L_4;
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_index;
		___1_count = ((int32_t)il2cpp_codegen_subtract(L_5, L_6));
	}

IL_0019:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = __this->___buffer;
		if (!L_7)
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_8 = ___0_index;
		if ((((int32_t)L_8) <= ((int32_t)(-1))))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->___size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_11 = ___0_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) >= ((int32_t)L_12)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_13 = V_0;
		int32_t L_14 = __this->___size;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_13, 1))) >= ((int32_t)L_14)))
		{
			goto IL_0058;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = __this->___buffer;
		int32_t L_16 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = __this->___buffer;
		int32_t L_18 = ___0_index;
		int32_t L_19 = __this->___size;
		int32_t L_20 = V_0;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, L_16, (RuntimeArray*)L_17, L_18, ((int32_t)il2cpp_codegen_subtract(L_19, L_20)), NULL);
	}

IL_0058:
	{
		int32_t L_21 = __this->___size;
		int32_t L_22 = ___1_count;
		__this->___size = ((int32_t)il2cpp_codegen_subtract(L_21, L_22));
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t List_1_Pop_m73601BA4F4D00F5F4CB28B6BCF181DA7BE45FB93_gshared (List_1_t9FEF61DBA53647F44F11939A07BD5540CCF18BD2* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_1 = __this->___size;
		if (!L_1)
		{
			goto IL_0047;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = __this->___buffer;
		int32_t L_3 = __this->___size;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		int32_t L_4 = V_0;
		__this->___size = L_4;
		int32_t L_5 = V_0;
		NullCheck(L_2);
		int32_t L_6 = L_5;
		uint32_t L_7 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = __this->___buffer;
		int32_t L_9 = __this->___size;
		il2cpp_codegen_initobj((&V_1), sizeof(uint32_t));
		uint32_t L_10 = V_1;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (uint32_t)L_10);
		return L_7;
	}

IL_0047:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(uint32_t));
		uint32_t L_11 = V_1;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* List_1_ToArray_m23844E466893942445235F54984A445445CF3F84_gshared (List_1_t9FEF61DBA53647F44F11939A07BD5540CCF18BD2* __this, const RuntimeMethod* method) 
{
	{
		List_1_Trim_m1D0D42CC82B5335B1A44E099E8D5198767301283(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = __this->___buffer;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m93D888BAED3759682ABEED9E17A1E748ED659369_gshared (List_1_t9FEF61DBA53647F44F11939A07BD5540CCF18BD2* __this, CompareFunc_t2AD4AA166CD7D5B8FBF45B10A9D1C4635808B9D3* ___0_comparer, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	uint32_t V_4 = 0;
	int32_t G_B8_0 = 0;
	{
		V_0 = 0;
		int32_t L_0 = __this->___size;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		V_2 = (bool)1;
		goto IL_0089;
	}

IL_000f:
	{
		V_2 = (bool)0;
		int32_t L_1 = V_0;
		V_3 = L_1;
		goto IL_0085;
	}

IL_0015:
	{
		CompareFunc_t2AD4AA166CD7D5B8FBF45B10A9D1C4635808B9D3* L_2 = ___0_comparer;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = __this->___buffer;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = __this->___buffer;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		uint32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_2);
		int32_t L_11;
		L_11 = CompareFunc_Invoke_mA91B35EEC7ED42BB081904FCAEA385DCA4CC6AAA_inline(L_2, L_6, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		if ((((int32_t)L_11) <= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = __this->___buffer;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		uint32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_4 = L_15;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = __this->___buffer;
		int32_t L_17 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = __this->___buffer;
		int32_t L_19 = V_3;
		NullCheck(L_18);
		int32_t L_20 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		uint32_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (uint32_t)L_21);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = __this->___buffer;
		int32_t L_23 = V_3;
		uint32_t L_24 = V_4;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_23, 1))), (uint32_t)L_24);
		V_2 = (bool)1;
		goto IL_0081;
	}

IL_0074:
	{
		bool L_25 = V_2;
		if (L_25)
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_26 = V_3;
		if (!L_26)
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_27 = V_3;
		G_B8_0 = ((int32_t)il2cpp_codegen_subtract(L_27, 1));
		goto IL_0080;
	}

IL_007f:
	{
		G_B8_0 = 0;
	}

IL_0080:
	{
		V_0 = G_B8_0;
	}

IL_0081:
	{
		int32_t L_28 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0085:
	{
		int32_t L_29 = V_3;
		int32_t L_30 = V_1;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_0015;
		}
	}

IL_0089:
	{
		bool L_31 = V_2;
		if (L_31)
		{
			goto IL_000f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mA79F4CC5B32BB09587F7B4623F765CF97A2F21AA_gshared (List_1_t9FEF61DBA53647F44F11939A07BD5540CCF18BD2* __this, CompareFunc2_tB4C43ED6E3359E93460DBA47880EF512D1FB295D* ___0_comparer, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	uint32_t V_4 = 0;
	int32_t G_B8_0 = 0;
	{
		V_0 = 0;
		int32_t L_0 = __this->___size;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		V_2 = (bool)1;
		goto IL_0089;
	}

IL_000f:
	{
		V_2 = (bool)0;
		int32_t L_1 = V_0;
		V_3 = L_1;
		goto IL_0085;
	}

IL_0015:
	{
		CompareFunc2_tB4C43ED6E3359E93460DBA47880EF512D1FB295D* L_2 = ___0_comparer;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = __this->___buffer;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = __this->___buffer;
		int32_t L_6 = V_3;
		NullCheck(L_5);
		NullCheck(L_2);
		int32_t L_7;
		L_7 = CompareFunc2_Invoke_m4DE6E51E303B1C96ED4C6688DC89954B15B8788F_inline(L_2, ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4))), ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_6, 1))))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = __this->___buffer;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		uint32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_4 = L_11;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = __this->___buffer;
		int32_t L_13 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = __this->___buffer;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		uint32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (uint32_t)L_17);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = __this->___buffer;
		int32_t L_19 = V_3;
		uint32_t L_20 = V_4;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_19, 1))), (uint32_t)L_20);
		V_2 = (bool)1;
		goto IL_0081;
	}

IL_0074:
	{
		bool L_21 = V_2;
		if (L_21)
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_22 = V_3;
		if (!L_22)
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_23 = V_3;
		G_B8_0 = ((int32_t)il2cpp_codegen_subtract(L_23, 1));
		goto IL_0080;
	}

IL_007f:
	{
		G_B8_0 = 0;
	}

IL_0080:
	{
		V_0 = G_B8_0;
	}

IL_0081:
	{
		int32_t L_24 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0085:
	{
		int32_t L_25 = V_3;
		int32_t L_26 = V_1;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0015;
		}
	}

IL_0089:
	{
		bool L_27 = V_2;
		if (L_27)
		{
			goto IL_000f;
		}
	}
	{
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mD8D6268F1B4FB14D929894167DE6B37D3F576FC3_gshared (List_1_t5A786ED376945C4ADBD2FA1A9963D195A74EA640* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mB5CEEA38A44F89EDF863D4F804B07B66A30CC942_gshared (List_1_t5A786ED376945C4ADBD2FA1A9963D195A74EA640* __this, int32_t ___0_size, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_size;
		((  void (*) (List_1_t5A786ED376945C4ADBD2FA1A9963D195A74EA640*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_GetEnumerator_m86588DB2D198CE10248E1E5D25B326AD5ADB5311_gshared (List_1_t5A786ED376945C4ADBD2FA1A9963D195A74EA640* __this, const RuntimeMethod* method) 
{
	{
		U3CGetEnumeratorU3Ed__4_t47B24BAF67A28949039974CE8D814BE75A7FFF1E* L_0 = (U3CGetEnumeratorU3Ed__4_t47B24BAF67A28949039974CE8D814BE75A7FFF1E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		((  void (*) (U3CGetEnumeratorU3Ed__4_t47B24BAF67A28949039974CE8D814BE75A7FFF1E*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_0, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		U3CGetEnumeratorU3Ed__4_t47B24BAF67A28949039974CE8D814BE75A7FFF1E* L_1 = L_0;
		NullCheck(L_1);
		il2cpp_codegen_write_instance_field_data<List_1_t5A786ED376945C4ADBD2FA1A9963D195A74EA640*>(L_1, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),2), __this);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_get_Item_m436AD1AE9152B885FE2106656079D569B50FA9E3_gshared (List_1_t5A786ED376945C4ADBD2FA1A9963D195A74EA640* __this, int32_t ___0_i, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->___buffer;
		int32_t L_1 = ___0_i;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		il2cpp_codegen_memcpy(L_3, (L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)), SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE);
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_mE92B104FD70DCD55E019421F838EB4E79EFDF3DE_gshared (List_1_t5A786ED376945C4ADBD2FA1A9963D195A74EA640* __this, int32_t ___0_i, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->___buffer;
		int32_t L_1 = ___0_i;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? ___1_value : &___1_value), SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE);
		NullCheck(L_0);
		il2cpp_codegen_memcpy((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)), L_2, SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 6), (void**)(L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mC4E240A710B266C0BFA419D3A622BE0519B4628B_gshared (List_1_t5A786ED376945C4ADBD2FA1A9963D195A74EA640* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_Get_m814C87595EA57695FAE817D0FBD87BBC7D168413_gshared (List_1_t5A786ED376945C4ADBD2FA1A9963D195A74EA640* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->___buffer;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		il2cpp_codegen_memcpy(L_3, (L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)), SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE);
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6), L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Allocate_mA3503BAA888D8D107AA657521AE38698FF428E4F_gshared (List_1_t5A786ED376945C4ADBD2FA1A9963D195A74EA640* __this, int32_t ___0_newSize, const RuntimeMethod* method) 
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->___buffer;
		NullCheck(L_1);
		int32_t L_2 = ___0_newSize;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))) >= ((int32_t)L_2)))
		{
			goto IL_003f;
		}
	}

IL_0013:
	{
		int32_t L_3 = ___0_newSize;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 7), (uint32_t)L_3);
		V_0 = L_4;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = __this->___buffer;
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_6 = __this->___size;
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = __this->___buffer;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = V_0;
		NullCheck((RuntimeArray*)L_7);
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_7, (RuntimeArray*)L_8, 0, NULL);
	}

IL_0038:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = V_0;
		__this->___buffer = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)L_9);
	}

IL_003f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AllocateMore_m6EAF39A29A9960CAB6DF20B2ADDC13ABFEBD6BBE_gshared (List_1_t5A786ED376945C4ADBD2FA1A9963D195A74EA640* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_1 = NULL;
	int32_t G_B3_0 = 0;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->___buffer;
		NullCheck(L_1);
		G_B3_0 = ((int32_t)(((int32_t)(((RuntimeArray*)L_1)->max_length))<<1));
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 0;
	}

IL_0015:
	{
		V_0 = G_B3_0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)32))))
		{
			goto IL_001e;
		}
	}
	{
		V_0 = ((int32_t)32);
	}

IL_001e:
	{
		int32_t L_3 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 7), (uint32_t)L_3);
		V_1 = L_4;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = __this->___buffer;
		if (!L_5)
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_6 = __this->___size;
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0043;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = __this->___buffer;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = V_1;
		NullCheck((RuntimeArray*)L_7);
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_7, (RuntimeArray*)L_8, 0, NULL);
	}

IL_0043:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = V_1;
		__this->___buffer = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)L_9);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Resize_mBB301ED9F3E3EC221090F1AB3E543FC8E14ADAC0_gshared (List_1_t5A786ED376945C4ADBD2FA1A9963D195A74EA640* __this, int32_t ___0_newSize, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___size;
		int32_t L_1 = ___0_newSize;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0032;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = __this->___buffer;
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_3 = ___0_newSize;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 7), (uint32_t)L_3);
		__this->___buffer = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)L_4);
		goto IL_002b;
	}

IL_001f:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_5 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)(&__this->___buffer);
		int32_t L_6 = ___0_newSize;
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_5, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
	}

IL_002b:
	{
		int32_t L_7 = ___0_newSize;
		__this->___size = L_7;
	}

IL_0032:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Trim_m62234ACA293E0750171BD91B00E2BEFD9E8F367B_gshared (List_1_t5A786ED376945C4ADBD2FA1A9963D195A74EA640* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE);
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->___size;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_1 = __this->___size;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = __this->___buffer;
		NullCheck(L_2);
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))
		{
			goto IL_005d;
		}
	}
	{
		int32_t L_3 = __this->___size;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 7), (uint32_t)L_3);
		V_0 = L_4;
		V_1 = 0;
		goto IL_0040;
	}

IL_0029:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = V_0;
		int32_t L_6 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = __this->___buffer;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		il2cpp_codegen_memcpy(L_10, (L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)), SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE);
		NullCheck(L_5);
		il2cpp_codegen_memcpy((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)), L_10, SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 6), (void**)(L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)), (void*)L_10);
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0040:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = __this->___size;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0029;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = V_0;
		__this->___buffer = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)L_14);
		return;
	}

IL_0051:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_15 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 7), (uint32_t)0);
		__this->___buffer = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)L_15);
	}

IL_005d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m06CDE6D7ECD9C96683858BB125E6C261B38CADB6_gshared (List_1_t5A786ED376945C4ADBD2FA1A9963D195A74EA640* __this, const RuntimeMethod* method) 
{
	{
		__this->___size = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mB72984B1EB50B505BE854F38FA83D08FF1E28B14_gshared (List_1_t5A786ED376945C4ADBD2FA1A9963D195A74EA640* __this, int32_t ___0_allocateSize, const RuntimeMethod* method) 
{
	{
		__this->___size = 0;
		int32_t L_0 = ___0_allocateSize;
		((  void (*) (List_1_t5A786ED376945C4ADBD2FA1A9963D195A74EA640*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Release_m657565D6ABE32DE76BFBB478448FFDA6CD0558FF_gshared (List_1_t5A786ED376945C4ADBD2FA1A9963D195A74EA640* __this, const RuntimeMethod* method) 
{
	{
		__this->___size = 0;
		__this->___buffer = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_Expand_m06010B1EE155931C1368BB4FDFD840FABC99038F_gshared (List_1_t5A786ED376945C4ADBD2FA1A9963D195A74EA640* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->___size;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = __this->___buffer;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_001e;
		}
	}

IL_0018:
	{
		((  void (*) (List_1_t5A786ED376945C4ADBD2FA1A9963D195A74EA640*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001e:
	{
		int32_t L_3 = __this->___size;
		V_0 = L_3;
		int32_t L_4 = V_0;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_4, 1));
		int32_t L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_Expand_m2F48266694CB120B4720443DA4EA27B44ED5C121_gshared (List_1_t5A786ED376945C4ADBD2FA1A9963D195A74EA640* __this, int32_t ___0_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = __this->___size;
		int32_t L_1 = __this->___size;
		int32_t L_2 = ___0_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->___buffer;
		if (!L_3)
		{
			G_B2_0 = L_0;
			goto IL_0029;
		}
		G_B1_0 = L_0;
	}
	{
		int32_t L_4 = __this->___size;
		int32_t L_5 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = __this->___buffer;
		NullCheck(L_6);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_4, L_5))) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			G_B3_0 = G_B1_0;
			goto IL_0037;
		}
		G_B2_0 = G_B1_0;
	}

IL_0029:
	{
		int32_t L_7 = __this->___size;
		int32_t L_8 = V_0;
		((  void (*) (List_1_t5A786ED376945C4ADBD2FA1A9963D195A74EA640*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, ((int32_t)il2cpp_codegen_add(L_7, L_8)), il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		G_B3_0 = G_B2_0;
	}

IL_0037:
	{
		int32_t L_9 = __this->___size;
		int32_t L_10 = ___0_count;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_9, L_10));
		return G_B3_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m46A8A133D35BFFF86E9050F14A985B9A09AAE06F_gshared (List_1_t5A786ED376945C4ADBD2FA1A9963D195A74EA640* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->___size;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = __this->___buffer;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_001e;
		}
	}

IL_0018:
	{
		((  void (*) (List_1_t5A786ED376945C4ADBD2FA1A9963D195A74EA640*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->___buffer;
		int32_t L_4 = __this->___size;
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? ___0_item : &___0_item), SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE);
		NullCheck(L_3);
		il2cpp_codegen_memcpy((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)), L_5, SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 6), (void**)(L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)), (void*)L_5);
		int32_t L_6 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m8872726570814D0CC90B7463F5851DA0AB0747A9_gshared (List_1_t5A786ED376945C4ADBD2FA1A9963D195A74EA640* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_items, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___size;
		int32_t L_1 = ___2_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = __this->___buffer;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_3 = __this->___size;
		int32_t L_4 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = __this->___buffer;
		NullCheck(L_5);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_3, L_4))) < ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))))
		{
			goto IL_0031;
		}
	}

IL_0023:
	{
		int32_t L_6 = __this->___size;
		int32_t L_7 = V_0;
		((  void (*) (List_1_t5A786ED376945C4ADBD2FA1A9963D195A74EA640*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, ((int32_t)il2cpp_codegen_add(L_6, L_7)), il2cpp_rgctx_method(method->klass->rgctx_data, 0));
	}

IL_0031:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = ___0_items;
		int32_t L_9 = ___1_offset;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = __this->___buffer;
		int32_t L_11 = __this->___size;
		int32_t L_12 = ___2_count;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, L_9, (RuntimeArray*)L_10, L_11, L_12, NULL);
		int32_t L_13 = __this->___size;
		int32_t L_14 = ___2_count;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_13, L_14));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m67A93CBFDC87F8DE21B0C4B01892D14F1D3C39EB_gshared (List_1_t5A786ED376945C4ADBD2FA1A9963D195A74EA640* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->___size;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = __this->___buffer;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_001e;
		}
	}

IL_0018:
	{
		((  void (*) (List_1_t5A786ED376945C4ADBD2FA1A9963D195A74EA640*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->___buffer;
		int32_t L_4 = __this->___size;
		RuntimeObject* L_5 = ___0_item;
		void* L_7 = UnBox_Any(L_5, il2cpp_rgctx_data(method->klass->rgctx_data, 6), L_6);
		NullCheck(L_3);
		il2cpp_codegen_memcpy((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)), (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_7))), SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 6), (void**)(L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)), (void*)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_7))));
		int32_t L_8 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_8, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Add_m7048D08D655E5C6C7F9B87AA12A3A45323E1753F_gshared (List_1_t5A786ED376945C4ADBD2FA1A9963D195A74EA640* __this, Il2CppFullySharedGenericAny ___0_item, bool ___1_unique, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE);
	const Il2CppFullySharedGenericAny L_8 = L_1;
	{
		bool L_0 = ___1_unique;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? ___0_item : &___0_item), SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE);
		bool L_2;
		L_2 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)), il2cpp_rgctx_method(method->klass->rgctx_data, 11), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_1: *(void**)L_1));
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		return (bool)0;
	}

IL_000e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->___buffer;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_4 = __this->___size;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = __this->___buffer;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_002c;
		}
	}

IL_0026:
	{
		((  void (*) (List_1_t5A786ED376945C4ADBD2FA1A9963D195A74EA640*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_002c:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = __this->___buffer;
		int32_t L_7 = __this->___size;
		il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? ___0_item : &___0_item), SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE);
		NullCheck(L_6);
		il2cpp_codegen_memcpy((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), L_8, SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 6), (void**)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), (void*)L_8);
		int32_t L_9 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Add_m1C3F006BF502811AA59A4D54D33C0C35BC08729D_gshared (List_1_t5A786ED376945C4ADBD2FA1A9963D195A74EA640* __this, RuntimeObject* ___0_item, bool ___1_unique, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE);
	const Il2CppFullySharedGenericAny L_11 = L_2;
	{
		bool L_0 = ___1_unique;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = ___0_item;
		void* L_3 = UnBox_Any(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 6), L_2);
		bool L_4;
		L_4 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)), il2cpp_rgctx_method(method->klass->rgctx_data, 11), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_3))): *(void**)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_3)))));
		if (!L_4)
		{
			goto IL_0013;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = __this->___buffer;
		if (!L_5)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_6 = __this->___size;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = __this->___buffer;
		NullCheck(L_7);
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))))))
		{
			goto IL_0031;
		}
	}

IL_002b:
	{
		((  void (*) (List_1_t5A786ED376945C4ADBD2FA1A9963D195A74EA640*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_0031:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = __this->___buffer;
		int32_t L_9 = __this->___size;
		RuntimeObject* L_10 = ___0_item;
		void* L_12 = UnBox_Any(L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 6), L_11);
		NullCheck(L_8);
		il2cpp_codegen_memcpy((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)), (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_12))), SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 6), (void**)(L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)), (void*)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_12))));
		int32_t L_13 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_13, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m1AB10A8655DEF3487EDDC2200D982EF5CF52F600_gshared (List_1_t5A786ED376945C4ADBD2FA1A9963D195A74EA640* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE);
	const Il2CppFullySharedGenericAny L_18 = L_12;
	const Il2CppFullySharedGenericAny L_20 = L_12;
	int32_t V_0 = 0;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->___size;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = __this->___buffer;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_001e;
		}
	}

IL_0018:
	{
		((  void (*) (List_1_t5A786ED376945C4ADBD2FA1A9963D195A74EA640*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001e:
	{
		int32_t L_3 = ___0_index;
		if ((((int32_t)L_3) <= ((int32_t)(-1))))
		{
			goto IL_0072;
		}
	}
	{
		int32_t L_4 = ___0_index;
		int32_t L_5 = __this->___size;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0072;
		}
	}
	{
		int32_t L_6 = __this->___size;
		V_0 = L_6;
		goto IL_0052;
	}

IL_0034:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = __this->___buffer;
		int32_t L_8 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = __this->___buffer;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		il2cpp_codegen_memcpy(L_12, (L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE);
		NullCheck(L_7);
		il2cpp_codegen_memcpy((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)), L_12, SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 6), (void**)(L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)), (void*)L_12);
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
	}

IL_0052:
	{
		int32_t L_14 = V_0;
		int32_t L_15 = ___0_index;
		if ((((int32_t)L_14) > ((int32_t)L_15)))
		{
			goto IL_0034;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_16 = __this->___buffer;
		int32_t L_17 = ___0_index;
		il2cpp_codegen_memcpy(L_18, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? ___1_item : &___1_item), SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE);
		NullCheck(L_16);
		il2cpp_codegen_memcpy((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)), L_18, SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 6), (void**)(L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)), (void*)L_18);
		int32_t L_19 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_19, 1));
		return;
	}

IL_0072:
	{
		il2cpp_codegen_memcpy(L_20, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? ___1_item : &___1_item), SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_20: *(void**)L_20));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mA9170C078F6C54A82856EDC264A8C4664C7B87AB_gshared (List_1_t5A786ED376945C4ADBD2FA1A9963D195A74EA640* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	void* L_10 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 6)));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE);
	const Il2CppFullySharedGenericAny L_8 = L_4;
	int32_t V_0 = 0;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->___buffer;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		V_0 = 0;
		goto IL_0048;
	}

IL_000e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->___buffer;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		il2cpp_codegen_memcpy(L_4, (L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE);
		bool L_5 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6), L_4);
		if (!L_5)
		{
			goto IL_0044;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = __this->___buffer;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? ___0_item : &___0_item), SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE);
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6), L_8);
		bool L_11;
		L_11 = ConstrainedFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 6), il2cpp_rgctx_method(method->klass->rgctx_data, 13), L_10, (void*)((Il2CppFullySharedGenericAny*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), L_9);
		if (!L_11)
		{
			goto IL_0044;
		}
	}
	{
		return (bool)1;
	}

IL_0044:
	{
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0048:
	{
		int32_t L_13 = V_0;
		int32_t L_14 = __this->___size;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_000e;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_mB5311208F786BFA2F39E600771D22A2DF72335CE_gshared (List_1_t5A786ED376945C4ADBD2FA1A9963D195A74EA640* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	void* L_10 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 6)));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE);
	const Il2CppFullySharedGenericAny L_8 = L_4;
	int32_t V_0 = 0;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->___buffer;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (-1);
	}

IL_000a:
	{
		V_0 = 0;
		goto IL_0048;
	}

IL_000e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->___buffer;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		il2cpp_codegen_memcpy(L_4, (L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE);
		bool L_5 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6), L_4);
		if (!L_5)
		{
			goto IL_0044;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = __this->___buffer;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? ___0_item : &___0_item), SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE);
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6), L_8);
		bool L_11;
		L_11 = ConstrainedFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 6), il2cpp_rgctx_method(method->klass->rgctx_data, 13), L_10, (void*)((Il2CppFullySharedGenericAny*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), L_9);
		if (!L_11)
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_12 = V_0;
		return L_12;
	}

IL_0044:
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0048:
	{
		int32_t L_14 = V_0;
		int32_t L_15 = __this->___size;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_000e;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m6F79358806003E321BEDFDD021A501E40800AEB4_gshared (List_1_t5A786ED376945C4ADBD2FA1A9963D195A74EA640* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE);
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* V_0 = NULL;
	int32_t V_1 = 0;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_006e;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_1;
		L_1 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		V_0 = L_1;
		V_1 = 0;
		goto IL_0065;
	}

IL_0012:
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_2 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->___buffer;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		il2cpp_codegen_memcpy(L_6, (L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE);
		il2cpp_codegen_memcpy(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? ___0_item : &___0_item), SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE);
		NullCheck(L_2);
		bool L_8;
		L_8 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_6: *(void**)L_6), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_7: *(void**)L_7));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10 = __this->___size;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_9, 1))) >= ((int32_t)L_10)))
		{
			goto IL_0051;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = __this->___buffer;
		int32_t L_12 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = __this->___buffer;
		int32_t L_14 = V_1;
		int32_t L_15 = __this->___size;
		int32_t L_16 = V_1;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, 1)), (RuntimeArray*)L_13, L_14, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_15, L_16)), 1)), NULL);
	}

IL_0051:
	{
		int32_t L_17 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
		return (bool)1;
	}

IL_0061:
	{
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0065:
	{
		int32_t L_19 = V_1;
		int32_t L_20 = __this->___size;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0012;
		}
	}

IL_006e:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m3E5F435B8D44F4697ECEF82C020A8180D2EBED16_gshared (List_1_t5A786ED376945C4ADBD2FA1A9963D195A74EA640* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_1 = ___0_index;
		if ((((int32_t)L_1) <= ((int32_t)(-1))))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_2 = ___0_index;
		int32_t L_3 = __this->___size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_4 = ___0_index;
		int32_t L_5 = __this->___size;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_4, 1))) >= ((int32_t)L_5)))
		{
			goto IL_003f;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = __this->___buffer;
		int32_t L_7 = ___0_index;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = __this->___buffer;
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->___size;
		int32_t L_11 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, ((int32_t)il2cpp_codegen_add(L_7, 1)), (RuntimeArray*)L_8, L_9, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_10, L_11)), 1)), NULL);
	}

IL_003f:
	{
		int32_t L_12 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
	}

IL_004d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m003BD47499DBA04A1A8EF48429F0984E4ED78C8B_gshared (List_1_t5A786ED376945C4ADBD2FA1A9963D195A74EA640* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = ___1_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		int32_t L_2 = V_0;
		int32_t L_3 = __this->___size;
		if ((((int32_t)L_2) <= ((int32_t)L_3)))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_4 = __this->___size;
		V_0 = L_4;
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_index;
		___1_count = ((int32_t)il2cpp_codegen_subtract(L_5, L_6));
	}

IL_0019:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = __this->___buffer;
		if (!L_7)
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_8 = ___0_index;
		if ((((int32_t)L_8) <= ((int32_t)(-1))))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->___size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_11 = ___0_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) >= ((int32_t)L_12)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_13 = V_0;
		int32_t L_14 = __this->___size;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_13, 1))) >= ((int32_t)L_14)))
		{
			goto IL_0058;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_15 = __this->___buffer;
		int32_t L_16 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_17 = __this->___buffer;
		int32_t L_18 = ___0_index;
		int32_t L_19 = __this->___size;
		int32_t L_20 = V_0;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, L_16, (RuntimeArray*)L_17, L_18, ((int32_t)il2cpp_codegen_subtract(L_19, L_20)), NULL);
	}

IL_0058:
	{
		int32_t L_21 = __this->___size;
		int32_t L_22 = ___1_count;
		__this->___size = ((int32_t)il2cpp_codegen_subtract(L_21, L_22));
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Pop_m09F0190F26060F3910D034FF559F62762BF3FE3A_gshared (List_1_t5A786ED376945C4ADBD2FA1A9963D195A74EA640* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE);
	const Il2CppFullySharedGenericAny L_11 = L_7;
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE);
	memset(V_1, 0, SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_1 = __this->___size;
		if (!L_1)
		{
			goto IL_0047;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = __this->___buffer;
		int32_t L_3 = __this->___size;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		int32_t L_4 = V_0;
		__this->___size = L_4;
		int32_t L_5 = V_0;
		NullCheck(L_2);
		int32_t L_6 = L_5;
		il2cpp_codegen_memcpy(L_7, (L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)), SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = __this->___buffer;
		int32_t L_9 = __this->___size;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE);
		il2cpp_codegen_memcpy(L_10, V_1, SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE);
		NullCheck(L_8);
		il2cpp_codegen_memcpy((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)), L_10, SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 6), (void**)(L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)), (void*)L_10);
		il2cpp_codegen_memcpy(il2cppRetVal, L_7, SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE);
		return;
	}

IL_0047:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE);
		il2cpp_codegen_memcpy(L_11, V_1, SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE);
		il2cpp_codegen_memcpy(il2cppRetVal, L_11, SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* List_1_ToArray_m69BD82F48C9279A57D5A341D713602690469E8F1_gshared (List_1_t5A786ED376945C4ADBD2FA1A9963D195A74EA640* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (List_1_t5A786ED376945C4ADBD2FA1A9963D195A74EA640*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->___buffer;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m9811C8648310566CD43EFFA35C00D6BDBDF652F7_gshared (List_1_t5A786ED376945C4ADBD2FA1A9963D195A74EA640* __this, CompareFunc_t2464B8769683BB7E956DDCC4929754B984A092D0* ___0_comparer, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE);
	const Il2CppFullySharedGenericAny L_15 = L_6;
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE);
	const Il2CppFullySharedGenericAny L_21 = L_10;
	const Il2CppFullySharedGenericAny L_24 = alloca(SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE);
	memset(V_4, 0, SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE);
	int32_t G_B8_0 = 0;
	{
		V_0 = 0;
		int32_t L_0 = __this->___size;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		V_2 = (bool)1;
		goto IL_0089;
	}

IL_000f:
	{
		V_2 = (bool)0;
		int32_t L_1 = V_0;
		V_3 = L_1;
		goto IL_0085;
	}

IL_0015:
	{
		CompareFunc_t2464B8769683BB7E956DDCC4929754B984A092D0* L_2 = ___0_comparer;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->___buffer;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		il2cpp_codegen_memcpy(L_6, (L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = __this->___buffer;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		il2cpp_codegen_memcpy(L_10, (L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)), SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE);
		NullCheck(L_2);
		int32_t L_11;
		L_11 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)), il2cpp_rgctx_method(method->klass->rgctx_data, 20), L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_6: *(void**)L_6), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_10: *(void**)L_10));
		if ((((int32_t)L_11) <= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = __this->___buffer;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		il2cpp_codegen_memcpy(L_15, (L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)), SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE);
		il2cpp_codegen_memcpy(V_4, L_15, SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_16 = __this->___buffer;
		int32_t L_17 = V_3;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_18 = __this->___buffer;
		int32_t L_19 = V_3;
		NullCheck(L_18);
		int32_t L_20 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		il2cpp_codegen_memcpy(L_21, (L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)), SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE);
		NullCheck(L_16);
		il2cpp_codegen_memcpy((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)), L_21, SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 6), (void**)(L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)), (void*)L_21);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_22 = __this->___buffer;
		int32_t L_23 = V_3;
		il2cpp_codegen_memcpy(L_24, V_4, SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE);
		NullCheck(L_22);
		il2cpp_codegen_memcpy((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_23, 1)))), L_24, SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 6), (void**)(L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_23, 1)))), (void*)L_24);
		V_2 = (bool)1;
		goto IL_0081;
	}

IL_0074:
	{
		bool L_25 = V_2;
		if (L_25)
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_26 = V_3;
		if (!L_26)
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_27 = V_3;
		G_B8_0 = ((int32_t)il2cpp_codegen_subtract(L_27, 1));
		goto IL_0080;
	}

IL_007f:
	{
		G_B8_0 = 0;
	}

IL_0080:
	{
		V_0 = G_B8_0;
	}

IL_0081:
	{
		int32_t L_28 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0085:
	{
		int32_t L_29 = V_3;
		int32_t L_30 = V_1;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_0015;
		}
	}

IL_0089:
	{
		bool L_31 = V_2;
		if (L_31)
		{
			goto IL_000f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mCBD216C23E0A8AAC123A42C47E3814A7EDC20A32_gshared (List_1_t5A786ED376945C4ADBD2FA1A9963D195A74EA640* __this, CompareFunc2_t6AF6D71121EC4C8E67F51C33A7BAAE63A8B822CF* ___0_comparer, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE);
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE);
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE);
	memset(V_4, 0, SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE);
	int32_t G_B8_0 = 0;
	{
		V_0 = 0;
		int32_t L_0 = __this->___size;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		V_2 = (bool)1;
		goto IL_0089;
	}

IL_000f:
	{
		V_2 = (bool)0;
		int32_t L_1 = V_0;
		V_3 = L_1;
		goto IL_0085;
	}

IL_0015:
	{
		CompareFunc2_t6AF6D71121EC4C8E67F51C33A7BAAE63A8B822CF* L_2 = ___0_comparer;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->___buffer;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = __this->___buffer;
		int32_t L_6 = V_3;
		NullCheck(L_5);
		NullCheck(L_2);
		int32_t L_7;
		L_7 = ((  int32_t (*) (CompareFunc2_t6AF6D71121EC4C8E67F51C33A7BAAE63A8B822CF*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(L_2, ((Il2CppFullySharedGenericAny*)(L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4))), ((Il2CppFullySharedGenericAny*)(L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_6, 1))))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = __this->___buffer;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		il2cpp_codegen_memcpy(L_11, (L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)), SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE);
		il2cpp_codegen_memcpy(V_4, L_11, SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = __this->___buffer;
		int32_t L_13 = V_3;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = __this->___buffer;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		il2cpp_codegen_memcpy(L_17, (L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)), SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE);
		NullCheck(L_12);
		il2cpp_codegen_memcpy((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)), L_17, SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 6), (void**)(L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)), (void*)L_17);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_18 = __this->___buffer;
		int32_t L_19 = V_3;
		il2cpp_codegen_memcpy(L_20, V_4, SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE);
		NullCheck(L_18);
		il2cpp_codegen_memcpy((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_19, 1)))), L_20, SizeOf_T_tD04EFFB1296BF25FF027E901134D5EBEF55DCECE);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 6), (void**)(L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_19, 1)))), (void*)L_20);
		V_2 = (bool)1;
		goto IL_0081;
	}

IL_0074:
	{
		bool L_21 = V_2;
		if (L_21)
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_22 = V_3;
		if (!L_22)
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_23 = V_3;
		G_B8_0 = ((int32_t)il2cpp_codegen_subtract(L_23, 1));
		goto IL_0080;
	}

IL_007f:
	{
		G_B8_0 = 0;
	}

IL_0080:
	{
		V_0 = G_B8_0;
	}

IL_0081:
	{
		int32_t L_24 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0085:
	{
		int32_t L_25 = V_3;
		int32_t L_26 = V_1;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0015;
		}
	}

IL_0089:
	{
		bool L_27 = V_2;
		if (L_27)
		{
			goto IL_000f;
		}
	}
	{
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m1C04F0A564CA584ED65C3E1EBFE7577E9DB2B409_gshared (List_1_tC1221FE86255A01D454BF5FF13AD6DF15E9BE844* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m4C5C1E1BFE87EC230FCED7AE3FD8D391539A4DC5_gshared (List_1_tC1221FE86255A01D454BF5FF13AD6DF15E9BE844* __this, int32_t ___0_size, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_size;
		List_1_Allocate_mBF248EC0FF7D2307E8F2FF9EA304C594A2DD8711(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_GetEnumerator_m52A0C57CCB3FBC210C8695807E9D7112B27180A4_gshared (List_1_tC1221FE86255A01D454BF5FF13AD6DF15E9BE844* __this, const RuntimeMethod* method) 
{
	{
		U3CGetEnumeratorU3Ed__4_t20C1073B540600D5D759EE56C23B9AB48D6D4C2C* L_0 = (U3CGetEnumeratorU3Ed__4_t20C1073B540600D5D759EE56C23B9AB48D6D4C2C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		U3CGetEnumeratorU3Ed__4__ctor_m4D80BD542C3AA2D801C88746A32B1264A7C25ADB(L_0, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		U3CGetEnumeratorU3Ed__4_t20C1073B540600D5D759EE56C23B9AB48D6D4C2C* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C List_1_get_Item_m3EBAAEDF4B9CA25EF16B0CA37394FBAFD87CB6EA_gshared (List_1_tC1221FE86255A01D454BF5FF13AD6DF15E9BE844* __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	{
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_0 = __this->___buffer;
		int32_t L_1 = ___0_i;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m2D50260B6489714C9BCB1D24E183271316615243_gshared (List_1_tC1221FE86255A01D454BF5FF13AD6DF15E9BE844* __this, int32_t ___0_i, CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C ___1_value, const RuntimeMethod* method) 
{
	{
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_0 = __this->___buffer;
		int32_t L_1 = ___0_i;
		CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C L_2 = ___1_value;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m6EB4E8E09F01481F23B8C49164F0B091C7AAC65F_gshared (List_1_tC1221FE86255A01D454BF5FF13AD6DF15E9BE844* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_Get_m3F2B119EBB695AA6C3BA6131CB8B80B7A22E7076_gshared (List_1_tC1221FE86255A01D454BF5FF13AD6DF15E9BE844* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_0 = __this->___buffer;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C L_4 = L_3;
		RuntimeObject* L_5 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6), &L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Allocate_mBF248EC0FF7D2307E8F2FF9EA304C594A2DD8711_gshared (List_1_tC1221FE86255A01D454BF5FF13AD6DF15E9BE844* __this, int32_t ___0_newSize, const RuntimeMethod* method) 
{
	CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* V_0 = NULL;
	{
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_1 = __this->___buffer;
		NullCheck(L_1);
		int32_t L_2 = ___0_newSize;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))) >= ((int32_t)L_2)))
		{
			goto IL_003f;
		}
	}

IL_0013:
	{
		int32_t L_3 = ___0_newSize;
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_4 = (CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B*)(CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 7), (uint32_t)L_3);
		V_0 = L_4;
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_5 = __this->___buffer;
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_6 = __this->___size;
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_7 = __this->___buffer;
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_8 = V_0;
		NullCheck((RuntimeArray*)L_7);
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_7, (RuntimeArray*)L_8, 0, NULL);
	}

IL_0038:
	{
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_9 = V_0;
		__this->___buffer = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)L_9);
	}

IL_003f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AllocateMore_mD9FC03D27B73E82BE46B2522B08E633D508BBF78_gshared (List_1_tC1221FE86255A01D454BF5FF13AD6DF15E9BE844* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* V_1 = NULL;
	int32_t G_B3_0 = 0;
	{
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_1 = __this->___buffer;
		NullCheck(L_1);
		G_B3_0 = ((int32_t)(((int32_t)(((RuntimeArray*)L_1)->max_length))<<1));
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 0;
	}

IL_0015:
	{
		V_0 = G_B3_0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)32))))
		{
			goto IL_001e;
		}
	}
	{
		V_0 = ((int32_t)32);
	}

IL_001e:
	{
		int32_t L_3 = V_0;
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_4 = (CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B*)(CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 7), (uint32_t)L_3);
		V_1 = L_4;
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_5 = __this->___buffer;
		if (!L_5)
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_6 = __this->___size;
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0043;
		}
	}
	{
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_7 = __this->___buffer;
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_8 = V_1;
		NullCheck((RuntimeArray*)L_7);
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_7, (RuntimeArray*)L_8, 0, NULL);
	}

IL_0043:
	{
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_9 = V_1;
		__this->___buffer = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)L_9);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Resize_m63DEBBCA3EC0AF420285934065C901B3C58279AB_gshared (List_1_tC1221FE86255A01D454BF5FF13AD6DF15E9BE844* __this, int32_t ___0_newSize, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___size;
		int32_t L_1 = ___0_newSize;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0032;
		}
	}
	{
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_2 = __this->___buffer;
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_3 = ___0_newSize;
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_4 = (CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B*)(CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 7), (uint32_t)L_3);
		__this->___buffer = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)L_4);
		goto IL_002b;
	}

IL_001f:
	{
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B** L_5 = (CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B**)(&__this->___buffer);
		int32_t L_6 = ___0_newSize;
		Array_Resize_TisCreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C_m0B8159A222F5A4EFE4DD4FFC145A2AD9BA6C6146(L_5, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
	}

IL_002b:
	{
		int32_t L_7 = ___0_newSize;
		__this->___size = L_7;
	}

IL_0032:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Trim_m69318A97501FA8A045346C833CCFCCF9239476B5_gshared (List_1_tC1221FE86255A01D454BF5FF13AD6DF15E9BE844* __this, const RuntimeMethod* method) 
{
	CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->___size;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_1 = __this->___size;
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_2 = __this->___buffer;
		NullCheck(L_2);
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))
		{
			goto IL_005d;
		}
	}
	{
		int32_t L_3 = __this->___size;
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_4 = (CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B*)(CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 7), (uint32_t)L_3);
		V_0 = L_4;
		V_1 = 0;
		goto IL_0040;
	}

IL_0029:
	{
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_5 = V_0;
		int32_t L_6 = V_1;
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_7 = __this->___buffer;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C)L_10);
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0040:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = __this->___size;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0029;
		}
	}
	{
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_14 = V_0;
		__this->___buffer = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)L_14);
		return;
	}

IL_0051:
	{
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_15 = (CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B*)(CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 7), (uint32_t)0);
		__this->___buffer = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)L_15);
	}

IL_005d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mC087F54D0B1F07546C74D8926F89D4154840C559_gshared (List_1_tC1221FE86255A01D454BF5FF13AD6DF15E9BE844* __this, const RuntimeMethod* method) 
{
	{
		__this->___size = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m3514FB116BDAD6BA69792BB5BBCBE68577FED896_gshared (List_1_tC1221FE86255A01D454BF5FF13AD6DF15E9BE844* __this, int32_t ___0_allocateSize, const RuntimeMethod* method) 
{
	{
		__this->___size = 0;
		int32_t L_0 = ___0_allocateSize;
		List_1_Allocate_mBF248EC0FF7D2307E8F2FF9EA304C594A2DD8711(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Release_m48D028D6E893A976DBB62C251DC7F4EFC9F36B21_gshared (List_1_tC1221FE86255A01D454BF5FF13AD6DF15E9BE844* __this, const RuntimeMethod* method) 
{
	{
		__this->___size = 0;
		__this->___buffer = (CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)(CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_Expand_m75B5F61245245733F26F3EFE09FB4C4F7E2B4FDF_gshared (List_1_tC1221FE86255A01D454BF5FF13AD6DF15E9BE844* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->___size;
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_2 = __this->___buffer;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_001e;
		}
	}

IL_0018:
	{
		List_1_AllocateMore_mD9FC03D27B73E82BE46B2522B08E633D508BBF78(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001e:
	{
		int32_t L_3 = __this->___size;
		V_0 = L_3;
		int32_t L_4 = V_0;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_4, 1));
		int32_t L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_Expand_mF196CA68870B47BB0AD643FFE3D89234D033690A_gshared (List_1_tC1221FE86255A01D454BF5FF13AD6DF15E9BE844* __this, int32_t ___0_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = __this->___size;
		int32_t L_1 = __this->___size;
		int32_t L_2 = ___0_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_3 = __this->___buffer;
		if (!L_3)
		{
			G_B2_0 = L_0;
			goto IL_0029;
		}
		G_B1_0 = L_0;
	}
	{
		int32_t L_4 = __this->___size;
		int32_t L_5 = V_0;
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_6 = __this->___buffer;
		NullCheck(L_6);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_4, L_5))) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			G_B3_0 = G_B1_0;
			goto IL_0037;
		}
		G_B2_0 = G_B1_0;
	}

IL_0029:
	{
		int32_t L_7 = __this->___size;
		int32_t L_8 = V_0;
		List_1_Allocate_mBF248EC0FF7D2307E8F2FF9EA304C594A2DD8711(__this, ((int32_t)il2cpp_codegen_add(L_7, L_8)), il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		G_B3_0 = G_B2_0;
	}

IL_0037:
	{
		int32_t L_9 = __this->___size;
		int32_t L_10 = ___0_count;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_9, L_10));
		return G_B3_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mBDD4B7B7C2A4491C2560E0539F7967EE451016D0_gshared (List_1_tC1221FE86255A01D454BF5FF13AD6DF15E9BE844* __this, CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C ___0_item, const RuntimeMethod* method) 
{
	{
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->___size;
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_2 = __this->___buffer;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_001e;
		}
	}

IL_0018:
	{
		List_1_AllocateMore_mD9FC03D27B73E82BE46B2522B08E633D508BBF78(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001e:
	{
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_3 = __this->___buffer;
		int32_t L_4 = __this->___size;
		CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C L_5 = ___0_item;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C)L_5);
		int32_t L_6 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mEFAFD06A984E87CE47F5D68B887EBD54A4D88CBC_gshared (List_1_tC1221FE86255A01D454BF5FF13AD6DF15E9BE844* __this, CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* ___0_items, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___size;
		int32_t L_1 = ___2_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_2 = __this->___buffer;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_3 = __this->___size;
		int32_t L_4 = V_0;
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_5 = __this->___buffer;
		NullCheck(L_5);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_3, L_4))) < ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))))
		{
			goto IL_0031;
		}
	}

IL_0023:
	{
		int32_t L_6 = __this->___size;
		int32_t L_7 = V_0;
		List_1_Allocate_mBF248EC0FF7D2307E8F2FF9EA304C594A2DD8711(__this, ((int32_t)il2cpp_codegen_add(L_6, L_7)), il2cpp_rgctx_method(method->klass->rgctx_data, 0));
	}

IL_0031:
	{
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_8 = ___0_items;
		int32_t L_9 = ___1_offset;
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_10 = __this->___buffer;
		int32_t L_11 = __this->___size;
		int32_t L_12 = ___2_count;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, L_9, (RuntimeArray*)L_10, L_11, L_12, NULL);
		int32_t L_13 = __this->___size;
		int32_t L_14 = ___2_count;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_13, L_14));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m2602E5201F8AA8DE8352894610FF4CB221B76E97_gshared (List_1_tC1221FE86255A01D454BF5FF13AD6DF15E9BE844* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->___size;
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_2 = __this->___buffer;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_001e;
		}
	}

IL_0018:
	{
		List_1_AllocateMore_mD9FC03D27B73E82BE46B2522B08E633D508BBF78(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001e:
	{
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_3 = __this->___buffer;
		int32_t L_4 = __this->___size;
		RuntimeObject* L_5 = ___0_item;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C)((*(CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C*)((CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C*)(CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C*)UnBox(L_5, il2cpp_rgctx_data(method->klass->rgctx_data, 6))))));
		int32_t L_6 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Add_mB7A96CB26F6885D1DB461F573422680A6CBCE7AF_gshared (List_1_tC1221FE86255A01D454BF5FF13AD6DF15E9BE844* __this, CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C ___0_item, bool ___1_unique, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___1_unique;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C L_1 = ___0_item;
		bool L_2;
		L_2 = List_1_Contains_mE797E9A0B413323AAB6CD172BB21183FFBDEED98(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		return (bool)0;
	}

IL_000e:
	{
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_3 = __this->___buffer;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_4 = __this->___size;
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_5 = __this->___buffer;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_002c;
		}
	}

IL_0026:
	{
		List_1_AllocateMore_mD9FC03D27B73E82BE46B2522B08E633D508BBF78(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_002c:
	{
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_6 = __this->___buffer;
		int32_t L_7 = __this->___size;
		CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C)L_8);
		int32_t L_9 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Add_m036ED535129B11A976EAB76E6EFD86C25B26627C_gshared (List_1_tC1221FE86255A01D454BF5FF13AD6DF15E9BE844* __this, RuntimeObject* ___0_item, bool ___1_unique, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___1_unique;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = ___0_item;
		bool L_2;
		L_2 = List_1_Contains_mE797E9A0B413323AAB6CD172BB21183FFBDEED98(__this, ((*(CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C*)((CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C*)(CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 6))))), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_3 = __this->___buffer;
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_4 = __this->___size;
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_5 = __this->___buffer;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0031;
		}
	}

IL_002b:
	{
		List_1_AllocateMore_mD9FC03D27B73E82BE46B2522B08E633D508BBF78(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_0031:
	{
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_6 = __this->___buffer;
		int32_t L_7 = __this->___size;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C)((*(CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C*)((CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C*)(CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C*)UnBox(L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 6))))));
		int32_t L_9 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m116DAF155D21FC23C1C07794A8F6033ADAC912EC_gshared (List_1_tC1221FE86255A01D454BF5FF13AD6DF15E9BE844* __this, int32_t ___0_index, CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C ___1_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->___size;
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_2 = __this->___buffer;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_001e;
		}
	}

IL_0018:
	{
		List_1_AllocateMore_mD9FC03D27B73E82BE46B2522B08E633D508BBF78(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001e:
	{
		int32_t L_3 = ___0_index;
		if ((((int32_t)L_3) <= ((int32_t)(-1))))
		{
			goto IL_0072;
		}
	}
	{
		int32_t L_4 = ___0_index;
		int32_t L_5 = __this->___size;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0072;
		}
	}
	{
		int32_t L_6 = __this->___size;
		V_0 = L_6;
		goto IL_0052;
	}

IL_0034:
	{
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_7 = __this->___buffer;
		int32_t L_8 = V_0;
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_9 = __this->___buffer;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C)L_12);
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
	}

IL_0052:
	{
		int32_t L_14 = V_0;
		int32_t L_15 = ___0_index;
		if ((((int32_t)L_14) > ((int32_t)L_15)))
		{
			goto IL_0034;
		}
	}
	{
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_16 = __this->___buffer;
		int32_t L_17 = ___0_index;
		CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C L_18 = ___1_item;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C)L_18);
		int32_t L_19 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_19, 1));
		return;
	}

IL_0072:
	{
		CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C L_20 = ___1_item;
		List_1_Add_mBDD4B7B7C2A4491C2560E0539F7967EE451016D0(__this, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mE797E9A0B413323AAB6CD172BB21183FFBDEED98_gshared (List_1_tC1221FE86255A01D454BF5FF13AD6DF15E9BE844* __this, CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_0 = __this->___buffer;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		V_0 = 0;
		goto IL_0048;
	}

IL_000e:
	{
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_1 = __this->___buffer;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
	}
	{
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_5 = __this->___buffer;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C L_7 = ___0_item;
		CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6), &L_8);
		Il2CppFakeBox<CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C> L_10(il2cpp_rgctx_data(method->klass->rgctx_data, 6), ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6))));
		bool L_11;
		L_11 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_10), L_9, NULL);
		if (!L_11)
		{
			goto IL_0044;
		}
	}
	{
		return (bool)1;
	}

IL_0044:
	{
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0048:
	{
		int32_t L_13 = V_0;
		int32_t L_14 = __this->___size;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_000e;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m23754AE5DA011DC9337BF2322167C07D714BBCEA_gshared (List_1_tC1221FE86255A01D454BF5FF13AD6DF15E9BE844* __this, CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_0 = __this->___buffer;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (-1);
	}

IL_000a:
	{
		V_0 = 0;
		goto IL_0048;
	}

IL_000e:
	{
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_1 = __this->___buffer;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
	}
	{
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_5 = __this->___buffer;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C L_7 = ___0_item;
		CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6), &L_8);
		Il2CppFakeBox<CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C> L_10(il2cpp_rgctx_data(method->klass->rgctx_data, 6), ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6))));
		bool L_11;
		L_11 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_10), L_9, NULL);
		if (!L_11)
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_12 = V_0;
		return L_12;
	}

IL_0044:
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0048:
	{
		int32_t L_14 = V_0;
		int32_t L_15 = __this->___size;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_000e;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m65A8761676FF87A2041E6D2DE26A650115C856CD_gshared (List_1_tC1221FE86255A01D454BF5FF13AD6DF15E9BE844* __this, CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C ___0_item, const RuntimeMethod* method) 
{
	EqualityComparer_1_tDC51C19B76F007D508C2E2D7CF5399F1E0C69443* V_0 = NULL;
	int32_t V_1 = 0;
	{
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_006e;
		}
	}
	{
		EqualityComparer_1_tDC51C19B76F007D508C2E2D7CF5399F1E0C69443* L_1;
		L_1 = EqualityComparer_1_get_Default_m4999C45387F95BE585FECA004680BAF261846DBB_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		V_0 = L_1;
		V_1 = 0;
		goto IL_0065;
	}

IL_0012:
	{
		EqualityComparer_1_tDC51C19B76F007D508C2E2D7CF5399F1E0C69443* L_2 = V_0;
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_3 = __this->___buffer;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C L_7 = ___0_item;
		NullCheck(L_2);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C, CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C >::Invoke(8, L_2, L_6, L_7);
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10 = __this->___size;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_9, 1))) >= ((int32_t)L_10)))
		{
			goto IL_0051;
		}
	}
	{
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_11 = __this->___buffer;
		int32_t L_12 = V_1;
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_13 = __this->___buffer;
		int32_t L_14 = V_1;
		int32_t L_15 = __this->___size;
		int32_t L_16 = V_1;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, 1)), (RuntimeArray*)L_13, L_14, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_15, L_16)), 1)), NULL);
	}

IL_0051:
	{
		int32_t L_17 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
		return (bool)1;
	}

IL_0061:
	{
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0065:
	{
		int32_t L_19 = V_1;
		int32_t L_20 = __this->___size;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0012;
		}
	}

IL_006e:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m5CB1BCD81C00EC9F8A031FB20FEA28F9E4ED66A1_gshared (List_1_tC1221FE86255A01D454BF5FF13AD6DF15E9BE844* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_1 = ___0_index;
		if ((((int32_t)L_1) <= ((int32_t)(-1))))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_2 = ___0_index;
		int32_t L_3 = __this->___size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_4 = ___0_index;
		int32_t L_5 = __this->___size;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_4, 1))) >= ((int32_t)L_5)))
		{
			goto IL_003f;
		}
	}
	{
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_6 = __this->___buffer;
		int32_t L_7 = ___0_index;
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_8 = __this->___buffer;
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->___size;
		int32_t L_11 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, ((int32_t)il2cpp_codegen_add(L_7, 1)), (RuntimeArray*)L_8, L_9, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_10, L_11)), 1)), NULL);
	}

IL_003f:
	{
		int32_t L_12 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
	}

IL_004d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m5C6F185CF55C6292B898B53E910A1B774C436E59_gshared (List_1_tC1221FE86255A01D454BF5FF13AD6DF15E9BE844* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = ___1_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		int32_t L_2 = V_0;
		int32_t L_3 = __this->___size;
		if ((((int32_t)L_2) <= ((int32_t)L_3)))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_4 = __this->___size;
		V_0 = L_4;
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_index;
		___1_count = ((int32_t)il2cpp_codegen_subtract(L_5, L_6));
	}

IL_0019:
	{
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_7 = __this->___buffer;
		if (!L_7)
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_8 = ___0_index;
		if ((((int32_t)L_8) <= ((int32_t)(-1))))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->___size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_11 = ___0_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) >= ((int32_t)L_12)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_13 = V_0;
		int32_t L_14 = __this->___size;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_13, 1))) >= ((int32_t)L_14)))
		{
			goto IL_0058;
		}
	}
	{
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_15 = __this->___buffer;
		int32_t L_16 = V_0;
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_17 = __this->___buffer;
		int32_t L_18 = ___0_index;
		int32_t L_19 = __this->___size;
		int32_t L_20 = V_0;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, L_16, (RuntimeArray*)L_17, L_18, ((int32_t)il2cpp_codegen_subtract(L_19, L_20)), NULL);
	}

IL_0058:
	{
		int32_t L_21 = __this->___size;
		int32_t L_22 = ___1_count;
		__this->___size = ((int32_t)il2cpp_codegen_subtract(L_21, L_22));
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C List_1_Pop_m2C4D17C5D974765A32E5979EEDE4178B9D0DDFD5_gshared (List_1_tC1221FE86255A01D454BF5FF13AD6DF15E9BE844* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_1 = __this->___size;
		if (!L_1)
		{
			goto IL_0047;
		}
	}
	{
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_2 = __this->___buffer;
		int32_t L_3 = __this->___size;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		int32_t L_4 = V_0;
		__this->___size = L_4;
		int32_t L_5 = V_0;
		NullCheck(L_2);
		int32_t L_6 = L_5;
		CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C L_7 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_8 = __this->___buffer;
		int32_t L_9 = __this->___size;
		il2cpp_codegen_initobj((&V_1), sizeof(CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C));
		CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C L_10 = V_1;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C)L_10);
		return L_7;
	}

IL_0047:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C));
		CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C L_11 = V_1;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* List_1_ToArray_m7C4E4652DB6A6B1B46740267D87BDC97A9E0CEC7_gshared (List_1_tC1221FE86255A01D454BF5FF13AD6DF15E9BE844* __this, const RuntimeMethod* method) 
{
	{
		List_1_Trim_m69318A97501FA8A045346C833CCFCCF9239476B5(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_0 = __this->___buffer;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m6C77B68042F0AC6ADA7695067F10B8DD3DD57056_gshared (List_1_tC1221FE86255A01D454BF5FF13AD6DF15E9BE844* __this, CompareFunc_t76EB0BBD466A89D78E7675FEACB717FB074BB89B* ___0_comparer, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t G_B8_0 = 0;
	{
		V_0 = 0;
		int32_t L_0 = __this->___size;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		V_2 = (bool)1;
		goto IL_0089;
	}

IL_000f:
	{
		V_2 = (bool)0;
		int32_t L_1 = V_0;
		V_3 = L_1;
		goto IL_0085;
	}

IL_0015:
	{
		CompareFunc_t76EB0BBD466A89D78E7675FEACB717FB074BB89B* L_2 = ___0_comparer;
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_3 = __this->___buffer;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_7 = __this->___buffer;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_2);
		int32_t L_11;
		L_11 = CompareFunc_Invoke_mC718903902546A9ED1B1B2E06AD20B88CE645202_inline(L_2, L_6, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		if ((((int32_t)L_11) <= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_12 = __this->___buffer;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_4 = L_15;
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_16 = __this->___buffer;
		int32_t L_17 = V_3;
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_18 = __this->___buffer;
		int32_t L_19 = V_3;
		NullCheck(L_18);
		int32_t L_20 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C)L_21);
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_22 = __this->___buffer;
		int32_t L_23 = V_3;
		CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C L_24 = V_4;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_23, 1))), (CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C)L_24);
		V_2 = (bool)1;
		goto IL_0081;
	}

IL_0074:
	{
		bool L_25 = V_2;
		if (L_25)
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_26 = V_3;
		if (!L_26)
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_27 = V_3;
		G_B8_0 = ((int32_t)il2cpp_codegen_subtract(L_27, 1));
		goto IL_0080;
	}

IL_007f:
	{
		G_B8_0 = 0;
	}

IL_0080:
	{
		V_0 = G_B8_0;
	}

IL_0081:
	{
		int32_t L_28 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0085:
	{
		int32_t L_29 = V_3;
		int32_t L_30 = V_1;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_0015;
		}
	}

IL_0089:
	{
		bool L_31 = V_2;
		if (L_31)
		{
			goto IL_000f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m649FBB9FB331EB46CB4E003235E305A19F4658F8_gshared (List_1_tC1221FE86255A01D454BF5FF13AD6DF15E9BE844* __this, CompareFunc2_tFEA3BB11B8D5CFD15B1B8038FF0C8C89230C2036* ___0_comparer, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t G_B8_0 = 0;
	{
		V_0 = 0;
		int32_t L_0 = __this->___size;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		V_2 = (bool)1;
		goto IL_0089;
	}

IL_000f:
	{
		V_2 = (bool)0;
		int32_t L_1 = V_0;
		V_3 = L_1;
		goto IL_0085;
	}

IL_0015:
	{
		CompareFunc2_tFEA3BB11B8D5CFD15B1B8038FF0C8C89230C2036* L_2 = ___0_comparer;
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_3 = __this->___buffer;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_5 = __this->___buffer;
		int32_t L_6 = V_3;
		NullCheck(L_5);
		NullCheck(L_2);
		int32_t L_7;
		L_7 = CompareFunc2_Invoke_m2F9F3C6F9A9719E132581007CC78C9134F4A2CF4_inline(L_2, ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4))), ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_6, 1))))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_8 = __this->___buffer;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_4 = L_11;
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_12 = __this->___buffer;
		int32_t L_13 = V_3;
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_14 = __this->___buffer;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C)L_17);
		CreatedObjectU5BU5D_t6CDF96E93ED04E7DE5B7A82B7F753EC88AEB367B* L_18 = __this->___buffer;
		int32_t L_19 = V_3;
		CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C L_20 = V_4;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_19, 1))), (CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C)L_20);
		V_2 = (bool)1;
		goto IL_0081;
	}

IL_0074:
	{
		bool L_21 = V_2;
		if (L_21)
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_22 = V_3;
		if (!L_22)
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_23 = V_3;
		G_B8_0 = ((int32_t)il2cpp_codegen_subtract(L_23, 1));
		goto IL_0080;
	}

IL_007f:
	{
		G_B8_0 = 0;
	}

IL_0080:
	{
		V_0 = G_B8_0;
	}

IL_0081:
	{
		int32_t L_24 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0085:
	{
		int32_t L_25 = V_3;
		int32_t L_26 = V_1;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0015;
		}
	}

IL_0089:
	{
		bool L_27 = V_2;
		if (L_27)
		{
			goto IL_000f;
		}
	}
	{
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m91159EC09344368CA9FE48CA644ABDBA2D982C76_gshared (List_1_tCACD479E29A169CA90AF0CCF99C641EF014769B0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mD7E2DC60D53C7756B769D6B521765B1B8572A7E9_gshared (List_1_tCACD479E29A169CA90AF0CCF99C641EF014769B0* __this, int32_t ___0_size, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_size;
		List_1_Allocate_m16D9359DB30B3324FA1385A0155A56E8545D30A8(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_GetEnumerator_mE86965CAD767464C9C2551088FB78831AE995C92_gshared (List_1_tCACD479E29A169CA90AF0CCF99C641EF014769B0* __this, const RuntimeMethod* method) 
{
	{
		U3CGetEnumeratorU3Ed__4_tF71A6602AE028134828814954F1617DD48FF3399* L_0 = (U3CGetEnumeratorU3Ed__4_tF71A6602AE028134828814954F1617DD48FF3399*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		U3CGetEnumeratorU3Ed__4__ctor_mB7211E35FE0CF7AB94C614E5DC5DB9117D8CF7BF(L_0, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		U3CGetEnumeratorU3Ed__4_tF71A6602AE028134828814954F1617DD48FF3399* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159 List_1_get_Item_m8DE19FB0866073965E32C1C0283A8B337D9733A1_gshared (List_1_tCACD479E29A169CA90AF0CCF99C641EF014769B0* __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	{
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_0 = __this->___buffer;
		int32_t L_1 = ___0_i;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159 L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m20201DDD63D71D6FF2081CE249016EEE21BB8F26_gshared (List_1_tCACD479E29A169CA90AF0CCF99C641EF014769B0* __this, int32_t ___0_i, ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159 ___1_value, const RuntimeMethod* method) 
{
	{
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_0 = __this->___buffer;
		int32_t L_1 = ___0_i;
		ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159 L_2 = ___1_value;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mDCD139F7D9F2FAF5C0051A2AFA2264580BAC5555_gshared (List_1_tCACD479E29A169CA90AF0CCF99C641EF014769B0* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_Get_mB72DE77189739CCA2C22F1238B83E7DC54E1530E_gshared (List_1_tCACD479E29A169CA90AF0CCF99C641EF014769B0* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_0 = __this->___buffer;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159 L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159 L_4 = L_3;
		RuntimeObject* L_5 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6), &L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Allocate_m16D9359DB30B3324FA1385A0155A56E8545D30A8_gshared (List_1_tCACD479E29A169CA90AF0CCF99C641EF014769B0* __this, int32_t ___0_newSize, const RuntimeMethod* method) 
{
	ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* V_0 = NULL;
	{
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_1 = __this->___buffer;
		NullCheck(L_1);
		int32_t L_2 = ___0_newSize;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))) >= ((int32_t)L_2)))
		{
			goto IL_003f;
		}
	}

IL_0013:
	{
		int32_t L_3 = ___0_newSize;
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_4 = (ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904*)(ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 7), (uint32_t)L_3);
		V_0 = L_4;
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_5 = __this->___buffer;
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_6 = __this->___size;
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_7 = __this->___buffer;
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_8 = V_0;
		NullCheck((RuntimeArray*)L_7);
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_7, (RuntimeArray*)L_8, 0, NULL);
	}

IL_0038:
	{
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_9 = V_0;
		__this->___buffer = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)L_9);
	}

IL_003f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AllocateMore_mF0BB57DAA87CBD00F589B1203D5F6A67FCF985FF_gshared (List_1_tCACD479E29A169CA90AF0CCF99C641EF014769B0* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* V_1 = NULL;
	int32_t G_B3_0 = 0;
	{
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_1 = __this->___buffer;
		NullCheck(L_1);
		G_B3_0 = ((int32_t)(((int32_t)(((RuntimeArray*)L_1)->max_length))<<1));
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 0;
	}

IL_0015:
	{
		V_0 = G_B3_0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)32))))
		{
			goto IL_001e;
		}
	}
	{
		V_0 = ((int32_t)32);
	}

IL_001e:
	{
		int32_t L_3 = V_0;
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_4 = (ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904*)(ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 7), (uint32_t)L_3);
		V_1 = L_4;
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_5 = __this->___buffer;
		if (!L_5)
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_6 = __this->___size;
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0043;
		}
	}
	{
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_7 = __this->___buffer;
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_8 = V_1;
		NullCheck((RuntimeArray*)L_7);
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_7, (RuntimeArray*)L_8, 0, NULL);
	}

IL_0043:
	{
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_9 = V_1;
		__this->___buffer = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)L_9);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Resize_mED1CD7A5298D0A249E20C24D7D36CC2EEC8D4E9F_gshared (List_1_tCACD479E29A169CA90AF0CCF99C641EF014769B0* __this, int32_t ___0_newSize, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___size;
		int32_t L_1 = ___0_newSize;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0032;
		}
	}
	{
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_2 = __this->___buffer;
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_3 = ___0_newSize;
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_4 = (ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904*)(ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 7), (uint32_t)L_3);
		__this->___buffer = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)L_4);
		goto IL_002b;
	}

IL_001f:
	{
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904** L_5 = (ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904**)(&__this->___buffer);
		int32_t L_6 = ___0_newSize;
		Array_Resize_TisForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159_m06A92FA5D1D135582B2327E60993DABCF96C958D(L_5, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
	}

IL_002b:
	{
		int32_t L_7 = ___0_newSize;
		__this->___size = L_7;
	}

IL_0032:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Trim_m5DEEE863BB3BBFFBD9952AB0AC6086A2A69A82EB_gshared (List_1_tCACD479E29A169CA90AF0CCF99C641EF014769B0* __this, const RuntimeMethod* method) 
{
	ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->___size;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_1 = __this->___size;
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_2 = __this->___buffer;
		NullCheck(L_2);
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))
		{
			goto IL_005d;
		}
	}
	{
		int32_t L_3 = __this->___size;
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_4 = (ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904*)(ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 7), (uint32_t)L_3);
		V_0 = L_4;
		V_1 = 0;
		goto IL_0040;
	}

IL_0029:
	{
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_5 = V_0;
		int32_t L_6 = V_1;
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_7 = __this->___buffer;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159 L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159)L_10);
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0040:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = __this->___size;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0029;
		}
	}
	{
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_14 = V_0;
		__this->___buffer = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)L_14);
		return;
	}

IL_0051:
	{
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_15 = (ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904*)(ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 7), (uint32_t)0);
		__this->___buffer = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)L_15);
	}

IL_005d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m1CEE7A37536B57351C5D30B0698DAE37CDCA0AA4_gshared (List_1_tCACD479E29A169CA90AF0CCF99C641EF014769B0* __this, const RuntimeMethod* method) 
{
	{
		__this->___size = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m55283A2FAAF2A68F682FE2291AC8071B91BEB89F_gshared (List_1_tCACD479E29A169CA90AF0CCF99C641EF014769B0* __this, int32_t ___0_allocateSize, const RuntimeMethod* method) 
{
	{
		__this->___size = 0;
		int32_t L_0 = ___0_allocateSize;
		List_1_Allocate_m16D9359DB30B3324FA1385A0155A56E8545D30A8(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Release_mC68ED3889DDD2AAE1C429A6A1DBAEB73A750E877_gshared (List_1_tCACD479E29A169CA90AF0CCF99C641EF014769B0* __this, const RuntimeMethod* method) 
{
	{
		__this->___size = 0;
		__this->___buffer = (ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)(ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_Expand_m216269C9C4234FCFC14091D7B0C3679FD5C71830_gshared (List_1_tCACD479E29A169CA90AF0CCF99C641EF014769B0* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->___size;
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_2 = __this->___buffer;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_001e;
		}
	}

IL_0018:
	{
		List_1_AllocateMore_mF0BB57DAA87CBD00F589B1203D5F6A67FCF985FF(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001e:
	{
		int32_t L_3 = __this->___size;
		V_0 = L_3;
		int32_t L_4 = V_0;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_4, 1));
		int32_t L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_Expand_m01A4D27934D4B1048357E94FEE38E4DC437F5B63_gshared (List_1_tCACD479E29A169CA90AF0CCF99C641EF014769B0* __this, int32_t ___0_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = __this->___size;
		int32_t L_1 = __this->___size;
		int32_t L_2 = ___0_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_3 = __this->___buffer;
		if (!L_3)
		{
			G_B2_0 = L_0;
			goto IL_0029;
		}
		G_B1_0 = L_0;
	}
	{
		int32_t L_4 = __this->___size;
		int32_t L_5 = V_0;
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_6 = __this->___buffer;
		NullCheck(L_6);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_4, L_5))) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			G_B3_0 = G_B1_0;
			goto IL_0037;
		}
		G_B2_0 = G_B1_0;
	}

IL_0029:
	{
		int32_t L_7 = __this->___size;
		int32_t L_8 = V_0;
		List_1_Allocate_m16D9359DB30B3324FA1385A0155A56E8545D30A8(__this, ((int32_t)il2cpp_codegen_add(L_7, L_8)), il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		G_B3_0 = G_B2_0;
	}

IL_0037:
	{
		int32_t L_9 = __this->___size;
		int32_t L_10 = ___0_count;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_9, L_10));
		return G_B3_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m0CF78C8800728BBD2B22BB78CE1387FE65A36E89_gshared (List_1_tCACD479E29A169CA90AF0CCF99C641EF014769B0* __this, ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159 ___0_item, const RuntimeMethod* method) 
{
	{
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->___size;
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_2 = __this->___buffer;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_001e;
		}
	}

IL_0018:
	{
		List_1_AllocateMore_mF0BB57DAA87CBD00F589B1203D5F6A67FCF985FF(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001e:
	{
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_3 = __this->___buffer;
		int32_t L_4 = __this->___size;
		ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159 L_5 = ___0_item;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159)L_5);
		int32_t L_6 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6437513A8284C7148A16B72CEAD2639F7721E807_gshared (List_1_tCACD479E29A169CA90AF0CCF99C641EF014769B0* __this, ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* ___0_items, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___size;
		int32_t L_1 = ___2_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_2 = __this->___buffer;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_3 = __this->___size;
		int32_t L_4 = V_0;
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_5 = __this->___buffer;
		NullCheck(L_5);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_3, L_4))) < ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))))
		{
			goto IL_0031;
		}
	}

IL_0023:
	{
		int32_t L_6 = __this->___size;
		int32_t L_7 = V_0;
		List_1_Allocate_m16D9359DB30B3324FA1385A0155A56E8545D30A8(__this, ((int32_t)il2cpp_codegen_add(L_6, L_7)), il2cpp_rgctx_method(method->klass->rgctx_data, 0));
	}

IL_0031:
	{
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_8 = ___0_items;
		int32_t L_9 = ___1_offset;
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_10 = __this->___buffer;
		int32_t L_11 = __this->___size;
		int32_t L_12 = ___2_count;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, L_9, (RuntimeArray*)L_10, L_11, L_12, NULL);
		int32_t L_13 = __this->___size;
		int32_t L_14 = ___2_count;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_13, L_14));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m3FBFEED4A5CB8FB81C7A78C1B964574FBE77F281_gshared (List_1_tCACD479E29A169CA90AF0CCF99C641EF014769B0* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->___size;
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_2 = __this->___buffer;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_001e;
		}
	}

IL_0018:
	{
		List_1_AllocateMore_mF0BB57DAA87CBD00F589B1203D5F6A67FCF985FF(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001e:
	{
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_3 = __this->___buffer;
		int32_t L_4 = __this->___size;
		RuntimeObject* L_5 = ___0_item;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159)((*(ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159*)((ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159*)(ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159*)UnBox(L_5, il2cpp_rgctx_data(method->klass->rgctx_data, 6))))));
		int32_t L_6 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Add_mEE55D3E72C611B4C3EF8E7FB64FD0061CB05F395_gshared (List_1_tCACD479E29A169CA90AF0CCF99C641EF014769B0* __this, ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159 ___0_item, bool ___1_unique, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___1_unique;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159 L_1 = ___0_item;
		bool L_2;
		L_2 = List_1_Contains_mA283750C6BB8790634CE95E7283BE3AF4E3E8DDF(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		return (bool)0;
	}

IL_000e:
	{
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_3 = __this->___buffer;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_4 = __this->___size;
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_5 = __this->___buffer;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_002c;
		}
	}

IL_0026:
	{
		List_1_AllocateMore_mF0BB57DAA87CBD00F589B1203D5F6A67FCF985FF(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_002c:
	{
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_6 = __this->___buffer;
		int32_t L_7 = __this->___size;
		ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159 L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159)L_8);
		int32_t L_9 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Add_m7165ED69DC343A49236FED97A5D1E7BDA7B7E5AF_gshared (List_1_tCACD479E29A169CA90AF0CCF99C641EF014769B0* __this, RuntimeObject* ___0_item, bool ___1_unique, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___1_unique;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = ___0_item;
		bool L_2;
		L_2 = List_1_Contains_mA283750C6BB8790634CE95E7283BE3AF4E3E8DDF(__this, ((*(ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159*)((ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159*)(ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 6))))), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_3 = __this->___buffer;
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_4 = __this->___size;
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_5 = __this->___buffer;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0031;
		}
	}

IL_002b:
	{
		List_1_AllocateMore_mF0BB57DAA87CBD00F589B1203D5F6A67FCF985FF(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_0031:
	{
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_6 = __this->___buffer;
		int32_t L_7 = __this->___size;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159)((*(ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159*)((ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159*)(ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159*)UnBox(L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 6))))));
		int32_t L_9 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m54167FB21BBACBFD3962358E95FE81C40A3DF9C6_gshared (List_1_tCACD479E29A169CA90AF0CCF99C641EF014769B0* __this, int32_t ___0_index, ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159 ___1_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->___size;
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_2 = __this->___buffer;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_001e;
		}
	}

IL_0018:
	{
		List_1_AllocateMore_mF0BB57DAA87CBD00F589B1203D5F6A67FCF985FF(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001e:
	{
		int32_t L_3 = ___0_index;
		if ((((int32_t)L_3) <= ((int32_t)(-1))))
		{
			goto IL_0072;
		}
	}
	{
		int32_t L_4 = ___0_index;
		int32_t L_5 = __this->___size;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0072;
		}
	}
	{
		int32_t L_6 = __this->___size;
		V_0 = L_6;
		goto IL_0052;
	}

IL_0034:
	{
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_7 = __this->___buffer;
		int32_t L_8 = V_0;
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_9 = __this->___buffer;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159 L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159)L_12);
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
	}

IL_0052:
	{
		int32_t L_14 = V_0;
		int32_t L_15 = ___0_index;
		if ((((int32_t)L_14) > ((int32_t)L_15)))
		{
			goto IL_0034;
		}
	}
	{
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_16 = __this->___buffer;
		int32_t L_17 = ___0_index;
		ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159 L_18 = ___1_item;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159)L_18);
		int32_t L_19 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_19, 1));
		return;
	}

IL_0072:
	{
		ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159 L_20 = ___1_item;
		List_1_Add_m0CF78C8800728BBD2B22BB78CE1387FE65A36E89(__this, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mA283750C6BB8790634CE95E7283BE3AF4E3E8DDF_gshared (List_1_tCACD479E29A169CA90AF0CCF99C641EF014769B0* __this, ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_0 = __this->___buffer;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		V_0 = 0;
		goto IL_0048;
	}

IL_000e:
	{
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_1 = __this->___buffer;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
	}
	{
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_5 = __this->___buffer;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159 L_7 = ___0_item;
		ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159 L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6), &L_8);
		Il2CppFakeBox<ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159> L_10(il2cpp_rgctx_data(method->klass->rgctx_data, 6), ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6))));
		bool L_11;
		L_11 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_10), L_9, NULL);
		if (!L_11)
		{
			goto IL_0044;
		}
	}
	{
		return (bool)1;
	}

IL_0044:
	{
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0048:
	{
		int32_t L_13 = V_0;
		int32_t L_14 = __this->___size;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_000e;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_mB680A0D560DFBCE07E2C10FE07AA8E8BABEA24E9_gshared (List_1_tCACD479E29A169CA90AF0CCF99C641EF014769B0* __this, ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_0 = __this->___buffer;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (-1);
	}

IL_000a:
	{
		V_0 = 0;
		goto IL_0048;
	}

IL_000e:
	{
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_1 = __this->___buffer;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
	}
	{
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_5 = __this->___buffer;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159 L_7 = ___0_item;
		ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159 L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6), &L_8);
		Il2CppFakeBox<ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159> L_10(il2cpp_rgctx_data(method->klass->rgctx_data, 6), ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6))));
		bool L_11;
		L_11 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_10), L_9, NULL);
		if (!L_11)
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_12 = V_0;
		return L_12;
	}

IL_0044:
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0048:
	{
		int32_t L_14 = V_0;
		int32_t L_15 = __this->___size;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_000e;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_mD6F1477FB536925F2B60001DEEBB3FB2D5B7B99F_gshared (List_1_tCACD479E29A169CA90AF0CCF99C641EF014769B0* __this, ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159 ___0_item, const RuntimeMethod* method) 
{
	EqualityComparer_1_t3D60CA8A640E0FE68A2A24EF9B9A2F530ED94537* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_006e;
		}
	}
	{
		EqualityComparer_1_t3D60CA8A640E0FE68A2A24EF9B9A2F530ED94537* L_1;
		L_1 = EqualityComparer_1_get_Default_mBDC223572228738F1141303BE04A30F3F9C80E00_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		V_0 = L_1;
		V_1 = 0;
		goto IL_0065;
	}

IL_0012:
	{
		EqualityComparer_1_t3D60CA8A640E0FE68A2A24EF9B9A2F530ED94537* L_2 = V_0;
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_3 = __this->___buffer;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159 L_7 = ___0_item;
		NullCheck(L_2);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159, ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159 >::Invoke(8, L_2, L_6, L_7);
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10 = __this->___size;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_9, 1))) >= ((int32_t)L_10)))
		{
			goto IL_0051;
		}
	}
	{
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_11 = __this->___buffer;
		int32_t L_12 = V_1;
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_13 = __this->___buffer;
		int32_t L_14 = V_1;
		int32_t L_15 = __this->___size;
		int32_t L_16 = V_1;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, 1)), (RuntimeArray*)L_13, L_14, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_15, L_16)), 1)), NULL);
	}

IL_0051:
	{
		int32_t L_17 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
		return (bool)1;
	}

IL_0061:
	{
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0065:
	{
		int32_t L_19 = V_1;
		int32_t L_20 = __this->___size;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0012;
		}
	}

IL_006e:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m34AFB2521CB1895BD4CEDA8E90F65BEFA14E4C62_gshared (List_1_tCACD479E29A169CA90AF0CCF99C641EF014769B0* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_1 = ___0_index;
		if ((((int32_t)L_1) <= ((int32_t)(-1))))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_2 = ___0_index;
		int32_t L_3 = __this->___size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_4 = ___0_index;
		int32_t L_5 = __this->___size;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_4, 1))) >= ((int32_t)L_5)))
		{
			goto IL_003f;
		}
	}
	{
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_6 = __this->___buffer;
		int32_t L_7 = ___0_index;
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_8 = __this->___buffer;
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->___size;
		int32_t L_11 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, ((int32_t)il2cpp_codegen_add(L_7, 1)), (RuntimeArray*)L_8, L_9, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_10, L_11)), 1)), NULL);
	}

IL_003f:
	{
		int32_t L_12 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
	}

IL_004d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_mD123346327A2B5971AA437D0619D95B86B8D9ABB_gshared (List_1_tCACD479E29A169CA90AF0CCF99C641EF014769B0* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = ___1_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		int32_t L_2 = V_0;
		int32_t L_3 = __this->___size;
		if ((((int32_t)L_2) <= ((int32_t)L_3)))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_4 = __this->___size;
		V_0 = L_4;
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_index;
		___1_count = ((int32_t)il2cpp_codegen_subtract(L_5, L_6));
	}

IL_0019:
	{
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_7 = __this->___buffer;
		if (!L_7)
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_8 = ___0_index;
		if ((((int32_t)L_8) <= ((int32_t)(-1))))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->___size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_11 = ___0_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) >= ((int32_t)L_12)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_13 = V_0;
		int32_t L_14 = __this->___size;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_13, 1))) >= ((int32_t)L_14)))
		{
			goto IL_0058;
		}
	}
	{
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_15 = __this->___buffer;
		int32_t L_16 = V_0;
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_17 = __this->___buffer;
		int32_t L_18 = ___0_index;
		int32_t L_19 = __this->___size;
		int32_t L_20 = V_0;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, L_16, (RuntimeArray*)L_17, L_18, ((int32_t)il2cpp_codegen_subtract(L_19, L_20)), NULL);
	}

IL_0058:
	{
		int32_t L_21 = __this->___size;
		int32_t L_22 = ___1_count;
		__this->___size = ((int32_t)il2cpp_codegen_subtract(L_21, L_22));
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159 List_1_Pop_m1EC03592D9F2E53F03AD25D7BA9B0C3768C38BB7_gshared (List_1_tCACD479E29A169CA90AF0CCF99C641EF014769B0* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_1 = __this->___size;
		if (!L_1)
		{
			goto IL_0047;
		}
	}
	{
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_2 = __this->___buffer;
		int32_t L_3 = __this->___size;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		int32_t L_4 = V_0;
		__this->___size = L_4;
		int32_t L_5 = V_0;
		NullCheck(L_2);
		int32_t L_6 = L_5;
		ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159 L_7 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_8 = __this->___buffer;
		int32_t L_9 = __this->___size;
		il2cpp_codegen_initobj((&V_1), sizeof(ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159));
		ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159 L_10 = V_1;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159)L_10);
		return L_7;
	}

IL_0047:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159));
		ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159 L_11 = V_1;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* List_1_ToArray_m31F31865FFB6DEF5587A0C7DD52A141AED357205_gshared (List_1_tCACD479E29A169CA90AF0CCF99C641EF014769B0* __this, const RuntimeMethod* method) 
{
	{
		List_1_Trim_m5DEEE863BB3BBFFBD9952AB0AC6086A2A69A82EB(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_0 = __this->___buffer;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m7A372F042E1EC8E0E752C8F7FE7FEA32464680F4_gshared (List_1_tCACD479E29A169CA90AF0CCF99C641EF014769B0* __this, CompareFunc_t206ED15B484D41AE9042019C27F884344B255783* ___0_comparer, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159 V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t G_B8_0 = 0;
	{
		V_0 = 0;
		int32_t L_0 = __this->___size;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		V_2 = (bool)1;
		goto IL_0089;
	}

IL_000f:
	{
		V_2 = (bool)0;
		int32_t L_1 = V_0;
		V_3 = L_1;
		goto IL_0085;
	}

IL_0015:
	{
		CompareFunc_t206ED15B484D41AE9042019C27F884344B255783* L_2 = ___0_comparer;
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_3 = __this->___buffer;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_7 = __this->___buffer;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159 L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_2);
		int32_t L_11;
		L_11 = CompareFunc_Invoke_m11FC03C47C5266EE2CF5A04B4B4CCB88FE426CBD_inline(L_2, L_6, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		if ((((int32_t)L_11) <= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_12 = __this->___buffer;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159 L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_4 = L_15;
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_16 = __this->___buffer;
		int32_t L_17 = V_3;
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_18 = __this->___buffer;
		int32_t L_19 = V_3;
		NullCheck(L_18);
		int32_t L_20 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159 L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159)L_21);
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_22 = __this->___buffer;
		int32_t L_23 = V_3;
		ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159 L_24 = V_4;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_23, 1))), (ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159)L_24);
		V_2 = (bool)1;
		goto IL_0081;
	}

IL_0074:
	{
		bool L_25 = V_2;
		if (L_25)
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_26 = V_3;
		if (!L_26)
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_27 = V_3;
		G_B8_0 = ((int32_t)il2cpp_codegen_subtract(L_27, 1));
		goto IL_0080;
	}

IL_007f:
	{
		G_B8_0 = 0;
	}

IL_0080:
	{
		V_0 = G_B8_0;
	}

IL_0081:
	{
		int32_t L_28 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0085:
	{
		int32_t L_29 = V_3;
		int32_t L_30 = V_1;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_0015;
		}
	}

IL_0089:
	{
		bool L_31 = V_2;
		if (L_31)
		{
			goto IL_000f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m64C84661B9A0F2C977C3116874F0143FF43BC165_gshared (List_1_tCACD479E29A169CA90AF0CCF99C641EF014769B0* __this, CompareFunc2_tC9F227180BCA310DAF62751E1DEA1A7C4CCDEDEC* ___0_comparer, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159 V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t G_B8_0 = 0;
	{
		V_0 = 0;
		int32_t L_0 = __this->___size;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		V_2 = (bool)1;
		goto IL_0089;
	}

IL_000f:
	{
		V_2 = (bool)0;
		int32_t L_1 = V_0;
		V_3 = L_1;
		goto IL_0085;
	}

IL_0015:
	{
		CompareFunc2_tC9F227180BCA310DAF62751E1DEA1A7C4CCDEDEC* L_2 = ___0_comparer;
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_3 = __this->___buffer;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_5 = __this->___buffer;
		int32_t L_6 = V_3;
		NullCheck(L_5);
		NullCheck(L_2);
		int32_t L_7;
		L_7 = CompareFunc2_Invoke_m3DA56544470A1EBE123C6801AC1CB3CC43B46105_inline(L_2, ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4))), ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_6, 1))))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_8 = __this->___buffer;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159 L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_4 = L_11;
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_12 = __this->___buffer;
		int32_t L_13 = V_3;
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_14 = __this->___buffer;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159 L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159)L_17);
		ForwardRecordU5BU5D_t05B2F4A02A8E02E606967B085E6C9B933BA03904* L_18 = __this->___buffer;
		int32_t L_19 = V_3;
		ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159 L_20 = V_4;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_19, 1))), (ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159)L_20);
		V_2 = (bool)1;
		goto IL_0081;
	}

IL_0074:
	{
		bool L_21 = V_2;
		if (L_21)
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_22 = V_3;
		if (!L_22)
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_23 = V_3;
		G_B8_0 = ((int32_t)il2cpp_codegen_subtract(L_23, 1));
		goto IL_0080;
	}

IL_007f:
	{
		G_B8_0 = 0;
	}

IL_0080:
	{
		V_0 = G_B8_0;
	}

IL_0081:
	{
		int32_t L_24 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0085:
	{
		int32_t L_25 = V_3;
		int32_t L_26 = V_1;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0015;
		}
	}

IL_0089:
	{
		bool L_27 = V_2;
		if (L_27)
		{
			goto IL_000f;
		}
	}
	{
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mA98F30F08860FF3AE6EF6B2BEDCC8CF35ADB8182_gshared (List_1_tB7868517D05AB4986301D3A0FACCA168071E490B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m6B4AB04AA8CFB340393834468A996418A4EC4F76_gshared (List_1_tB7868517D05AB4986301D3A0FACCA168071E490B* __this, int32_t ___0_size, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_size;
		List_1_Allocate_mC7C60762AE8065316551678BC01CB2537CE3B9FA(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_GetEnumerator_m696D20A940930BCFBFA05081AC1C9B833A77B813_gshared (List_1_tB7868517D05AB4986301D3A0FACCA168071E490B* __this, const RuntimeMethod* method) 
{
	{
		U3CGetEnumeratorU3Ed__4_t2B7FF639B0D0A5F72C476ACC9FF0A11A170EA1A9* L_0 = (U3CGetEnumeratorU3Ed__4_t2B7FF639B0D0A5F72C476ACC9FF0A11A170EA1A9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		U3CGetEnumeratorU3Ed__4__ctor_m6F20A01C8F2765B70F96E68F7DD1955C639C629B(L_0, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		U3CGetEnumeratorU3Ed__4_t2B7FF639B0D0A5F72C476ACC9FF0A11A170EA1A9* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606 List_1_get_Item_mEFF80EB21894019E7CC65054360E2E73DE606BA7_gshared (List_1_tB7868517D05AB4986301D3A0FACCA168071E490B* __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	{
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_0 = __this->___buffer;
		int32_t L_1 = ___0_i;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606 L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m3050151063DA19736000473DD76B467C4AA23BE9_gshared (List_1_tB7868517D05AB4986301D3A0FACCA168071E490B* __this, int32_t ___0_i, Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606 ___1_value, const RuntimeMethod* method) 
{
	{
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_0 = __this->___buffer;
		int32_t L_1 = ___0_i;
		Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606 L_2 = ___1_value;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m99870F19EE93681FADDAD2C6A1A7ADB5737A56C3_gshared (List_1_tB7868517D05AB4986301D3A0FACCA168071E490B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_Get_mC188287BB77D46E17E68B93F5E7D321DCA58E129_gshared (List_1_tB7868517D05AB4986301D3A0FACCA168071E490B* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_0 = __this->___buffer;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606 L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606 L_4 = L_3;
		RuntimeObject* L_5 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6), &L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Allocate_mC7C60762AE8065316551678BC01CB2537CE3B9FA_gshared (List_1_tB7868517D05AB4986301D3A0FACCA168071E490B* __this, int32_t ___0_newSize, const RuntimeMethod* method) 
{
	InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* V_0 = NULL;
	{
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_1 = __this->___buffer;
		NullCheck(L_1);
		int32_t L_2 = ___0_newSize;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))) >= ((int32_t)L_2)))
		{
			goto IL_003f;
		}
	}

IL_0013:
	{
		int32_t L_3 = ___0_newSize;
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_4 = (InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549*)(InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 7), (uint32_t)L_3);
		V_0 = L_4;
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_5 = __this->___buffer;
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_6 = __this->___size;
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_7 = __this->___buffer;
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_8 = V_0;
		NullCheck((RuntimeArray*)L_7);
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_7, (RuntimeArray*)L_8, 0, NULL);
	}

IL_0038:
	{
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_9 = V_0;
		__this->___buffer = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)L_9);
	}

IL_003f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AllocateMore_m36A3C3BEB49F64E3ADCB91F87C2D3B23DEF947E1_gshared (List_1_tB7868517D05AB4986301D3A0FACCA168071E490B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* V_1 = NULL;
	int32_t G_B3_0 = 0;
	{
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_1 = __this->___buffer;
		NullCheck(L_1);
		G_B3_0 = ((int32_t)(((int32_t)(((RuntimeArray*)L_1)->max_length))<<1));
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 0;
	}

IL_0015:
	{
		V_0 = G_B3_0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)32))))
		{
			goto IL_001e;
		}
	}
	{
		V_0 = ((int32_t)32);
	}

IL_001e:
	{
		int32_t L_3 = V_0;
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_4 = (InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549*)(InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 7), (uint32_t)L_3);
		V_1 = L_4;
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_5 = __this->___buffer;
		if (!L_5)
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_6 = __this->___size;
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0043;
		}
	}
	{
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_7 = __this->___buffer;
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_8 = V_1;
		NullCheck((RuntimeArray*)L_7);
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_7, (RuntimeArray*)L_8, 0, NULL);
	}

IL_0043:
	{
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_9 = V_1;
		__this->___buffer = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)L_9);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Resize_mA60A8FC569E17AD8E652BF3FCF2CA22B52A2F230_gshared (List_1_tB7868517D05AB4986301D3A0FACCA168071E490B* __this, int32_t ___0_newSize, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___size;
		int32_t L_1 = ___0_newSize;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0032;
		}
	}
	{
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_2 = __this->___buffer;
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_3 = ___0_newSize;
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_4 = (InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549*)(InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 7), (uint32_t)L_3);
		__this->___buffer = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)L_4);
		goto IL_002b;
	}

IL_001f:
	{
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549** L_5 = (InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549**)(&__this->___buffer);
		int32_t L_6 = ___0_newSize;
		Array_Resize_TisInfo_t44CC3C8A15C01ED6865494E4962A609C4FDD5606_m55EC5CE62409C8B19BA5A84C0EDD95133C37682F(L_5, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
	}

IL_002b:
	{
		int32_t L_7 = ___0_newSize;
		__this->___size = L_7;
	}

IL_0032:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Trim_mAE66B47854ECADE387D4B533BFC897DD7CEF810D_gshared (List_1_tB7868517D05AB4986301D3A0FACCA168071E490B* __this, const RuntimeMethod* method) 
{
	InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->___size;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_1 = __this->___size;
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_2 = __this->___buffer;
		NullCheck(L_2);
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))
		{
			goto IL_005d;
		}
	}
	{
		int32_t L_3 = __this->___size;
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_4 = (InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549*)(InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 7), (uint32_t)L_3);
		V_0 = L_4;
		V_1 = 0;
		goto IL_0040;
	}

IL_0029:
	{
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_5 = V_0;
		int32_t L_6 = V_1;
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_7 = __this->___buffer;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606 L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606)L_10);
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0040:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = __this->___size;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0029;
		}
	}
	{
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_14 = V_0;
		__this->___buffer = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)L_14);
		return;
	}

IL_0051:
	{
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_15 = (InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549*)(InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 7), (uint32_t)0);
		__this->___buffer = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)L_15);
	}

IL_005d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m74F4F1286FE8EC8793FE0BCD45DCF17ABACDA986_gshared (List_1_tB7868517D05AB4986301D3A0FACCA168071E490B* __this, const RuntimeMethod* method) 
{
	{
		__this->___size = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m46AE069C9EA239D6AF0405C1541BB099ED9814D1_gshared (List_1_tB7868517D05AB4986301D3A0FACCA168071E490B* __this, int32_t ___0_allocateSize, const RuntimeMethod* method) 
{
	{
		__this->___size = 0;
		int32_t L_0 = ___0_allocateSize;
		List_1_Allocate_mC7C60762AE8065316551678BC01CB2537CE3B9FA(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Release_m7B5B9E3D4CC871E00DA335AF40160D42319444B4_gshared (List_1_tB7868517D05AB4986301D3A0FACCA168071E490B* __this, const RuntimeMethod* method) 
{
	{
		__this->___size = 0;
		__this->___buffer = (InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)(InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_Expand_mE472B7A96074BDD323B1C24D24533C4BA8D23E92_gshared (List_1_tB7868517D05AB4986301D3A0FACCA168071E490B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->___size;
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_2 = __this->___buffer;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_001e;
		}
	}

IL_0018:
	{
		List_1_AllocateMore_m36A3C3BEB49F64E3ADCB91F87C2D3B23DEF947E1(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001e:
	{
		int32_t L_3 = __this->___size;
		V_0 = L_3;
		int32_t L_4 = V_0;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_4, 1));
		int32_t L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_Expand_m5B7E8D444BC43037C233EF69C9B89E8288E76083_gshared (List_1_tB7868517D05AB4986301D3A0FACCA168071E490B* __this, int32_t ___0_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = __this->___size;
		int32_t L_1 = __this->___size;
		int32_t L_2 = ___0_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_3 = __this->___buffer;
		if (!L_3)
		{
			G_B2_0 = L_0;
			goto IL_0029;
		}
		G_B1_0 = L_0;
	}
	{
		int32_t L_4 = __this->___size;
		int32_t L_5 = V_0;
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_6 = __this->___buffer;
		NullCheck(L_6);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_4, L_5))) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			G_B3_0 = G_B1_0;
			goto IL_0037;
		}
		G_B2_0 = G_B1_0;
	}

IL_0029:
	{
		int32_t L_7 = __this->___size;
		int32_t L_8 = V_0;
		List_1_Allocate_mC7C60762AE8065316551678BC01CB2537CE3B9FA(__this, ((int32_t)il2cpp_codegen_add(L_7, L_8)), il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		G_B3_0 = G_B2_0;
	}

IL_0037:
	{
		int32_t L_9 = __this->___size;
		int32_t L_10 = ___0_count;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_9, L_10));
		return G_B3_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE0836260320B430E8C8C71ACFC47C2F9DE92A99B_gshared (List_1_tB7868517D05AB4986301D3A0FACCA168071E490B* __this, Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606 ___0_item, const RuntimeMethod* method) 
{
	{
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->___size;
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_2 = __this->___buffer;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_001e;
		}
	}

IL_0018:
	{
		List_1_AllocateMore_m36A3C3BEB49F64E3ADCB91F87C2D3B23DEF947E1(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001e:
	{
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_3 = __this->___buffer;
		int32_t L_4 = __this->___size;
		Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606 L_5 = ___0_item;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606)L_5);
		int32_t L_6 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m8A76C80E076070150320C58C37B786AAFA18F966_gshared (List_1_tB7868517D05AB4986301D3A0FACCA168071E490B* __this, InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* ___0_items, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___size;
		int32_t L_1 = ___2_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_2 = __this->___buffer;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_3 = __this->___size;
		int32_t L_4 = V_0;
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_5 = __this->___buffer;
		NullCheck(L_5);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_3, L_4))) < ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))))
		{
			goto IL_0031;
		}
	}

IL_0023:
	{
		int32_t L_6 = __this->___size;
		int32_t L_7 = V_0;
		List_1_Allocate_mC7C60762AE8065316551678BC01CB2537CE3B9FA(__this, ((int32_t)il2cpp_codegen_add(L_6, L_7)), il2cpp_rgctx_method(method->klass->rgctx_data, 0));
	}

IL_0031:
	{
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_8 = ___0_items;
		int32_t L_9 = ___1_offset;
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_10 = __this->___buffer;
		int32_t L_11 = __this->___size;
		int32_t L_12 = ___2_count;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, L_9, (RuntimeArray*)L_10, L_11, L_12, NULL);
		int32_t L_13 = __this->___size;
		int32_t L_14 = ___2_count;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_13, L_14));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mC0D238E7AFCD0BF10ABC9E9EC422D57098D2FCC3_gshared (List_1_tB7868517D05AB4986301D3A0FACCA168071E490B* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->___size;
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_2 = __this->___buffer;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_001e;
		}
	}

IL_0018:
	{
		List_1_AllocateMore_m36A3C3BEB49F64E3ADCB91F87C2D3B23DEF947E1(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001e:
	{
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_3 = __this->___buffer;
		int32_t L_4 = __this->___size;
		RuntimeObject* L_5 = ___0_item;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606)((*(Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606*)((Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606*)(Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606*)UnBox(L_5, il2cpp_rgctx_data(method->klass->rgctx_data, 6))))));
		int32_t L_6 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Add_m01886E892A83C1CE98F0D720D53CC4885436B741_gshared (List_1_tB7868517D05AB4986301D3A0FACCA168071E490B* __this, Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606 ___0_item, bool ___1_unique, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___1_unique;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606 L_1 = ___0_item;
		bool L_2;
		L_2 = List_1_Contains_mA0DC7C93AEB368776DC094FA4089CBFC1B482451(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		return (bool)0;
	}

IL_000e:
	{
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_3 = __this->___buffer;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_4 = __this->___size;
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_5 = __this->___buffer;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_002c;
		}
	}

IL_0026:
	{
		List_1_AllocateMore_m36A3C3BEB49F64E3ADCB91F87C2D3B23DEF947E1(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_002c:
	{
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_6 = __this->___buffer;
		int32_t L_7 = __this->___size;
		Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606 L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606)L_8);
		int32_t L_9 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Add_m189411E0AFA9967242FB6B2985823DB889591BFF_gshared (List_1_tB7868517D05AB4986301D3A0FACCA168071E490B* __this, RuntimeObject* ___0_item, bool ___1_unique, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___1_unique;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = ___0_item;
		bool L_2;
		L_2 = List_1_Contains_mA0DC7C93AEB368776DC094FA4089CBFC1B482451(__this, ((*(Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606*)((Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606*)(Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 6))))), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_3 = __this->___buffer;
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_4 = __this->___size;
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_5 = __this->___buffer;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0031;
		}
	}

IL_002b:
	{
		List_1_AllocateMore_m36A3C3BEB49F64E3ADCB91F87C2D3B23DEF947E1(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_0031:
	{
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_6 = __this->___buffer;
		int32_t L_7 = __this->___size;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606)((*(Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606*)((Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606*)(Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606*)UnBox(L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 6))))));
		int32_t L_9 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m86100E6DD50C47E8AB2D94178989D8B1526CC5CF_gshared (List_1_tB7868517D05AB4986301D3A0FACCA168071E490B* __this, int32_t ___0_index, Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606 ___1_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->___size;
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_2 = __this->___buffer;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_001e;
		}
	}

IL_0018:
	{
		List_1_AllocateMore_m36A3C3BEB49F64E3ADCB91F87C2D3B23DEF947E1(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001e:
	{
		int32_t L_3 = ___0_index;
		if ((((int32_t)L_3) <= ((int32_t)(-1))))
		{
			goto IL_0072;
		}
	}
	{
		int32_t L_4 = ___0_index;
		int32_t L_5 = __this->___size;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0072;
		}
	}
	{
		int32_t L_6 = __this->___size;
		V_0 = L_6;
		goto IL_0052;
	}

IL_0034:
	{
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_7 = __this->___buffer;
		int32_t L_8 = V_0;
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_9 = __this->___buffer;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606 L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606)L_12);
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
	}

IL_0052:
	{
		int32_t L_14 = V_0;
		int32_t L_15 = ___0_index;
		if ((((int32_t)L_14) > ((int32_t)L_15)))
		{
			goto IL_0034;
		}
	}
	{
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_16 = __this->___buffer;
		int32_t L_17 = ___0_index;
		Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606 L_18 = ___1_item;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606)L_18);
		int32_t L_19 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_19, 1));
		return;
	}

IL_0072:
	{
		Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606 L_20 = ___1_item;
		List_1_Add_mE0836260320B430E8C8C71ACFC47C2F9DE92A99B(__this, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mA0DC7C93AEB368776DC094FA4089CBFC1B482451_gshared (List_1_tB7868517D05AB4986301D3A0FACCA168071E490B* __this, Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_0 = __this->___buffer;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		V_0 = 0;
		goto IL_0048;
	}

IL_000e:
	{
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_1 = __this->___buffer;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
	}
	{
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_5 = __this->___buffer;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606 L_7 = ___0_item;
		Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606 L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6), &L_8);
		Il2CppFakeBox<Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606> L_10(il2cpp_rgctx_data(method->klass->rgctx_data, 6), ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6))));
		bool L_11;
		L_11 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_10), L_9, NULL);
		if (!L_11)
		{
			goto IL_0044;
		}
	}
	{
		return (bool)1;
	}

IL_0044:
	{
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0048:
	{
		int32_t L_13 = V_0;
		int32_t L_14 = __this->___size;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_000e;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m13001A472E041454DE11BA0E5E054AAB0158FBE1_gshared (List_1_tB7868517D05AB4986301D3A0FACCA168071E490B* __this, Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_0 = __this->___buffer;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (-1);
	}

IL_000a:
	{
		V_0 = 0;
		goto IL_0048;
	}

IL_000e:
	{
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_1 = __this->___buffer;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
	}
	{
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_5 = __this->___buffer;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606 L_7 = ___0_item;
		Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606 L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6), &L_8);
		Il2CppFakeBox<Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606> L_10(il2cpp_rgctx_data(method->klass->rgctx_data, 6), ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6))));
		bool L_11;
		L_11 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_10), L_9, NULL);
		if (!L_11)
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_12 = V_0;
		return L_12;
	}

IL_0044:
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0048:
	{
		int32_t L_14 = V_0;
		int32_t L_15 = __this->___size;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_000e;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m618F5B6728E86E816A0B7EE27194E18E0FF9C61A_gshared (List_1_tB7868517D05AB4986301D3A0FACCA168071E490B* __this, Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606 ___0_item, const RuntimeMethod* method) 
{
	EqualityComparer_1_t951752AEC554D078FD5BA75860AB4914942AE117* V_0 = NULL;
	int32_t V_1 = 0;
	{
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_006e;
		}
	}
	{
		EqualityComparer_1_t951752AEC554D078FD5BA75860AB4914942AE117* L_1;
		L_1 = EqualityComparer_1_get_Default_m04CF7FE794A864F889D6D885B53D7CB2727A3DE9_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		V_0 = L_1;
		V_1 = 0;
		goto IL_0065;
	}

IL_0012:
	{
		EqualityComparer_1_t951752AEC554D078FD5BA75860AB4914942AE117* L_2 = V_0;
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_3 = __this->___buffer;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606 L_7 = ___0_item;
		NullCheck(L_2);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606, Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606 >::Invoke(8, L_2, L_6, L_7);
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10 = __this->___size;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_9, 1))) >= ((int32_t)L_10)))
		{
			goto IL_0051;
		}
	}
	{
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_11 = __this->___buffer;
		int32_t L_12 = V_1;
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_13 = __this->___buffer;
		int32_t L_14 = V_1;
		int32_t L_15 = __this->___size;
		int32_t L_16 = V_1;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, 1)), (RuntimeArray*)L_13, L_14, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_15, L_16)), 1)), NULL);
	}

IL_0051:
	{
		int32_t L_17 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
		return (bool)1;
	}

IL_0061:
	{
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0065:
	{
		int32_t L_19 = V_1;
		int32_t L_20 = __this->___size;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0012;
		}
	}

IL_006e:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m10E8E0E21101658E8D0A31B97DD3F597F870259F_gshared (List_1_tB7868517D05AB4986301D3A0FACCA168071E490B* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_1 = ___0_index;
		if ((((int32_t)L_1) <= ((int32_t)(-1))))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_2 = ___0_index;
		int32_t L_3 = __this->___size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_4 = ___0_index;
		int32_t L_5 = __this->___size;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_4, 1))) >= ((int32_t)L_5)))
		{
			goto IL_003f;
		}
	}
	{
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_6 = __this->___buffer;
		int32_t L_7 = ___0_index;
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_8 = __this->___buffer;
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->___size;
		int32_t L_11 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, ((int32_t)il2cpp_codegen_add(L_7, 1)), (RuntimeArray*)L_8, L_9, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_10, L_11)), 1)), NULL);
	}

IL_003f:
	{
		int32_t L_12 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
	}

IL_004d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m05589629AF67B42E03D7669DFC4E93AE1CAD48B3_gshared (List_1_tB7868517D05AB4986301D3A0FACCA168071E490B* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = ___1_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		int32_t L_2 = V_0;
		int32_t L_3 = __this->___size;
		if ((((int32_t)L_2) <= ((int32_t)L_3)))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_4 = __this->___size;
		V_0 = L_4;
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_index;
		___1_count = ((int32_t)il2cpp_codegen_subtract(L_5, L_6));
	}

IL_0019:
	{
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_7 = __this->___buffer;
		if (!L_7)
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_8 = ___0_index;
		if ((((int32_t)L_8) <= ((int32_t)(-1))))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->___size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_11 = ___0_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) >= ((int32_t)L_12)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_13 = V_0;
		int32_t L_14 = __this->___size;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_13, 1))) >= ((int32_t)L_14)))
		{
			goto IL_0058;
		}
	}
	{
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_15 = __this->___buffer;
		int32_t L_16 = V_0;
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_17 = __this->___buffer;
		int32_t L_18 = ___0_index;
		int32_t L_19 = __this->___size;
		int32_t L_20 = V_0;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, L_16, (RuntimeArray*)L_17, L_18, ((int32_t)il2cpp_codegen_subtract(L_19, L_20)), NULL);
	}

IL_0058:
	{
		int32_t L_21 = __this->___size;
		int32_t L_22 = ___1_count;
		__this->___size = ((int32_t)il2cpp_codegen_subtract(L_21, L_22));
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606 List_1_Pop_mB130A61D6551BA7DB17FCDD29AFF54DA827B820A_gshared (List_1_tB7868517D05AB4986301D3A0FACCA168071E490B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_1 = __this->___size;
		if (!L_1)
		{
			goto IL_0047;
		}
	}
	{
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_2 = __this->___buffer;
		int32_t L_3 = __this->___size;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		int32_t L_4 = V_0;
		__this->___size = L_4;
		int32_t L_5 = V_0;
		NullCheck(L_2);
		int32_t L_6 = L_5;
		Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606 L_7 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_8 = __this->___buffer;
		int32_t L_9 = __this->___size;
		il2cpp_codegen_initobj((&V_1), sizeof(Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606));
		Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606 L_10 = V_1;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606)L_10);
		return L_7;
	}

IL_0047:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606));
		Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606 L_11 = V_1;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* List_1_ToArray_m4AECEAA7F197FCA7849F9B142FC4AE05B6AA4A53_gshared (List_1_tB7868517D05AB4986301D3A0FACCA168071E490B* __this, const RuntimeMethod* method) 
{
	{
		List_1_Trim_mAE66B47854ECADE387D4B533BFC897DD7CEF810D(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_0 = __this->___buffer;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mB9861297D0E180F75678F9D104A4555B8170098C_gshared (List_1_tB7868517D05AB4986301D3A0FACCA168071E490B* __this, CompareFunc_t58FEF253929D82FB283FED18BD6AD3795FDC733E* ___0_comparer, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606 V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t G_B8_0 = 0;
	{
		V_0 = 0;
		int32_t L_0 = __this->___size;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		V_2 = (bool)1;
		goto IL_0089;
	}

IL_000f:
	{
		V_2 = (bool)0;
		int32_t L_1 = V_0;
		V_3 = L_1;
		goto IL_0085;
	}

IL_0015:
	{
		CompareFunc_t58FEF253929D82FB283FED18BD6AD3795FDC733E* L_2 = ___0_comparer;
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_3 = __this->___buffer;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_7 = __this->___buffer;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606 L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_2);
		int32_t L_11;
		L_11 = CompareFunc_Invoke_mCD0B31AC9FE8243977C5B4C5E66E1A624F79E0CC_inline(L_2, L_6, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		if ((((int32_t)L_11) <= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_12 = __this->___buffer;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606 L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_4 = L_15;
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_16 = __this->___buffer;
		int32_t L_17 = V_3;
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_18 = __this->___buffer;
		int32_t L_19 = V_3;
		NullCheck(L_18);
		int32_t L_20 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606 L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606)L_21);
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_22 = __this->___buffer;
		int32_t L_23 = V_3;
		Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606 L_24 = V_4;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_23, 1))), (Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606)L_24);
		V_2 = (bool)1;
		goto IL_0081;
	}

IL_0074:
	{
		bool L_25 = V_2;
		if (L_25)
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_26 = V_3;
		if (!L_26)
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_27 = V_3;
		G_B8_0 = ((int32_t)il2cpp_codegen_subtract(L_27, 1));
		goto IL_0080;
	}

IL_007f:
	{
		G_B8_0 = 0;
	}

IL_0080:
	{
		V_0 = G_B8_0;
	}

IL_0081:
	{
		int32_t L_28 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0085:
	{
		int32_t L_29 = V_3;
		int32_t L_30 = V_1;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_0015;
		}
	}

IL_0089:
	{
		bool L_31 = V_2;
		if (L_31)
		{
			goto IL_000f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m8ED7E38B5C1B2044DB813DD9B767CCE8B2423558_gshared (List_1_tB7868517D05AB4986301D3A0FACCA168071E490B* __this, CompareFunc2_tD8F814976ED84C2D515E08B134C6B7762BB4A237* ___0_comparer, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606 V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t G_B8_0 = 0;
	{
		V_0 = 0;
		int32_t L_0 = __this->___size;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		V_2 = (bool)1;
		goto IL_0089;
	}

IL_000f:
	{
		V_2 = (bool)0;
		int32_t L_1 = V_0;
		V_3 = L_1;
		goto IL_0085;
	}

IL_0015:
	{
		CompareFunc2_tD8F814976ED84C2D515E08B134C6B7762BB4A237* L_2 = ___0_comparer;
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_3 = __this->___buffer;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_5 = __this->___buffer;
		int32_t L_6 = V_3;
		NullCheck(L_5);
		NullCheck(L_2);
		int32_t L_7;
		L_7 = CompareFunc2_Invoke_m35615375F9CF98877A316454F5BB666A97EEFEFA_inline(L_2, ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4))), ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_6, 1))))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_8 = __this->___buffer;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606 L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_4 = L_11;
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_12 = __this->___buffer;
		int32_t L_13 = V_3;
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_14 = __this->___buffer;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606 L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606)L_17);
		InfoU5BU5D_t5DAF43C3836691DCC3DF55F075A86A6AD8A3D549* L_18 = __this->___buffer;
		int32_t L_19 = V_3;
		Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606 L_20 = V_4;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_19, 1))), (Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606)L_20);
		V_2 = (bool)1;
		goto IL_0081;
	}

IL_0074:
	{
		bool L_21 = V_2;
		if (L_21)
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_22 = V_3;
		if (!L_22)
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_23 = V_3;
		G_B8_0 = ((int32_t)il2cpp_codegen_subtract(L_23, 1));
		goto IL_0080;
	}

IL_007f:
	{
		G_B8_0 = 0;
	}

IL_0080:
	{
		V_0 = G_B8_0;
	}

IL_0081:
	{
		int32_t L_24 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0085:
	{
		int32_t L_25 = V_3;
		int32_t L_26 = V_1;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0015;
		}
	}

IL_0089:
	{
		bool L_27 = V_2;
		if (L_27)
		{
			goto IL_000f;
		}
	}
	{
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m4A3D2E2AB6DCCBEB56A587A8B307AB781972BF1F_gshared (List_1_t4B696A51F9450B2C12B51B8CBC5C8CDAB020295D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mD02DABF4E2DE4DD012411C596136742DDF7E5D44_gshared (List_1_t4B696A51F9450B2C12B51B8CBC5C8CDAB020295D* __this, int32_t ___0_size, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_size;
		List_1_Allocate_mC752728C4D6491F5F3E2542FE776144FDFBA2E14(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_GetEnumerator_m24A15D4740E8CBEAD77E913BC3F30909CDCD67D1_gshared (List_1_t4B696A51F9450B2C12B51B8CBC5C8CDAB020295D* __this, const RuntimeMethod* method) 
{
	{
		U3CGetEnumeratorU3Ed__4_t7E801F836956DD1D087F71216988F2DA333E6827* L_0 = (U3CGetEnumeratorU3Ed__4_t7E801F836956DD1D087F71216988F2DA333E6827*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		U3CGetEnumeratorU3Ed__4__ctor_m59A07599DB71DA3C12E0725CEEA07ED4B75C0F8D(L_0, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		U3CGetEnumeratorU3Ed__4_t7E801F836956DD1D087F71216988F2DA333E6827* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF List_1_get_Item_mA9F4D7B964D395001ACC5DA1F09A7A60CCC94E09_gshared (List_1_t4B696A51F9450B2C12B51B8CBC5C8CDAB020295D* __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	{
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_0 = __this->___buffer;
		int32_t L_1 = ___0_i;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_mF753D8F1204190C3972E0A2E02BA81B7EAA58E75_gshared (List_1_t4B696A51F9450B2C12B51B8CBC5C8CDAB020295D* __this, int32_t ___0_i, RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF ___1_value, const RuntimeMethod* method) 
{
	{
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_0 = __this->___buffer;
		int32_t L_1 = ___0_i;
		RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF L_2 = ___1_value;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mA80975D77757870462E969FE9D20E55B78BEF58C_gshared (List_1_t4B696A51F9450B2C12B51B8CBC5C8CDAB020295D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_Get_m35712FA9F9F7FA19A173EB3651ACF616E559370E_gshared (List_1_t4B696A51F9450B2C12B51B8CBC5C8CDAB020295D* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_0 = __this->___buffer;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF L_4 = L_3;
		RuntimeObject* L_5 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6), &L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Allocate_mC752728C4D6491F5F3E2542FE776144FDFBA2E14_gshared (List_1_t4B696A51F9450B2C12B51B8CBC5C8CDAB020295D* __this, int32_t ___0_newSize, const RuntimeMethod* method) 
{
	RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* V_0 = NULL;
	{
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_1 = __this->___buffer;
		NullCheck(L_1);
		int32_t L_2 = ___0_newSize;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))) >= ((int32_t)L_2)))
		{
			goto IL_003f;
		}
	}

IL_0013:
	{
		int32_t L_3 = ___0_newSize;
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_4 = (RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D*)(RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 7), (uint32_t)L_3);
		V_0 = L_4;
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_5 = __this->___buffer;
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_6 = __this->___size;
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_7 = __this->___buffer;
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_8 = V_0;
		NullCheck((RuntimeArray*)L_7);
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_7, (RuntimeArray*)L_8, 0, NULL);
	}

IL_0038:
	{
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_9 = V_0;
		__this->___buffer = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)L_9);
	}

IL_003f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AllocateMore_m0F81B0BE3F946BD2A07DC8F2128B24D1A3591421_gshared (List_1_t4B696A51F9450B2C12B51B8CBC5C8CDAB020295D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* V_1 = NULL;
	int32_t G_B3_0 = 0;
	{
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_1 = __this->___buffer;
		NullCheck(L_1);
		G_B3_0 = ((int32_t)(((int32_t)(((RuntimeArray*)L_1)->max_length))<<1));
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 0;
	}

IL_0015:
	{
		V_0 = G_B3_0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)32))))
		{
			goto IL_001e;
		}
	}
	{
		V_0 = ((int32_t)32);
	}

IL_001e:
	{
		int32_t L_3 = V_0;
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_4 = (RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D*)(RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 7), (uint32_t)L_3);
		V_1 = L_4;
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_5 = __this->___buffer;
		if (!L_5)
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_6 = __this->___size;
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0043;
		}
	}
	{
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_7 = __this->___buffer;
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_8 = V_1;
		NullCheck((RuntimeArray*)L_7);
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_7, (RuntimeArray*)L_8, 0, NULL);
	}

IL_0043:
	{
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_9 = V_1;
		__this->___buffer = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)L_9);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Resize_m674B080A45C74FC4F960F840A0CA63D9343B7971_gshared (List_1_t4B696A51F9450B2C12B51B8CBC5C8CDAB020295D* __this, int32_t ___0_newSize, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___size;
		int32_t L_1 = ___0_newSize;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0032;
		}
	}
	{
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_2 = __this->___buffer;
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_3 = ___0_newSize;
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_4 = (RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D*)(RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 7), (uint32_t)L_3);
		__this->___buffer = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)L_4);
		goto IL_002b;
	}

IL_001f:
	{
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D** L_5 = (RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D**)(&__this->___buffer);
		int32_t L_6 = ___0_newSize;
		Array_Resize_TisRFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF_m8919158CF002E7FC0B30C4E6663F6E970474E0C5(L_5, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
	}

IL_002b:
	{
		int32_t L_7 = ___0_newSize;
		__this->___size = L_7;
	}

IL_0032:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Trim_m7CC0999862EAC154956E8ED69698341FAD3445AE_gshared (List_1_t4B696A51F9450B2C12B51B8CBC5C8CDAB020295D* __this, const RuntimeMethod* method) 
{
	RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->___size;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_1 = __this->___size;
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_2 = __this->___buffer;
		NullCheck(L_2);
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))
		{
			goto IL_005d;
		}
	}
	{
		int32_t L_3 = __this->___size;
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_4 = (RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D*)(RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 7), (uint32_t)L_3);
		V_0 = L_4;
		V_1 = 0;
		goto IL_0040;
	}

IL_0029:
	{
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_5 = V_0;
		int32_t L_6 = V_1;
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_7 = __this->___buffer;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF)L_10);
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0040:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = __this->___size;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0029;
		}
	}
	{
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_14 = V_0;
		__this->___buffer = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)L_14);
		return;
	}

IL_0051:
	{
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_15 = (RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D*)(RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 7), (uint32_t)0);
		__this->___buffer = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)L_15);
	}

IL_005d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5553146E859E2AB97EEB64D9D055449745C9C396_gshared (List_1_t4B696A51F9450B2C12B51B8CBC5C8CDAB020295D* __this, const RuntimeMethod* method) 
{
	{
		__this->___size = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mB1AAA0F9089B2FE0EBAA986EC64308368807199A_gshared (List_1_t4B696A51F9450B2C12B51B8CBC5C8CDAB020295D* __this, int32_t ___0_allocateSize, const RuntimeMethod* method) 
{
	{
		__this->___size = 0;
		int32_t L_0 = ___0_allocateSize;
		List_1_Allocate_mC752728C4D6491F5F3E2542FE776144FDFBA2E14(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Release_mA5BF598C36F44A8ABE0BFDAA8F3841072F6E4443_gshared (List_1_t4B696A51F9450B2C12B51B8CBC5C8CDAB020295D* __this, const RuntimeMethod* method) 
{
	{
		__this->___size = 0;
		__this->___buffer = (RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)(RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_Expand_m898F5CCB6D521708C715F2DD4C27BEE700E3FA78_gshared (List_1_t4B696A51F9450B2C12B51B8CBC5C8CDAB020295D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->___size;
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_2 = __this->___buffer;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_001e;
		}
	}

IL_0018:
	{
		List_1_AllocateMore_m0F81B0BE3F946BD2A07DC8F2128B24D1A3591421(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001e:
	{
		int32_t L_3 = __this->___size;
		V_0 = L_3;
		int32_t L_4 = V_0;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_4, 1));
		int32_t L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_Expand_m912B94C4CF3E73C861CF9AA91009A0E82C8CC22B_gshared (List_1_t4B696A51F9450B2C12B51B8CBC5C8CDAB020295D* __this, int32_t ___0_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = __this->___size;
		int32_t L_1 = __this->___size;
		int32_t L_2 = ___0_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_3 = __this->___buffer;
		if (!L_3)
		{
			G_B2_0 = L_0;
			goto IL_0029;
		}
		G_B1_0 = L_0;
	}
	{
		int32_t L_4 = __this->___size;
		int32_t L_5 = V_0;
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_6 = __this->___buffer;
		NullCheck(L_6);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_4, L_5))) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			G_B3_0 = G_B1_0;
			goto IL_0037;
		}
		G_B2_0 = G_B1_0;
	}

IL_0029:
	{
		int32_t L_7 = __this->___size;
		int32_t L_8 = V_0;
		List_1_Allocate_mC752728C4D6491F5F3E2542FE776144FDFBA2E14(__this, ((int32_t)il2cpp_codegen_add(L_7, L_8)), il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		G_B3_0 = G_B2_0;
	}

IL_0037:
	{
		int32_t L_9 = __this->___size;
		int32_t L_10 = ___0_count;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_9, L_10));
		return G_B3_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m1ED5D82E540B025C68AE7C547AFB672D20360151_gshared (List_1_t4B696A51F9450B2C12B51B8CBC5C8CDAB020295D* __this, RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF ___0_item, const RuntimeMethod* method) 
{
	{
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->___size;
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_2 = __this->___buffer;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_001e;
		}
	}

IL_0018:
	{
		List_1_AllocateMore_m0F81B0BE3F946BD2A07DC8F2128B24D1A3591421(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001e:
	{
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_3 = __this->___buffer;
		int32_t L_4 = __this->___size;
		RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF L_5 = ___0_item;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF)L_5);
		int32_t L_6 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m575637B7AFE1DE73F329541A3A7B7DB0A49CD3E5_gshared (List_1_t4B696A51F9450B2C12B51B8CBC5C8CDAB020295D* __this, RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* ___0_items, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___size;
		int32_t L_1 = ___2_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_2 = __this->___buffer;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_3 = __this->___size;
		int32_t L_4 = V_0;
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_5 = __this->___buffer;
		NullCheck(L_5);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_3, L_4))) < ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))))
		{
			goto IL_0031;
		}
	}

IL_0023:
	{
		int32_t L_6 = __this->___size;
		int32_t L_7 = V_0;
		List_1_Allocate_mC752728C4D6491F5F3E2542FE776144FDFBA2E14(__this, ((int32_t)il2cpp_codegen_add(L_6, L_7)), il2cpp_rgctx_method(method->klass->rgctx_data, 0));
	}

IL_0031:
	{
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_8 = ___0_items;
		int32_t L_9 = ___1_offset;
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_10 = __this->___buffer;
		int32_t L_11 = __this->___size;
		int32_t L_12 = ___2_count;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, L_9, (RuntimeArray*)L_10, L_11, L_12, NULL);
		int32_t L_13 = __this->___size;
		int32_t L_14 = ___2_count;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_13, L_14));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mF0868B6A2F32134277DAC0A60B88B2A89D8BB205_gshared (List_1_t4B696A51F9450B2C12B51B8CBC5C8CDAB020295D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->___size;
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_2 = __this->___buffer;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_001e;
		}
	}

IL_0018:
	{
		List_1_AllocateMore_m0F81B0BE3F946BD2A07DC8F2128B24D1A3591421(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001e:
	{
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_3 = __this->___buffer;
		int32_t L_4 = __this->___size;
		RuntimeObject* L_5 = ___0_item;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF)((*(RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF*)((RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF*)(RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF*)UnBox(L_5, il2cpp_rgctx_data(method->klass->rgctx_data, 6))))));
		int32_t L_6 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Add_m3A5E4C011393FC5E14E864DF1E8F13E833A12AFD_gshared (List_1_t4B696A51F9450B2C12B51B8CBC5C8CDAB020295D* __this, RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF ___0_item, bool ___1_unique, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___1_unique;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF L_1 = ___0_item;
		bool L_2;
		L_2 = List_1_Contains_mCAB836A92F0DFACCD68ADEA54E7C44049E4C19C9(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		return (bool)0;
	}

IL_000e:
	{
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_3 = __this->___buffer;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_4 = __this->___size;
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_5 = __this->___buffer;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_002c;
		}
	}

IL_0026:
	{
		List_1_AllocateMore_m0F81B0BE3F946BD2A07DC8F2128B24D1A3591421(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_002c:
	{
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_6 = __this->___buffer;
		int32_t L_7 = __this->___size;
		RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF)L_8);
		int32_t L_9 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Add_m7692B6056F1A961D038E9D4DDA31493CA0DCE98B_gshared (List_1_t4B696A51F9450B2C12B51B8CBC5C8CDAB020295D* __this, RuntimeObject* ___0_item, bool ___1_unique, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___1_unique;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = ___0_item;
		bool L_2;
		L_2 = List_1_Contains_mCAB836A92F0DFACCD68ADEA54E7C44049E4C19C9(__this, ((*(RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF*)((RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF*)(RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 6))))), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_3 = __this->___buffer;
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_4 = __this->___size;
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_5 = __this->___buffer;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0031;
		}
	}

IL_002b:
	{
		List_1_AllocateMore_m0F81B0BE3F946BD2A07DC8F2128B24D1A3591421(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_0031:
	{
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_6 = __this->___buffer;
		int32_t L_7 = __this->___size;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF)((*(RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF*)((RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF*)(RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF*)UnBox(L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 6))))));
		int32_t L_9 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m6A7D0362E4528E28474180CAD5E2AD8DF88E20B0_gshared (List_1_t4B696A51F9450B2C12B51B8CBC5C8CDAB020295D* __this, int32_t ___0_index, RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF ___1_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->___size;
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_2 = __this->___buffer;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_001e;
		}
	}

IL_0018:
	{
		List_1_AllocateMore_m0F81B0BE3F946BD2A07DC8F2128B24D1A3591421(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001e:
	{
		int32_t L_3 = ___0_index;
		if ((((int32_t)L_3) <= ((int32_t)(-1))))
		{
			goto IL_0072;
		}
	}
	{
		int32_t L_4 = ___0_index;
		int32_t L_5 = __this->___size;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0072;
		}
	}
	{
		int32_t L_6 = __this->___size;
		V_0 = L_6;
		goto IL_0052;
	}

IL_0034:
	{
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_7 = __this->___buffer;
		int32_t L_8 = V_0;
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_9 = __this->___buffer;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF)L_12);
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
	}

IL_0052:
	{
		int32_t L_14 = V_0;
		int32_t L_15 = ___0_index;
		if ((((int32_t)L_14) > ((int32_t)L_15)))
		{
			goto IL_0034;
		}
	}
	{
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_16 = __this->___buffer;
		int32_t L_17 = ___0_index;
		RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF L_18 = ___1_item;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF)L_18);
		int32_t L_19 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_19, 1));
		return;
	}

IL_0072:
	{
		RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF L_20 = ___1_item;
		List_1_Add_m1ED5D82E540B025C68AE7C547AFB672D20360151(__this, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mCAB836A92F0DFACCD68ADEA54E7C44049E4C19C9_gshared (List_1_t4B696A51F9450B2C12B51B8CBC5C8CDAB020295D* __this, RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_0 = __this->___buffer;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		V_0 = 0;
		goto IL_0048;
	}

IL_000e:
	{
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_1 = __this->___buffer;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
	}
	{
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_5 = __this->___buffer;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF L_7 = ___0_item;
		RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6), &L_8);
		Il2CppFakeBox<RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF> L_10(il2cpp_rgctx_data(method->klass->rgctx_data, 6), ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6))));
		bool L_11;
		L_11 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_10), L_9, NULL);
		if (!L_11)
		{
			goto IL_0044;
		}
	}
	{
		return (bool)1;
	}

IL_0044:
	{
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0048:
	{
		int32_t L_13 = V_0;
		int32_t L_14 = __this->___size;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_000e;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m9C03A2AC512A5F426AC4B3DD3D0065B84BBCA3CA_gshared (List_1_t4B696A51F9450B2C12B51B8CBC5C8CDAB020295D* __this, RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_0 = __this->___buffer;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (-1);
	}

IL_000a:
	{
		V_0 = 0;
		goto IL_0048;
	}

IL_000e:
	{
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_1 = __this->___buffer;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
	}
	{
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_5 = __this->___buffer;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF L_7 = ___0_item;
		RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6), &L_8);
		Il2CppFakeBox<RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF> L_10(il2cpp_rgctx_data(method->klass->rgctx_data, 6), ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6))));
		bool L_11;
		L_11 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_10), L_9, NULL);
		if (!L_11)
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_12 = V_0;
		return L_12;
	}

IL_0044:
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0048:
	{
		int32_t L_14 = V_0;
		int32_t L_15 = __this->___size;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_000e;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m3DA00718BE35DCA9CE5E67CF1C72EB09C93977F3_gshared (List_1_t4B696A51F9450B2C12B51B8CBC5C8CDAB020295D* __this, RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF ___0_item, const RuntimeMethod* method) 
{
	EqualityComparer_1_t0D37AAA596A74C6F5F0AE68651E5B18034373802* V_0 = NULL;
	int32_t V_1 = 0;
	{
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_006e;
		}
	}
	{
		EqualityComparer_1_t0D37AAA596A74C6F5F0AE68651E5B18034373802* L_1;
		L_1 = EqualityComparer_1_get_Default_mD91779D28B1869320CE14644046CC4EB8E336E30_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		V_0 = L_1;
		V_1 = 0;
		goto IL_0065;
	}

IL_0012:
	{
		EqualityComparer_1_t0D37AAA596A74C6F5F0AE68651E5B18034373802* L_2 = V_0;
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_3 = __this->___buffer;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF L_7 = ___0_item;
		NullCheck(L_2);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF, RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF >::Invoke(8, L_2, L_6, L_7);
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10 = __this->___size;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_9, 1))) >= ((int32_t)L_10)))
		{
			goto IL_0051;
		}
	}
	{
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_11 = __this->___buffer;
		int32_t L_12 = V_1;
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_13 = __this->___buffer;
		int32_t L_14 = V_1;
		int32_t L_15 = __this->___size;
		int32_t L_16 = V_1;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, 1)), (RuntimeArray*)L_13, L_14, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_15, L_16)), 1)), NULL);
	}

IL_0051:
	{
		int32_t L_17 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
		return (bool)1;
	}

IL_0061:
	{
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0065:
	{
		int32_t L_19 = V_1;
		int32_t L_20 = __this->___size;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0012;
		}
	}

IL_006e:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m28AB658F1B8BB6D4573F5C155693F1C97D761175_gshared (List_1_t4B696A51F9450B2C12B51B8CBC5C8CDAB020295D* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_1 = ___0_index;
		if ((((int32_t)L_1) <= ((int32_t)(-1))))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_2 = ___0_index;
		int32_t L_3 = __this->___size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_4 = ___0_index;
		int32_t L_5 = __this->___size;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_4, 1))) >= ((int32_t)L_5)))
		{
			goto IL_003f;
		}
	}
	{
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_6 = __this->___buffer;
		int32_t L_7 = ___0_index;
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_8 = __this->___buffer;
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->___size;
		int32_t L_11 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, ((int32_t)il2cpp_codegen_add(L_7, 1)), (RuntimeArray*)L_8, L_9, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_10, L_11)), 1)), NULL);
	}

IL_003f:
	{
		int32_t L_12 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
	}

IL_004d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_mA821CEEFEBFA61350DE820344AEDA19ACBB5F60E_gshared (List_1_t4B696A51F9450B2C12B51B8CBC5C8CDAB020295D* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = ___1_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		int32_t L_2 = V_0;
		int32_t L_3 = __this->___size;
		if ((((int32_t)L_2) <= ((int32_t)L_3)))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_4 = __this->___size;
		V_0 = L_4;
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_index;
		___1_count = ((int32_t)il2cpp_codegen_subtract(L_5, L_6));
	}

IL_0019:
	{
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_7 = __this->___buffer;
		if (!L_7)
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_8 = ___0_index;
		if ((((int32_t)L_8) <= ((int32_t)(-1))))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->___size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_11 = ___0_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) >= ((int32_t)L_12)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_13 = V_0;
		int32_t L_14 = __this->___size;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_13, 1))) >= ((int32_t)L_14)))
		{
			goto IL_0058;
		}
	}
	{
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_15 = __this->___buffer;
		int32_t L_16 = V_0;
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_17 = __this->___buffer;
		int32_t L_18 = ___0_index;
		int32_t L_19 = __this->___size;
		int32_t L_20 = V_0;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, L_16, (RuntimeArray*)L_17, L_18, ((int32_t)il2cpp_codegen_subtract(L_19, L_20)), NULL);
	}

IL_0058:
	{
		int32_t L_21 = __this->___size;
		int32_t L_22 = ___1_count;
		__this->___size = ((int32_t)il2cpp_codegen_subtract(L_21, L_22));
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF List_1_Pop_m85B62438811F0764B513D78F5C401B58FECDF997_gshared (List_1_t4B696A51F9450B2C12B51B8CBC5C8CDAB020295D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_1 = __this->___size;
		if (!L_1)
		{
			goto IL_0047;
		}
	}
	{
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_2 = __this->___buffer;
		int32_t L_3 = __this->___size;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		int32_t L_4 = V_0;
		__this->___size = L_4;
		int32_t L_5 = V_0;
		NullCheck(L_2);
		int32_t L_6 = L_5;
		RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF L_7 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_8 = __this->___buffer;
		int32_t L_9 = __this->___size;
		il2cpp_codegen_initobj((&V_1), sizeof(RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF));
		RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF L_10 = V_1;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF)L_10);
		return L_7;
	}

IL_0047:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF));
		RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF L_11 = V_1;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* List_1_ToArray_m61A2EFF3E628A08542D55192E2E0FB183B1E4192_gshared (List_1_t4B696A51F9450B2C12B51B8CBC5C8CDAB020295D* __this, const RuntimeMethod* method) 
{
	{
		List_1_Trim_m7CC0999862EAC154956E8ED69698341FAD3445AE(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_0 = __this->___buffer;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m47F4A127C9CDE85F80F2EC356DDC82717867925C_gshared (List_1_t4B696A51F9450B2C12B51B8CBC5C8CDAB020295D* __this, CompareFunc_tCD85A87B3459047F80416071B78FAD3D1804BC87* ___0_comparer, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t G_B8_0 = 0;
	{
		V_0 = 0;
		int32_t L_0 = __this->___size;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		V_2 = (bool)1;
		goto IL_0089;
	}

IL_000f:
	{
		V_2 = (bool)0;
		int32_t L_1 = V_0;
		V_3 = L_1;
		goto IL_0085;
	}

IL_0015:
	{
		CompareFunc_tCD85A87B3459047F80416071B78FAD3D1804BC87* L_2 = ___0_comparer;
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_3 = __this->___buffer;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_7 = __this->___buffer;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_2);
		int32_t L_11;
		L_11 = CompareFunc_Invoke_m4B54AEFD15A1C7354BFDBE32926D513CB5BF80B3_inline(L_2, L_6, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		if ((((int32_t)L_11) <= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_12 = __this->___buffer;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_4 = L_15;
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_16 = __this->___buffer;
		int32_t L_17 = V_3;
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_18 = __this->___buffer;
		int32_t L_19 = V_3;
		NullCheck(L_18);
		int32_t L_20 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF)L_21);
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_22 = __this->___buffer;
		int32_t L_23 = V_3;
		RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF L_24 = V_4;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_23, 1))), (RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF)L_24);
		V_2 = (bool)1;
		goto IL_0081;
	}

IL_0074:
	{
		bool L_25 = V_2;
		if (L_25)
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_26 = V_3;
		if (!L_26)
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_27 = V_3;
		G_B8_0 = ((int32_t)il2cpp_codegen_subtract(L_27, 1));
		goto IL_0080;
	}

IL_007f:
	{
		G_B8_0 = 0;
	}

IL_0080:
	{
		V_0 = G_B8_0;
	}

IL_0081:
	{
		int32_t L_28 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0085:
	{
		int32_t L_29 = V_3;
		int32_t L_30 = V_1;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_0015;
		}
	}

IL_0089:
	{
		bool L_31 = V_2;
		if (L_31)
		{
			goto IL_000f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m990D9E1E0AFD0B2A05FE14A1D97A0A5AFB9E1E1F_gshared (List_1_t4B696A51F9450B2C12B51B8CBC5C8CDAB020295D* __this, CompareFunc2_t45D9D5C19666400DD97BC848BE466970E20163EC* ___0_comparer, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t G_B8_0 = 0;
	{
		V_0 = 0;
		int32_t L_0 = __this->___size;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		V_2 = (bool)1;
		goto IL_0089;
	}

IL_000f:
	{
		V_2 = (bool)0;
		int32_t L_1 = V_0;
		V_3 = L_1;
		goto IL_0085;
	}

IL_0015:
	{
		CompareFunc2_t45D9D5C19666400DD97BC848BE466970E20163EC* L_2 = ___0_comparer;
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_3 = __this->___buffer;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_5 = __this->___buffer;
		int32_t L_6 = V_3;
		NullCheck(L_5);
		NullCheck(L_2);
		int32_t L_7;
		L_7 = CompareFunc2_Invoke_m113D742BBB1DD0D33B713110079E744E2C52214D_inline(L_2, ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4))), ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_6, 1))))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_8 = __this->___buffer;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_4 = L_11;
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_12 = __this->___buffer;
		int32_t L_13 = V_3;
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_14 = __this->___buffer;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF)L_17);
		RFCU5BU5D_t0F630D5C3E62E42960C965D7FCA6904E726D160D* L_18 = __this->___buffer;
		int32_t L_19 = V_3;
		RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF L_20 = V_4;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_19, 1))), (RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF)L_20);
		V_2 = (bool)1;
		goto IL_0081;
	}

IL_0074:
	{
		bool L_21 = V_2;
		if (L_21)
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_22 = V_3;
		if (!L_22)
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_23 = V_3;
		G_B8_0 = ((int32_t)il2cpp_codegen_subtract(L_23, 1));
		goto IL_0080;
	}

IL_007f:
	{
		G_B8_0 = 0;
	}

IL_0080:
	{
		V_0 = G_B8_0;
	}

IL_0081:
	{
		int32_t L_24 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0085:
	{
		int32_t L_25 = V_3;
		int32_t L_26 = V_1;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0015;
		}
	}

IL_0089:
	{
		bool L_27 = V_2;
		if (L_27)
		{
			goto IL_000f;
		}
	}
	{
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m2A4063E00AB4FB0DD9906491AD19711230C9319B_gshared (List_1_t974883BC9B49D7E31745F06BA5876D5AC469B0A2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC4DEEDC6E2E272F477EB79522964E893AC8A8C51_gshared (List_1_t974883BC9B49D7E31745F06BA5876D5AC469B0A2* __this, int32_t ___0_size, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_size;
		List_1_Allocate_m28EA0AF146A9EEBF589648E7319C3698DADBE52F(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_GetEnumerator_mA01E58FE169924344C27C4E42383EDF8FCB4C09A_gshared (List_1_t974883BC9B49D7E31745F06BA5876D5AC469B0A2* __this, const RuntimeMethod* method) 
{
	{
		U3CGetEnumeratorU3Ed__4_t691D0073DA3A771C8663F0006D50EE29A2BBDD5F* L_0 = (U3CGetEnumeratorU3Ed__4_t691D0073DA3A771C8663F0006D50EE29A2BBDD5F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		U3CGetEnumeratorU3Ed__4__ctor_m4C4C83A916A259AB84D1E9E7C644E78D1A7E777B(L_0, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		U3CGetEnumeratorU3Ed__4_t691D0073DA3A771C8663F0006D50EE29A2BBDD5F* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114 List_1_get_Item_mB9F9C3FD0C2F2B7B38A9BC8F68F4D899A503F911_gshared (List_1_t974883BC9B49D7E31745F06BA5876D5AC469B0A2* __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	{
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_0 = __this->___buffer;
		int32_t L_1 = ___0_i;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114 L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m1AEB131404E47DA5C947D6B98A0D943B1627C2DE_gshared (List_1_t974883BC9B49D7E31745F06BA5876D5AC469B0A2* __this, int32_t ___0_i, SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114 ___1_value, const RuntimeMethod* method) 
{
	{
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_0 = __this->___buffer;
		int32_t L_1 = ___0_i;
		SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114 L_2 = ___1_value;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mC3029BC50AACA72E8A94AA5A6D1026D8DE8BB399_gshared (List_1_t974883BC9B49D7E31745F06BA5876D5AC469B0A2* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_Get_m267F07CB4215C55CBDEA06CDBE9817A5F795BCC9_gshared (List_1_t974883BC9B49D7E31745F06BA5876D5AC469B0A2* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_0 = __this->___buffer;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114 L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114 L_4 = L_3;
		RuntimeObject* L_5 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6), &L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Allocate_m28EA0AF146A9EEBF589648E7319C3698DADBE52F_gshared (List_1_t974883BC9B49D7E31745F06BA5876D5AC469B0A2* __this, int32_t ___0_newSize, const RuntimeMethod* method) 
{
	SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* V_0 = NULL;
	{
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_1 = __this->___buffer;
		NullCheck(L_1);
		int32_t L_2 = ___0_newSize;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))) >= ((int32_t)L_2)))
		{
			goto IL_003f;
		}
	}

IL_0013:
	{
		int32_t L_3 = ___0_newSize;
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_4 = (SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902*)(SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 7), (uint32_t)L_3);
		V_0 = L_4;
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_5 = __this->___buffer;
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_6 = __this->___size;
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_7 = __this->___buffer;
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_8 = V_0;
		NullCheck((RuntimeArray*)L_7);
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_7, (RuntimeArray*)L_8, 0, NULL);
	}

IL_0038:
	{
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_9 = V_0;
		__this->___buffer = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)L_9);
	}

IL_003f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AllocateMore_m6A2B61A482CE2AC518A9F76411F7B07DE1346FC6_gshared (List_1_t974883BC9B49D7E31745F06BA5876D5AC469B0A2* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* V_1 = NULL;
	int32_t G_B3_0 = 0;
	{
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_1 = __this->___buffer;
		NullCheck(L_1);
		G_B3_0 = ((int32_t)(((int32_t)(((RuntimeArray*)L_1)->max_length))<<1));
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 0;
	}

IL_0015:
	{
		V_0 = G_B3_0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)32))))
		{
			goto IL_001e;
		}
	}
	{
		V_0 = ((int32_t)32);
	}

IL_001e:
	{
		int32_t L_3 = V_0;
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_4 = (SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902*)(SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 7), (uint32_t)L_3);
		V_1 = L_4;
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_5 = __this->___buffer;
		if (!L_5)
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_6 = __this->___size;
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0043;
		}
	}
	{
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_7 = __this->___buffer;
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_8 = V_1;
		NullCheck((RuntimeArray*)L_7);
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_7, (RuntimeArray*)L_8, 0, NULL);
	}

IL_0043:
	{
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_9 = V_1;
		__this->___buffer = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)L_9);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Resize_mB860D789965DAD241233E827F6F099BD8AC967FE_gshared (List_1_t974883BC9B49D7E31745F06BA5876D5AC469B0A2* __this, int32_t ___0_newSize, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___size;
		int32_t L_1 = ___0_newSize;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0032;
		}
	}
	{
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_2 = __this->___buffer;
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_3 = ___0_newSize;
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_4 = (SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902*)(SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 7), (uint32_t)L_3);
		__this->___buffer = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)L_4);
		goto IL_002b;
	}

IL_001f:
	{
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902** L_5 = (SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902**)(&__this->___buffer);
		int32_t L_6 = ___0_newSize;
		Array_Resize_TisSerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114_m1668828752488C84CC99EFF24B692280DFD67C1C(L_5, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
	}

IL_002b:
	{
		int32_t L_7 = ___0_newSize;
		__this->___size = L_7;
	}

IL_0032:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Trim_mA25D0CBAF07512FC093F58B90580DAC3FE602735_gshared (List_1_t974883BC9B49D7E31745F06BA5876D5AC469B0A2* __this, const RuntimeMethod* method) 
{
	SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->___size;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_1 = __this->___size;
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_2 = __this->___buffer;
		NullCheck(L_2);
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))
		{
			goto IL_005d;
		}
	}
	{
		int32_t L_3 = __this->___size;
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_4 = (SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902*)(SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 7), (uint32_t)L_3);
		V_0 = L_4;
		V_1 = 0;
		goto IL_0040;
	}

IL_0029:
	{
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_5 = V_0;
		int32_t L_6 = V_1;
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_7 = __this->___buffer;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114 L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114)L_10);
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0040:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = __this->___size;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0029;
		}
	}
	{
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_14 = V_0;
		__this->___buffer = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)L_14);
		return;
	}

IL_0051:
	{
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_15 = (SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902*)(SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 7), (uint32_t)0);
		__this->___buffer = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)L_15);
	}

IL_005d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mF38F3C1F73E4B031E3E78AAD1EB89E328D2AD35A_gshared (List_1_t974883BC9B49D7E31745F06BA5876D5AC469B0A2* __this, const RuntimeMethod* method) 
{
	{
		__this->___size = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m64513AABEA30F4F56378D7162C2F077111A0CC95_gshared (List_1_t974883BC9B49D7E31745F06BA5876D5AC469B0A2* __this, int32_t ___0_allocateSize, const RuntimeMethod* method) 
{
	{
		__this->___size = 0;
		int32_t L_0 = ___0_allocateSize;
		List_1_Allocate_m28EA0AF146A9EEBF589648E7319C3698DADBE52F(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Release_m3760D9B00D141A9B7FD88E05AB0366FFDB4DCC21_gshared (List_1_t974883BC9B49D7E31745F06BA5876D5AC469B0A2* __this, const RuntimeMethod* method) 
{
	{
		__this->___size = 0;
		__this->___buffer = (SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)(SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_Expand_m8822488A6C002BB0BF3C7A3162E635D86156E460_gshared (List_1_t974883BC9B49D7E31745F06BA5876D5AC469B0A2* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->___size;
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_2 = __this->___buffer;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_001e;
		}
	}

IL_0018:
	{
		List_1_AllocateMore_m6A2B61A482CE2AC518A9F76411F7B07DE1346FC6(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001e:
	{
		int32_t L_3 = __this->___size;
		V_0 = L_3;
		int32_t L_4 = V_0;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_4, 1));
		int32_t L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_Expand_m9FF09AB9AEBEE06191DC0387C40E04B29B500293_gshared (List_1_t974883BC9B49D7E31745F06BA5876D5AC469B0A2* __this, int32_t ___0_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = __this->___size;
		int32_t L_1 = __this->___size;
		int32_t L_2 = ___0_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_3 = __this->___buffer;
		if (!L_3)
		{
			G_B2_0 = L_0;
			goto IL_0029;
		}
		G_B1_0 = L_0;
	}
	{
		int32_t L_4 = __this->___size;
		int32_t L_5 = V_0;
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_6 = __this->___buffer;
		NullCheck(L_6);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_4, L_5))) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			G_B3_0 = G_B1_0;
			goto IL_0037;
		}
		G_B2_0 = G_B1_0;
	}

IL_0029:
	{
		int32_t L_7 = __this->___size;
		int32_t L_8 = V_0;
		List_1_Allocate_m28EA0AF146A9EEBF589648E7319C3698DADBE52F(__this, ((int32_t)il2cpp_codegen_add(L_7, L_8)), il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		G_B3_0 = G_B2_0;
	}

IL_0037:
	{
		int32_t L_9 = __this->___size;
		int32_t L_10 = ___0_count;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_9, L_10));
		return G_B3_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mAD2C0D5B38AB741B0D530DC005CA3D03310184CA_gshared (List_1_t974883BC9B49D7E31745F06BA5876D5AC469B0A2* __this, SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114 ___0_item, const RuntimeMethod* method) 
{
	{
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->___size;
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_2 = __this->___buffer;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_001e;
		}
	}

IL_0018:
	{
		List_1_AllocateMore_m6A2B61A482CE2AC518A9F76411F7B07DE1346FC6(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001e:
	{
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_3 = __this->___buffer;
		int32_t L_4 = __this->___size;
		SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114 L_5 = ___0_item;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114)L_5);
		int32_t L_6 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m9255F31339BD04302217B5AF899B105C63C6CCDB_gshared (List_1_t974883BC9B49D7E31745F06BA5876D5AC469B0A2* __this, SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* ___0_items, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___size;
		int32_t L_1 = ___2_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_2 = __this->___buffer;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_3 = __this->___size;
		int32_t L_4 = V_0;
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_5 = __this->___buffer;
		NullCheck(L_5);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_3, L_4))) < ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))))
		{
			goto IL_0031;
		}
	}

IL_0023:
	{
		int32_t L_6 = __this->___size;
		int32_t L_7 = V_0;
		List_1_Allocate_m28EA0AF146A9EEBF589648E7319C3698DADBE52F(__this, ((int32_t)il2cpp_codegen_add(L_6, L_7)), il2cpp_rgctx_method(method->klass->rgctx_data, 0));
	}

IL_0031:
	{
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_8 = ___0_items;
		int32_t L_9 = ___1_offset;
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_10 = __this->___buffer;
		int32_t L_11 = __this->___size;
		int32_t L_12 = ___2_count;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, L_9, (RuntimeArray*)L_10, L_11, L_12, NULL);
		int32_t L_13 = __this->___size;
		int32_t L_14 = ___2_count;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_13, L_14));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6937FD06D1FE7CFDB23DB582CDB97845D05C53A6_gshared (List_1_t974883BC9B49D7E31745F06BA5876D5AC469B0A2* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->___size;
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_2 = __this->___buffer;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_001e;
		}
	}

IL_0018:
	{
		List_1_AllocateMore_m6A2B61A482CE2AC518A9F76411F7B07DE1346FC6(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001e:
	{
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_3 = __this->___buffer;
		int32_t L_4 = __this->___size;
		RuntimeObject* L_5 = ___0_item;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114)((*(SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114*)((SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114*)(SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114*)UnBox(L_5, il2cpp_rgctx_data(method->klass->rgctx_data, 6))))));
		int32_t L_6 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Add_mFD93A1A8D8FF90F662D99E4C5617F14AA1748A0B_gshared (List_1_t974883BC9B49D7E31745F06BA5876D5AC469B0A2* __this, SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114 ___0_item, bool ___1_unique, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___1_unique;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114 L_1 = ___0_item;
		bool L_2;
		L_2 = List_1_Contains_mA321E6C9D10C95BA201341DAE119EFEB1B821AD1(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		return (bool)0;
	}

IL_000e:
	{
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_3 = __this->___buffer;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_4 = __this->___size;
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_5 = __this->___buffer;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_002c;
		}
	}

IL_0026:
	{
		List_1_AllocateMore_m6A2B61A482CE2AC518A9F76411F7B07DE1346FC6(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_002c:
	{
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_6 = __this->___buffer;
		int32_t L_7 = __this->___size;
		SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114 L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114)L_8);
		int32_t L_9 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Add_m82667EA053FA1EC76CD84B7A308E163A153296DE_gshared (List_1_t974883BC9B49D7E31745F06BA5876D5AC469B0A2* __this, RuntimeObject* ___0_item, bool ___1_unique, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___1_unique;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = ___0_item;
		bool L_2;
		L_2 = List_1_Contains_mA321E6C9D10C95BA201341DAE119EFEB1B821AD1(__this, ((*(SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114*)((SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114*)(SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 6))))), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_3 = __this->___buffer;
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_4 = __this->___size;
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_5 = __this->___buffer;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0031;
		}
	}

IL_002b:
	{
		List_1_AllocateMore_m6A2B61A482CE2AC518A9F76411F7B07DE1346FC6(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_0031:
	{
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_6 = __this->___buffer;
		int32_t L_7 = __this->___size;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114)((*(SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114*)((SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114*)(SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114*)UnBox(L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 6))))));
		int32_t L_9 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m4A5EA2DC19CF4341208835E64D2596CF96C3D215_gshared (List_1_t974883BC9B49D7E31745F06BA5876D5AC469B0A2* __this, int32_t ___0_index, SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114 ___1_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->___size;
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_2 = __this->___buffer;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_001e;
		}
	}

IL_0018:
	{
		List_1_AllocateMore_m6A2B61A482CE2AC518A9F76411F7B07DE1346FC6(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001e:
	{
		int32_t L_3 = ___0_index;
		if ((((int32_t)L_3) <= ((int32_t)(-1))))
		{
			goto IL_0072;
		}
	}
	{
		int32_t L_4 = ___0_index;
		int32_t L_5 = __this->___size;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0072;
		}
	}
	{
		int32_t L_6 = __this->___size;
		V_0 = L_6;
		goto IL_0052;
	}

IL_0034:
	{
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_7 = __this->___buffer;
		int32_t L_8 = V_0;
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_9 = __this->___buffer;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114 L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114)L_12);
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
	}

IL_0052:
	{
		int32_t L_14 = V_0;
		int32_t L_15 = ___0_index;
		if ((((int32_t)L_14) > ((int32_t)L_15)))
		{
			goto IL_0034;
		}
	}
	{
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_16 = __this->___buffer;
		int32_t L_17 = ___0_index;
		SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114 L_18 = ___1_item;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114)L_18);
		int32_t L_19 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_19, 1));
		return;
	}

IL_0072:
	{
		SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114 L_20 = ___1_item;
		List_1_Add_mAD2C0D5B38AB741B0D530DC005CA3D03310184CA(__this, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mA321E6C9D10C95BA201341DAE119EFEB1B821AD1_gshared (List_1_t974883BC9B49D7E31745F06BA5876D5AC469B0A2* __this, SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_0 = __this->___buffer;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		V_0 = 0;
		goto IL_0048;
	}

IL_000e:
	{
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_1 = __this->___buffer;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
	}
	{
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_5 = __this->___buffer;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114 L_7 = ___0_item;
		SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114 L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6), &L_8);
		Il2CppFakeBox<SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114> L_10(il2cpp_rgctx_data(method->klass->rgctx_data, 6), ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6))));
		bool L_11;
		L_11 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_10), L_9, NULL);
		if (!L_11)
		{
			goto IL_0044;
		}
	}
	{
		return (bool)1;
	}

IL_0044:
	{
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0048:
	{
		int32_t L_13 = V_0;
		int32_t L_14 = __this->___size;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_000e;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m8D53A4D7BCD95F6F07BF4C227A2CF7B46E610296_gshared (List_1_t974883BC9B49D7E31745F06BA5876D5AC469B0A2* __this, SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_0 = __this->___buffer;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (-1);
	}

IL_000a:
	{
		V_0 = 0;
		goto IL_0048;
	}

IL_000e:
	{
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_1 = __this->___buffer;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
	}
	{
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_5 = __this->___buffer;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114 L_7 = ___0_item;
		SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114 L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6), &L_8);
		Il2CppFakeBox<SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114> L_10(il2cpp_rgctx_data(method->klass->rgctx_data, 6), ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6))));
		bool L_11;
		L_11 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_10), L_9, NULL);
		if (!L_11)
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_12 = V_0;
		return L_12;
	}

IL_0044:
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0048:
	{
		int32_t L_14 = V_0;
		int32_t L_15 = __this->___size;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_000e;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_mB14CE6F5BEA1687DD3A5FBB105166C86FE594928_gshared (List_1_t974883BC9B49D7E31745F06BA5876D5AC469B0A2* __this, SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114 ___0_item, const RuntimeMethod* method) 
{
	EqualityComparer_1_t23B947F4B4052C9CE965A4087C48BEDA5F132E11* V_0 = NULL;
	int32_t V_1 = 0;
	{
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_006e;
		}
	}
	{
		EqualityComparer_1_t23B947F4B4052C9CE965A4087C48BEDA5F132E11* L_1;
		L_1 = EqualityComparer_1_get_Default_m1F6BF9F9EAD31481277A75781DDB8E4F05818D5E_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		V_0 = L_1;
		V_1 = 0;
		goto IL_0065;
	}

IL_0012:
	{
		EqualityComparer_1_t23B947F4B4052C9CE965A4087C48BEDA5F132E11* L_2 = V_0;
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_3 = __this->___buffer;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114 L_7 = ___0_item;
		NullCheck(L_2);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114, SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114 >::Invoke(8, L_2, L_6, L_7);
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10 = __this->___size;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_9, 1))) >= ((int32_t)L_10)))
		{
			goto IL_0051;
		}
	}
	{
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_11 = __this->___buffer;
		int32_t L_12 = V_1;
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_13 = __this->___buffer;
		int32_t L_14 = V_1;
		int32_t L_15 = __this->___size;
		int32_t L_16 = V_1;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, 1)), (RuntimeArray*)L_13, L_14, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_15, L_16)), 1)), NULL);
	}

IL_0051:
	{
		int32_t L_17 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
		return (bool)1;
	}

IL_0061:
	{
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0065:
	{
		int32_t L_19 = V_1;
		int32_t L_20 = __this->___size;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0012;
		}
	}

IL_006e:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m2542BAB94576324727FAEFEDE8D0230DC933D387_gshared (List_1_t974883BC9B49D7E31745F06BA5876D5AC469B0A2* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_1 = ___0_index;
		if ((((int32_t)L_1) <= ((int32_t)(-1))))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_2 = ___0_index;
		int32_t L_3 = __this->___size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_4 = ___0_index;
		int32_t L_5 = __this->___size;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_4, 1))) >= ((int32_t)L_5)))
		{
			goto IL_003f;
		}
	}
	{
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_6 = __this->___buffer;
		int32_t L_7 = ___0_index;
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_8 = __this->___buffer;
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->___size;
		int32_t L_11 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, ((int32_t)il2cpp_codegen_add(L_7, 1)), (RuntimeArray*)L_8, L_9, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_10, L_11)), 1)), NULL);
	}

IL_003f:
	{
		int32_t L_12 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
	}

IL_004d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m900E183FDDB89C5F7DF19AD769375AFBA75393D4_gshared (List_1_t974883BC9B49D7E31745F06BA5876D5AC469B0A2* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = ___1_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		int32_t L_2 = V_0;
		int32_t L_3 = __this->___size;
		if ((((int32_t)L_2) <= ((int32_t)L_3)))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_4 = __this->___size;
		V_0 = L_4;
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_index;
		___1_count = ((int32_t)il2cpp_codegen_subtract(L_5, L_6));
	}

IL_0019:
	{
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_7 = __this->___buffer;
		if (!L_7)
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_8 = ___0_index;
		if ((((int32_t)L_8) <= ((int32_t)(-1))))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->___size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_11 = ___0_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) >= ((int32_t)L_12)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_13 = V_0;
		int32_t L_14 = __this->___size;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_13, 1))) >= ((int32_t)L_14)))
		{
			goto IL_0058;
		}
	}
	{
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_15 = __this->___buffer;
		int32_t L_16 = V_0;
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_17 = __this->___buffer;
		int32_t L_18 = ___0_index;
		int32_t L_19 = __this->___size;
		int32_t L_20 = V_0;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, L_16, (RuntimeArray*)L_17, L_18, ((int32_t)il2cpp_codegen_subtract(L_19, L_20)), NULL);
	}

IL_0058:
	{
		int32_t L_21 = __this->___size;
		int32_t L_22 = ___1_count;
		__this->___size = ((int32_t)il2cpp_codegen_subtract(L_21, L_22));
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114 List_1_Pop_m541F3EE812D1FE9CA86D7665021764671AD90AA2_gshared (List_1_t974883BC9B49D7E31745F06BA5876D5AC469B0A2* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_1 = __this->___size;
		if (!L_1)
		{
			goto IL_0047;
		}
	}
	{
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_2 = __this->___buffer;
		int32_t L_3 = __this->___size;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		int32_t L_4 = V_0;
		__this->___size = L_4;
		int32_t L_5 = V_0;
		NullCheck(L_2);
		int32_t L_6 = L_5;
		SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114 L_7 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_8 = __this->___buffer;
		int32_t L_9 = __this->___size;
		il2cpp_codegen_initobj((&V_1), sizeof(SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114));
		SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114 L_10 = V_1;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114)L_10);
		return L_7;
	}

IL_0047:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114));
		SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114 L_11 = V_1;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* List_1_ToArray_m65A32CE05E628963905754169B319C2A103CB6E2_gshared (List_1_t974883BC9B49D7E31745F06BA5876D5AC469B0A2* __this, const RuntimeMethod* method) 
{
	{
		List_1_Trim_mA25D0CBAF07512FC093F58B90580DAC3FE602735(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_0 = __this->___buffer;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mFB4308A8F741F5C05F52C7AFB75C60CBD820ABF1_gshared (List_1_t974883BC9B49D7E31745F06BA5876D5AC469B0A2* __this, CompareFunc_t57BD15904CC04693A588AE2C9E2BCA414C67C19B* ___0_comparer, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114 V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t G_B8_0 = 0;
	{
		V_0 = 0;
		int32_t L_0 = __this->___size;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		V_2 = (bool)1;
		goto IL_0089;
	}

IL_000f:
	{
		V_2 = (bool)0;
		int32_t L_1 = V_0;
		V_3 = L_1;
		goto IL_0085;
	}

IL_0015:
	{
		CompareFunc_t57BD15904CC04693A588AE2C9E2BCA414C67C19B* L_2 = ___0_comparer;
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_3 = __this->___buffer;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_7 = __this->___buffer;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114 L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_2);
		int32_t L_11;
		L_11 = CompareFunc_Invoke_mC210317E3E1A1EA7DC945E081265A92D576AE458_inline(L_2, L_6, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		if ((((int32_t)L_11) <= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_12 = __this->___buffer;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114 L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_4 = L_15;
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_16 = __this->___buffer;
		int32_t L_17 = V_3;
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_18 = __this->___buffer;
		int32_t L_19 = V_3;
		NullCheck(L_18);
		int32_t L_20 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114 L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114)L_21);
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_22 = __this->___buffer;
		int32_t L_23 = V_3;
		SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114 L_24 = V_4;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_23, 1))), (SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114)L_24);
		V_2 = (bool)1;
		goto IL_0081;
	}

IL_0074:
	{
		bool L_25 = V_2;
		if (L_25)
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_26 = V_3;
		if (!L_26)
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_27 = V_3;
		G_B8_0 = ((int32_t)il2cpp_codegen_subtract(L_27, 1));
		goto IL_0080;
	}

IL_007f:
	{
		G_B8_0 = 0;
	}

IL_0080:
	{
		V_0 = G_B8_0;
	}

IL_0081:
	{
		int32_t L_28 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0085:
	{
		int32_t L_29 = V_3;
		int32_t L_30 = V_1;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_0015;
		}
	}

IL_0089:
	{
		bool L_31 = V_2;
		if (L_31)
		{
			goto IL_000f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m6572C13E6D269E56B4500E7380CD17BBB08CE5C6_gshared (List_1_t974883BC9B49D7E31745F06BA5876D5AC469B0A2* __this, CompareFunc2_t3089DA2331FB2FD299DD42786F063B229E0CD465* ___0_comparer, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114 V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t G_B8_0 = 0;
	{
		V_0 = 0;
		int32_t L_0 = __this->___size;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		V_2 = (bool)1;
		goto IL_0089;
	}

IL_000f:
	{
		V_2 = (bool)0;
		int32_t L_1 = V_0;
		V_3 = L_1;
		goto IL_0085;
	}

IL_0015:
	{
		CompareFunc2_t3089DA2331FB2FD299DD42786F063B229E0CD465* L_2 = ___0_comparer;
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_3 = __this->___buffer;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_5 = __this->___buffer;
		int32_t L_6 = V_3;
		NullCheck(L_5);
		NullCheck(L_2);
		int32_t L_7;
		L_7 = CompareFunc2_Invoke_mA5FD0F55AF25F59CBD75557D18200DB9D1459406_inline(L_2, ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4))), ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_6, 1))))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_8 = __this->___buffer;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114 L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_4 = L_11;
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_12 = __this->___buffer;
		int32_t L_13 = V_3;
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_14 = __this->___buffer;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114 L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114)L_17);
		SerializationEntryU5BU5D_tFED149D8F418E9BE2D76D791A55AF28B081B4902* L_18 = __this->___buffer;
		int32_t L_19 = V_3;
		SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114 L_20 = V_4;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_19, 1))), (SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114)L_20);
		V_2 = (bool)1;
		goto IL_0081;
	}

IL_0074:
	{
		bool L_21 = V_2;
		if (L_21)
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_22 = V_3;
		if (!L_22)
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_23 = V_3;
		G_B8_0 = ((int32_t)il2cpp_codegen_subtract(L_23, 1));
		goto IL_0080;
	}

IL_007f:
	{
		G_B8_0 = 0;
	}

IL_0080:
	{
		V_0 = G_B8_0;
	}

IL_0081:
	{
		int32_t L_24 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0085:
	{
		int32_t L_25 = V_3;
		int32_t L_26 = V_1;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0015;
		}
	}

IL_0089:
	{
		bool L_27 = V_2;
		if (L_27)
		{
			goto IL_000f;
		}
	}
	{
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m2C8640590EFF5843F47328F93B30DDC397033192_gshared (List_1_t8BB3929CE0AF32BA36720C0451635D48C141B582* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mE3CCACBF33C1E4550346115CAF9D48081622CB92_gshared (List_1_t8BB3929CE0AF32BA36720C0451635D48C141B582* __this, int32_t ___0_size, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_size;
		List_1_Allocate_m705F151402C625E09FC5280623293A6D272F3055(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_GetEnumerator_m1DB0F8B85EAB418D2914FC01D2B848F5F8442B4C_gshared (List_1_t8BB3929CE0AF32BA36720C0451635D48C141B582* __this, const RuntimeMethod* method) 
{
	{
		U3CGetEnumeratorU3Ed__4_t6901B1C3DB5A8E465EFC4E0ABD6B3F8101868D29* L_0 = (U3CGetEnumeratorU3Ed__4_t6901B1C3DB5A8E465EFC4E0ABD6B3F8101868D29*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		U3CGetEnumeratorU3Ed__4__ctor_m87AEC2E1299A222DD59F46198B8F0439CACA8897(L_0, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		U3CGetEnumeratorU3Ed__4_t6901B1C3DB5A8E465EFC4E0ABD6B3F8101868D29* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A List_1_get_Item_mF158D6FEFB7B76B6F6452AA38A47F01F54DC81A0_gshared (List_1_t8BB3929CE0AF32BA36720C0451635D48C141B582* __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	{
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_0 = __this->___buffer;
		int32_t L_1 = ___0_i;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_mB684C460ABB94E72763D104C2595734BA8E88FBD_gshared (List_1_t8BB3929CE0AF32BA36720C0451635D48C141B582* __this, int32_t ___0_i, ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A ___1_value, const RuntimeMethod* method) 
{
	{
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_0 = __this->___buffer;
		int32_t L_1 = ___0_i;
		ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A L_2 = ___1_value;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m26EF143F6917A34B93445BEBD096EB0C51364064_gshared (List_1_t8BB3929CE0AF32BA36720C0451635D48C141B582* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_Get_mA76D8F2A469D352E62028704AC8C2D9D54F5B056_gshared (List_1_t8BB3929CE0AF32BA36720C0451635D48C141B582* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_0 = __this->___buffer;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A L_4 = L_3;
		RuntimeObject* L_5 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6), &L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Allocate_m705F151402C625E09FC5280623293A6D272F3055_gshared (List_1_t8BB3929CE0AF32BA36720C0451635D48C141B582* __this, int32_t ___0_newSize, const RuntimeMethod* method) 
{
	ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* V_0 = NULL;
	{
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_1 = __this->___buffer;
		NullCheck(L_1);
		int32_t L_2 = ___0_newSize;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))) >= ((int32_t)L_2)))
		{
			goto IL_003f;
		}
	}

IL_0013:
	{
		int32_t L_3 = ___0_newSize;
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_4 = (ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350*)(ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 7), (uint32_t)L_3);
		V_0 = L_4;
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_5 = __this->___buffer;
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_6 = __this->___size;
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_7 = __this->___buffer;
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_8 = V_0;
		NullCheck((RuntimeArray*)L_7);
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_7, (RuntimeArray*)L_8, 0, NULL);
	}

IL_0038:
	{
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_9 = V_0;
		__this->___buffer = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)L_9);
	}

IL_003f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AllocateMore_mE63483F9B3A55C1DBA2F82423AE3E57811EB07F2_gshared (List_1_t8BB3929CE0AF32BA36720C0451635D48C141B582* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* V_1 = NULL;
	int32_t G_B3_0 = 0;
	{
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_1 = __this->___buffer;
		NullCheck(L_1);
		G_B3_0 = ((int32_t)(((int32_t)(((RuntimeArray*)L_1)->max_length))<<1));
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 0;
	}

IL_0015:
	{
		V_0 = G_B3_0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)32))))
		{
			goto IL_001e;
		}
	}
	{
		V_0 = ((int32_t)32);
	}

IL_001e:
	{
		int32_t L_3 = V_0;
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_4 = (ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350*)(ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 7), (uint32_t)L_3);
		V_1 = L_4;
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_5 = __this->___buffer;
		if (!L_5)
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_6 = __this->___size;
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0043;
		}
	}
	{
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_7 = __this->___buffer;
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_8 = V_1;
		NullCheck((RuntimeArray*)L_7);
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_7, (RuntimeArray*)L_8, 0, NULL);
	}

IL_0043:
	{
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_9 = V_1;
		__this->___buffer = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)L_9);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Resize_mF72C0365443AE472BB655D07B1638A87E5D481F6_gshared (List_1_t8BB3929CE0AF32BA36720C0451635D48C141B582* __this, int32_t ___0_newSize, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___size;
		int32_t L_1 = ___0_newSize;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0032;
		}
	}
	{
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_2 = __this->___buffer;
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_3 = ___0_newSize;
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_4 = (ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350*)(ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 7), (uint32_t)L_3);
		__this->___buffer = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)L_4);
		goto IL_002b;
	}

IL_001f:
	{
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350** L_5 = (ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350**)(&__this->___buffer);
		int32_t L_6 = ___0_newSize;
		Array_Resize_TisChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A_m6B17A4064CE21D14F343215701B230AD8440E047(L_5, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
	}

IL_002b:
	{
		int32_t L_7 = ___0_newSize;
		__this->___size = L_7;
	}

IL_0032:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Trim_mC405BF265274F008B59BC88566F414ECD923BBDF_gshared (List_1_t8BB3929CE0AF32BA36720C0451635D48C141B582* __this, const RuntimeMethod* method) 
{
	ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->___size;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_1 = __this->___size;
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_2 = __this->___buffer;
		NullCheck(L_2);
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))
		{
			goto IL_005d;
		}
	}
	{
		int32_t L_3 = __this->___size;
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_4 = (ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350*)(ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 7), (uint32_t)L_3);
		V_0 = L_4;
		V_1 = 0;
		goto IL_0040;
	}

IL_0029:
	{
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_5 = V_0;
		int32_t L_6 = V_1;
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_7 = __this->___buffer;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A)L_10);
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0040:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = __this->___size;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0029;
		}
	}
	{
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_14 = V_0;
		__this->___buffer = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)L_14);
		return;
	}

IL_0051:
	{
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_15 = (ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350*)(ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 7), (uint32_t)0);
		__this->___buffer = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)L_15);
	}

IL_005d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mB250F832A6AC7F74F15DA6C8E25B964335DCB310_gshared (List_1_t8BB3929CE0AF32BA36720C0451635D48C141B582* __this, const RuntimeMethod* method) 
{
	{
		__this->___size = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m7B89E31AD972F8A020AF2E2B79B3165BCD6DFA36_gshared (List_1_t8BB3929CE0AF32BA36720C0451635D48C141B582* __this, int32_t ___0_allocateSize, const RuntimeMethod* method) 
{
	{
		__this->___size = 0;
		int32_t L_0 = ___0_allocateSize;
		List_1_Allocate_m705F151402C625E09FC5280623293A6D272F3055(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Release_mED10D86712FCD28DFF9BF79E84E05835E546C486_gshared (List_1_t8BB3929CE0AF32BA36720C0451635D48C141B582* __this, const RuntimeMethod* method) 
{
	{
		__this->___size = 0;
		__this->___buffer = (ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)(ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_Expand_m4A8CC057B8B9514C9B5F4165F4AE589DA028D889_gshared (List_1_t8BB3929CE0AF32BA36720C0451635D48C141B582* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->___size;
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_2 = __this->___buffer;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_001e;
		}
	}

IL_0018:
	{
		List_1_AllocateMore_mE63483F9B3A55C1DBA2F82423AE3E57811EB07F2(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001e:
	{
		int32_t L_3 = __this->___size;
		V_0 = L_3;
		int32_t L_4 = V_0;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_4, 1));
		int32_t L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_Expand_m591297C20385EF295F108454E707B4A7153DAE29_gshared (List_1_t8BB3929CE0AF32BA36720C0451635D48C141B582* __this, int32_t ___0_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = __this->___size;
		int32_t L_1 = __this->___size;
		int32_t L_2 = ___0_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_3 = __this->___buffer;
		if (!L_3)
		{
			G_B2_0 = L_0;
			goto IL_0029;
		}
		G_B1_0 = L_0;
	}
	{
		int32_t L_4 = __this->___size;
		int32_t L_5 = V_0;
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_6 = __this->___buffer;
		NullCheck(L_6);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_4, L_5))) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			G_B3_0 = G_B1_0;
			goto IL_0037;
		}
		G_B2_0 = G_B1_0;
	}

IL_0029:
	{
		int32_t L_7 = __this->___size;
		int32_t L_8 = V_0;
		List_1_Allocate_m705F151402C625E09FC5280623293A6D272F3055(__this, ((int32_t)il2cpp_codegen_add(L_7, L_8)), il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		G_B3_0 = G_B2_0;
	}

IL_0037:
	{
		int32_t L_9 = __this->___size;
		int32_t L_10 = ___0_count;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_9, L_10));
		return G_B3_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m5759BD42BAA6A35C4E59F1D9A75FA9256B4011C3_gshared (List_1_t8BB3929CE0AF32BA36720C0451635D48C141B582* __this, ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A ___0_item, const RuntimeMethod* method) 
{
	{
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->___size;
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_2 = __this->___buffer;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_001e;
		}
	}

IL_0018:
	{
		List_1_AllocateMore_mE63483F9B3A55C1DBA2F82423AE3E57811EB07F2(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001e:
	{
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_3 = __this->___buffer;
		int32_t L_4 = __this->___size;
		ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A L_5 = ___0_item;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A)L_5);
		int32_t L_6 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mBDEBDCBDEF6970031619387F4BDBCDEB4F5EB956_gshared (List_1_t8BB3929CE0AF32BA36720C0451635D48C141B582* __this, ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* ___0_items, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___size;
		int32_t L_1 = ___2_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_2 = __this->___buffer;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_3 = __this->___size;
		int32_t L_4 = V_0;
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_5 = __this->___buffer;
		NullCheck(L_5);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_3, L_4))) < ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))))
		{
			goto IL_0031;
		}
	}

IL_0023:
	{
		int32_t L_6 = __this->___size;
		int32_t L_7 = V_0;
		List_1_Allocate_m705F151402C625E09FC5280623293A6D272F3055(__this, ((int32_t)il2cpp_codegen_add(L_6, L_7)), il2cpp_rgctx_method(method->klass->rgctx_data, 0));
	}

IL_0031:
	{
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_8 = ___0_items;
		int32_t L_9 = ___1_offset;
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_10 = __this->___buffer;
		int32_t L_11 = __this->___size;
		int32_t L_12 = ___2_count;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, L_9, (RuntimeArray*)L_10, L_11, L_12, NULL);
		int32_t L_13 = __this->___size;
		int32_t L_14 = ___2_count;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_13, L_14));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m80019115BF870559DA07C942CAD25C794044A933_gshared (List_1_t8BB3929CE0AF32BA36720C0451635D48C141B582* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->___size;
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_2 = __this->___buffer;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_001e;
		}
	}

IL_0018:
	{
		List_1_AllocateMore_mE63483F9B3A55C1DBA2F82423AE3E57811EB07F2(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001e:
	{
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_3 = __this->___buffer;
		int32_t L_4 = __this->___size;
		RuntimeObject* L_5 = ___0_item;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A)((*(ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A*)((ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A*)(ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A*)UnBox(L_5, il2cpp_rgctx_data(method->klass->rgctx_data, 6))))));
		int32_t L_6 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Add_mECEB9D458F8BB10A52FDCEE874E7530D6EFCAA8D_gshared (List_1_t8BB3929CE0AF32BA36720C0451635D48C141B582* __this, ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A ___0_item, bool ___1_unique, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___1_unique;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A L_1 = ___0_item;
		bool L_2;
		L_2 = List_1_Contains_m914AF3F6859B6EB0A1339740FA7DFA8DDCA6A161(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		return (bool)0;
	}

IL_000e:
	{
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_3 = __this->___buffer;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_4 = __this->___size;
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_5 = __this->___buffer;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_002c;
		}
	}

IL_0026:
	{
		List_1_AllocateMore_mE63483F9B3A55C1DBA2F82423AE3E57811EB07F2(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_002c:
	{
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_6 = __this->___buffer;
		int32_t L_7 = __this->___size;
		ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A)L_8);
		int32_t L_9 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Add_m0178A4BF66666343C3F5D18A9A0524B60DF7548C_gshared (List_1_t8BB3929CE0AF32BA36720C0451635D48C141B582* __this, RuntimeObject* ___0_item, bool ___1_unique, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___1_unique;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = ___0_item;
		bool L_2;
		L_2 = List_1_Contains_m914AF3F6859B6EB0A1339740FA7DFA8DDCA6A161(__this, ((*(ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A*)((ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A*)(ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 6))))), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_3 = __this->___buffer;
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_4 = __this->___size;
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_5 = __this->___buffer;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0031;
		}
	}

IL_002b:
	{
		List_1_AllocateMore_mE63483F9B3A55C1DBA2F82423AE3E57811EB07F2(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_0031:
	{
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_6 = __this->___buffer;
		int32_t L_7 = __this->___size;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A)((*(ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A*)((ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A*)(ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A*)UnBox(L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 6))))));
		int32_t L_9 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m9741A4B109AB774704F4741CC6149B322F161F45_gshared (List_1_t8BB3929CE0AF32BA36720C0451635D48C141B582* __this, int32_t ___0_index, ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A ___1_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->___size;
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_2 = __this->___buffer;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_001e;
		}
	}

IL_0018:
	{
		List_1_AllocateMore_mE63483F9B3A55C1DBA2F82423AE3E57811EB07F2(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001e:
	{
		int32_t L_3 = ___0_index;
		if ((((int32_t)L_3) <= ((int32_t)(-1))))
		{
			goto IL_0072;
		}
	}
	{
		int32_t L_4 = ___0_index;
		int32_t L_5 = __this->___size;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0072;
		}
	}
	{
		int32_t L_6 = __this->___size;
		V_0 = L_6;
		goto IL_0052;
	}

IL_0034:
	{
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_7 = __this->___buffer;
		int32_t L_8 = V_0;
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_9 = __this->___buffer;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A)L_12);
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
	}

IL_0052:
	{
		int32_t L_14 = V_0;
		int32_t L_15 = ___0_index;
		if ((((int32_t)L_14) > ((int32_t)L_15)))
		{
			goto IL_0034;
		}
	}
	{
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_16 = __this->___buffer;
		int32_t L_17 = ___0_index;
		ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A L_18 = ___1_item;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A)L_18);
		int32_t L_19 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_19, 1));
		return;
	}

IL_0072:
	{
		ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A L_20 = ___1_item;
		List_1_Add_m5759BD42BAA6A35C4E59F1D9A75FA9256B4011C3(__this, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m914AF3F6859B6EB0A1339740FA7DFA8DDCA6A161_gshared (List_1_t8BB3929CE0AF32BA36720C0451635D48C141B582* __this, ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_0 = __this->___buffer;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		V_0 = 0;
		goto IL_0048;
	}

IL_000e:
	{
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_1 = __this->___buffer;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
	}
	{
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_5 = __this->___buffer;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A L_7 = ___0_item;
		ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6), &L_8);
		Il2CppFakeBox<ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A> L_10(il2cpp_rgctx_data(method->klass->rgctx_data, 6), ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6))));
		bool L_11;
		L_11 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_10), L_9, NULL);
		if (!L_11)
		{
			goto IL_0044;
		}
	}
	{
		return (bool)1;
	}

IL_0044:
	{
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0048:
	{
		int32_t L_13 = V_0;
		int32_t L_14 = __this->___size;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_000e;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m609611DB9CAB7CBF4D6B690DBF9F4BDB006797AB_gshared (List_1_t8BB3929CE0AF32BA36720C0451635D48C141B582* __this, ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_0 = __this->___buffer;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (-1);
	}

IL_000a:
	{
		V_0 = 0;
		goto IL_0048;
	}

IL_000e:
	{
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_1 = __this->___buffer;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
	}
	{
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_5 = __this->___buffer;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A L_7 = ___0_item;
		ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6), &L_8);
		Il2CppFakeBox<ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A> L_10(il2cpp_rgctx_data(method->klass->rgctx_data, 6), ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6))));
		bool L_11;
		L_11 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_10), L_9, NULL);
		if (!L_11)
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_12 = V_0;
		return L_12;
	}

IL_0044:
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0048:
	{
		int32_t L_14 = V_0;
		int32_t L_15 = __this->___size;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_000e;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m41D42DCD35AFF4C5C72236306F30B3BE0B6A0680_gshared (List_1_t8BB3929CE0AF32BA36720C0451635D48C141B582* __this, ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A ___0_item, const RuntimeMethod* method) 
{
	EqualityComparer_1_t922A0F6FFD989B570795F0DB5055CA31A625B1D6* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_006e;
		}
	}
	{
		EqualityComparer_1_t922A0F6FFD989B570795F0DB5055CA31A625B1D6* L_1;
		L_1 = EqualityComparer_1_get_Default_m13778FED77225F5505F75F08CD67D222DAB9F806_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		V_0 = L_1;
		V_1 = 0;
		goto IL_0065;
	}

IL_0012:
	{
		EqualityComparer_1_t922A0F6FFD989B570795F0DB5055CA31A625B1D6* L_2 = V_0;
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_3 = __this->___buffer;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A L_7 = ___0_item;
		NullCheck(L_2);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A, ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A >::Invoke(8, L_2, L_6, L_7);
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10 = __this->___size;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_9, 1))) >= ((int32_t)L_10)))
		{
			goto IL_0051;
		}
	}
	{
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_11 = __this->___buffer;
		int32_t L_12 = V_1;
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_13 = __this->___buffer;
		int32_t L_14 = V_1;
		int32_t L_15 = __this->___size;
		int32_t L_16 = V_1;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, 1)), (RuntimeArray*)L_13, L_14, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_15, L_16)), 1)), NULL);
	}

IL_0051:
	{
		int32_t L_17 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
		return (bool)1;
	}

IL_0061:
	{
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0065:
	{
		int32_t L_19 = V_1;
		int32_t L_20 = __this->___size;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0012;
		}
	}

IL_006e:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mD4FDB56C11FD10263295D195400CD60D8C62132B_gshared (List_1_t8BB3929CE0AF32BA36720C0451635D48C141B582* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_1 = ___0_index;
		if ((((int32_t)L_1) <= ((int32_t)(-1))))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_2 = ___0_index;
		int32_t L_3 = __this->___size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_4 = ___0_index;
		int32_t L_5 = __this->___size;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_4, 1))) >= ((int32_t)L_5)))
		{
			goto IL_003f;
		}
	}
	{
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_6 = __this->___buffer;
		int32_t L_7 = ___0_index;
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_8 = __this->___buffer;
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->___size;
		int32_t L_11 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, ((int32_t)il2cpp_codegen_add(L_7, 1)), (RuntimeArray*)L_8, L_9, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_10, L_11)), 1)), NULL);
	}

IL_003f:
	{
		int32_t L_12 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
	}

IL_004d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m89161314B8BC087ABE99ED0D9C121C8F776DBCDE_gshared (List_1_t8BB3929CE0AF32BA36720C0451635D48C141B582* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = ___1_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		int32_t L_2 = V_0;
		int32_t L_3 = __this->___size;
		if ((((int32_t)L_2) <= ((int32_t)L_3)))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_4 = __this->___size;
		V_0 = L_4;
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_index;
		___1_count = ((int32_t)il2cpp_codegen_subtract(L_5, L_6));
	}

IL_0019:
	{
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_7 = __this->___buffer;
		if (!L_7)
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_8 = ___0_index;
		if ((((int32_t)L_8) <= ((int32_t)(-1))))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->___size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_11 = ___0_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) >= ((int32_t)L_12)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_13 = V_0;
		int32_t L_14 = __this->___size;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_13, 1))) >= ((int32_t)L_14)))
		{
			goto IL_0058;
		}
	}
	{
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_15 = __this->___buffer;
		int32_t L_16 = V_0;
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_17 = __this->___buffer;
		int32_t L_18 = ___0_index;
		int32_t L_19 = __this->___size;
		int32_t L_20 = V_0;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, L_16, (RuntimeArray*)L_17, L_18, ((int32_t)il2cpp_codegen_subtract(L_19, L_20)), NULL);
	}

IL_0058:
	{
		int32_t L_21 = __this->___size;
		int32_t L_22 = ___1_count;
		__this->___size = ((int32_t)il2cpp_codegen_subtract(L_21, L_22));
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A List_1_Pop_m154F1304872E3E3AE705D68A56CB6189BFB2660A_gshared (List_1_t8BB3929CE0AF32BA36720C0451635D48C141B582* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_1 = __this->___size;
		if (!L_1)
		{
			goto IL_0047;
		}
	}
	{
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_2 = __this->___buffer;
		int32_t L_3 = __this->___size;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		int32_t L_4 = V_0;
		__this->___size = L_4;
		int32_t L_5 = V_0;
		NullCheck(L_2);
		int32_t L_6 = L_5;
		ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A L_7 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_8 = __this->___buffer;
		int32_t L_9 = __this->___size;
		il2cpp_codegen_initobj((&V_1), sizeof(ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A));
		ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A L_10 = V_1;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A)L_10);
		return L_7;
	}

IL_0047:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A));
		ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A L_11 = V_1;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* List_1_ToArray_m45F58409CAA0411D76DCC2572FB2DBE65F6A8905_gshared (List_1_t8BB3929CE0AF32BA36720C0451635D48C141B582* __this, const RuntimeMethod* method) 
{
	{
		List_1_Trim_mC405BF265274F008B59BC88566F414ECD923BBDF(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_0 = __this->___buffer;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m30DBAAB9F98114A298CCAB64868C911F94B618F6_gshared (List_1_t8BB3929CE0AF32BA36720C0451635D48C141B582* __this, CompareFunc_t3B70DEE7A10D19DE6F1C7A392495D80CB2F44B76* ___0_comparer, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t G_B8_0 = 0;
	{
		V_0 = 0;
		int32_t L_0 = __this->___size;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		V_2 = (bool)1;
		goto IL_0089;
	}

IL_000f:
	{
		V_2 = (bool)0;
		int32_t L_1 = V_0;
		V_3 = L_1;
		goto IL_0085;
	}

IL_0015:
	{
		CompareFunc_t3B70DEE7A10D19DE6F1C7A392495D80CB2F44B76* L_2 = ___0_comparer;
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_3 = __this->___buffer;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_7 = __this->___buffer;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_2);
		int32_t L_11;
		L_11 = CompareFunc_Invoke_m351179990E33C7C8CC0E941CCC765C52C7E47541_inline(L_2, L_6, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		if ((((int32_t)L_11) <= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_12 = __this->___buffer;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_4 = L_15;
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_16 = __this->___buffer;
		int32_t L_17 = V_3;
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_18 = __this->___buffer;
		int32_t L_19 = V_3;
		NullCheck(L_18);
		int32_t L_20 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A)L_21);
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_22 = __this->___buffer;
		int32_t L_23 = V_3;
		ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A L_24 = V_4;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_23, 1))), (ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A)L_24);
		V_2 = (bool)1;
		goto IL_0081;
	}

IL_0074:
	{
		bool L_25 = V_2;
		if (L_25)
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_26 = V_3;
		if (!L_26)
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_27 = V_3;
		G_B8_0 = ((int32_t)il2cpp_codegen_subtract(L_27, 1));
		goto IL_0080;
	}

IL_007f:
	{
		G_B8_0 = 0;
	}

IL_0080:
	{
		V_0 = G_B8_0;
	}

IL_0081:
	{
		int32_t L_28 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0085:
	{
		int32_t L_29 = V_3;
		int32_t L_30 = V_1;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_0015;
		}
	}

IL_0089:
	{
		bool L_31 = V_2;
		if (L_31)
		{
			goto IL_000f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m55F3DCE8EB5382AE319FDFE750ABDBFD300399EC_gshared (List_1_t8BB3929CE0AF32BA36720C0451635D48C141B582* __this, CompareFunc2_t942EC01EBBF2D48BDF26D7794667FAAB5210D94B* ___0_comparer, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t G_B8_0 = 0;
	{
		V_0 = 0;
		int32_t L_0 = __this->___size;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		V_2 = (bool)1;
		goto IL_0089;
	}

IL_000f:
	{
		V_2 = (bool)0;
		int32_t L_1 = V_0;
		V_3 = L_1;
		goto IL_0085;
	}

IL_0015:
	{
		CompareFunc2_t942EC01EBBF2D48BDF26D7794667FAAB5210D94B* L_2 = ___0_comparer;
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_3 = __this->___buffer;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_5 = __this->___buffer;
		int32_t L_6 = V_3;
		NullCheck(L_5);
		NullCheck(L_2);
		int32_t L_7;
		L_7 = CompareFunc2_Invoke_m7AEAE165F749D42182BA1DB4D144F18055BEB165_inline(L_2, ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4))), ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_6, 1))))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_8 = __this->___buffer;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_4 = L_11;
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_12 = __this->___buffer;
		int32_t L_13 = V_3;
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_14 = __this->___buffer;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A)L_17);
		ChatEntryU5BU5D_tD829B71266B4880324D1CCAC035A20E70E816350* L_18 = __this->___buffer;
		int32_t L_19 = V_3;
		ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A L_20 = V_4;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_19, 1))), (ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A)L_20);
		V_2 = (bool)1;
		goto IL_0081;
	}

IL_0074:
	{
		bool L_21 = V_2;
		if (L_21)
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_22 = V_3;
		if (!L_22)
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_23 = V_3;
		G_B8_0 = ((int32_t)il2cpp_codegen_subtract(L_23, 1));
		goto IL_0080;
	}

IL_007f:
	{
		G_B8_0 = 0;
	}

IL_0080:
	{
		V_0 = G_B8_0;
	}

IL_0081:
	{
		int32_t L_24 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0085:
	{
		int32_t L_25 = V_3;
		int32_t L_26 = V_1;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0015;
		}
	}

IL_0089:
	{
		bool L_27 = V_2;
		if (L_27)
		{
			goto IL_000f;
		}
	}
	{
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m905ADE00E34F7701A43828EAC6EDF063708A403F_gshared (List_1_t3A96D62243E83DB585118DC88423390D159E70F7* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mBA65F1F7C05D83EA0A26AD410A89F4C202652465_gshared (List_1_t3A96D62243E83DB585118DC88423390D159E70F7* __this, int32_t ___0_size, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_size;
		List_1_Allocate_m5E017945064D3ED2B4934922E6D1476AE34A3138(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_GetEnumerator_mF1FE8BA7E1C5E1F213681376AA6CCCABD40F4743_gshared (List_1_t3A96D62243E83DB585118DC88423390D159E70F7* __this, const RuntimeMethod* method) 
{
	{
		U3CGetEnumeratorU3Ed__4_tE2F70AE5D1600769E0B346A329877341E8EE9AD2* L_0 = (U3CGetEnumeratorU3Ed__4_tE2F70AE5D1600769E0B346A329877341E8EE9AD2*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		U3CGetEnumeratorU3Ed__4__ctor_mFED244EB43A7B1BAD1E46C73CE7FBD41E8B7E96A(L_0, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		U3CGetEnumeratorU3Ed__4_tE2F70AE5D1600769E0B346A329877341E8EE9AD2* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE List_1_get_Item_m313093FF662A0A13766D17CCE861164BDE1B90F4_gshared (List_1_t3A96D62243E83DB585118DC88423390D159E70F7* __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	{
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_0 = __this->___buffer;
		int32_t L_1 = ___0_i;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_mBAF5B38E95A88E24AF6874EC2BFCDFC08B368E9B_gshared (List_1_t3A96D62243E83DB585118DC88423390D159E70F7* __this, int32_t ___0_i, ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE ___1_value, const RuntimeMethod* method) 
{
	{
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_0 = __this->___buffer;
		int32_t L_1 = ___0_i;
		ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE L_2 = ___1_value;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD1C36072AA34F738AB3EC55B1C6ABFB5D5C90818_gshared (List_1_t3A96D62243E83DB585118DC88423390D159E70F7* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_Get_m47540912E47415644CB4EA605DD3496A99964463_gshared (List_1_t3A96D62243E83DB585118DC88423390D159E70F7* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_0 = __this->___buffer;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE L_4 = L_3;
		RuntimeObject* L_5 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6), &L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Allocate_m5E017945064D3ED2B4934922E6D1476AE34A3138_gshared (List_1_t3A96D62243E83DB585118DC88423390D159E70F7* __this, int32_t ___0_newSize, const RuntimeMethod* method) 
{
	ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* V_0 = NULL;
	{
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_1 = __this->___buffer;
		NullCheck(L_1);
		int32_t L_2 = ___0_newSize;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))) >= ((int32_t)L_2)))
		{
			goto IL_003f;
		}
	}

IL_0013:
	{
		int32_t L_3 = ___0_newSize;
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_4 = (ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F*)(ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 7), (uint32_t)L_3);
		V_0 = L_4;
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_5 = __this->___buffer;
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_6 = __this->___size;
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_7 = __this->___buffer;
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_8 = V_0;
		NullCheck((RuntimeArray*)L_7);
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_7, (RuntimeArray*)L_8, 0, NULL);
	}

IL_0038:
	{
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_9 = V_0;
		__this->___buffer = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)L_9);
	}

IL_003f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AllocateMore_mD0A96FAA2F13E1B6A463049080D7E5D7F02AFD35_gshared (List_1_t3A96D62243E83DB585118DC88423390D159E70F7* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* V_1 = NULL;
	int32_t G_B3_0 = 0;
	{
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_1 = __this->___buffer;
		NullCheck(L_1);
		G_B3_0 = ((int32_t)(((int32_t)(((RuntimeArray*)L_1)->max_length))<<1));
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 0;
	}

IL_0015:
	{
		V_0 = G_B3_0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)32))))
		{
			goto IL_001e;
		}
	}
	{
		V_0 = ((int32_t)32);
	}

IL_001e:
	{
		int32_t L_3 = V_0;
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_4 = (ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F*)(ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 7), (uint32_t)L_3);
		V_1 = L_4;
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_5 = __this->___buffer;
		if (!L_5)
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_6 = __this->___size;
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0043;
		}
	}
	{
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_7 = __this->___buffer;
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_8 = V_1;
		NullCheck((RuntimeArray*)L_7);
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_7, (RuntimeArray*)L_8, 0, NULL);
	}

IL_0043:
	{
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_9 = V_1;
		__this->___buffer = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)L_9);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Resize_m707A49B51A1DF9F216D3F8C8F819AD54FBDDEC64_gshared (List_1_t3A96D62243E83DB585118DC88423390D159E70F7* __this, int32_t ___0_newSize, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___size;
		int32_t L_1 = ___0_newSize;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0032;
		}
	}
	{
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_2 = __this->___buffer;
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_3 = ___0_newSize;
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_4 = (ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F*)(ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 7), (uint32_t)L_3);
		__this->___buffer = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)L_4);
		goto IL_002b;
	}

IL_001f:
	{
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F** L_5 = (ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F**)(&__this->___buffer);
		int32_t L_6 = ___0_newSize;
		Array_Resize_TisForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE_m3126A0A6FB70B2F1686321EFB5E6678B4C0A4CB6(L_5, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
	}

IL_002b:
	{
		int32_t L_7 = ___0_newSize;
		__this->___size = L_7;
	}

IL_0032:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Trim_mB5673BD8D2BDDC5D585E68AB0EFAA30903EFA000_gshared (List_1_t3A96D62243E83DB585118DC88423390D159E70F7* __this, const RuntimeMethod* method) 
{
	ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->___size;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_1 = __this->___size;
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_2 = __this->___buffer;
		NullCheck(L_2);
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))
		{
			goto IL_005d;
		}
	}
	{
		int32_t L_3 = __this->___size;
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_4 = (ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F*)(ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 7), (uint32_t)L_3);
		V_0 = L_4;
		V_1 = 0;
		goto IL_0040;
	}

IL_0029:
	{
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_5 = V_0;
		int32_t L_6 = V_1;
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_7 = __this->___buffer;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE)L_10);
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0040:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = __this->___size;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0029;
		}
	}
	{
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_14 = V_0;
		__this->___buffer = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)L_14);
		return;
	}

IL_0051:
	{
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_15 = (ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F*)(ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 7), (uint32_t)0);
		__this->___buffer = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)L_15);
	}

IL_005d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mEA5B0F587414500F691C0DF62411F17716F6AC9C_gshared (List_1_t3A96D62243E83DB585118DC88423390D159E70F7* __this, const RuntimeMethod* method) 
{
	{
		__this->___size = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mCFEB8C88A1807752A452A26C51ADB59C24CBB0F7_gshared (List_1_t3A96D62243E83DB585118DC88423390D159E70F7* __this, int32_t ___0_allocateSize, const RuntimeMethod* method) 
{
	{
		__this->___size = 0;
		int32_t L_0 = ___0_allocateSize;
		List_1_Allocate_m5E017945064D3ED2B4934922E6D1476AE34A3138(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Release_m24B14CE26C50E77909A9F14C2D05739A4034A9CA_gshared (List_1_t3A96D62243E83DB585118DC88423390D159E70F7* __this, const RuntimeMethod* method) 
{
	{
		__this->___size = 0;
		__this->___buffer = (ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)(ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_Expand_m0A8A4FBB98E250897FD4A1B1306097EF60C7FD23_gshared (List_1_t3A96D62243E83DB585118DC88423390D159E70F7* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->___size;
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_2 = __this->___buffer;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_001e;
		}
	}

IL_0018:
	{
		List_1_AllocateMore_mD0A96FAA2F13E1B6A463049080D7E5D7F02AFD35(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001e:
	{
		int32_t L_3 = __this->___size;
		V_0 = L_3;
		int32_t L_4 = V_0;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_4, 1));
		int32_t L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_Expand_m12FA90B22E90DE2718EA26743CF9DBF4D3A1A8B8_gshared (List_1_t3A96D62243E83DB585118DC88423390D159E70F7* __this, int32_t ___0_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = __this->___size;
		int32_t L_1 = __this->___size;
		int32_t L_2 = ___0_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_3 = __this->___buffer;
		if (!L_3)
		{
			G_B2_0 = L_0;
			goto IL_0029;
		}
		G_B1_0 = L_0;
	}
	{
		int32_t L_4 = __this->___size;
		int32_t L_5 = V_0;
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_6 = __this->___buffer;
		NullCheck(L_6);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_4, L_5))) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			G_B3_0 = G_B1_0;
			goto IL_0037;
		}
		G_B2_0 = G_B1_0;
	}

IL_0029:
	{
		int32_t L_7 = __this->___size;
		int32_t L_8 = V_0;
		List_1_Allocate_m5E017945064D3ED2B4934922E6D1476AE34A3138(__this, ((int32_t)il2cpp_codegen_add(L_7, L_8)), il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		G_B3_0 = G_B2_0;
	}

IL_0037:
	{
		int32_t L_9 = __this->___size;
		int32_t L_10 = ___0_count;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_9, L_10));
		return G_B3_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE3A0896716329143BB73837C7FB65985890BD18D_gshared (List_1_t3A96D62243E83DB585118DC88423390D159E70F7* __this, ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE ___0_item, const RuntimeMethod* method) 
{
	{
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->___size;
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_2 = __this->___buffer;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_001e;
		}
	}

IL_0018:
	{
		List_1_AllocateMore_mD0A96FAA2F13E1B6A463049080D7E5D7F02AFD35(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001e:
	{
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_3 = __this->___buffer;
		int32_t L_4 = __this->___size;
		ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE L_5 = ___0_item;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE)L_5);
		int32_t L_6 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m7FB54B0F172434AF397C7D6C0B7ED3C405EC7B07_gshared (List_1_t3A96D62243E83DB585118DC88423390D159E70F7* __this, ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* ___0_items, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___size;
		int32_t L_1 = ___2_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_2 = __this->___buffer;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_3 = __this->___size;
		int32_t L_4 = V_0;
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_5 = __this->___buffer;
		NullCheck(L_5);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_3, L_4))) < ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))))
		{
			goto IL_0031;
		}
	}

IL_0023:
	{
		int32_t L_6 = __this->___size;
		int32_t L_7 = V_0;
		List_1_Allocate_m5E017945064D3ED2B4934922E6D1476AE34A3138(__this, ((int32_t)il2cpp_codegen_add(L_6, L_7)), il2cpp_rgctx_method(method->klass->rgctx_data, 0));
	}

IL_0031:
	{
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_8 = ___0_items;
		int32_t L_9 = ___1_offset;
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_10 = __this->___buffer;
		int32_t L_11 = __this->___size;
		int32_t L_12 = ___2_count;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, L_9, (RuntimeArray*)L_10, L_11, L_12, NULL);
		int32_t L_13 = __this->___size;
		int32_t L_14 = ___2_count;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_13, L_14));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m85462560A66E2523146C578715C6D9EBE75A73F4_gshared (List_1_t3A96D62243E83DB585118DC88423390D159E70F7* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->___size;
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_2 = __this->___buffer;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_001e;
		}
	}

IL_0018:
	{
		List_1_AllocateMore_mD0A96FAA2F13E1B6A463049080D7E5D7F02AFD35(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001e:
	{
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_3 = __this->___buffer;
		int32_t L_4 = __this->___size;
		RuntimeObject* L_5 = ___0_item;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE)((*(ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE*)((ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE*)(ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE*)UnBox(L_5, il2cpp_rgctx_data(method->klass->rgctx_data, 6))))));
		int32_t L_6 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Add_m4B1AEA808E6D5360147614A8E0308EF81305D4BD_gshared (List_1_t3A96D62243E83DB585118DC88423390D159E70F7* __this, ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE ___0_item, bool ___1_unique, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___1_unique;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE L_1 = ___0_item;
		bool L_2;
		L_2 = List_1_Contains_mED171A2B248A13191B58A439764C36404C940BC6(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		return (bool)0;
	}

IL_000e:
	{
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_3 = __this->___buffer;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_4 = __this->___size;
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_5 = __this->___buffer;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_002c;
		}
	}

IL_0026:
	{
		List_1_AllocateMore_mD0A96FAA2F13E1B6A463049080D7E5D7F02AFD35(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_002c:
	{
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_6 = __this->___buffer;
		int32_t L_7 = __this->___size;
		ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE)L_8);
		int32_t L_9 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Add_mBFA47570EBEDC2CF076CEDEE2462FEB77CC8E57C_gshared (List_1_t3A96D62243E83DB585118DC88423390D159E70F7* __this, RuntimeObject* ___0_item, bool ___1_unique, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___1_unique;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = ___0_item;
		bool L_2;
		L_2 = List_1_Contains_mED171A2B248A13191B58A439764C36404C940BC6(__this, ((*(ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE*)((ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE*)(ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 6))))), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_3 = __this->___buffer;
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_4 = __this->___size;
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_5 = __this->___buffer;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0031;
		}
	}

IL_002b:
	{
		List_1_AllocateMore_mD0A96FAA2F13E1B6A463049080D7E5D7F02AFD35(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_0031:
	{
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_6 = __this->___buffer;
		int32_t L_7 = __this->___size;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE)((*(ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE*)((ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE*)(ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE*)UnBox(L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 6))))));
		int32_t L_9 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mDE050B8053BB1B43CEDB4F66A58CB641E8EA17FB_gshared (List_1_t3A96D62243E83DB585118DC88423390D159E70F7* __this, int32_t ___0_index, ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE ___1_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->___size;
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_2 = __this->___buffer;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_001e;
		}
	}

IL_0018:
	{
		List_1_AllocateMore_mD0A96FAA2F13E1B6A463049080D7E5D7F02AFD35(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001e:
	{
		int32_t L_3 = ___0_index;
		if ((((int32_t)L_3) <= ((int32_t)(-1))))
		{
			goto IL_0072;
		}
	}
	{
		int32_t L_4 = ___0_index;
		int32_t L_5 = __this->___size;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0072;
		}
	}
	{
		int32_t L_6 = __this->___size;
		V_0 = L_6;
		goto IL_0052;
	}

IL_0034:
	{
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_7 = __this->___buffer;
		int32_t L_8 = V_0;
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_9 = __this->___buffer;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE)L_12);
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
	}

IL_0052:
	{
		int32_t L_14 = V_0;
		int32_t L_15 = ___0_index;
		if ((((int32_t)L_14) > ((int32_t)L_15)))
		{
			goto IL_0034;
		}
	}
	{
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_16 = __this->___buffer;
		int32_t L_17 = ___0_index;
		ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE L_18 = ___1_item;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE)L_18);
		int32_t L_19 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_19, 1));
		return;
	}

IL_0072:
	{
		ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE L_20 = ___1_item;
		List_1_Add_mE3A0896716329143BB73837C7FB65985890BD18D(__this, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mED171A2B248A13191B58A439764C36404C940BC6_gshared (List_1_t3A96D62243E83DB585118DC88423390D159E70F7* __this, ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_0 = __this->___buffer;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		V_0 = 0;
		goto IL_0048;
	}

IL_000e:
	{
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_1 = __this->___buffer;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
	}
	{
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_5 = __this->___buffer;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE L_7 = ___0_item;
		ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6), &L_8);
		Il2CppFakeBox<ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE> L_10(il2cpp_rgctx_data(method->klass->rgctx_data, 6), ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6))));
		bool L_11;
		L_11 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_10), L_9, NULL);
		if (!L_11)
		{
			goto IL_0044;
		}
	}
	{
		return (bool)1;
	}

IL_0044:
	{
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0048:
	{
		int32_t L_13 = V_0;
		int32_t L_14 = __this->___size;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_000e;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m1619DC75FBD1D3507F42BA33D3CAC03A0604E250_gshared (List_1_t3A96D62243E83DB585118DC88423390D159E70F7* __this, ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_0 = __this->___buffer;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (-1);
	}

IL_000a:
	{
		V_0 = 0;
		goto IL_0048;
	}

IL_000e:
	{
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_1 = __this->___buffer;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
	}
	{
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_5 = __this->___buffer;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE L_7 = ___0_item;
		ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6), &L_8);
		Il2CppFakeBox<ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE> L_10(il2cpp_rgctx_data(method->klass->rgctx_data, 6), ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6))));
		bool L_11;
		L_11 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_10), L_9, NULL);
		if (!L_11)
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_12 = V_0;
		return L_12;
	}

IL_0044:
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0048:
	{
		int32_t L_14 = V_0;
		int32_t L_15 = __this->___size;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_000e;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m255B355FF89CF7FF5DF02CA420578B5B5E75D63C_gshared (List_1_t3A96D62243E83DB585118DC88423390D159E70F7* __this, ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE ___0_item, const RuntimeMethod* method) 
{
	EqualityComparer_1_tA5B2D612E48D47CC5468C19147A56588873B414A* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_006e;
		}
	}
	{
		EqualityComparer_1_tA5B2D612E48D47CC5468C19147A56588873B414A* L_1;
		L_1 = EqualityComparer_1_get_Default_mAD029989C453C4C80CEF435CCBCFA76645C04C49_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		V_0 = L_1;
		V_1 = 0;
		goto IL_0065;
	}

IL_0012:
	{
		EqualityComparer_1_tA5B2D612E48D47CC5468C19147A56588873B414A* L_2 = V_0;
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_3 = __this->___buffer;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE L_7 = ___0_item;
		NullCheck(L_2);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE, ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE >::Invoke(8, L_2, L_6, L_7);
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10 = __this->___size;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_9, 1))) >= ((int32_t)L_10)))
		{
			goto IL_0051;
		}
	}
	{
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_11 = __this->___buffer;
		int32_t L_12 = V_1;
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_13 = __this->___buffer;
		int32_t L_14 = V_1;
		int32_t L_15 = __this->___size;
		int32_t L_16 = V_1;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, 1)), (RuntimeArray*)L_13, L_14, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_15, L_16)), 1)), NULL);
	}

IL_0051:
	{
		int32_t L_17 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
		return (bool)1;
	}

IL_0061:
	{
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0065:
	{
		int32_t L_19 = V_1;
		int32_t L_20 = __this->___size;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0012;
		}
	}

IL_006e:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mF1FF121C9205E7061F096CE385F7D0343D4C69C7_gshared (List_1_t3A96D62243E83DB585118DC88423390D159E70F7* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_1 = ___0_index;
		if ((((int32_t)L_1) <= ((int32_t)(-1))))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_2 = ___0_index;
		int32_t L_3 = __this->___size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_4 = ___0_index;
		int32_t L_5 = __this->___size;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_4, 1))) >= ((int32_t)L_5)))
		{
			goto IL_003f;
		}
	}
	{
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_6 = __this->___buffer;
		int32_t L_7 = ___0_index;
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_8 = __this->___buffer;
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->___size;
		int32_t L_11 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, ((int32_t)il2cpp_codegen_add(L_7, 1)), (RuntimeArray*)L_8, L_9, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_10, L_11)), 1)), NULL);
	}

IL_003f:
	{
		int32_t L_12 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
	}

IL_004d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_mCEB60E27583E15A09EC5D2F5B99829EE85AFF276_gshared (List_1_t3A96D62243E83DB585118DC88423390D159E70F7* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = ___1_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		int32_t L_2 = V_0;
		int32_t L_3 = __this->___size;
		if ((((int32_t)L_2) <= ((int32_t)L_3)))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_4 = __this->___size;
		V_0 = L_4;
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_index;
		___1_count = ((int32_t)il2cpp_codegen_subtract(L_5, L_6));
	}

IL_0019:
	{
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_7 = __this->___buffer;
		if (!L_7)
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_8 = ___0_index;
		if ((((int32_t)L_8) <= ((int32_t)(-1))))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->___size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_11 = ___0_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) >= ((int32_t)L_12)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_13 = V_0;
		int32_t L_14 = __this->___size;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_13, 1))) >= ((int32_t)L_14)))
		{
			goto IL_0058;
		}
	}
	{
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_15 = __this->___buffer;
		int32_t L_16 = V_0;
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_17 = __this->___buffer;
		int32_t L_18 = ___0_index;
		int32_t L_19 = __this->___size;
		int32_t L_20 = V_0;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, L_16, (RuntimeArray*)L_17, L_18, ((int32_t)il2cpp_codegen_subtract(L_19, L_20)), NULL);
	}

IL_0058:
	{
		int32_t L_21 = __this->___size;
		int32_t L_22 = ___1_count;
		__this->___size = ((int32_t)il2cpp_codegen_subtract(L_21, L_22));
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE List_1_Pop_m838F5483BE642FDE9B929F5DD2124DE7D4079356_gshared (List_1_t3A96D62243E83DB585118DC88423390D159E70F7* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_1 = __this->___size;
		if (!L_1)
		{
			goto IL_0047;
		}
	}
	{
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_2 = __this->___buffer;
		int32_t L_3 = __this->___size;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		int32_t L_4 = V_0;
		__this->___size = L_4;
		int32_t L_5 = V_0;
		NullCheck(L_2);
		int32_t L_6 = L_5;
		ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE L_7 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_8 = __this->___buffer;
		int32_t L_9 = __this->___size;
		il2cpp_codegen_initobj((&V_1), sizeof(ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE));
		ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE L_10 = V_1;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE)L_10);
		return L_7;
	}

IL_0047:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE));
		ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE L_11 = V_1;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* List_1_ToArray_mD587D5512022FACA3BD3FA959DD10EF0B420FBEB_gshared (List_1_t3A96D62243E83DB585118DC88423390D159E70F7* __this, const RuntimeMethod* method) 
{
	{
		List_1_Trim_mB5673BD8D2BDDC5D585E68AB0EFAA30903EFA000(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_0 = __this->___buffer;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m6ADECAE7A605CD5337B13412C5F25F6B4EA99A34_gshared (List_1_t3A96D62243E83DB585118DC88423390D159E70F7* __this, CompareFunc_t00CE15486F1C87AAA1937F1407C4B99828312A5D* ___0_comparer, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t G_B8_0 = 0;
	{
		V_0 = 0;
		int32_t L_0 = __this->___size;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		V_2 = (bool)1;
		goto IL_0089;
	}

IL_000f:
	{
		V_2 = (bool)0;
		int32_t L_1 = V_0;
		V_3 = L_1;
		goto IL_0085;
	}

IL_0015:
	{
		CompareFunc_t00CE15486F1C87AAA1937F1407C4B99828312A5D* L_2 = ___0_comparer;
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_3 = __this->___buffer;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_7 = __this->___buffer;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_2);
		int32_t L_11;
		L_11 = CompareFunc_Invoke_m5C0B1FFD5552AD1F619D3B6A3B7B677052199FCE_inline(L_2, L_6, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		if ((((int32_t)L_11) <= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_12 = __this->___buffer;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_4 = L_15;
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_16 = __this->___buffer;
		int32_t L_17 = V_3;
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_18 = __this->___buffer;
		int32_t L_19 = V_3;
		NullCheck(L_18);
		int32_t L_20 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE)L_21);
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_22 = __this->___buffer;
		int32_t L_23 = V_3;
		ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE L_24 = V_4;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_23, 1))), (ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE)L_24);
		V_2 = (bool)1;
		goto IL_0081;
	}

IL_0074:
	{
		bool L_25 = V_2;
		if (L_25)
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_26 = V_3;
		if (!L_26)
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_27 = V_3;
		G_B8_0 = ((int32_t)il2cpp_codegen_subtract(L_27, 1));
		goto IL_0080;
	}

IL_007f:
	{
		G_B8_0 = 0;
	}

IL_0080:
	{
		V_0 = G_B8_0;
	}

IL_0081:
	{
		int32_t L_28 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0085:
	{
		int32_t L_29 = V_3;
		int32_t L_30 = V_1;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_0015;
		}
	}

IL_0089:
	{
		bool L_31 = V_2;
		if (L_31)
		{
			goto IL_000f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m0290202FF6F1F78B78E51FF0CE7AC369724D96AE_gshared (List_1_t3A96D62243E83DB585118DC88423390D159E70F7* __this, CompareFunc2_tD6EC93CB1B91D9C4071995650B545B7872439E5C* ___0_comparer, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t G_B8_0 = 0;
	{
		V_0 = 0;
		int32_t L_0 = __this->___size;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		V_2 = (bool)1;
		goto IL_0089;
	}

IL_000f:
	{
		V_2 = (bool)0;
		int32_t L_1 = V_0;
		V_3 = L_1;
		goto IL_0085;
	}

IL_0015:
	{
		CompareFunc2_tD6EC93CB1B91D9C4071995650B545B7872439E5C* L_2 = ___0_comparer;
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_3 = __this->___buffer;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_5 = __this->___buffer;
		int32_t L_6 = V_3;
		NullCheck(L_5);
		NullCheck(L_2);
		int32_t L_7;
		L_7 = CompareFunc2_Invoke_mB3271E54FD35021D322759F49B849A1C081437B5_inline(L_2, ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4))), ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_6, 1))))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_8 = __this->___buffer;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_4 = L_11;
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_12 = __this->___buffer;
		int32_t L_13 = V_3;
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_14 = __this->___buffer;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE)L_17);
		ForwardRecordU5BU5D_t33BF3FA3ED1F5BDE5FC0378444AF6C68059CD50F* L_18 = __this->___buffer;
		int32_t L_19 = V_3;
		ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE L_20 = V_4;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_19, 1))), (ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE)L_20);
		V_2 = (bool)1;
		goto IL_0081;
	}

IL_0074:
	{
		bool L_21 = V_2;
		if (L_21)
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_22 = V_3;
		if (!L_22)
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_23 = V_3;
		G_B8_0 = ((int32_t)il2cpp_codegen_subtract(L_23, 1));
		goto IL_0080;
	}

IL_007f:
	{
		G_B8_0 = 0;
	}

IL_0080:
	{
		V_0 = G_B8_0;
	}

IL_0081:
	{
		int32_t L_24 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0085:
	{
		int32_t L_25 = V_3;
		int32_t L_26 = V_1;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0015;
		}
	}

IL_0089:
	{
		bool L_27 = V_2;
		if (L_27)
		{
			goto IL_000f;
		}
	}
	{
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m53FA8F78AAA02EBC08ADAA4BBAEB24E1AC5988C5_gshared (List_1_t69D8D3C7171DF1D421BEF5D2DE46252146F5D635* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m1954ABDA7F7DDE4A4759B8FD5AB755F7967DA6A8_gshared (List_1_t69D8D3C7171DF1D421BEF5D2DE46252146F5D635* __this, int32_t ___0_size, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_size;
		List_1_Allocate_m0549ACAFD4E59190F4729D5DA1C6F34ECC98B7B9(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_GetEnumerator_mD826D82545A34DF64B08E3574BB1F3A84C1B8AE4_gshared (List_1_t69D8D3C7171DF1D421BEF5D2DE46252146F5D635* __this, const RuntimeMethod* method) 
{
	{
		U3CGetEnumeratorU3Ed__4_t6160427C0B6E30E3ECAB15E821DDDD716768AF43* L_0 = (U3CGetEnumeratorU3Ed__4_t6160427C0B6E30E3ECAB15E821DDDD716768AF43*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		U3CGetEnumeratorU3Ed__4__ctor_m842B22AB193FA3790FD3E241499BA6AC9D037223(L_0, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		U3CGetEnumeratorU3Ed__4_t6160427C0B6E30E3ECAB15E821DDDD716768AF43* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02 List_1_get_Item_mCC7E021504D5398BCC9C75FC7293792F5786B989_gshared (List_1_t69D8D3C7171DF1D421BEF5D2DE46252146F5D635* __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	{
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_0 = __this->___buffer;
		int32_t L_1 = ___0_i;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02 L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_mCB3B979E961CC611A0690B7CD4D59D07054540F6_gshared (List_1_t69D8D3C7171DF1D421BEF5D2DE46252146F5D635* __this, int32_t ___0_i, InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02 ___1_value, const RuntimeMethod* method) 
{
	{
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_0 = __this->___buffer;
		int32_t L_1 = ___0_i;
		InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02 L_2 = ___1_value;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m6E5F79AA8EA7872CC5B566051B681E2428B350D9_gshared (List_1_t69D8D3C7171DF1D421BEF5D2DE46252146F5D635* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_Get_mFD7ED8E01BE17357A274BB9FAC435066535CC09E_gshared (List_1_t69D8D3C7171DF1D421BEF5D2DE46252146F5D635* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_0 = __this->___buffer;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02 L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02 L_4 = L_3;
		RuntimeObject* L_5 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6), &L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Allocate_m0549ACAFD4E59190F4729D5DA1C6F34ECC98B7B9_gshared (List_1_t69D8D3C7171DF1D421BEF5D2DE46252146F5D635* __this, int32_t ___0_newSize, const RuntimeMethod* method) 
{
	InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* V_0 = NULL;
	{
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_1 = __this->___buffer;
		NullCheck(L_1);
		int32_t L_2 = ___0_newSize;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))) >= ((int32_t)L_2)))
		{
			goto IL_003f;
		}
	}

IL_0013:
	{
		int32_t L_3 = ___0_newSize;
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_4 = (InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC*)(InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 7), (uint32_t)L_3);
		V_0 = L_4;
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_5 = __this->___buffer;
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_6 = __this->___size;
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_7 = __this->___buffer;
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_8 = V_0;
		NullCheck((RuntimeArray*)L_7);
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_7, (RuntimeArray*)L_8, 0, NULL);
	}

IL_0038:
	{
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_9 = V_0;
		__this->___buffer = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)L_9);
	}

IL_003f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AllocateMore_m3F826679E2F012FB2FFCA11E8C9DAD402930DEF1_gshared (List_1_t69D8D3C7171DF1D421BEF5D2DE46252146F5D635* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* V_1 = NULL;
	int32_t G_B3_0 = 0;
	{
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_1 = __this->___buffer;
		NullCheck(L_1);
		G_B3_0 = ((int32_t)(((int32_t)(((RuntimeArray*)L_1)->max_length))<<1));
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 0;
	}

IL_0015:
	{
		V_0 = G_B3_0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)32))))
		{
			goto IL_001e;
		}
	}
	{
		V_0 = ((int32_t)32);
	}

IL_001e:
	{
		int32_t L_3 = V_0;
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_4 = (InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC*)(InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 7), (uint32_t)L_3);
		V_1 = L_4;
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_5 = __this->___buffer;
		if (!L_5)
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_6 = __this->___size;
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0043;
		}
	}
	{
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_7 = __this->___buffer;
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_8 = V_1;
		NullCheck((RuntimeArray*)L_7);
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_7, (RuntimeArray*)L_8, 0, NULL);
	}

IL_0043:
	{
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_9 = V_1;
		__this->___buffer = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)L_9);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Resize_m65927079DE8D0957D4E1768BBFB6B45B7E0CB44E_gshared (List_1_t69D8D3C7171DF1D421BEF5D2DE46252146F5D635* __this, int32_t ___0_newSize, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___size;
		int32_t L_1 = ___0_newSize;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0032;
		}
	}
	{
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_2 = __this->___buffer;
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_3 = ___0_newSize;
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_4 = (InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC*)(InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 7), (uint32_t)L_3);
		__this->___buffer = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)L_4);
		goto IL_002b;
	}

IL_001f:
	{
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC** L_5 = (InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC**)(&__this->___buffer);
		int32_t L_6 = ___0_newSize;
		Array_Resize_TisInfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02_m385BAA64494E45AAEF83EE34BF430EF798AF61F9(L_5, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
	}

IL_002b:
	{
		int32_t L_7 = ___0_newSize;
		__this->___size = L_7;
	}

IL_0032:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Trim_m772700FB8D603A6F5FD2DC9482214A59004658A0_gshared (List_1_t69D8D3C7171DF1D421BEF5D2DE46252146F5D635* __this, const RuntimeMethod* method) 
{
	InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->___size;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_1 = __this->___size;
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_2 = __this->___buffer;
		NullCheck(L_2);
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))
		{
			goto IL_005d;
		}
	}
	{
		int32_t L_3 = __this->___size;
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_4 = (InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC*)(InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 7), (uint32_t)L_3);
		V_0 = L_4;
		V_1 = 0;
		goto IL_0040;
	}

IL_0029:
	{
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_5 = V_0;
		int32_t L_6 = V_1;
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_7 = __this->___buffer;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02 L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02)L_10);
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0040:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = __this->___size;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0029;
		}
	}
	{
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_14 = V_0;
		__this->___buffer = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)L_14);
		return;
	}

IL_0051:
	{
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_15 = (InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC*)(InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 7), (uint32_t)0);
		__this->___buffer = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)L_15);
	}

IL_005d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mD702F80A2B6C1DA9F1562D8110D23A90CEB21E77_gshared (List_1_t69D8D3C7171DF1D421BEF5D2DE46252146F5D635* __this, const RuntimeMethod* method) 
{
	{
		__this->___size = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mE74386159120F278DFF1DC976A105CAD0056B070_gshared (List_1_t69D8D3C7171DF1D421BEF5D2DE46252146F5D635* __this, int32_t ___0_allocateSize, const RuntimeMethod* method) 
{
	{
		__this->___size = 0;
		int32_t L_0 = ___0_allocateSize;
		List_1_Allocate_m0549ACAFD4E59190F4729D5DA1C6F34ECC98B7B9(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Release_m817EB99AA5F606426F71756C088E498B109BDEDE_gshared (List_1_t69D8D3C7171DF1D421BEF5D2DE46252146F5D635* __this, const RuntimeMethod* method) 
{
	{
		__this->___size = 0;
		__this->___buffer = (InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer), (void*)(InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_Expand_mD3FD08516F9B47CDF18F017FB2C50D9140D4314A_gshared (List_1_t69D8D3C7171DF1D421BEF5D2DE46252146F5D635* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->___size;
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_2 = __this->___buffer;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_001e;
		}
	}

IL_0018:
	{
		List_1_AllocateMore_m3F826679E2F012FB2FFCA11E8C9DAD402930DEF1(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001e:
	{
		int32_t L_3 = __this->___size;
		V_0 = L_3;
		int32_t L_4 = V_0;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_4, 1));
		int32_t L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_Expand_mA31A582A55CD5595A49B5B0D9A2D36A579B1BE2C_gshared (List_1_t69D8D3C7171DF1D421BEF5D2DE46252146F5D635* __this, int32_t ___0_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = __this->___size;
		int32_t L_1 = __this->___size;
		int32_t L_2 = ___0_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_3 = __this->___buffer;
		if (!L_3)
		{
			G_B2_0 = L_0;
			goto IL_0029;
		}
		G_B1_0 = L_0;
	}
	{
		int32_t L_4 = __this->___size;
		int32_t L_5 = V_0;
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_6 = __this->___buffer;
		NullCheck(L_6);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_4, L_5))) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			G_B3_0 = G_B1_0;
			goto IL_0037;
		}
		G_B2_0 = G_B1_0;
	}

IL_0029:
	{
		int32_t L_7 = __this->___size;
		int32_t L_8 = V_0;
		List_1_Allocate_m0549ACAFD4E59190F4729D5DA1C6F34ECC98B7B9(__this, ((int32_t)il2cpp_codegen_add(L_7, L_8)), il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		G_B3_0 = G_B2_0;
	}

IL_0037:
	{
		int32_t L_9 = __this->___size;
		int32_t L_10 = ___0_count;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_9, L_10));
		return G_B3_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m52745FC2D4B45E4025D733A4F0E784CE31013992_gshared (List_1_t69D8D3C7171DF1D421BEF5D2DE46252146F5D635* __this, InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02 ___0_item, const RuntimeMethod* method) 
{
	{
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->___size;
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_2 = __this->___buffer;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_001e;
		}
	}

IL_0018:
	{
		List_1_AllocateMore_m3F826679E2F012FB2FFCA11E8C9DAD402930DEF1(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001e:
	{
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_3 = __this->___buffer;
		int32_t L_4 = __this->___size;
		InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02 L_5 = ___0_item;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02)L_5);
		int32_t L_6 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m08A83E2CA1D11C32ACEABE36CC0C1C6E4464CFD1_gshared (List_1_t69D8D3C7171DF1D421BEF5D2DE46252146F5D635* __this, InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* ___0_items, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___size;
		int32_t L_1 = ___2_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_2 = __this->___buffer;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_3 = __this->___size;
		int32_t L_4 = V_0;
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_5 = __this->___buffer;
		NullCheck(L_5);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_3, L_4))) < ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))))
		{
			goto IL_0031;
		}
	}

IL_0023:
	{
		int32_t L_6 = __this->___size;
		int32_t L_7 = V_0;
		List_1_Allocate_m0549ACAFD4E59190F4729D5DA1C6F34ECC98B7B9(__this, ((int32_t)il2cpp_codegen_add(L_6, L_7)), il2cpp_rgctx_method(method->klass->rgctx_data, 0));
	}

IL_0031:
	{
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_8 = ___0_items;
		int32_t L_9 = ___1_offset;
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_10 = __this->___buffer;
		int32_t L_11 = __this->___size;
		int32_t L_12 = ___2_count;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, L_9, (RuntimeArray*)L_10, L_11, L_12, NULL);
		int32_t L_13 = __this->___size;
		int32_t L_14 = ___2_count;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_13, L_14));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m1B6B2E2F1F6A8E2613BE9FF1248FE2C1AFF90B3D_gshared (List_1_t69D8D3C7171DF1D421BEF5D2DE46252146F5D635* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->___size;
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_2 = __this->___buffer;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_001e;
		}
	}

IL_0018:
	{
		List_1_AllocateMore_m3F826679E2F012FB2FFCA11E8C9DAD402930DEF1(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001e:
	{
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_3 = __this->___buffer;
		int32_t L_4 = __this->___size;
		RuntimeObject* L_5 = ___0_item;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02)((*(InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02*)((InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02*)(InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02*)UnBox(L_5, il2cpp_rgctx_data(method->klass->rgctx_data, 6))))));
		int32_t L_6 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Add_m3B1695AC00750B989FCE77A08245471BE3C99693_gshared (List_1_t69D8D3C7171DF1D421BEF5D2DE46252146F5D635* __this, InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02 ___0_item, bool ___1_unique, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___1_unique;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02 L_1 = ___0_item;
		bool L_2;
		L_2 = List_1_Contains_mB78521A24BEF47E8291761514BD2D1F8FE5067F5(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		return (bool)0;
	}

IL_000e:
	{
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_3 = __this->___buffer;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_4 = __this->___size;
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_5 = __this->___buffer;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_002c;
		}
	}

IL_0026:
	{
		List_1_AllocateMore_m3F826679E2F012FB2FFCA11E8C9DAD402930DEF1(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_002c:
	{
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_6 = __this->___buffer;
		int32_t L_7 = __this->___size;
		InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02 L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02)L_8);
		int32_t L_9 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Add_mFF3DD2F2F973447ACF5A3839FB8BAF643411CCE5_gshared (List_1_t69D8D3C7171DF1D421BEF5D2DE46252146F5D635* __this, RuntimeObject* ___0_item, bool ___1_unique, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___1_unique;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = ___0_item;
		bool L_2;
		L_2 = List_1_Contains_mB78521A24BEF47E8291761514BD2D1F8FE5067F5(__this, ((*(InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02*)((InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02*)(InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 6))))), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_3 = __this->___buffer;
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_4 = __this->___size;
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_5 = __this->___buffer;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0031;
		}
	}

IL_002b:
	{
		List_1_AllocateMore_m3F826679E2F012FB2FFCA11E8C9DAD402930DEF1(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_0031:
	{
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_6 = __this->___buffer;
		int32_t L_7 = __this->___size;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02)((*(InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02*)((InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02*)(InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02*)UnBox(L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 6))))));
		int32_t L_9 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m52673523E0EF1F4AF6FE4D37CA33E2B0C770939C_gshared (List_1_t69D8D3C7171DF1D421BEF5D2DE46252146F5D635* __this, int32_t ___0_index, InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02 ___1_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->___size;
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_2 = __this->___buffer;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_001e;
		}
	}

IL_0018:
	{
		List_1_AllocateMore_m3F826679E2F012FB2FFCA11E8C9DAD402930DEF1(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001e:
	{
		int32_t L_3 = ___0_index;
		if ((((int32_t)L_3) <= ((int32_t)(-1))))
		{
			goto IL_0072;
		}
	}
	{
		int32_t L_4 = ___0_index;
		int32_t L_5 = __this->___size;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0072;
		}
	}
	{
		int32_t L_6 = __this->___size;
		V_0 = L_6;
		goto IL_0052;
	}

IL_0034:
	{
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_7 = __this->___buffer;
		int32_t L_8 = V_0;
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_9 = __this->___buffer;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02 L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02)L_12);
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
	}

IL_0052:
	{
		int32_t L_14 = V_0;
		int32_t L_15 = ___0_index;
		if ((((int32_t)L_14) > ((int32_t)L_15)))
		{
			goto IL_0034;
		}
	}
	{
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_16 = __this->___buffer;
		int32_t L_17 = ___0_index;
		InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02 L_18 = ___1_item;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02)L_18);
		int32_t L_19 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_add(L_19, 1));
		return;
	}

IL_0072:
	{
		InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02 L_20 = ___1_item;
		List_1_Add_m52745FC2D4B45E4025D733A4F0E784CE31013992(__this, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mB78521A24BEF47E8291761514BD2D1F8FE5067F5_gshared (List_1_t69D8D3C7171DF1D421BEF5D2DE46252146F5D635* __this, InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_0 = __this->___buffer;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		V_0 = 0;
		goto IL_0048;
	}

IL_000e:
	{
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_1 = __this->___buffer;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
	}
	{
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_5 = __this->___buffer;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02 L_7 = ___0_item;
		InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02 L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6), &L_8);
		Il2CppFakeBox<InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02> L_10(il2cpp_rgctx_data(method->klass->rgctx_data, 6), ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6))));
		bool L_11;
		L_11 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_10), L_9, NULL);
		if (!L_11)
		{
			goto IL_0044;
		}
	}
	{
		return (bool)1;
	}

IL_0044:
	{
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0048:
	{
		int32_t L_13 = V_0;
		int32_t L_14 = __this->___size;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_000e;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_mA605858C63CE5A1E6D29D9AB228B522ED3113997_gshared (List_1_t69D8D3C7171DF1D421BEF5D2DE46252146F5D635* __this, InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_0 = __this->___buffer;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (-1);
	}

IL_000a:
	{
		V_0 = 0;
		goto IL_0048;
	}

IL_000e:
	{
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_1 = __this->___buffer;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
	}
	{
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_5 = __this->___buffer;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02 L_7 = ___0_item;
		InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02 L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6), &L_8);
		Il2CppFakeBox<InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02> L_10(il2cpp_rgctx_data(method->klass->rgctx_data, 6), ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6))));
		bool L_11;
		L_11 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_10), L_9, NULL);
		if (!L_11)
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_12 = V_0;
		return L_12;
	}

IL_0044:
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0048:
	{
		int32_t L_14 = V_0;
		int32_t L_15 = __this->___size;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_000e;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DD2F97F93F008167088D42370E2A9D4EC981BD4_gshared (List_1_t69D8D3C7171DF1D421BEF5D2DE46252146F5D635* __this, InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02 ___0_item, const RuntimeMethod* method) 
{
	EqualityComparer_1_t805E284DD3F2CCD17BEBA28DD909A248D9FD6B84* V_0 = NULL;
	int32_t V_1 = 0;
	{
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_006e;
		}
	}
	{
		EqualityComparer_1_t805E284DD3F2CCD17BEBA28DD909A248D9FD6B84* L_1;
		L_1 = EqualityComparer_1_get_Default_m8256B84332556772E273C474F78F2445ACFCC32F_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		V_0 = L_1;
		V_1 = 0;
		goto IL_0065;
	}

IL_0012:
	{
		EqualityComparer_1_t805E284DD3F2CCD17BEBA28DD909A248D9FD6B84* L_2 = V_0;
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_3 = __this->___buffer;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02 L_7 = ___0_item;
		NullCheck(L_2);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02, InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02 >::Invoke(8, L_2, L_6, L_7);
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10 = __this->___size;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_9, 1))) >= ((int32_t)L_10)))
		{
			goto IL_0051;
		}
	}
	{
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_11 = __this->___buffer;
		int32_t L_12 = V_1;
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_13 = __this->___buffer;
		int32_t L_14 = V_1;
		int32_t L_15 = __this->___size;
		int32_t L_16 = V_1;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, 1)), (RuntimeArray*)L_13, L_14, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_15, L_16)), 1)), NULL);
	}

IL_0051:
	{
		int32_t L_17 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
		return (bool)1;
	}

IL_0061:
	{
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0065:
	{
		int32_t L_19 = V_1;
		int32_t L_20 = __this->___size;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0012;
		}
	}

IL_006e:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mB2E9A4F941E7FC1D6A7D32BC0174F1FC2452EA70_gshared (List_1_t69D8D3C7171DF1D421BEF5D2DE46252146F5D635* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_1 = ___0_index;
		if ((((int32_t)L_1) <= ((int32_t)(-1))))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_2 = ___0_index;
		int32_t L_3 = __this->___size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_4 = ___0_index;
		int32_t L_5 = __this->___size;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_4, 1))) >= ((int32_t)L_5)))
		{
			goto IL_003f;
		}
	}
	{
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_6 = __this->___buffer;
		int32_t L_7 = ___0_index;
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_8 = __this->___buffer;
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->___size;
		int32_t L_11 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, ((int32_t)il2cpp_codegen_add(L_7, 1)), (RuntimeArray*)L_8, L_9, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_10, L_11)), 1)), NULL);
	}

IL_003f:
	{
		int32_t L_12 = __this->___size;
		__this->___size = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
	}

IL_004d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m2F454A10BF60B44365D4752426C9578A5638F80D_gshared (List_1_t69D8D3C7171DF1D421BEF5D2DE46252146F5D635* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = ___1_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		int32_t L_2 = V_0;
		int32_t L_3 = __this->___size;
		if ((((int32_t)L_2) <= ((int32_t)L_3)))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_4 = __this->___size;
		V_0 = L_4;
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_index;
		___1_count = ((int32_t)il2cpp_codegen_subtract(L_5, L_6));
	}

IL_0019:
	{
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_7 = __this->___buffer;
		if (!L_7)
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_8 = ___0_index;
		if ((((int32_t)L_8) <= ((int32_t)(-1))))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->___size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_11 = ___0_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) >= ((int32_t)L_12)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_13 = V_0;
		int32_t L_14 = __this->___size;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_13, 1))) >= ((int32_t)L_14)))
		{
			goto IL_0058;
		}
	}
	{
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_15 = __this->___buffer;
		int32_t L_16 = V_0;
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_17 = __this->___buffer;
		int32_t L_18 = ___0_index;
		int32_t L_19 = __this->___size;
		int32_t L_20 = V_0;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, L_16, (RuntimeArray*)L_17, L_18, ((int32_t)il2cpp_codegen_subtract(L_19, L_20)), NULL);
	}

IL_0058:
	{
		int32_t L_21 = __this->___size;
		int32_t L_22 = ___1_count;
		__this->___size = ((int32_t)il2cpp_codegen_subtract(L_21, L_22));
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02 List_1_Pop_m5DB52698E7D9DE5678EAB7CD81290B602BEBB896_gshared (List_1_t69D8D3C7171DF1D421BEF5D2DE46252146F5D635* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_0 = __this->___buffer;
		if (!L_0)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_1 = __this->___size;
		if (!L_1)
		{
			goto IL_0047;
		}
	}
	{
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_2 = __this->___buffer;
		int32_t L_3 = __this->___size;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		int32_t L_4 = V_0;
		__this->___size = L_4;
		int32_t L_5 = V_0;
		NullCheck(L_2);
		int32_t L_6 = L_5;
		InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02 L_7 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_8 = __this->___buffer;
		int32_t L_9 = __this->___size;
		il2cpp_codegen_initobj((&V_1), sizeof(InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02));
		InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02 L_10 = V_1;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02)L_10);
		return L_7;
	}

IL_0047:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02));
		InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02 L_11 = V_1;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* List_1_ToArray_mA7C4AEC86D0C83C75ED5FFF9FE2C9A535BF92F5B_gshared (List_1_t69D8D3C7171DF1D421BEF5D2DE46252146F5D635* __this, const RuntimeMethod* method) 
{
	{
		List_1_Trim_m772700FB8D603A6F5FD2DC9482214A59004658A0(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_0 = __this->___buffer;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mB4F08EE33815CDB6F3E81871A527D3EC93CC4F67_gshared (List_1_t69D8D3C7171DF1D421BEF5D2DE46252146F5D635* __this, CompareFunc_tA3EC9E99EAAA5F3D786D261BBF941729E7267E9D* ___0_comparer, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02 V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t G_B8_0 = 0;
	{
		V_0 = 0;
		int32_t L_0 = __this->___size;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		V_2 = (bool)1;
		goto IL_0089;
	}

IL_000f:
	{
		V_2 = (bool)0;
		int32_t L_1 = V_0;
		V_3 = L_1;
		goto IL_0085;
	}

IL_0015:
	{
		CompareFunc_tA3EC9E99EAAA5F3D786D261BBF941729E7267E9D* L_2 = ___0_comparer;
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_3 = __this->___buffer;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_7 = __this->___buffer;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02 L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_2);
		int32_t L_11;
		L_11 = CompareFunc_Invoke_m90C6E3D740EE9EED634EF9FB0BA59320CF09B38E_inline(L_2, L_6, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		if ((((int32_t)L_11) <= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_12 = __this->___buffer;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02 L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_4 = L_15;
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_16 = __this->___buffer;
		int32_t L_17 = V_3;
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_18 = __this->___buffer;
		int32_t L_19 = V_3;
		NullCheck(L_18);
		int32_t L_20 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02 L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02)L_21);
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_22 = __this->___buffer;
		int32_t L_23 = V_3;
		InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02 L_24 = V_4;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_23, 1))), (InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02)L_24);
		V_2 = (bool)1;
		goto IL_0081;
	}

IL_0074:
	{
		bool L_25 = V_2;
		if (L_25)
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_26 = V_3;
		if (!L_26)
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_27 = V_3;
		G_B8_0 = ((int32_t)il2cpp_codegen_subtract(L_27, 1));
		goto IL_0080;
	}

IL_007f:
	{
		G_B8_0 = 0;
	}

IL_0080:
	{
		V_0 = G_B8_0;
	}

IL_0081:
	{
		int32_t L_28 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0085:
	{
		int32_t L_29 = V_3;
		int32_t L_30 = V_1;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_0015;
		}
	}

IL_0089:
	{
		bool L_31 = V_2;
		if (L_31)
		{
			goto IL_000f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m45C21C3808694B15E0579E6E0AD1E6C0DA64EC08_gshared (List_1_t69D8D3C7171DF1D421BEF5D2DE46252146F5D635* __this, CompareFunc2_t9ACC862BD3A9584B4536B0660202D64073158D5D* ___0_comparer, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02 V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t G_B8_0 = 0;
	{
		V_0 = 0;
		int32_t L_0 = __this->___size;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		V_2 = (bool)1;
		goto IL_0089;
	}

IL_000f:
	{
		V_2 = (bool)0;
		int32_t L_1 = V_0;
		V_3 = L_1;
		goto IL_0085;
	}

IL_0015:
	{
		CompareFunc2_t9ACC862BD3A9584B4536B0660202D64073158D5D* L_2 = ___0_comparer;
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_3 = __this->___buffer;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_5 = __this->___buffer;
		int32_t L_6 = V_3;
		NullCheck(L_5);
		NullCheck(L_2);
		int32_t L_7;
		L_7 = CompareFunc2_Invoke_mDBB7953373F755CF981DD4C012B2E4B1525BFAD5_inline(L_2, ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4))), ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_6, 1))))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_8 = __this->___buffer;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02 L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_4 = L_11;
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_12 = __this->___buffer;
		int32_t L_13 = V_3;
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_14 = __this->___buffer;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02 L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02)L_17);
		InfrequentEntryU5BU5D_tEA64FA31DC91C002745716C3B39B59DC9E02CDEC* L_18 = __this->___buffer;
		int32_t L_19 = V_3;
		InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02 L_20 = V_4;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_19, 1))), (InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02)L_20);
		V_2 = (bool)1;
		goto IL_0081;
	}

IL_0074:
	{
		bool L_21 = V_2;
		if (L_21)
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_22 = V_3;
		if (!L_22)
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_23 = V_3;
		G_B8_0 = ((int32_t)il2cpp_codegen_subtract(L_23, 1));
		goto IL_0080;
	}

IL_007f:
	{
		G_B8_0 = 0;
	}

IL_0080:
	{
		V_0 = G_B8_0;
	}

IL_0081:
	{
		int32_t L_24 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0085:
	{
		int32_t L_25 = V_3;
		int32_t L_26 = V_1;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0015;
		}
	}

IL_0089:
	{
		bool L_27 = V_2;
		if (L_27)
		{
			goto IL_000f;
		}
	}
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m1E1C5CCE0C3064A654574163DC7C4CBBA7AC3DB8_gshared_inline (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C ___0_item, const RuntimeMethod* method) 
{
	EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		EntryU5BU5D_t3E7EF4734E92E0174666D228D83578F0116C00EA* L_6 = V_0;
		int32_t L_7 = V_1;
		Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C)L_8);
		return;
	}

IL_0034:
	{
		Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C L_9 = ___0_item;
		List_1_AddWithResize_mA0C4AB6BF0EB80C858EAF3F8D18FCD76C7AAC396(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mCE791BD866BF0868DB63FCECFF18CB64098637CB_gshared_inline (List_1_t002562281B6798CDCF0267381EF8CB414A349636* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m621503A57A4F629CFF8121C79F25B33B10F4743F_gshared_inline (Predicate_1_tBB24C088B9F2C5E92B897C474555BEF1749C9053* __this, Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m2C81B638625FF680761E584028BDE4A1FEFE0506_gshared_inline (Action_1_t19E6855A63C89A1C9C091E8D2BBBD2C5F47FF2D3* __this, Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Entry_t7F87ADA8CA01CBABFC24BD2CB3D52F41F968381C, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t7DBAE97102605775DB56BD3370D361BBD64DE5D5* EqualityComparer_1_get_Default_mADDE59D704337E529616736474432A412BF9946C_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t7DBAE97102605775DB56BD3370D361BBD64DE5D5* V_0 = NULL;
	{
		EqualityComparer_1_t7DBAE97102605775DB56BD3370D361BBD64DE5D5* L_0 = ((EqualityComparer_1_t7DBAE97102605775DB56BD3370D361BBD64DE5D5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t7DBAE97102605775DB56BD3370D361BBD64DE5D5* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t7DBAE97102605775DB56BD3370D361BBD64DE5D5* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mBE6149034713FA43B08655B274FF98AC7056B018(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t7DBAE97102605775DB56BD3370D361BBD64DE5D5* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t7DBAE97102605775DB56BD3370D361BBD64DE5D5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t7DBAE97102605775DB56BD3370D361BBD64DE5D5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t7DBAE97102605775DB56BD3370D361BBD64DE5D5* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CompareFunc_Invoke_m1364B63389088E237069575A65370C42D24D6050_gshared_inline (CompareFunc_t206BA89222C56EFDFEE5F338F89010A899541F98* __this, Datagram_tD135488AC89022CF443533716C9E0751E55B84CA ___0_left, Datagram_tD135488AC89022CF443533716C9E0751E55B84CA ___1_right, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, Datagram_tD135488AC89022CF443533716C9E0751E55B84CA, Datagram_tD135488AC89022CF443533716C9E0751E55B84CA, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_left, ___1_right, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CompareFunc2_Invoke_m19F8BA2B4D040F7E75D631C269C7CA4E4576E13D_gshared_inline (CompareFunc2_t98BAE01C5CA178163530C2F03590C69F6FE332C4* __this, Datagram_tD135488AC89022CF443533716C9E0751E55B84CA* ___0_left, Datagram_tD135488AC89022CF443533716C9E0751E55B84CA* ___1_right, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, Datagram_tD135488AC89022CF443533716C9E0751E55B84CA*, Datagram_tD135488AC89022CF443533716C9E0751E55B84CA*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_left, ___1_right, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_0 = NULL;
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_0 = ((EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CompareFunc_Invoke_mF6F08E54B282667D5702560D05C662821E3F8620_gshared_inline (CompareFunc_tC2B7EDBB83306D2599B2D16F41737BC8D902A8D2* __this, int32_t ___0_left, int32_t ___1_right, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, int32_t, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_left, ___1_right, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CompareFunc2_Invoke_m5A7EB4B6126FEA1B206EF583C39A60AE73972F54_gshared_inline (CompareFunc2_tC86C57C64D916CAEE553EA7A2A1985D43A64A750* __this, int32_t* ___0_left, int32_t* ___1_right, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, int32_t*, int32_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_left, ___1_right, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_0 = NULL;
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_0 = ((EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CompareFunc_Invoke_mDF62819E35773C1822470C9685C6D29ACDD5D375_gshared_inline (CompareFunc_t4B02430CDF25A791E686F7C6A3039E596D79E8A2* __this, RuntimeObject* ___0_left, RuntimeObject* ___1_right, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_left, ___1_right, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CompareFunc2_Invoke_m2A17CFF0028FC57CAD9E6D2820F451F830B5FD02_gshared_inline (CompareFunc2_t792F53EE6953C55FF25C3F5DEEDFBE2786EE35DD* __this, RuntimeObject** ___0_left, RuntimeObject** ___1_right, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, RuntimeObject**, RuntimeObject**, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_left, ___1_right, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* EqualityComparer_1_get_Default_mF554877B669658FD6449F84AE369214855D0BC40_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* V_0 = NULL;
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_0 = ((EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m64D3D774E7DAF5FC0206DC26D9BA53BF70F1F93B(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CompareFunc_Invoke_mA91B35EEC7ED42BB081904FCAEA385DCA4CC6AAA_gshared_inline (CompareFunc_t2AD4AA166CD7D5B8FBF45B10A9D1C4635808B9D3* __this, uint32_t ___0_left, uint32_t ___1_right, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint32_t, uint32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_left, ___1_right, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CompareFunc2_Invoke_m4DE6E51E303B1C96ED4C6688DC89954B15B8788F_gshared_inline (CompareFunc2_tB4C43ED6E3359E93460DBA47880EF512D1FB295D* __this, uint32_t* ___0_left, uint32_t* ___1_right, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint32_t*, uint32_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_left, ___1_right, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tDC51C19B76F007D508C2E2D7CF5399F1E0C69443* EqualityComparer_1_get_Default_m4999C45387F95BE585FECA004680BAF261846DBB_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tDC51C19B76F007D508C2E2D7CF5399F1E0C69443* V_0 = NULL;
	{
		EqualityComparer_1_tDC51C19B76F007D508C2E2D7CF5399F1E0C69443* L_0 = ((EqualityComparer_1_tDC51C19B76F007D508C2E2D7CF5399F1E0C69443_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tDC51C19B76F007D508C2E2D7CF5399F1E0C69443* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tDC51C19B76F007D508C2E2D7CF5399F1E0C69443* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m09577CB02289F305FEF41DD7EECD6E07BD166DD4(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tDC51C19B76F007D508C2E2D7CF5399F1E0C69443* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tDC51C19B76F007D508C2E2D7CF5399F1E0C69443_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tDC51C19B76F007D508C2E2D7CF5399F1E0C69443_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tDC51C19B76F007D508C2E2D7CF5399F1E0C69443* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CompareFunc_Invoke_mC718903902546A9ED1B1B2E06AD20B88CE645202_gshared_inline (CompareFunc_t76EB0BBD466A89D78E7675FEACB717FB074BB89B* __this, CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C ___0_left, CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C ___1_right, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C, CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_left, ___1_right, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CompareFunc2_Invoke_m2F9F3C6F9A9719E132581007CC78C9134F4A2CF4_gshared_inline (CompareFunc2_tFEA3BB11B8D5CFD15B1B8038FF0C8C89230C2036* __this, CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C* ___0_left, CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C* ___1_right, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C*, CreatedObject_t435E4E411837001C765210CB4C453ECC0C320A1C*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_left, ___1_right, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t3D60CA8A640E0FE68A2A24EF9B9A2F530ED94537* EqualityComparer_1_get_Default_mBDC223572228738F1141303BE04A30F3F9C80E00_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t3D60CA8A640E0FE68A2A24EF9B9A2F530ED94537* V_0 = NULL;
	{
		EqualityComparer_1_t3D60CA8A640E0FE68A2A24EF9B9A2F530ED94537* L_0 = ((EqualityComparer_1_t3D60CA8A640E0FE68A2A24EF9B9A2F530ED94537_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t3D60CA8A640E0FE68A2A24EF9B9A2F530ED94537* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t3D60CA8A640E0FE68A2A24EF9B9A2F530ED94537* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m1CD860E480E2F8CCCB452AAD78D8BC4EE41DD014(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t3D60CA8A640E0FE68A2A24EF9B9A2F530ED94537* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t3D60CA8A640E0FE68A2A24EF9B9A2F530ED94537_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t3D60CA8A640E0FE68A2A24EF9B9A2F530ED94537_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t3D60CA8A640E0FE68A2A24EF9B9A2F530ED94537* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CompareFunc_Invoke_m11FC03C47C5266EE2CF5A04B4B4CCB88FE426CBD_gshared_inline (CompareFunc_t206ED15B484D41AE9042019C27F884344B255783* __this, ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159 ___0_left, ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159 ___1_right, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159, ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_left, ___1_right, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CompareFunc2_Invoke_m3DA56544470A1EBE123C6801AC1CB3CC43B46105_gshared_inline (CompareFunc2_tC9F227180BCA310DAF62751E1DEA1A7C4CCDEDEC* __this, ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159* ___0_left, ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159* ___1_right, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159*, ForwardRecord_t4C278425B2A76B2E808E014AF0C198DEA28A8159*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_left, ___1_right, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t951752AEC554D078FD5BA75860AB4914942AE117* EqualityComparer_1_get_Default_m04CF7FE794A864F889D6D885B53D7CB2727A3DE9_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t951752AEC554D078FD5BA75860AB4914942AE117* V_0 = NULL;
	{
		EqualityComparer_1_t951752AEC554D078FD5BA75860AB4914942AE117* L_0 = ((EqualityComparer_1_t951752AEC554D078FD5BA75860AB4914942AE117_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t951752AEC554D078FD5BA75860AB4914942AE117* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t951752AEC554D078FD5BA75860AB4914942AE117* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m68AA4AE2AFD9E233E70F81E79D056981E7FA6BF6(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t951752AEC554D078FD5BA75860AB4914942AE117* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t951752AEC554D078FD5BA75860AB4914942AE117_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t951752AEC554D078FD5BA75860AB4914942AE117_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t951752AEC554D078FD5BA75860AB4914942AE117* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CompareFunc_Invoke_mCD0B31AC9FE8243977C5B4C5E66E1A624F79E0CC_gshared_inline (CompareFunc_t58FEF253929D82FB283FED18BD6AD3795FDC733E* __this, Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606 ___0_left, Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606 ___1_right, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606, Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_left, ___1_right, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CompareFunc2_Invoke_m35615375F9CF98877A316454F5BB666A97EEFEFA_gshared_inline (CompareFunc2_tD8F814976ED84C2D515E08B134C6B7762BB4A237* __this, Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606* ___0_left, Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606* ___1_right, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606*, Info_t44CC3C8A15C01ED6865494E4962A609C4FDD5606*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_left, ___1_right, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t0D37AAA596A74C6F5F0AE68651E5B18034373802* EqualityComparer_1_get_Default_mD91779D28B1869320CE14644046CC4EB8E336E30_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t0D37AAA596A74C6F5F0AE68651E5B18034373802* V_0 = NULL;
	{
		EqualityComparer_1_t0D37AAA596A74C6F5F0AE68651E5B18034373802* L_0 = ((EqualityComparer_1_t0D37AAA596A74C6F5F0AE68651E5B18034373802_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t0D37AAA596A74C6F5F0AE68651E5B18034373802* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t0D37AAA596A74C6F5F0AE68651E5B18034373802* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mB6696671F3260CA1E6785AC99C876753F438026E(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t0D37AAA596A74C6F5F0AE68651E5B18034373802* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t0D37AAA596A74C6F5F0AE68651E5B18034373802_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t0D37AAA596A74C6F5F0AE68651E5B18034373802_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t0D37AAA596A74C6F5F0AE68651E5B18034373802* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CompareFunc_Invoke_m4B54AEFD15A1C7354BFDBE32926D513CB5BF80B3_gshared_inline (CompareFunc_tCD85A87B3459047F80416071B78FAD3D1804BC87* __this, RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF ___0_left, RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF ___1_right, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF, RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_left, ___1_right, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CompareFunc2_Invoke_m113D742BBB1DD0D33B713110079E744E2C52214D_gshared_inline (CompareFunc2_t45D9D5C19666400DD97BC848BE466970E20163EC* __this, RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF* ___0_left, RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF* ___1_right, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF*, RFC_t40E3BEA2FDCA78DA407EB94069B84B32239545DF*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_left, ___1_right, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t23B947F4B4052C9CE965A4087C48BEDA5F132E11* EqualityComparer_1_get_Default_m1F6BF9F9EAD31481277A75781DDB8E4F05818D5E_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t23B947F4B4052C9CE965A4087C48BEDA5F132E11* V_0 = NULL;
	{
		EqualityComparer_1_t23B947F4B4052C9CE965A4087C48BEDA5F132E11* L_0 = ((EqualityComparer_1_t23B947F4B4052C9CE965A4087C48BEDA5F132E11_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t23B947F4B4052C9CE965A4087C48BEDA5F132E11* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t23B947F4B4052C9CE965A4087C48BEDA5F132E11* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m8F32C25BAB52A896B94B95E595DC741349253918(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t23B947F4B4052C9CE965A4087C48BEDA5F132E11* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t23B947F4B4052C9CE965A4087C48BEDA5F132E11_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t23B947F4B4052C9CE965A4087C48BEDA5F132E11_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t23B947F4B4052C9CE965A4087C48BEDA5F132E11* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CompareFunc_Invoke_mC210317E3E1A1EA7DC945E081265A92D576AE458_gshared_inline (CompareFunc_t57BD15904CC04693A588AE2C9E2BCA414C67C19B* __this, SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114 ___0_left, SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114 ___1_right, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114, SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_left, ___1_right, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CompareFunc2_Invoke_mA5FD0F55AF25F59CBD75557D18200DB9D1459406_gshared_inline (CompareFunc2_t3089DA2331FB2FD299DD42786F063B229E0CD465* __this, SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114* ___0_left, SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114* ___1_right, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114*, SerializationEntry_tA126C8678FA110193D016190A99D0CA78C754114*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_left, ___1_right, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t922A0F6FFD989B570795F0DB5055CA31A625B1D6* EqualityComparer_1_get_Default_m13778FED77225F5505F75F08CD67D222DAB9F806_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t922A0F6FFD989B570795F0DB5055CA31A625B1D6* V_0 = NULL;
	{
		EqualityComparer_1_t922A0F6FFD989B570795F0DB5055CA31A625B1D6* L_0 = ((EqualityComparer_1_t922A0F6FFD989B570795F0DB5055CA31A625B1D6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t922A0F6FFD989B570795F0DB5055CA31A625B1D6* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t922A0F6FFD989B570795F0DB5055CA31A625B1D6* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mDBDE6F519B25B227D805D9AA6E55424373D5C53F(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t922A0F6FFD989B570795F0DB5055CA31A625B1D6* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t922A0F6FFD989B570795F0DB5055CA31A625B1D6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t922A0F6FFD989B570795F0DB5055CA31A625B1D6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t922A0F6FFD989B570795F0DB5055CA31A625B1D6* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CompareFunc_Invoke_m351179990E33C7C8CC0E941CCC765C52C7E47541_gshared_inline (CompareFunc_t3B70DEE7A10D19DE6F1C7A392495D80CB2F44B76* __this, ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A ___0_left, ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A ___1_right, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A, ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_left, ___1_right, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CompareFunc2_Invoke_m7AEAE165F749D42182BA1DB4D144F18055BEB165_gshared_inline (CompareFunc2_t942EC01EBBF2D48BDF26D7794667FAAB5210D94B* __this, ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A* ___0_left, ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A* ___1_right, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A*, ChatEntry_t1BF8EE8AC26E68F331C5CB9E616C479F07ABD54A*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_left, ___1_right, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tA5B2D612E48D47CC5468C19147A56588873B414A* EqualityComparer_1_get_Default_mAD029989C453C4C80CEF435CCBCFA76645C04C49_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tA5B2D612E48D47CC5468C19147A56588873B414A* V_0 = NULL;
	{
		EqualityComparer_1_tA5B2D612E48D47CC5468C19147A56588873B414A* L_0 = ((EqualityComparer_1_tA5B2D612E48D47CC5468C19147A56588873B414A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tA5B2D612E48D47CC5468C19147A56588873B414A* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tA5B2D612E48D47CC5468C19147A56588873B414A* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m7A41D59673CDDA80A897C0B7F25F8EA628157BA9(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tA5B2D612E48D47CC5468C19147A56588873B414A* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tA5B2D612E48D47CC5468C19147A56588873B414A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tA5B2D612E48D47CC5468C19147A56588873B414A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tA5B2D612E48D47CC5468C19147A56588873B414A* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CompareFunc_Invoke_m5C0B1FFD5552AD1F619D3B6A3B7B677052199FCE_gshared_inline (CompareFunc_t00CE15486F1C87AAA1937F1407C4B99828312A5D* __this, ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE ___0_left, ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE ___1_right, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE, ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_left, ___1_right, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CompareFunc2_Invoke_mB3271E54FD35021D322759F49B849A1C081437B5_gshared_inline (CompareFunc2_tD6EC93CB1B91D9C4071995650B545B7872439E5C* __this, ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE* ___0_left, ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE* ___1_right, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE*, ForwardRecord_t11088212AFE4F33D6A24DD657770EA50EE8BE9DE*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_left, ___1_right, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t805E284DD3F2CCD17BEBA28DD909A248D9FD6B84* EqualityComparer_1_get_Default_m8256B84332556772E273C474F78F2445ACFCC32F_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t805E284DD3F2CCD17BEBA28DD909A248D9FD6B84* V_0 = NULL;
	{
		EqualityComparer_1_t805E284DD3F2CCD17BEBA28DD909A248D9FD6B84* L_0 = ((EqualityComparer_1_t805E284DD3F2CCD17BEBA28DD909A248D9FD6B84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t805E284DD3F2CCD17BEBA28DD909A248D9FD6B84* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t805E284DD3F2CCD17BEBA28DD909A248D9FD6B84* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mCE3AD735F9A03370CED7DB7FD35AB0B0248EE423(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t805E284DD3F2CCD17BEBA28DD909A248D9FD6B84* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t805E284DD3F2CCD17BEBA28DD909A248D9FD6B84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t805E284DD3F2CCD17BEBA28DD909A248D9FD6B84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t805E284DD3F2CCD17BEBA28DD909A248D9FD6B84* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CompareFunc_Invoke_m90C6E3D740EE9EED634EF9FB0BA59320CF09B38E_gshared_inline (CompareFunc_tA3EC9E99EAAA5F3D786D261BBF941729E7267E9D* __this, InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02 ___0_left, InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02 ___1_right, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02, InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_left, ___1_right, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CompareFunc2_Invoke_mDBB7953373F755CF981DD4C012B2E4B1525BFAD5_gshared_inline (CompareFunc2_t9ACC862BD3A9584B4536B0660202D64073158D5D* __this, InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02* ___0_left, InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02* ___1_right, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02*, InfrequentEntry_tF6501B9BE8BE7586255F1170A7CCD2A4EB2CAD02*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_left, ___1_right, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
