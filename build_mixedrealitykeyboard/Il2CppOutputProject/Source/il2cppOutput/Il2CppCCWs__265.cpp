#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif



#include "vm/CachedCCWBase.h"
#include "utils/New.h"


struct Dictionary_2_tEBCC19EF04541DFE092A495F8C364BF917DA466D;
struct Task_1_tB493F74D58DB1761E087206849D953E99D07600B;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct NodeDataU5BU5D_t1945F048F8DECB62636A155E1182995E8FAA9610;
struct ParsingStateU5BU5D_t6DBF0A43B3A9658C0218546F90EC15DCF17F3E29;
struct Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC;
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
struct IDtdEntityInfo_t554100CF6FA38D7516CEFDDA083D02E64A2D5C27;
struct IDtdInfo_tD6983F7C3E35C4997BE28F42ED50EF866DAE14F8;
struct IValidationEventHandling_t5929D7539D965D446556F7740F36A2BF7C6CC57E;
struct IncrementalReadDecoder_t55EB8A2FB2A5FFCB1B68AE7F784C4E00DCE1E55B;
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
struct String_t;
struct StringBuilder_t;
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7;
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
struct XmlNameTable_tBDBAACFF3DB40A8E6AF3BDC11F0FF166CF11ABB8;
struct XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F;
struct XmlParserContext_t843976A0319F7334808DCCAAA4F36EAB41A92F3B;
struct XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD;
struct XmlResolver_tE25A33DFCB87A939D11BC8543970F6857AEC3DCF;
struct XmlTextReaderImpl_t5F48FDC8E88C9E27593266F6C660B3973AE2167B;
struct LaterInitParam_tF074262B62208D4086044C17F89F18AC8598DBA6;
struct NodeData_tEB6A7F9E5147217F637373A7B7644BE377D539FF;
struct OnDefaultAttributeUseDelegate_tBA6F77520C9B31FE1BD169F24584BD312F5AD499;
struct XmlContext_tE28147847949C52356E6B899971C50E1444FB8EE;

struct IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct NOVTABLE IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) = 0;
};
struct NOVTABLE IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() = 0;
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
struct XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF  : public RuntimeObject
{
	XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___parentNode;
};
struct XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD  : public RuntimeObject
{
};
struct LineInfo_t415DCF0EAD0FB3806F779BA170EC9058E47CCB24 
{
	int32_t ___lineNo;
	int32_t ___linePos;
};
struct XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___charProperties;
};
struct XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_marshaled_pinvoke
{
	Il2CppSafeArray* ___charProperties;
};
struct XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_marshaled_com
{
	Il2CppSafeArray* ___charProperties;
};
struct XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C  : public XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF
{
	XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C* ___next;
};
struct XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B  : public XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD
{
	XmlTextReaderImpl_t5F48FDC8E88C9E27593266F6C660B3973AE2167B* ___impl;
};
struct ParsingState_tF0FABA16483FCC2DB710460D11CD79D35C4E2886 
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___chars;
	int32_t ___charPos;
	int32_t ___charsUsed;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___encoding;
	bool ___appendMode;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream;
	Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC* ___decoder;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes;
	int32_t ___bytePos;
	int32_t ___bytesUsed;
	TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___textReader;
	int32_t ___lineNo;
	int32_t ___lineStartPos;
	String_t* ___baseUriStr;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___baseUri;
	bool ___isEof;
	bool ___isStreamEof;
	RuntimeObject* ___entity;
	int32_t ___entityId;
	bool ___eolNormalized;
	bool ___entityResolvedManually;
};
struct ParsingState_tF0FABA16483FCC2DB710460D11CD79D35C4E2886_marshaled_pinvoke
{
	uint8_t* ___chars;
	int32_t ___charPos;
	int32_t ___charsUsed;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___encoding;
	int32_t ___appendMode;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream;
	Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC* ___decoder;
	Il2CppSafeArray* ___bytes;
	int32_t ___bytePos;
	int32_t ___bytesUsed;
	TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___textReader;
	int32_t ___lineNo;
	int32_t ___lineStartPos;
	char* ___baseUriStr;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___baseUri;
	int32_t ___isEof;
	int32_t ___isStreamEof;
	RuntimeObject* ___entity;
	int32_t ___entityId;
	int32_t ___eolNormalized;
	int32_t ___entityResolvedManually;
};
struct ParsingState_tF0FABA16483FCC2DB710460D11CD79D35C4E2886_marshaled_com
{
	uint8_t* ___chars;
	int32_t ___charPos;
	int32_t ___charsUsed;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___encoding;
	int32_t ___appendMode;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream;
	Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC* ___decoder;
	Il2CppSafeArray* ___bytes;
	int32_t ___bytePos;
	int32_t ___bytesUsed;
	TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___textReader;
	int32_t ___lineNo;
	int32_t ___lineStartPos;
	Il2CppChar* ___baseUriStr;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___baseUri;
	int32_t ___isEof;
	int32_t ___isStreamEof;
	RuntimeObject* ___entity;
	int32_t ___entityId;
	int32_t ___eolNormalized;
	int32_t ___entityResolvedManually;
};
struct XmlCharacterData_t95604E2FDB152E89A58F9D51414A2903012E758B  : public XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C
{
	String_t* ___data;
};
struct XmlTextReaderImpl_t5F48FDC8E88C9E27593266F6C660B3973AE2167B  : public XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD
{
	bool ___useAsync;
	LaterInitParam_tF074262B62208D4086044C17F89F18AC8598DBA6* ___laterInitParam;
	XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3 ___xmlCharType;
	ParsingState_tF0FABA16483FCC2DB710460D11CD79D35C4E2886 ___ps;
	int32_t ___parsingFunction;
	int32_t ___nextParsingFunction;
	int32_t ___nextNextParsingFunction;
	NodeDataU5BU5D_t1945F048F8DECB62636A155E1182995E8FAA9610* ___nodes;
	NodeData_tEB6A7F9E5147217F637373A7B7644BE377D539FF* ___curNode;
	int32_t ___index;
	int32_t ___curAttrIndex;
	int32_t ___attrCount;
	int32_t ___attrHashtable;
	int32_t ___attrDuplWalkCount;
	bool ___attrNeedNamespaceLookup;
	bool ___fullAttrCleanup;
	NodeDataU5BU5D_t1945F048F8DECB62636A155E1182995E8FAA9610* ___attrDuplSortingArray;
	XmlNameTable_tBDBAACFF3DB40A8E6AF3BDC11F0FF166CF11ABB8* ___nameTable;
	bool ___nameTableFromSettings;
	XmlResolver_tE25A33DFCB87A939D11BC8543970F6857AEC3DCF* ___xmlResolver;
	String_t* ___url;
	bool ___normalize;
	bool ___supportNamespaces;
	int32_t ___whitespaceHandling;
	int32_t ___dtdProcessing;
	int32_t ___entityHandling;
	bool ___ignorePIs;
	bool ___ignoreComments;
	bool ___checkCharacters;
	int32_t ___lineNumberOffset;
	int32_t ___linePositionOffset;
	bool ___closeInput;
	int64_t ___maxCharactersInDocument;
	int64_t ___maxCharactersFromEntities;
	bool ___v1Compat;
	XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___namespaceManager;
	String_t* ___lastPrefix;
	XmlContext_tE28147847949C52356E6B899971C50E1444FB8EE* ___xmlContext;
	ParsingStateU5BU5D_t6DBF0A43B3A9658C0218546F90EC15DCF17F3E29* ___parsingStatesStack;
	int32_t ___parsingStatesStackTop;
	String_t* ___reportedBaseUri;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___reportedEncoding;
	RuntimeObject* ___dtdInfo;
	int32_t ___fragmentType;
	XmlParserContext_t843976A0319F7334808DCCAAA4F36EAB41A92F3B* ___fragmentParserContext;
	bool ___fragment;
	IncrementalReadDecoder_t55EB8A2FB2A5FFCB1B68AE7F784C4E00DCE1E55B* ___incReadDecoder;
	int32_t ___incReadState;
	LineInfo_t415DCF0EAD0FB3806F779BA170EC9058E47CCB24 ___incReadLineInfo;
	int32_t ___incReadDepth;
	int32_t ___incReadLeftStartPos;
	int32_t ___incReadLeftEndPos;
	int32_t ___attributeValueBaseEntityId;
	bool ___emptyEntityInAttributeResolved;
	RuntimeObject* ___validationEventHandling;
	OnDefaultAttributeUseDelegate_tBA6F77520C9B31FE1BD169F24584BD312F5AD499* ___onDefaultAttributeUse;
	bool ___validatingReaderCompatFlag;
	bool ___addDefaultAttributesAndNormalize;
	StringBuilder_t* ___stringBuilder;
	bool ___rootElementParsed;
	bool ___standalone;
	int32_t ___nextEntityId;
	int32_t ___parsingMode;
	int32_t ___readState;
	RuntimeObject* ___lastEntity;
	bool ___afterResetState;
	int32_t ___documentStartBytePos;
	int32_t ___readValueOffset;
	int64_t ___charactersInDocument;
	int64_t ___charactersFromEntities;
	Dictionary_2_tEBCC19EF04541DFE092A495F8C364BF917DA466D* ___currentEntities;
	bool ___disableUndeclaredEntityCheck;
	XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD* ___outerReader;
	bool ___xmlResolverIsSet;
	String_t* ___Xml;
	String_t* ___XmlNs;
	Task_1_tB493F74D58DB1761E087206849D953E99D07600B* ___parseText_dummyTask;
};
struct XmlText_t30AEB94C64DEFEE255D907869C96FDD25C6E812A  : public XmlCharacterData_t95604E2FDB152E89A58F9D51414A2903012E758B
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue);
il2cpp_hresult_t IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(RuntimeObject* __this);



struct XmlText_t30AEB94C64DEFEE255D907869C96FDD25C6E812A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<XmlText_t30AEB94C64DEFEE255D907869C96FDD25C6E812A_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline XmlText_t30AEB94C64DEFEE255D907869C96FDD25C6E812A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<XmlText_t30AEB94C64DEFEE255D907869C96FDD25C6E812A_ComCallableWrapper>(obj) {}

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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 1;
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
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_XmlText_t30AEB94C64DEFEE255D907869C96FDD25C6E812A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(XmlText_t30AEB94C64DEFEE255D907869C96FDD25C6E812A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) XmlText_t30AEB94C64DEFEE255D907869C96FDD25C6E812A_ComCallableWrapper(obj));
}

struct XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B_ComCallableWrapper(obj));
}

struct XmlTextReaderImpl_t5F48FDC8E88C9E27593266F6C660B3973AE2167B_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<XmlTextReaderImpl_t5F48FDC8E88C9E27593266F6C660B3973AE2167B_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline XmlTextReaderImpl_t5F48FDC8E88C9E27593266F6C660B3973AE2167B_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<XmlTextReaderImpl_t5F48FDC8E88C9E27593266F6C660B3973AE2167B_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_XmlTextReaderImpl_t5F48FDC8E88C9E27593266F6C660B3973AE2167B(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(XmlTextReaderImpl_t5F48FDC8E88C9E27593266F6C660B3973AE2167B_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) XmlTextReaderImpl_t5F48FDC8E88C9E27593266F6C660B3973AE2167B_ComCallableWrapper(obj));
}
