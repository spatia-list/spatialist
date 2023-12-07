#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif



#include "vm/CachedCCWBase.h"
#include "utils/New.h"

template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct StackFrameU5BU5D_tF4310E8FAB8C2853A3F0843921BF9FBEC18ABBF7;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
struct MethodBase_t;
struct StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443;
struct StackTrace_t7C150C7C14136F985311A83A93524B1019F70853;
struct State_tABF1912F27C479FA84AE96D13A8417C08960156A;
struct String_t;
struct StringBuilder_t;
struct UnicodeEncoding_t2C90D9E1E55C16081FACA57B229053C1EF05DAF0;

IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var;
struct DateTime_tB8F64A9E141FDC202144C06531C4E7D4B6C59CB0;
struct Guid_t;
struct IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C;
struct IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F;
struct IBindableVectorView_tCB96F9780FD45A9A323C8212A53608C8A13784B3;
struct IIterable_1_tB1E96EF3EE5CCEF046C86379C83E0A56B9D1A134;
struct IIterator_1_t04C72867FEDCC8C661CDD86E3029B3BB0AE70A95;
struct IIterator_1_t525704805D94594DB030A232D9B0E793B9836E82;
struct IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274;
struct IIterator_1_tE1E604E7A9EDA024E9D8838EA95E5BCA2D8EF648;
struct IVectorView_1_t032111C0654C994819E26CCD76BAC016F29907A9;
struct Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18;
struct Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48;
struct Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05;
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
struct GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42;
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct SqlInt64U5BU5D_t34A517F2911137271C1654BDBB4D01D9AD3123E4;
struct SqlMoneyU5BU5D_t7F3F717D6EDE45B43255ACB24168648A47115E7A;
struct SqlSingleU5BU5D_t24423849DE9EE77FCC6B717A10C70B23DF58135D;
struct SqlStringU5BU5D_t8083BC7AE79AB16E186256FC6732AD8666E85ED7;
struct StackFrameU5BU5D_tF4310E8FAB8C2853A3F0843921BF9FBEC18ABBF7;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StateU5BU5D_tE3D6F86E1B051BE14AB379C5412A5B78C04BC6FC;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct StringBuilderU5BU5D_t8066814F873F1C7DE48C891911DC277608AF3EC7;
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct NOVTABLE IIterable_1_t95EE0FBCA165B86E0554CB35DA8CFA32A530B134 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m424D1A2AA3DB7A602178F89F11490E933A35CB65(IIterator_1_t525704805D94594DB030A232D9B0E793B9836E82** comReturnValue) = 0;
};
struct NOVTABLE IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m58EF279DBDFD39F1F59C3E0FC0E7AD131910EA64(IIterator_1_t04C72867FEDCC8C661CDD86E3029B3BB0AE70A95** comReturnValue) = 0;
};
struct NOVTABLE IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C(IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue) = 0;
};
struct NOVTABLE IIterable_1_t6A3283089F65FE1C298C4F830A14CD5C2196793A : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m111BDB2A0B16875B357B2E971863262BB455E97D(IIterator_1_tE1E604E7A9EDA024E9D8838EA95E5BCA2D8EF648** comReturnValue) = 0;
};
struct NOVTABLE IReferenceArray_1_t989D941A89C092AA5F86F7B6AA3678F120B1B5E5 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReferenceArray_1_get_Value_m0CB3D26F3299DC2B77D43FD74E72F3A453E88841(uint32_t* comReturnValueArraySize, Il2CppHString** comReturnValue) = 0;
};
struct NOVTABLE IVectorView_1_t5209FD934E3BD32A1CF5D24CCB1C47682B12B33A : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m81E85B041078D45E14E2950CA6ECF03CACA77073(uint32_t ___0_index, IIterable_1_tB1E96EF3EE5CCEF046C86379C83E0A56B9D1A134** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_mC21CB2C4CC930F1F39C27536ED983621DB3FD6C8(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m3BF9A01965FBCE1779B9C1611FAAD5174FD1E5C7(IIterable_1_tB1E96EF3EE5CCEF046C86379C83E0A56B9D1A134* ___0_value, uint32_t* ___1_index, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_mF17E4FF33C24D5B5494F5D27FC095C7AE9DB986A(uint32_t ___0_startIndex, uint32_t ___1_itemsArraySize, IIterable_1_tB1E96EF3EE5CCEF046C86379C83E0A56B9D1A134** ___1_items, uint32_t* comReturnValue) = 0;
};
struct NOVTABLE IVectorView_1_t91894C0D092A62A157244C0713F8CBAC8F256779 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m06FA29E1FCF7FDBC7162840F5A85668754386CA7(uint32_t ___0_index, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m49A5F54ECEA3A530A946EAE88BF6DE88D5252FC5(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m4213C724A06255A3007BD30AC38AB2101AF79E4D(IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C* ___0_value, uint32_t* ___1_index, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m4B7A5DDAD65F19B19716F5602968E3CACF383ADE(uint32_t ___0_startIndex, uint32_t ___1_itemsArraySize, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C** ___1_items, uint32_t* comReturnValue) = 0;
};
struct NOVTABLE IVectorView_1_t80C57016D46A1954BF56BD02FC3DAA7C0D85FFD6 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_mDA227019DDF2A9D2861B27ED32C865B867604223(uint32_t ___0_index, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m16DC683E3A92C0E6840B57EBFC92D3ADBF50202E(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mD1B3ADF8F80828EF947882105A77BBC892263DA1(Il2CppIInspectable* ___0_value, uint32_t* ___1_index, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m36C9D15C0138BF2C23D62E2457C09DC722A29DA9(uint32_t ___0_startIndex, uint32_t ___1_itemsArraySize, Il2CppIInspectable** ___1_items, uint32_t* comReturnValue) = 0;
};
struct NOVTABLE IVectorView_1_t032111C0654C994819E26CCD76BAC016F29907A9 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m8349D0F3D98618CEF76784EDB669793AC290FC98(uint32_t ___0_index, Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_mF14C201F406BF62B2C4A7622B5F49A2C0111E801(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m2290CDCF972C31420971C5D6BC4483BDD832A060(Il2CppHString ___0_value, uint32_t* ___1_index, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m61F6A8D6570D491157FA66446381ED2454DF483C(uint32_t ___0_startIndex, uint32_t ___1_itemsArraySize, Il2CppHString* ___1_items, uint32_t* comReturnValue) = 0;
};
struct NOVTABLE IVector_1_t100728FE7A01312935F7632190A9F33DC6C84377 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_mE3BC88A8449C94C9BDA373F6B6A6C68626EDEF5F(uint32_t ___0_index, Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m84CA18736B1B82B590892E4A3D5F7D8C3925F812(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_m25BEA556F8A0BB5CFFE7665383F891DD67CB99E7(IVectorView_1_t032111C0654C994819E26CCD76BAC016F29907A9** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_mEA910B17044A7C0A0B2EC6EFA216311D82B13ACB(Il2CppHString ___0_value, uint32_t* ___1_index, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_m779BF74E22A9BB64FAB53A8DC27F5DF851F975A1(uint32_t ___0_index, Il2CppHString ___1_value) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_m01B4D1A53A6C99BDCA50D32DC518051EA1DB12F6(uint32_t ___0_index, Il2CppHString ___1_value) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_m4C3F0C871967106A0F550C3761ADF15668CDDCA3(uint32_t ___0_index) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m3A6012F21D819DAC5509E432C1C9415DFDBF018A(Il2CppHString ___0_value) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_m7B7BBC6B0DDD787BFB9665B902B12B9E0292EBB9() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_m9C6956CE769248F1AB0970FF8593A99E5217F2EA() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_m6962492FBAA1A29CEDB13F86E0FF2FBB5A8E3462(uint32_t ___0_startIndex, uint32_t ___1_itemsArraySize, Il2CppHString* ___1_items, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_m9B33C18C7923E55D0D063D76177692B98E5BC720(uint32_t ___0_itemsArraySize, Il2CppHString* ___0_items) = 0;
};
struct NOVTABLE IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) = 0;
};
struct NOVTABLE IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9(uint32_t ___0_index, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F(IBindableVectorView_tCB96F9780FD45A9A323C8212A53608C8A13784B3** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907(Il2CppIInspectable* ___0_value, uint32_t* ___1_index, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0(uint32_t ___0_index, Il2CppIInspectable* ___1_value) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431(uint32_t ___0_index, Il2CppIInspectable* ___1_value) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538(uint32_t ___0_index) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E(Il2CppIInspectable* ___0_value) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71() = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C() = 0;
};
struct StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443  : public RuntimeObject
{
	int32_t ___ilOffset;
	int32_t ___nativeOffset;
	int64_t ___methodAddress;
	uint32_t ___methodIndex;
	MethodBase_t* ___methodBase;
	String_t* ___fileName;
	int32_t ___lineNumber;
	int32_t ___columnNumber;
	String_t* ___internalMethodName;
};
struct StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_marshaled_pinvoke
{
	int32_t ___ilOffset;
	int32_t ___nativeOffset;
	int64_t ___methodAddress;
	uint32_t ___methodIndex;
	MethodBase_t* ___methodBase;
	char* ___fileName;
	int32_t ___lineNumber;
	int32_t ___columnNumber;
	char* ___internalMethodName;
};
struct StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_marshaled_com
{
	int32_t ___ilOffset;
	int32_t ___nativeOffset;
	int64_t ___methodAddress;
	uint32_t ___methodIndex;
	MethodBase_t* ___methodBase;
	Il2CppChar* ___fileName;
	int32_t ___lineNumber;
	int32_t ___columnNumber;
	Il2CppChar* ___internalMethodName;
};
struct StackTrace_t7C150C7C14136F985311A83A93524B1019F70853  : public RuntimeObject
{
	StackFrameU5BU5D_tF4310E8FAB8C2853A3F0843921BF9FBEC18ABBF7* ___frames;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	bool ___debug_info;
};
struct State_tABF1912F27C479FA84AE96D13A8417C08960156A  : public RuntimeObject
{
	String_t* ___Name;
	int32_t ___Index;
	int32_t ___Bit;
	int32_t ___Value;
	int32_t ___ActiveIndex;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct StringBuilder_t  : public RuntimeObject
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars;
	StringBuilder_t* ___m_ChunkPrevious;
	int32_t ___m_ChunkLength;
	int32_t ___m_ChunkOffset;
	int32_t ___m_MaxCapacity;
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
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct DateTime_tB8F64A9E141FDC202144C06531C4E7D4B6C59CB0 
{
	int64_t ___UniversalTime;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
};
struct Guid_t 
{
	int32_t ____a;
	int16_t ____b;
	int16_t ____c;
	uint8_t ____d;
	uint8_t ____e;
	uint8_t ____f;
	uint8_t ____g;
	uint8_t ____h;
	uint8_t ____i;
	uint8_t ____j;
	uint8_t ____k;
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18 
{
	float ____x;
	float ____y;
};
struct Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48 
{
	float ____x;
	float ____y;
	float ____width;
	float ____height;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05 
{
	float ____width;
	float ____height;
};
struct SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 
{
	bool ___m_fNotNull;
	int64_t ___m_value;
};
struct SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_marshaled_pinvoke
{
	int32_t ___m_fNotNull;
	int64_t ___m_value;
};
struct SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_marshaled_com
{
	int32_t ___m_fNotNull;
	int64_t ___m_value;
};
struct SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB 
{
	bool ____fNotNull;
	int64_t ____value;
};
struct SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB_marshaled_pinvoke
{
	int32_t ____fNotNull;
	int64_t ____value;
};
struct SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB_marshaled_com
{
	int32_t ____fNotNull;
	int64_t ____value;
};
struct SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 
{
	bool ____fNotNull;
	float ____value;
};
struct SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767_marshaled_pinvoke
{
	int32_t ____fNotNull;
	float ____value;
};
struct SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767_marshaled_com
{
	int32_t ____fNotNull;
	float ____value;
};
struct SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D 
{
	String_t* ___m_value;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___m_cmpInfo;
	int32_t ___m_lcid;
	int32_t ___m_flag;
	bool ___m_fNotNull;
};
struct SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D_marshaled_pinvoke
{
	char* ___m_value;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___m_cmpInfo;
	int32_t ___m_lcid;
	int32_t ___m_flag;
	int32_t ___m_fNotNull;
};
struct SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D_marshaled_com
{
	Il2CppChar* ___m_value;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___m_cmpInfo;
	int32_t ___m_lcid;
	int32_t ___m_flag;
	int32_t ___m_fNotNull;
};
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	int64_t ____ticks;
};
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct NOVTABLE IPropertyValue_t5108EBA6BAA9289BD53DB4C9BC6EC2CFD3C71CFF : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_mCCFDCAF3EF47FD26636DF1752C7D0D0F04AF17E5(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_m5AA58745E3403667AD93842BD84E1BF3C56C6923(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_mA78B64B2D18688A14857A3385C11D3FBC3DCA0BF(uint8_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_m893A5F46553C28727129D19D2C657BFD7A82C8EB(int16_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mFB50772016E5FDE5548016B10D8BF8F72BAEE51A(uint16_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_m81E687870E8D71B0B56C0F98B9CE901173541F0E(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_m4242C2EB038EC37544C26EC11B33AD7CA1D0315B(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m69E32181A31DEE4BEB361BB9E81FA3D949862FC9(int64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_mAB342E494DC39A847B6430F96A8F02FB9F9774E4(uint64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mABFDF8CFBAAFF7EEE22AF429911B22EC2DE5318A(float* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mF1DDF1999B7F877B2BA609D09149288E345D45AE(double* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m4B1428420CFDB7DD73878EAB4C8EFEBFBE026EEC(Il2CppChar* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m89F937F65167C4337FD9E4A8B0A54369AE41D89D(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_mD2C842F7378384AE6BC0A93033FEE0A85C9E1F28(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m560A172386BD6DFC3DEB00D2DF3070EE67DF7B71(Guid_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_mC3F8B04EF7625215AF66FB7B5C4EFDDC4163967D(DateTime_tB8F64A9E141FDC202144C06531C4E7D4B6C59CB0* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m5B8EF6C6B2BE4370F48B6AA715236DDD019A657A(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m6DE3D27C8479F2C44665EF1D86D76E004AC3B00D(Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_mD27A291FCF475860FD4C5CC19C1C361902537662(Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_mF069EFA36FB5E7469FABE6CC04471B4434E507AE(Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_mEEA85229904BFBD5DD63209A9F4858EA6A36C484(uint32_t* ___0_valueArraySize, uint8_t** ___0_value) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_mAF964E8DCE5EE8D9703DB63D5181CD92C344FAA9(uint32_t* ___0_valueArraySize, int16_t** ___0_value) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_mE6ECF01E37BD858FF14518C8EC0605D1BFD4CAC6(uint32_t* ___0_valueArraySize, uint16_t** ___0_value) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_m27D54E06B02528F7056A07F224A1552A36FDEB46(uint32_t* ___0_valueArraySize, int32_t** ___0_value) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_mAF7ECA68A945A7AA0F35D3A3962A4EA49954CEAE(uint32_t* ___0_valueArraySize, uint32_t** ___0_value) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_mDC9606845A993ED32A95F889C71B67C8A05DF4BC(uint32_t* ___0_valueArraySize, int64_t** ___0_value) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_mB59E8769BB20C16BBAC4D08A3861B7019B9D2514(uint32_t* ___0_valueArraySize, uint64_t** ___0_value) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_mDF81FCE06AA984ACED460A1989102C889F64393A(uint32_t* ___0_valueArraySize, float** ___0_value) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m1D5F8B05C90C3FE9B82785940DEA3A3EDD6F2EC5(uint32_t* ___0_valueArraySize, double** ___0_value) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_mB80F78E0307BC79A3FDF3502A94F8B9D4BBD686A(uint32_t* ___0_valueArraySize, Il2CppChar** ___0_value) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_mF47B2C131AAB62D7EDB2DEE4713E553291E5583A(uint32_t* ___0_valueArraySize, bool** ___0_value) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m0F0B933A1405F7B389626D274F3BB20CA2255E40(uint32_t* ___0_valueArraySize, Il2CppHString** ___0_value) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m9B1D04C961C0519436B081BAE72B6FE53D6204D6(uint32_t* ___0_valueArraySize, Il2CppIInspectable*** ___0_value) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mD0732FEB8CB64CA04C55CEEE8386EF3FDA97BED4(uint32_t* ___0_valueArraySize, Guid_t** ___0_value) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_m54798F11C9EA77AC614259146DF99355026ED0A9(uint32_t* ___0_valueArraySize, DateTime_tB8F64A9E141FDC202144C06531C4E7D4B6C59CB0** ___0_value) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mDF0D9EC3E55742BA1132885596FDF3F478E8AC2A(uint32_t* ___0_valueArraySize, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A** ___0_value) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_m9ECDF8442D5EF1FCB65095A1AC779596920F9890(uint32_t* ___0_valueArraySize, Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18** ___0_value) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m57C92EBB76BF7B6D400D8045192ED76ED41BC403(uint32_t* ___0_valueArraySize, Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05** ___0_value) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_mC4F618B7AEF3B6AB1BB2AFFEED0C2BBB28E48178(uint32_t* ___0_valueArraySize, Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48** ___0_value) = 0;
};
struct StackTrace_t7C150C7C14136F985311A83A93524B1019F70853_StaticFields
{
	bool ___isAotidSet;
	String_t* ___aotid;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Guid_t_StaticFields
{
	Guid_t ___Empty;
};
struct SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_StaticFields
{
	int64_t ___s_lLowIntMask;
	int64_t ___s_lHighIntMask;
	SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 ___Null;
	SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 ___Zero;
	SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 ___MinValue;
	SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 ___MaxValue;
};
struct SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB_StaticFields
{
	int32_t ___s_iMoneyScale;
	int64_t ___s_lTickBase;
	double ___s_dTickBase;
	int64_t ___s_minLong;
	int64_t ___s_maxLong;
	SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB ___Null;
	SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB ___Zero;
	SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB ___MinValue;
	SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB ___MaxValue;
};
struct SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767_StaticFields
{
	SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 ___Null;
	SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 ___Zero;
	SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 ___MinValue;
	SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 ___MaxValue;
};
struct SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D_StaticFields
{
	SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D ___Null;
	UnicodeEncoding_t2C90D9E1E55C16081FACA57B229053C1EF05DAF0* ___s_unicodeEncoding;
	int32_t ___IgnoreCase;
	int32_t ___IgnoreWidth;
	int32_t ___IgnoreNonSpace;
	int32_t ___IgnoreKanaType;
	int32_t ___BinarySort;
	int32_t ___BinarySort2;
	int32_t ___s_iDefaultFlag;
	int32_t ___s_iValidCompareOptionMask;
	int32_t ___s_iValidSqlCompareOptionMask;
	int32_t ___s_lcidUSEnglish;
	int32_t ___s_lcidBinary;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct SqlInt64U5BU5D_t34A517F2911137271C1654BDBB4D01D9AD3123E4  : public RuntimeArray
{
	ALIGN_FIELD (8) SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 m_Items[1];

	inline SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 value)
	{
		m_Items[index] = value;
	}
};
struct SqlMoneyU5BU5D_t7F3F717D6EDE45B43255ACB24168648A47115E7A  : public RuntimeArray
{
	ALIGN_FIELD (8) SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB m_Items[1];

	inline SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB value)
	{
		m_Items[index] = value;
	}
};
struct SqlSingleU5BU5D_t24423849DE9EE77FCC6B717A10C70B23DF58135D  : public RuntimeArray
{
	ALIGN_FIELD (8) SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 m_Items[1];

	inline SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 value)
	{
		m_Items[index] = value;
	}
};
struct SqlStringU5BU5D_t8083BC7AE79AB16E186256FC6732AD8666E85ED7  : public RuntimeArray
{
	ALIGN_FIELD (8) SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D m_Items[1];

	inline SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_value), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_cmpInfo), (void*)NULL);
		#endif
	}
	inline SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_value), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_cmpInfo), (void*)NULL);
		#endif
	}
};
struct StackFrameU5BU5D_tF4310E8FAB8C2853A3F0843921BF9FBEC18ABBF7  : public RuntimeArray
{
	ALIGN_FIELD (8) StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* m_Items[1];

	inline StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF  : public RuntimeArray
{
	ALIGN_FIELD (8) StackTrace_t7C150C7C14136F985311A83A93524B1019F70853* m_Items[1];

	inline StackTrace_t7C150C7C14136F985311A83A93524B1019F70853* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StackTrace_t7C150C7C14136F985311A83A93524B1019F70853** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StackTrace_t7C150C7C14136F985311A83A93524B1019F70853* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline StackTrace_t7C150C7C14136F985311A83A93524B1019F70853* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StackTrace_t7C150C7C14136F985311A83A93524B1019F70853** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StackTrace_t7C150C7C14136F985311A83A93524B1019F70853* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct StateU5BU5D_tE3D6F86E1B051BE14AB379C5412A5B78C04BC6FC  : public RuntimeArray
{
	ALIGN_FIELD (8) State_tABF1912F27C479FA84AE96D13A8417C08960156A* m_Items[1];

	inline State_tABF1912F27C479FA84AE96D13A8417C08960156A* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline State_tABF1912F27C479FA84AE96D13A8417C08960156A** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, State_tABF1912F27C479FA84AE96D13A8417C08960156A* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline State_tABF1912F27C479FA84AE96D13A8417C08960156A* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline State_tABF1912F27C479FA84AE96D13A8417C08960156A** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, State_tABF1912F27C479FA84AE96D13A8417C08960156A* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB  : public RuntimeArray
{
	ALIGN_FIELD (8) int16_t m_Items[1];

	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83  : public RuntimeArray
{
	ALIGN_FIELD (8) uint16_t m_Items[1];

	inline uint16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint16_t value)
	{
		m_Items[index] = value;
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
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D  : public RuntimeArray
{
	ALIGN_FIELD (8) int64_t m_Items[1];

	inline int64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int64_t value)
	{
		m_Items[index] = value;
	}
};
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299  : public RuntimeArray
{
	ALIGN_FIELD (8) uint64_t m_Items[1];

	inline uint64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint64_t value)
	{
		m_Items[index] = value;
	}
};
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE  : public RuntimeArray
{
	ALIGN_FIELD (8) double m_Items[1];

	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
};
struct GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42  : public RuntimeArray
{
	ALIGN_FIELD (8) Guid_t m_Items[1];

	inline Guid_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Guid_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Guid_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Guid_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Guid_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Guid_t value)
	{
		m_Items[index] = value;
	}
};
struct StringBuilderU5BU5D_t8066814F873F1C7DE48C891911DC277608AF3EC7  : public RuntimeArray
{
	ALIGN_FIELD (8) StringBuilder_t* m_Items[1];

	inline StringBuilder_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StringBuilder_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StringBuilder_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline StringBuilder_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StringBuilder_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StringBuilder_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};

il2cpp_hresult_t IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue);
il2cpp_hresult_t IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___0_index, Il2CppIInspectable** comReturnValue);
il2cpp_hresult_t IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableVectorView_tCB96F9780FD45A9A323C8212A53608C8A13784B3** comReturnValue);
il2cpp_hresult_t IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___0_value, uint32_t* ___1_index, bool* comReturnValue);
il2cpp_hresult_t IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___0_index, Il2CppIInspectable* ___1_value);
il2cpp_hresult_t IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___0_index, Il2CppIInspectable* ___1_value);
il2cpp_hresult_t IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___0_index);
il2cpp_hresult_t IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___0_value);
il2cpp_hresult_t IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue);
il2cpp_hresult_t IVectorView_1_GetAt_mDA227019DDF2A9D2861B27ED32C865B867604223_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___0_index, Il2CppIInspectable** comReturnValue);
il2cpp_hresult_t IVectorView_1_get_Size_m16DC683E3A92C0E6840B57EBFC92D3ADBF50202E_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IVectorView_1_IndexOf_mD1B3ADF8F80828EF947882105A77BBC892263DA1_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___0_value, uint32_t* ___1_index, bool* comReturnValue);
il2cpp_hresult_t IVectorView_1_GetMany_m36C9D15C0138BF2C23D62E2457C09DC722A29DA9_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___0_startIndex, uint32_t ___1_itemsArraySize, Il2CppIInspectable** ___1_items, uint32_t* comReturnValue);
il2cpp_hresult_t IVector_1_GetAt_mE3BC88A8449C94C9BDA373F6B6A6C68626EDEF5F_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___0_index, Il2CppHString* comReturnValue);
il2cpp_hresult_t IVector_1_get_Size_m84CA18736B1B82B590892E4A3D5F7D8C3925F812_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IVector_1_GetView_m25BEA556F8A0BB5CFFE7665383F891DD67CB99E7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IVectorView_1_t032111C0654C994819E26CCD76BAC016F29907A9** comReturnValue);
il2cpp_hresult_t IVector_1_IndexOf_mEA910B17044A7C0A0B2EC6EFA216311D82B13ACB_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___0_value, uint32_t* ___1_index, bool* comReturnValue);
il2cpp_hresult_t IVector_1_SetAt_m779BF74E22A9BB64FAB53A8DC27F5DF851F975A1_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___0_index, Il2CppHString ___1_value);
il2cpp_hresult_t IVector_1_InsertAt_m01B4D1A53A6C99BDCA50D32DC518051EA1DB12F6_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___0_index, Il2CppHString ___1_value);
il2cpp_hresult_t IVector_1_RemoveAt_m4C3F0C871967106A0F550C3761ADF15668CDDCA3_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___0_index);
il2cpp_hresult_t IVector_1_Append_m3A6012F21D819DAC5509E432C1C9415DFDBF018A_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___0_value);
il2cpp_hresult_t IVector_1_RemoveAtEnd_m7B7BBC6B0DDD787BFB9665B902B12B9E0292EBB9_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IVector_1_Clear_m9C6956CE769248F1AB0970FF8593A99E5217F2EA_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IVector_1_GetMany_m6962492FBAA1A29CEDB13F86E0FF2FBB5A8E3462_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___0_startIndex, uint32_t ___1_itemsArraySize, Il2CppHString* ___1_items, uint32_t* comReturnValue);
il2cpp_hresult_t IVector_1_ReplaceAll_m9B33C18C7923E55D0D063D76177692B98E5BC720_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___0_itemsArraySize, Il2CppHString* ___0_items);
il2cpp_hresult_t IIterable_1_First_m111BDB2A0B16875B357B2E971863262BB455E97D_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tE1E604E7A9EDA024E9D8838EA95E5BCA2D8EF648** comReturnValue);
il2cpp_hresult_t IIterable_1_First_m58EF279DBDFD39F1F59C3E0FC0E7AD131910EA64_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t04C72867FEDCC8C661CDD86E3029B3BB0AE70A95** comReturnValue);
il2cpp_hresult_t IIterable_1_First_m424D1A2AA3DB7A602178F89F11490E933A35CB65_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t525704805D94594DB030A232D9B0E793B9836E82** comReturnValue);
il2cpp_hresult_t IVectorView_1_GetAt_m8349D0F3D98618CEF76784EDB669793AC290FC98_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___0_index, Il2CppHString* comReturnValue);
il2cpp_hresult_t IVectorView_1_get_Size_mF14C201F406BF62B2C4A7622B5F49A2C0111E801_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IVectorView_1_IndexOf_m2290CDCF972C31420971C5D6BC4483BDD832A060_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___0_value, uint32_t* ___1_index, bool* comReturnValue);
il2cpp_hresult_t IVectorView_1_GetMany_m61F6A8D6570D491157FA66446381ED2454DF483C_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___0_startIndex, uint32_t ___1_itemsArraySize, Il2CppHString* ___1_items, uint32_t* comReturnValue);
il2cpp_hresult_t IVectorView_1_GetAt_m06FA29E1FCF7FDBC7162840F5A85668754386CA7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___0_index, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C** comReturnValue);
il2cpp_hresult_t IVectorView_1_get_Size_m49A5F54ECEA3A530A946EAE88BF6DE88D5252FC5_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IVectorView_1_IndexOf_m4213C724A06255A3007BD30AC38AB2101AF79E4D_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C* ___0_value, uint32_t* ___1_index, bool* comReturnValue);
il2cpp_hresult_t IVectorView_1_GetMany_m4B7A5DDAD65F19B19716F5602968E3CACF383ADE_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___0_startIndex, uint32_t ___1_itemsArraySize, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C** ___1_items, uint32_t* comReturnValue);
il2cpp_hresult_t IVectorView_1_GetAt_m81E85B041078D45E14E2950CA6ECF03CACA77073_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___0_index, IIterable_1_tB1E96EF3EE5CCEF046C86379C83E0A56B9D1A134** comReturnValue);
il2cpp_hresult_t IVectorView_1_get_Size_mC21CB2C4CC930F1F39C27536ED983621DB3FD6C8_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IVectorView_1_IndexOf_m3BF9A01965FBCE1779B9C1611FAAD5174FD1E5C7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterable_1_tB1E96EF3EE5CCEF046C86379C83E0A56B9D1A134* ___0_value, uint32_t* ___1_index, bool* comReturnValue);
il2cpp_hresult_t IVectorView_1_GetMany_mF17E4FF33C24D5B5494F5D27FC095C7AE9DB986A_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___0_startIndex, uint32_t ___1_itemsArraySize, IIterable_1_tB1E96EF3EE5CCEF046C86379C83E0A56B9D1A134** ___1_items, uint32_t* comReturnValue);


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t String_System_IConvertible_ToByte_m2293F93CB7B3C12A6DE6F9B265AECB51741E2A88 (String_t* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t String_System_IConvertible_ToInt16_mFFA024540C591548774D62A2550822AF15A4D64F (String_t* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t String_System_IConvertible_ToUInt16_mA8B7D9A52530436A2DD508D9A24C9C4DF4F8D078 (String_t* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_System_IConvertible_ToInt32_m0B4C286CD713CCB2E4A8B38F38E73B39A1612DFB (String_t* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t String_System_IConvertible_ToUInt32_m3E4B36C611D4070BD8FD89E8A33E913368D0095A (String_t* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t String_System_IConvertible_ToInt64_mB5A02609C8B1CB8C9C6DCA5F11794F0F3D1E60EE (String_t* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t String_System_IConvertible_ToUInt64_mDBF5B0D9A0EF5E943AE2B20BEF64E20FE501788E (String_t* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float String_System_IConvertible_ToSingle_mD8D1921B9DCA1756B8E24B97EA8E7F93D7C6BEE2 (String_t* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double String_System_IConvertible_ToDouble_m2C051DC383E1D6BE9E30B5DEC376B043B4B9E69C (String_t* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t Guid_Parse_mC068B0047F86921D817F600C75C6EBFE15A461D0 (String_t* ___0_input, const RuntimeMethod* method) ;

struct SqlInt64U5BU5D_t34A517F2911137271C1654BDBB4D01D9AD3123E4_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<SqlInt64U5BU5D_t34A517F2911137271C1654BDBB4D01D9AD3123E4_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A
{
	inline SqlInt64U5BU5D_t34A517F2911137271C1654BDBB4D01D9AD3123E4_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<SqlInt64U5BU5D_t34A517F2911137271C1654BDBB4D01D9AD3123E4_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[1] = IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9(uint32_t ___0_index, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F(IBindableVectorView_tCB96F9780FD45A9A323C8212A53608C8A13784B3** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907(Il2CppIInspectable* ___0_value, uint32_t* ___1_index, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value, ___1_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0(uint32_t ___0_index, Il2CppIInspectable* ___1_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, ___1_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431(uint32_t ___0_index, Il2CppIInspectable* ___1_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, ___1_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538(uint32_t ___0_index) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E(Il2CppIInspectable* ___0_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_SqlInt64U5BU5D_t34A517F2911137271C1654BDBB4D01D9AD3123E4(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(SqlInt64U5BU5D_t34A517F2911137271C1654BDBB4D01D9AD3123E4_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) SqlInt64U5BU5D_t34A517F2911137271C1654BDBB4D01D9AD3123E4_ComCallableWrapper(obj));
}

struct SqlMoneyU5BU5D_t7F3F717D6EDE45B43255ACB24168648A47115E7A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<SqlMoneyU5BU5D_t7F3F717D6EDE45B43255ACB24168648A47115E7A_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A
{
	inline SqlMoneyU5BU5D_t7F3F717D6EDE45B43255ACB24168648A47115E7A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<SqlMoneyU5BU5D_t7F3F717D6EDE45B43255ACB24168648A47115E7A_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[1] = IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9(uint32_t ___0_index, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F(IBindableVectorView_tCB96F9780FD45A9A323C8212A53608C8A13784B3** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907(Il2CppIInspectable* ___0_value, uint32_t* ___1_index, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value, ___1_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0(uint32_t ___0_index, Il2CppIInspectable* ___1_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, ___1_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431(uint32_t ___0_index, Il2CppIInspectable* ___1_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, ___1_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538(uint32_t ___0_index) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E(Il2CppIInspectable* ___0_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_SqlMoneyU5BU5D_t7F3F717D6EDE45B43255ACB24168648A47115E7A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(SqlMoneyU5BU5D_t7F3F717D6EDE45B43255ACB24168648A47115E7A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) SqlMoneyU5BU5D_t7F3F717D6EDE45B43255ACB24168648A47115E7A_ComCallableWrapper(obj));
}

struct SqlSingleU5BU5D_t24423849DE9EE77FCC6B717A10C70B23DF58135D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<SqlSingleU5BU5D_t24423849DE9EE77FCC6B717A10C70B23DF58135D_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A
{
	inline SqlSingleU5BU5D_t24423849DE9EE77FCC6B717A10C70B23DF58135D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<SqlSingleU5BU5D_t24423849DE9EE77FCC6B717A10C70B23DF58135D_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[1] = IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9(uint32_t ___0_index, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F(IBindableVectorView_tCB96F9780FD45A9A323C8212A53608C8A13784B3** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907(Il2CppIInspectable* ___0_value, uint32_t* ___1_index, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value, ___1_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0(uint32_t ___0_index, Il2CppIInspectable* ___1_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, ___1_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431(uint32_t ___0_index, Il2CppIInspectable* ___1_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, ___1_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538(uint32_t ___0_index) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E(Il2CppIInspectable* ___0_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_SqlSingleU5BU5D_t24423849DE9EE77FCC6B717A10C70B23DF58135D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(SqlSingleU5BU5D_t24423849DE9EE77FCC6B717A10C70B23DF58135D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) SqlSingleU5BU5D_t24423849DE9EE77FCC6B717A10C70B23DF58135D_ComCallableWrapper(obj));
}

struct SqlStringU5BU5D_t8083BC7AE79AB16E186256FC6732AD8666E85ED7_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<SqlStringU5BU5D_t8083BC7AE79AB16E186256FC6732AD8666E85ED7_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A
{
	inline SqlStringU5BU5D_t8083BC7AE79AB16E186256FC6732AD8666E85ED7_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<SqlStringU5BU5D_t8083BC7AE79AB16E186256FC6732AD8666E85ED7_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[1] = IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9(uint32_t ___0_index, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F(IBindableVectorView_tCB96F9780FD45A9A323C8212A53608C8A13784B3** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907(Il2CppIInspectable* ___0_value, uint32_t* ___1_index, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value, ___1_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0(uint32_t ___0_index, Il2CppIInspectable* ___1_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, ___1_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431(uint32_t ___0_index, Il2CppIInspectable* ___1_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, ___1_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538(uint32_t ___0_index) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E(Il2CppIInspectable* ___0_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_SqlStringU5BU5D_t8083BC7AE79AB16E186256FC6732AD8666E85ED7(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(SqlStringU5BU5D_t8083BC7AE79AB16E186256FC6732AD8666E85ED7_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) SqlStringU5BU5D_t8083BC7AE79AB16E186256FC6732AD8666E85ED7_ComCallableWrapper(obj));
}

struct StackFrameU5BU5D_tF4310E8FAB8C2853A3F0843921BF9FBEC18ABBF7_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<StackFrameU5BU5D_tF4310E8FAB8C2853A3F0843921BF9FBEC18ABBF7_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IVectorView_1_t80C57016D46A1954BF56BD02FC3DAA7C0D85FFD6, IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A
{
	inline StackFrameU5BU5D_tF4310E8FAB8C2853A3F0843921BF9FBEC18ABBF7_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<StackFrameU5BU5D_tF4310E8FAB8C2853A3F0843921BF9FBEC18ABBF7_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t80C57016D46A1954BF56BD02FC3DAA7C0D85FFD6::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t80C57016D46A1954BF56BD02FC3DAA7C0D85FFD6*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[2] = IVectorView_1_t80C57016D46A1954BF56BD02FC3DAA7C0D85FFD6::IID;
		interfaceIds[3] = IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C(IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_mDA227019DDF2A9D2861B27ED32C865B867604223(uint32_t ___0_index, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_mDA227019DDF2A9D2861B27ED32C865B867604223_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m16DC683E3A92C0E6840B57EBFC92D3ADBF50202E(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m16DC683E3A92C0E6840B57EBFC92D3ADBF50202E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mD1B3ADF8F80828EF947882105A77BBC892263DA1(Il2CppIInspectable* ___0_value, uint32_t* ___1_index, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mD1B3ADF8F80828EF947882105A77BBC892263DA1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value, ___1_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m36C9D15C0138BF2C23D62E2457C09DC722A29DA9(uint32_t ___0_startIndex, uint32_t ___1_itemsArraySize, Il2CppIInspectable** ___1_items, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m36C9D15C0138BF2C23D62E2457C09DC722A29DA9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_startIndex, ___1_itemsArraySize, ___1_items, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9(uint32_t ___0_index, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F(IBindableVectorView_tCB96F9780FD45A9A323C8212A53608C8A13784B3** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907(Il2CppIInspectable* ___0_value, uint32_t* ___1_index, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value, ___1_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0(uint32_t ___0_index, Il2CppIInspectable* ___1_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, ___1_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431(uint32_t ___0_index, Il2CppIInspectable* ___1_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, ___1_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538(uint32_t ___0_index) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E(Il2CppIInspectable* ___0_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_StackFrameU5BU5D_tF4310E8FAB8C2853A3F0843921BF9FBEC18ABBF7(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(StackFrameU5BU5D_tF4310E8FAB8C2853A3F0843921BF9FBEC18ABBF7_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) StackFrameU5BU5D_tF4310E8FAB8C2853A3F0843921BF9FBEC18ABBF7_ComCallableWrapper(obj));
}

struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IVectorView_1_t80C57016D46A1954BF56BD02FC3DAA7C0D85FFD6, IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A
{
	inline StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t80C57016D46A1954BF56BD02FC3DAA7C0D85FFD6::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t80C57016D46A1954BF56BD02FC3DAA7C0D85FFD6*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[2] = IVectorView_1_t80C57016D46A1954BF56BD02FC3DAA7C0D85FFD6::IID;
		interfaceIds[3] = IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C(IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_mDA227019DDF2A9D2861B27ED32C865B867604223(uint32_t ___0_index, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_mDA227019DDF2A9D2861B27ED32C865B867604223_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m16DC683E3A92C0E6840B57EBFC92D3ADBF50202E(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m16DC683E3A92C0E6840B57EBFC92D3ADBF50202E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mD1B3ADF8F80828EF947882105A77BBC892263DA1(Il2CppIInspectable* ___0_value, uint32_t* ___1_index, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mD1B3ADF8F80828EF947882105A77BBC892263DA1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value, ___1_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m36C9D15C0138BF2C23D62E2457C09DC722A29DA9(uint32_t ___0_startIndex, uint32_t ___1_itemsArraySize, Il2CppIInspectable** ___1_items, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m36C9D15C0138BF2C23D62E2457C09DC722A29DA9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_startIndex, ___1_itemsArraySize, ___1_items, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9(uint32_t ___0_index, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F(IBindableVectorView_tCB96F9780FD45A9A323C8212A53608C8A13784B3** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907(Il2CppIInspectable* ___0_value, uint32_t* ___1_index, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value, ___1_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0(uint32_t ___0_index, Il2CppIInspectable* ___1_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, ___1_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431(uint32_t ___0_index, Il2CppIInspectable* ___1_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, ___1_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538(uint32_t ___0_index) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E(Il2CppIInspectable* ___0_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF_ComCallableWrapper(obj));
}

struct StateU5BU5D_tE3D6F86E1B051BE14AB379C5412A5B78C04BC6FC_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<StateU5BU5D_tE3D6F86E1B051BE14AB379C5412A5B78C04BC6FC_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IVectorView_1_t80C57016D46A1954BF56BD02FC3DAA7C0D85FFD6, IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A
{
	inline StateU5BU5D_tE3D6F86E1B051BE14AB379C5412A5B78C04BC6FC_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<StateU5BU5D_tE3D6F86E1B051BE14AB379C5412A5B78C04BC6FC_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t80C57016D46A1954BF56BD02FC3DAA7C0D85FFD6::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t80C57016D46A1954BF56BD02FC3DAA7C0D85FFD6*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[2] = IVectorView_1_t80C57016D46A1954BF56BD02FC3DAA7C0D85FFD6::IID;
		interfaceIds[3] = IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C(IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_mDA227019DDF2A9D2861B27ED32C865B867604223(uint32_t ___0_index, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_mDA227019DDF2A9D2861B27ED32C865B867604223_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m16DC683E3A92C0E6840B57EBFC92D3ADBF50202E(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m16DC683E3A92C0E6840B57EBFC92D3ADBF50202E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mD1B3ADF8F80828EF947882105A77BBC892263DA1(Il2CppIInspectable* ___0_value, uint32_t* ___1_index, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mD1B3ADF8F80828EF947882105A77BBC892263DA1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value, ___1_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m36C9D15C0138BF2C23D62E2457C09DC722A29DA9(uint32_t ___0_startIndex, uint32_t ___1_itemsArraySize, Il2CppIInspectable** ___1_items, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m36C9D15C0138BF2C23D62E2457C09DC722A29DA9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_startIndex, ___1_itemsArraySize, ___1_items, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9(uint32_t ___0_index, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F(IBindableVectorView_tCB96F9780FD45A9A323C8212A53608C8A13784B3** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907(Il2CppIInspectable* ___0_value, uint32_t* ___1_index, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value, ___1_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0(uint32_t ___0_index, Il2CppIInspectable* ___1_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, ___1_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431(uint32_t ___0_index, Il2CppIInspectable* ___1_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, ___1_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538(uint32_t ___0_index) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E(Il2CppIInspectable* ___0_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_StateU5BU5D_tE3D6F86E1B051BE14AB379C5412A5B78C04BC6FC(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(StateU5BU5D_tE3D6F86E1B051BE14AB379C5412A5B78C04BC6FC_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) StateU5BU5D_tE3D6F86E1B051BE14AB379C5412A5B78C04BC6FC_ComCallableWrapper(obj));
}

struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_ComCallableWrapper>, IVector_1_t100728FE7A01312935F7632190A9F33DC6C84377, IIterable_1_t6A3283089F65FE1C298C4F830A14CD5C2196793A, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011, IIterable_1_t95EE0FBCA165B86E0554CB35DA8CFA32A530B134, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IVectorView_1_t032111C0654C994819E26CCD76BAC016F29907A9, IVectorView_1_t80C57016D46A1954BF56BD02FC3DAA7C0D85FFD6, IVectorView_1_t91894C0D092A62A157244C0713F8CBAC8F256779, IVectorView_1_t5209FD934E3BD32A1CF5D24CCB1C47682B12B33A, IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A, IReferenceArray_1_t989D941A89C092AA5F86F7B6AA3678F120B1B5E5, IPropertyValue_t5108EBA6BAA9289BD53DB4C9BC6EC2CFD3C71CFF
{
	inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVector_1_t100728FE7A01312935F7632190A9F33DC6C84377::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVector_1_t100728FE7A01312935F7632190A9F33DC6C84377*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t6A3283089F65FE1C298C4F830A14CD5C2196793A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t6A3283089F65FE1C298C4F830A14CD5C2196793A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t95EE0FBCA165B86E0554CB35DA8CFA32A530B134::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t95EE0FBCA165B86E0554CB35DA8CFA32A530B134*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t032111C0654C994819E26CCD76BAC016F29907A9::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t032111C0654C994819E26CCD76BAC016F29907A9*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t80C57016D46A1954BF56BD02FC3DAA7C0D85FFD6::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t80C57016D46A1954BF56BD02FC3DAA7C0D85FFD6*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t91894C0D092A62A157244C0713F8CBAC8F256779::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t91894C0D092A62A157244C0713F8CBAC8F256779*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t5209FD934E3BD32A1CF5D24CCB1C47682B12B33A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t5209FD934E3BD32A1CF5D24CCB1C47682B12B33A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IReferenceArray_1_t989D941A89C092AA5F86F7B6AA3678F120B1B5E5::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReferenceArray_1_t989D941A89C092AA5F86F7B6AA3678F120B1B5E5*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IPropertyValue_t5108EBA6BAA9289BD53DB4C9BC6EC2CFD3C71CFF::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IPropertyValue_t5108EBA6BAA9289BD53DB4C9BC6EC2CFD3C71CFF*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(13);
		interfaceIds[0] = IVector_1_t100728FE7A01312935F7632190A9F33DC6C84377::IID;
		interfaceIds[1] = IIterable_1_t6A3283089F65FE1C298C4F830A14CD5C2196793A::IID;
		interfaceIds[2] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[3] = IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011::IID;
		interfaceIds[4] = IIterable_1_t95EE0FBCA165B86E0554CB35DA8CFA32A530B134::IID;
		interfaceIds[5] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[6] = IVectorView_1_t032111C0654C994819E26CCD76BAC016F29907A9::IID;
		interfaceIds[7] = IVectorView_1_t80C57016D46A1954BF56BD02FC3DAA7C0D85FFD6::IID;
		interfaceIds[8] = IVectorView_1_t91894C0D092A62A157244C0713F8CBAC8F256779::IID;
		interfaceIds[9] = IVectorView_1_t5209FD934E3BD32A1CF5D24CCB1C47682B12B33A::IID;
		interfaceIds[10] = IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A::IID;
		interfaceIds[11] = IReferenceArray_1_t989D941A89C092AA5F86F7B6AA3678F120B1B5E5::IID;
		interfaceIds[12] = IPropertyValue_t5108EBA6BAA9289BD53DB4C9BC6EC2CFD3C71CFF::IID;

		*iidCount = 13;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_mE3BC88A8449C94C9BDA373F6B6A6C68626EDEF5F(uint32_t ___0_index, Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_GetAt_mE3BC88A8449C94C9BDA373F6B6A6C68626EDEF5F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m84CA18736B1B82B590892E4A3D5F7D8C3925F812(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_get_Size_m84CA18736B1B82B590892E4A3D5F7D8C3925F812_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_m25BEA556F8A0BB5CFFE7665383F891DD67CB99E7(IVectorView_1_t032111C0654C994819E26CCD76BAC016F29907A9** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_GetView_m25BEA556F8A0BB5CFFE7665383F891DD67CB99E7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_mEA910B17044A7C0A0B2EC6EFA216311D82B13ACB(Il2CppHString ___0_value, uint32_t* ___1_index, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_IndexOf_mEA910B17044A7C0A0B2EC6EFA216311D82B13ACB_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value, ___1_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_m779BF74E22A9BB64FAB53A8DC27F5DF851F975A1(uint32_t ___0_index, Il2CppHString ___1_value) IL2CPP_OVERRIDE
	{
		return IVector_1_SetAt_m779BF74E22A9BB64FAB53A8DC27F5DF851F975A1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, ___1_value);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_m01B4D1A53A6C99BDCA50D32DC518051EA1DB12F6(uint32_t ___0_index, Il2CppHString ___1_value) IL2CPP_OVERRIDE
	{
		return IVector_1_InsertAt_m01B4D1A53A6C99BDCA50D32DC518051EA1DB12F6_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, ___1_value);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_m4C3F0C871967106A0F550C3761ADF15668CDDCA3(uint32_t ___0_index) IL2CPP_OVERRIDE
	{
		return IVector_1_RemoveAt_m4C3F0C871967106A0F550C3761ADF15668CDDCA3_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m3A6012F21D819DAC5509E432C1C9415DFDBF018A(Il2CppHString ___0_value) IL2CPP_OVERRIDE
	{
		return IVector_1_Append_m3A6012F21D819DAC5509E432C1C9415DFDBF018A_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_m7B7BBC6B0DDD787BFB9665B902B12B9E0292EBB9() IL2CPP_OVERRIDE
	{
		return IVector_1_RemoveAtEnd_m7B7BBC6B0DDD787BFB9665B902B12B9E0292EBB9_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_m9C6956CE769248F1AB0970FF8593A99E5217F2EA() IL2CPP_OVERRIDE
	{
		return IVector_1_Clear_m9C6956CE769248F1AB0970FF8593A99E5217F2EA_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_m6962492FBAA1A29CEDB13F86E0FF2FBB5A8E3462(uint32_t ___0_startIndex, uint32_t ___1_itemsArraySize, Il2CppHString* ___1_items, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_GetMany_m6962492FBAA1A29CEDB13F86E0FF2FBB5A8E3462_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_startIndex, ___1_itemsArraySize, ___1_items, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_m9B33C18C7923E55D0D063D76177692B98E5BC720(uint32_t ___0_itemsArraySize, Il2CppHString* ___0_items) IL2CPP_OVERRIDE
	{
		return IVector_1_ReplaceAll_m9B33C18C7923E55D0D063D76177692B98E5BC720_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_itemsArraySize, ___0_items);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m111BDB2A0B16875B357B2E971863262BB455E97D(IIterator_1_tE1E604E7A9EDA024E9D8838EA95E5BCA2D8EF648** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m111BDB2A0B16875B357B2E971863262BB455E97D_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C(IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m58EF279DBDFD39F1F59C3E0FC0E7AD131910EA64(IIterator_1_t04C72867FEDCC8C661CDD86E3029B3BB0AE70A95** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m58EF279DBDFD39F1F59C3E0FC0E7AD131910EA64_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m424D1A2AA3DB7A602178F89F11490E933A35CB65(IIterator_1_t525704805D94594DB030A232D9B0E793B9836E82** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m424D1A2AA3DB7A602178F89F11490E933A35CB65_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m8349D0F3D98618CEF76784EDB669793AC290FC98(uint32_t ___0_index, Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m8349D0F3D98618CEF76784EDB669793AC290FC98_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_mF14C201F406BF62B2C4A7622B5F49A2C0111E801(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_mF14C201F406BF62B2C4A7622B5F49A2C0111E801_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m2290CDCF972C31420971C5D6BC4483BDD832A060(Il2CppHString ___0_value, uint32_t* ___1_index, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_m2290CDCF972C31420971C5D6BC4483BDD832A060_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value, ___1_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m61F6A8D6570D491157FA66446381ED2454DF483C(uint32_t ___0_startIndex, uint32_t ___1_itemsArraySize, Il2CppHString* ___1_items, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m61F6A8D6570D491157FA66446381ED2454DF483C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_startIndex, ___1_itemsArraySize, ___1_items, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_mDA227019DDF2A9D2861B27ED32C865B867604223(uint32_t ___0_index, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_mDA227019DDF2A9D2861B27ED32C865B867604223_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m16DC683E3A92C0E6840B57EBFC92D3ADBF50202E(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m16DC683E3A92C0E6840B57EBFC92D3ADBF50202E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mD1B3ADF8F80828EF947882105A77BBC892263DA1(Il2CppIInspectable* ___0_value, uint32_t* ___1_index, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mD1B3ADF8F80828EF947882105A77BBC892263DA1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value, ___1_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m36C9D15C0138BF2C23D62E2457C09DC722A29DA9(uint32_t ___0_startIndex, uint32_t ___1_itemsArraySize, Il2CppIInspectable** ___1_items, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m36C9D15C0138BF2C23D62E2457C09DC722A29DA9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_startIndex, ___1_itemsArraySize, ___1_items, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m06FA29E1FCF7FDBC7162840F5A85668754386CA7(uint32_t ___0_index, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m06FA29E1FCF7FDBC7162840F5A85668754386CA7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m49A5F54ECEA3A530A946EAE88BF6DE88D5252FC5(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m49A5F54ECEA3A530A946EAE88BF6DE88D5252FC5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m4213C724A06255A3007BD30AC38AB2101AF79E4D(IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C* ___0_value, uint32_t* ___1_index, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_m4213C724A06255A3007BD30AC38AB2101AF79E4D_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value, ___1_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m4B7A5DDAD65F19B19716F5602968E3CACF383ADE(uint32_t ___0_startIndex, uint32_t ___1_itemsArraySize, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C** ___1_items, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m4B7A5DDAD65F19B19716F5602968E3CACF383ADE_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_startIndex, ___1_itemsArraySize, ___1_items, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m81E85B041078D45E14E2950CA6ECF03CACA77073(uint32_t ___0_index, IIterable_1_tB1E96EF3EE5CCEF046C86379C83E0A56B9D1A134** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m81E85B041078D45E14E2950CA6ECF03CACA77073_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_mC21CB2C4CC930F1F39C27536ED983621DB3FD6C8(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_mC21CB2C4CC930F1F39C27536ED983621DB3FD6C8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m3BF9A01965FBCE1779B9C1611FAAD5174FD1E5C7(IIterable_1_tB1E96EF3EE5CCEF046C86379C83E0A56B9D1A134* ___0_value, uint32_t* ___1_index, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_m3BF9A01965FBCE1779B9C1611FAAD5174FD1E5C7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value, ___1_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_mF17E4FF33C24D5B5494F5D27FC095C7AE9DB986A(uint32_t ___0_startIndex, uint32_t ___1_itemsArraySize, IIterable_1_tB1E96EF3EE5CCEF046C86379C83E0A56B9D1A134** ___1_items, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_mF17E4FF33C24D5B5494F5D27FC095C7AE9DB986A_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_startIndex, ___1_itemsArraySize, ___1_items, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9(uint32_t ___0_index, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F(IBindableVectorView_tCB96F9780FD45A9A323C8212A53608C8A13784B3** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907(Il2CppIInspectable* ___0_value, uint32_t* ___1_index, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value, ___1_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0(uint32_t ___0_index, Il2CppIInspectable* ___1_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, ___1_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431(uint32_t ___0_index, Il2CppIInspectable* ___1_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, ___1_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538(uint32_t ___0_index) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E(Il2CppIInspectable* ___0_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IReferenceArray_1_get_Value_m0CB3D26F3299DC2B77D43FD74E72F3A453E88841(uint32_t* comReturnValueArraySize, Il2CppHString** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* returnValue;
		try
		{
			returnValue = static_cast<StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*>(GetManagedObjectInline());
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		uint32_t _returnValue_marshaledArraySize = 0;
		Il2CppHString* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			_returnValue_marshaledArraySize = static_cast<uint32_t>((returnValue)->max_length);
			_returnValue_marshaled = il2cpp_codegen_marshal_allocate_array<Il2CppHString>(static_cast<int32_t>(_returnValue_marshaledArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(_returnValue_marshaledArraySize)); i++)
			{
				if ((returnValue)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)) == NULL)
				{
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("returnValue_item"), NULL);
				}
				(_returnValue_marshaled)[i] = il2cpp_codegen_create_hstring((returnValue)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
			}
		}
		else
		{
			_returnValue_marshaledArraySize = 0;
			_returnValue_marshaled = NULL;
		}

		*comReturnValueArraySize = _returnValue_marshaledArraySize;
		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_mCCFDCAF3EF47FD26636DF1752C7D0D0F04AF17E5(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		int32_t returnValue;
		try
		{
			returnValue = 1036;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_m5AA58745E3403667AD93842BD84E1BF3C56C6923(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		bool returnValue;
		try
		{
			returnValue = false;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_mA78B64B2D18688A14857A3385C11D3FBC3DCA0BF(uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("StringArray", "Byte");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_m893A5F46553C28727129D19D2C657BFD7A82C8EB(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("StringArray", "Int16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mFB50772016E5FDE5548016B10D8BF8F72BAEE51A(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("StringArray", "UInt16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_m81E687870E8D71B0B56C0F98B9CE901173541F0E(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("StringArray", "Int32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_m4242C2EB038EC37544C26EC11B33AD7CA1D0315B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("StringArray", "UInt32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m69E32181A31DEE4BEB361BB9E81FA3D949862FC9(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("StringArray", "Int64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_mAB342E494DC39A847B6430F96A8F02FB9F9774E4(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("StringArray", "UInt64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mABFDF8CFBAAFF7EEE22AF429911B22EC2DE5318A(float* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("StringArray", "Single");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mF1DDF1999B7F877B2BA609D09149288E345D45AE(double* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("StringArray", "Double");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m4B1428420CFDB7DD73878EAB4C8EFEBFBE026EEC(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("StringArray", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m89F937F65167C4337FD9E4A8B0A54369AE41D89D(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("StringArray", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_mD2C842F7378384AE6BC0A93033FEE0A85C9E1F28(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("StringArray", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m560A172386BD6DFC3DEB00D2DF3070EE67DF7B71(Guid_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("StringArray", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_mC3F8B04EF7625215AF66FB7B5C4EFDDC4163967D(DateTime_tB8F64A9E141FDC202144C06531C4E7D4B6C59CB0* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("StringArray", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m5B8EF6C6B2BE4370F48B6AA715236DDD019A657A(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("StringArray", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m6DE3D27C8479F2C44665EF1D86D76E004AC3B00D(Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("StringArray", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_mD27A291FCF475860FD4C5CC19C1C361902537662(Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("StringArray", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_mF069EFA36FB5E7469FABE6CC04471B4434E507AE(Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("StringArray", "Rect");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_mEEA85229904BFBD5DD63209A9F4858EA6A36C484(uint32_t* ___0_valueArraySize, uint8_t** ___0_value) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____0_value_empty = NULL;

		try
		{
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* managedArray = static_cast<StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			____0_value_empty = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, static_cast<uint32_t>(arrayLength));
			for (il2cpp_array_size_t i = 0; i < arrayLength; i++)
			{
				String_t* item = (managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
				try
				{
					uint8_t il2cppRetVal;
					il2cppRetVal = String_System_IConvertible_ToByte_m2293F93CB7B3C12A6DE6F9B265AECB51741E2A88(item, NULL, NULL);
					(____0_value_empty)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), il2cppRetVal);
				}
				catch (const Il2CppExceptionWrapper& ex)
				{
					if (IsInst((RuntimeObject*)ex.ex, OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var))
					{
						return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion((managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), "StringArray", "String", "Byte", i);
					}

					return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("StringArray", "String", "Byte", i);
				}
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		if (____0_value_empty != NULL)
		{
			*___0_valueArraySize = static_cast<uint32_t>((____0_value_empty)->max_length);
			*___0_value = il2cpp_codegen_marshal_allocate_array<uint8_t>(static_cast<int32_t>(*___0_valueArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___0_valueArraySize)); i++)
			{
				(*___0_value)[i] = (____0_value_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___0_valueArraySize = 0;
			*___0_value = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_mAF964E8DCE5EE8D9703DB63D5181CD92C344FAA9(uint32_t* ___0_valueArraySize, int16_t** ___0_value) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ____0_value_empty = NULL;

		try
		{
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* managedArray = static_cast<StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			____0_value_empty = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, static_cast<uint32_t>(arrayLength));
			for (il2cpp_array_size_t i = 0; i < arrayLength; i++)
			{
				String_t* item = (managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
				try
				{
					int16_t il2cppRetVal;
					il2cppRetVal = String_System_IConvertible_ToInt16_mFFA024540C591548774D62A2550822AF15A4D64F(item, NULL, NULL);
					(____0_value_empty)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), il2cppRetVal);
				}
				catch (const Il2CppExceptionWrapper& ex)
				{
					if (IsInst((RuntimeObject*)ex.ex, OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var))
					{
						return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion((managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), "StringArray", "String", "Int16", i);
					}

					return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("StringArray", "String", "Int16", i);
				}
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		if (____0_value_empty != NULL)
		{
			*___0_valueArraySize = static_cast<uint32_t>((____0_value_empty)->max_length);
			*___0_value = il2cpp_codegen_marshal_allocate_array<int16_t>(static_cast<int32_t>(*___0_valueArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___0_valueArraySize)); i++)
			{
				(*___0_value)[i] = (____0_value_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___0_valueArraySize = 0;
			*___0_value = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_mE6ECF01E37BD858FF14518C8EC0605D1BFD4CAC6(uint32_t* ___0_valueArraySize, uint16_t** ___0_value) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ____0_value_empty = NULL;

		try
		{
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* managedArray = static_cast<StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			____0_value_empty = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, static_cast<uint32_t>(arrayLength));
			for (il2cpp_array_size_t i = 0; i < arrayLength; i++)
			{
				String_t* item = (managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
				try
				{
					uint16_t il2cppRetVal;
					il2cppRetVal = String_System_IConvertible_ToUInt16_mA8B7D9A52530436A2DD508D9A24C9C4DF4F8D078(item, NULL, NULL);
					(____0_value_empty)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), il2cppRetVal);
				}
				catch (const Il2CppExceptionWrapper& ex)
				{
					if (IsInst((RuntimeObject*)ex.ex, OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var))
					{
						return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion((managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), "StringArray", "String", "UInt16", i);
					}

					return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("StringArray", "String", "UInt16", i);
				}
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		if (____0_value_empty != NULL)
		{
			*___0_valueArraySize = static_cast<uint32_t>((____0_value_empty)->max_length);
			*___0_value = il2cpp_codegen_marshal_allocate_array<uint16_t>(static_cast<int32_t>(*___0_valueArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___0_valueArraySize)); i++)
			{
				(*___0_value)[i] = (____0_value_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___0_valueArraySize = 0;
			*___0_value = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_m27D54E06B02528F7056A07F224A1552A36FDEB46(uint32_t* ___0_valueArraySize, int32_t** ___0_value) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____0_value_empty = NULL;

		try
		{
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* managedArray = static_cast<StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			____0_value_empty = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, static_cast<uint32_t>(arrayLength));
			for (il2cpp_array_size_t i = 0; i < arrayLength; i++)
			{
				String_t* item = (managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
				try
				{
					int32_t il2cppRetVal;
					il2cppRetVal = String_System_IConvertible_ToInt32_m0B4C286CD713CCB2E4A8B38F38E73B39A1612DFB(item, NULL, NULL);
					(____0_value_empty)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), il2cppRetVal);
				}
				catch (const Il2CppExceptionWrapper& ex)
				{
					if (IsInst((RuntimeObject*)ex.ex, OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var))
					{
						return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion((managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), "StringArray", "String", "Int32", i);
					}

					return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("StringArray", "String", "Int32", i);
				}
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		if (____0_value_empty != NULL)
		{
			*___0_valueArraySize = static_cast<uint32_t>((____0_value_empty)->max_length);
			*___0_value = il2cpp_codegen_marshal_allocate_array<int32_t>(static_cast<int32_t>(*___0_valueArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___0_valueArraySize)); i++)
			{
				(*___0_value)[i] = (____0_value_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___0_valueArraySize = 0;
			*___0_value = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_mAF7ECA68A945A7AA0F35D3A3962A4EA49954CEAE(uint32_t* ___0_valueArraySize, uint32_t** ___0_value) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____0_value_empty = NULL;

		try
		{
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* managedArray = static_cast<StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			____0_value_empty = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, static_cast<uint32_t>(arrayLength));
			for (il2cpp_array_size_t i = 0; i < arrayLength; i++)
			{
				String_t* item = (managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
				try
				{
					uint32_t il2cppRetVal;
					il2cppRetVal = String_System_IConvertible_ToUInt32_m3E4B36C611D4070BD8FD89E8A33E913368D0095A(item, NULL, NULL);
					(____0_value_empty)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), il2cppRetVal);
				}
				catch (const Il2CppExceptionWrapper& ex)
				{
					if (IsInst((RuntimeObject*)ex.ex, OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var))
					{
						return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion((managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), "StringArray", "String", "UInt32", i);
					}

					return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("StringArray", "String", "UInt32", i);
				}
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		if (____0_value_empty != NULL)
		{
			*___0_valueArraySize = static_cast<uint32_t>((____0_value_empty)->max_length);
			*___0_value = il2cpp_codegen_marshal_allocate_array<uint32_t>(static_cast<int32_t>(*___0_valueArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___0_valueArraySize)); i++)
			{
				(*___0_value)[i] = (____0_value_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___0_valueArraySize = 0;
			*___0_value = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_mDC9606845A993ED32A95F889C71B67C8A05DF4BC(uint32_t* ___0_valueArraySize, int64_t** ___0_value) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ____0_value_empty = NULL;

		try
		{
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* managedArray = static_cast<StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			____0_value_empty = (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)SZArrayNew(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var, static_cast<uint32_t>(arrayLength));
			for (il2cpp_array_size_t i = 0; i < arrayLength; i++)
			{
				String_t* item = (managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
				try
				{
					int64_t il2cppRetVal;
					il2cppRetVal = String_System_IConvertible_ToInt64_mB5A02609C8B1CB8C9C6DCA5F11794F0F3D1E60EE(item, NULL, NULL);
					(____0_value_empty)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), il2cppRetVal);
				}
				catch (const Il2CppExceptionWrapper& ex)
				{
					if (IsInst((RuntimeObject*)ex.ex, OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var))
					{
						return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion((managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), "StringArray", "String", "Int64", i);
					}

					return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("StringArray", "String", "Int64", i);
				}
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		if (____0_value_empty != NULL)
		{
			*___0_valueArraySize = static_cast<uint32_t>((____0_value_empty)->max_length);
			*___0_value = il2cpp_codegen_marshal_allocate_array<int64_t>(static_cast<int32_t>(*___0_valueArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___0_valueArraySize)); i++)
			{
				(*___0_value)[i] = (____0_value_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___0_valueArraySize = 0;
			*___0_value = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_mB59E8769BB20C16BBAC4D08A3861B7019B9D2514(uint32_t* ___0_valueArraySize, uint64_t** ___0_value) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ____0_value_empty = NULL;

		try
		{
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* managedArray = static_cast<StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			____0_value_empty = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, static_cast<uint32_t>(arrayLength));
			for (il2cpp_array_size_t i = 0; i < arrayLength; i++)
			{
				String_t* item = (managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
				try
				{
					uint64_t il2cppRetVal;
					il2cppRetVal = String_System_IConvertible_ToUInt64_mDBF5B0D9A0EF5E943AE2B20BEF64E20FE501788E(item, NULL, NULL);
					(____0_value_empty)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), il2cppRetVal);
				}
				catch (const Il2CppExceptionWrapper& ex)
				{
					if (IsInst((RuntimeObject*)ex.ex, OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var))
					{
						return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion((managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), "StringArray", "String", "UInt64", i);
					}

					return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("StringArray", "String", "UInt64", i);
				}
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		if (____0_value_empty != NULL)
		{
			*___0_valueArraySize = static_cast<uint32_t>((____0_value_empty)->max_length);
			*___0_value = il2cpp_codegen_marshal_allocate_array<uint64_t>(static_cast<int32_t>(*___0_valueArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___0_valueArraySize)); i++)
			{
				(*___0_value)[i] = (____0_value_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___0_valueArraySize = 0;
			*___0_value = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_mDF81FCE06AA984ACED460A1989102C889F64393A(uint32_t* ___0_valueArraySize, float** ___0_value) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ____0_value_empty = NULL;

		try
		{
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* managedArray = static_cast<StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			____0_value_empty = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, static_cast<uint32_t>(arrayLength));
			for (il2cpp_array_size_t i = 0; i < arrayLength; i++)
			{
				String_t* item = (managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
				try
				{
					float il2cppRetVal;
					il2cppRetVal = String_System_IConvertible_ToSingle_mD8D1921B9DCA1756B8E24B97EA8E7F93D7C6BEE2(item, NULL, NULL);
					(____0_value_empty)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), il2cppRetVal);
				}
				catch (const Il2CppExceptionWrapper& ex)
				{
					if (IsInst((RuntimeObject*)ex.ex, OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var))
					{
						return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion((managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), "StringArray", "String", "Single", i);
					}

					return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("StringArray", "String", "Single", i);
				}
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		if (____0_value_empty != NULL)
		{
			*___0_valueArraySize = static_cast<uint32_t>((____0_value_empty)->max_length);
			*___0_value = il2cpp_codegen_marshal_allocate_array<float>(static_cast<int32_t>(*___0_valueArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___0_valueArraySize)); i++)
			{
				(*___0_value)[i] = (____0_value_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___0_valueArraySize = 0;
			*___0_value = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m1D5F8B05C90C3FE9B82785940DEA3A3EDD6F2EC5(uint32_t* ___0_valueArraySize, double** ___0_value) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ____0_value_empty = NULL;

		try
		{
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* managedArray = static_cast<StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			____0_value_empty = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, static_cast<uint32_t>(arrayLength));
			for (il2cpp_array_size_t i = 0; i < arrayLength; i++)
			{
				String_t* item = (managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
				try
				{
					double il2cppRetVal;
					il2cppRetVal = String_System_IConvertible_ToDouble_m2C051DC383E1D6BE9E30B5DEC376B043B4B9E69C(item, NULL, NULL);
					(____0_value_empty)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), il2cppRetVal);
				}
				catch (const Il2CppExceptionWrapper& ex)
				{
					if (IsInst((RuntimeObject*)ex.ex, OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var))
					{
						return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion((managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), "StringArray", "String", "Double", i);
					}

					return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("StringArray", "String", "Double", i);
				}
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		if (____0_value_empty != NULL)
		{
			*___0_valueArraySize = static_cast<uint32_t>((____0_value_empty)->max_length);
			*___0_value = il2cpp_codegen_marshal_allocate_array<double>(static_cast<int32_t>(*___0_valueArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___0_valueArraySize)); i++)
			{
				(*___0_value)[i] = (____0_value_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___0_valueArraySize = 0;
			*___0_value = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_mB80F78E0307BC79A3FDF3502A94F8B9D4BBD686A(uint32_t* ___0_valueArraySize, Il2CppChar** ___0_value) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("StringArray", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_mF47B2C131AAB62D7EDB2DEE4713E553291E5583A(uint32_t* ___0_valueArraySize, bool** ___0_value) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("StringArray", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m0F0B933A1405F7B389626D274F3BB20CA2255E40(uint32_t* ___0_valueArraySize, Il2CppHString** ___0_value) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____0_value_empty = NULL;

		try
		{
			____0_value_empty = static_cast<StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*>(GetManagedObjectInline());
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		if (____0_value_empty != NULL)
		{
			*___0_valueArraySize = static_cast<uint32_t>((____0_value_empty)->max_length);
			*___0_value = il2cpp_codegen_marshal_allocate_array<Il2CppHString>(static_cast<int32_t>(*___0_valueArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___0_valueArraySize)); i++)
			{
				if ((____0_value_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)) == NULL)
				{
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("value"), NULL);
				}
				(*___0_value)[i] = il2cpp_codegen_create_hstring((____0_value_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
			}
		}
		else
		{
			*___0_valueArraySize = 0;
			*___0_value = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m9B1D04C961C0519436B081BAE72B6FE53D6204D6(uint32_t* ___0_valueArraySize, Il2CppIInspectable*** ___0_value) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("StringArray", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mD0732FEB8CB64CA04C55CEEE8386EF3FDA97BED4(uint32_t* ___0_valueArraySize, Guid_t** ___0_value) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* ____0_value_empty = NULL;

		try
		{
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* managedArray = static_cast<StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			____0_value_empty = (GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42*)SZArrayNew(GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42_il2cpp_TypeInfo_var, static_cast<uint32_t>(arrayLength));
			for (il2cpp_array_size_t i = 0; i < arrayLength; i++)
			{
				String_t* item = (managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
				try
				{
					Guid_t il2cppRetVal;
					il2cppRetVal = Guid_Parse_mC068B0047F86921D817F600C75C6EBFE15A461D0(item, NULL);
					(____0_value_empty)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), il2cppRetVal);
				}
				catch (const Il2CppExceptionWrapper&)
				{
					return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("StringArray", "String", "Guid", i);
				}
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		if (____0_value_empty != NULL)
		{
			*___0_valueArraySize = static_cast<uint32_t>((____0_value_empty)->max_length);
			*___0_value = il2cpp_codegen_marshal_allocate_array<Guid_t>(static_cast<int32_t>(*___0_valueArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___0_valueArraySize)); i++)
			{
				(*___0_value)[i] = (____0_value_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___0_valueArraySize = 0;
			*___0_value = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_m54798F11C9EA77AC614259146DF99355026ED0A9(uint32_t* ___0_valueArraySize, DateTime_tB8F64A9E141FDC202144C06531C4E7D4B6C59CB0** ___0_value) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("StringArray", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mDF0D9EC3E55742BA1132885596FDF3F478E8AC2A(uint32_t* ___0_valueArraySize, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A** ___0_value) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("StringArray", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_m9ECDF8442D5EF1FCB65095A1AC779596920F9890(uint32_t* ___0_valueArraySize, Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18** ___0_value) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("StringArray", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m57C92EBB76BF7B6D400D8045192ED76ED41BC403(uint32_t* ___0_valueArraySize, Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05** ___0_value) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("StringArray", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_mC4F618B7AEF3B6AB1BB2AFFEED0C2BBB28E48178(uint32_t* ___0_valueArraySize, Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48** ___0_value) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("StringArray", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_ComCallableWrapper(obj));
}

struct StringBuilderU5BU5D_t8066814F873F1C7DE48C891911DC277608AF3EC7_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<StringBuilderU5BU5D_t8066814F873F1C7DE48C891911DC277608AF3EC7_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IVectorView_1_t80C57016D46A1954BF56BD02FC3DAA7C0D85FFD6, IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A
{
	inline StringBuilderU5BU5D_t8066814F873F1C7DE48C891911DC277608AF3EC7_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<StringBuilderU5BU5D_t8066814F873F1C7DE48C891911DC277608AF3EC7_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t80C57016D46A1954BF56BD02FC3DAA7C0D85FFD6::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t80C57016D46A1954BF56BD02FC3DAA7C0D85FFD6*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[2] = IVectorView_1_t80C57016D46A1954BF56BD02FC3DAA7C0D85FFD6::IID;
		interfaceIds[3] = IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C(IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_mDA227019DDF2A9D2861B27ED32C865B867604223(uint32_t ___0_index, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_mDA227019DDF2A9D2861B27ED32C865B867604223_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m16DC683E3A92C0E6840B57EBFC92D3ADBF50202E(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m16DC683E3A92C0E6840B57EBFC92D3ADBF50202E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mD1B3ADF8F80828EF947882105A77BBC892263DA1(Il2CppIInspectable* ___0_value, uint32_t* ___1_index, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mD1B3ADF8F80828EF947882105A77BBC892263DA1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value, ___1_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m36C9D15C0138BF2C23D62E2457C09DC722A29DA9(uint32_t ___0_startIndex, uint32_t ___1_itemsArraySize, Il2CppIInspectable** ___1_items, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m36C9D15C0138BF2C23D62E2457C09DC722A29DA9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_startIndex, ___1_itemsArraySize, ___1_items, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9(uint32_t ___0_index, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F(IBindableVectorView_tCB96F9780FD45A9A323C8212A53608C8A13784B3** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907(Il2CppIInspectable* ___0_value, uint32_t* ___1_index, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value, ___1_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0(uint32_t ___0_index, Il2CppIInspectable* ___1_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, ___1_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431(uint32_t ___0_index, Il2CppIInspectable* ___1_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, ___1_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538(uint32_t ___0_index) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E(Il2CppIInspectable* ___0_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_StringBuilderU5BU5D_t8066814F873F1C7DE48C891911DC277608AF3EC7(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(StringBuilderU5BU5D_t8066814F873F1C7DE48C891911DC277608AF3EC7_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) StringBuilderU5BU5D_t8066814F873F1C7DE48C891911DC277608AF3EC7_ComCallableWrapper(obj));
}
