﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif



#include "vm/CachedCCWBase.h"
#include "utils/New.h"


struct IEqualityComparer_1_t0C79004BFE79D9DBCE6C2250109D31D468A9A68E;
struct Tables_t90180AAB5367C2D544AF536F7E5F7ACFE0BD2080;
struct Tables_t348810449F4A7D1C7939B13678E6F8493FA7F7A9;
struct Tables_tCB63226BA2EFBE0D669C362CD19286690447301B;
struct Tables_t316BB64324D26FA8258618817399CACAC8488FC7;
struct Tables_t33DE1B7508C6FBE7BCA91D0F285B76FD5F466DA1;
struct Tables_t112810F270DDBE5F8CE7B4EE8DB706CB5AAF0359;
struct Tables_t6037A68AF76F1F1F11530A3316850BA0C19358EC;
struct KeyValuePair_2U5BU5D_t02DD6373F9956C79B49C82246E05638F12263C5D;
struct KeyValuePair_2U5BU5D_tA36C0D7EC5F3A8B385E3AB98D0576062752143D0;
struct KeyValuePair_2U5BU5D_t30DA52B66CCE40D610CC977859079EFD69FB5654;
struct KeyValuePair_2U5BU5D_tCE588BEDBCF8B165F2080DFD16E96DF3B5A982E7;
struct KeyValuePair_2U5BU5D_t89BDB5F8E689502435DA4BF31060C173010D88AC;
struct KeyValuePair_2U5BU5D_t086EEED0D2682527F9E275FA2D0AA1336633ACAB;
struct KeyValuePair_2U5BU5D_t146564E6A49A4F28A57A5ED01FB1A805D98D62E6;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

struct IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F;
struct IIterator_1_t1EAD905926D7A8250F1D3FA0DB0CCC04F7CA9A01;
struct IIterator_1_t4106D731889FB122685B47C537BFA2CDD0CBF65E;
struct IIterator_1_t7D2407E249CC5C7625BA53BA46FD8B945CD3076D;
struct IMapView_2_t39B008160454143EFF228DFF19D546A07BABF7B2;
struct IMapView_2_t7F7BCC76181FFC9B7918670A6EAF981F28C849F8;
struct IMapView_2_tC381E6C9A0EAA8BCED522DECA7E05AAEADD27AB2;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct NOVTABLE IIterable_1_t2A910923889829F909CCCDAA5B96C72E8DDFBA5B : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m53DDD6EFCCEB70ED6F36F8A2986853F9B7389AA2(IIterator_1_t1EAD905926D7A8250F1D3FA0DB0CCC04F7CA9A01** comReturnValue) = 0;
};
struct NOVTABLE IIterable_1_t7CE0DCCCC4659DCDD6691E7F4FBF8426947BEFC0 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mA15AD5FF06E5B8545EE454447E1B71398E1FB9E2(IIterator_1_t4106D731889FB122685B47C537BFA2CDD0CBF65E** comReturnValue) = 0;
};
struct NOVTABLE IIterable_1_t9F4DC3B84BDB9D9DA5CEB3D25A6AB66FBF0DABC2 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m97D2BA387AF31C2A9E560115D31CCF381A239A43(IIterator_1_t7D2407E249CC5C7625BA53BA46FD8B945CD3076D** comReturnValue) = 0;
};
struct NOVTABLE IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) = 0;
};
struct ConcurrentDictionary_2_t01EC89866F72177CED9A0249F17948367F151834  : public RuntimeObject
{
	Tables_t90180AAB5367C2D544AF536F7E5F7ACFE0BD2080* ____tables;
	RuntimeObject* ____comparer;
	bool ____growLockArray;
	int32_t ____budget;
	KeyValuePair_2U5BU5D_t02DD6373F9956C79B49C82246E05638F12263C5D* ____serializationArray;
	int32_t ____serializationConcurrencyLevel;
	int32_t ____serializationCapacity;
};
struct ConcurrentDictionary_2_t5AC35AA6AEE255D39813A0173F88D47473E3C1AC  : public RuntimeObject
{
	Tables_t348810449F4A7D1C7939B13678E6F8493FA7F7A9* ____tables;
	RuntimeObject* ____comparer;
	bool ____growLockArray;
	int32_t ____budget;
	KeyValuePair_2U5BU5D_tA36C0D7EC5F3A8B385E3AB98D0576062752143D0* ____serializationArray;
	int32_t ____serializationConcurrencyLevel;
	int32_t ____serializationCapacity;
};
struct ConcurrentDictionary_2_t9760FACA5262BDBB7864636E86D42620BA37AFD2  : public RuntimeObject
{
	Tables_tCB63226BA2EFBE0D669C362CD19286690447301B* ____tables;
	RuntimeObject* ____comparer;
	bool ____growLockArray;
	int32_t ____budget;
	KeyValuePair_2U5BU5D_t30DA52B66CCE40D610CC977859079EFD69FB5654* ____serializationArray;
	int32_t ____serializationConcurrencyLevel;
	int32_t ____serializationCapacity;
};
struct ConcurrentDictionary_2_t889EC4BD07B5DCB6087E2226ACC8A5E5590E48AB  : public RuntimeObject
{
	Tables_t316BB64324D26FA8258618817399CACAC8488FC7* ____tables;
	RuntimeObject* ____comparer;
	bool ____growLockArray;
	int32_t ____budget;
	KeyValuePair_2U5BU5D_tCE588BEDBCF8B165F2080DFD16E96DF3B5A982E7* ____serializationArray;
	int32_t ____serializationConcurrencyLevel;
	int32_t ____serializationCapacity;
};
struct ConcurrentDictionary_2_tD35AF7F258B58EA50992681475C37E063603C5AC  : public RuntimeObject
{
	Tables_t33DE1B7508C6FBE7BCA91D0F285B76FD5F466DA1* ____tables;
	RuntimeObject* ____comparer;
	bool ____growLockArray;
	int32_t ____budget;
	KeyValuePair_2U5BU5D_t89BDB5F8E689502435DA4BF31060C173010D88AC* ____serializationArray;
	int32_t ____serializationConcurrencyLevel;
	int32_t ____serializationCapacity;
};
struct ConcurrentDictionary_2_t55D23D8213078AB94691B414656BE0C3CF0F82F1  : public RuntimeObject
{
	Tables_t112810F270DDBE5F8CE7B4EE8DB706CB5AAF0359* ____tables;
	RuntimeObject* ____comparer;
	bool ____growLockArray;
	int32_t ____budget;
	KeyValuePair_2U5BU5D_t086EEED0D2682527F9E275FA2D0AA1336633ACAB* ____serializationArray;
	int32_t ____serializationConcurrencyLevel;
	int32_t ____serializationCapacity;
};
struct ConcurrentDictionary_2_tE5A8639D8AE0AF65ED6A8B7C1089E9F12ADD7B91  : public RuntimeObject
{
	Tables_t6037A68AF76F1F1F11530A3316850BA0C19358EC* ____tables;
	RuntimeObject* ____comparer;
	bool ____growLockArray;
	int32_t ____budget;
	KeyValuePair_2U5BU5D_t146564E6A49A4F28A57A5ED01FB1A805D98D62E6* ____serializationArray;
	int32_t ____serializationConcurrencyLevel;
	int32_t ____serializationCapacity;
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
struct IntPtr_t 
{
	void* ___m_value;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct NOVTABLE IMapView_2_t39B008160454143EFF228DFF19D546A07BABF7B2 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_mA84FC1A8BB6314A7E1C0F5080A969E10BC17B953(Il2CppWindowsRuntimeTypeName ___0_key, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_mDEDF0F55E9B27438BF3D0FDDB1A1CE45BF575B92(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m4ACE6CE4E91FD63D2763EA90943749F5614F4A9A(Il2CppWindowsRuntimeTypeName ___0_key, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_mE390A2ACFB459C6528FA5F147F002B5C963DC724(IMapView_2_t39B008160454143EFF228DFF19D546A07BABF7B2** ___0_first, IMapView_2_t39B008160454143EFF228DFF19D546A07BABF7B2** ___1_second) = 0;
};
struct NOVTABLE IMapView_2_t7F7BCC76181FFC9B7918670A6EAF981F28C849F8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m88F61EBAD76099089250B48FFE732428232F980D(Il2CppWindowsRuntimeTypeName ___0_key, Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m9AE05C79838028D4ED9E534A33468206531039C8(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m3ADD72F5FF69722A71CC09C503B022CC85FD565C(Il2CppWindowsRuntimeTypeName ___0_key, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_m0C3009745147E05244DF5CF881FAF1AD50F19248(IMapView_2_t7F7BCC76181FFC9B7918670A6EAF981F28C849F8** ___0_first, IMapView_2_t7F7BCC76181FFC9B7918670A6EAF981F28C849F8** ___1_second) = 0;
};
struct NOVTABLE IMapView_2_tC381E6C9A0EAA8BCED522DECA7E05AAEADD27AB2 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_mDF91D3D108E94412399404E6FE2236005715CA96(Il2CppWindowsRuntimeTypeName ___0_key, Il2CppWindowsRuntimeTypeName* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m0132C75E42CC1A348C1DA71B90D77E72A5789B28(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_mAB4A3A320D0289CF0B845D01D5F0D43C9A7D8EA8(Il2CppWindowsRuntimeTypeName ___0_key, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_mD127730DC7A8A027FC05A1990F365ACF8E739CB9(IMapView_2_tC381E6C9A0EAA8BCED522DECA7E05AAEADD27AB2** ___0_first, IMapView_2_tC381E6C9A0EAA8BCED522DECA7E05AAEADD27AB2** ___1_second) = 0;
};
struct NOVTABLE IMap_2_t94BB51590ADEF90FD25C7AA7274881AB1B52D6AB : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m602A6B45737A303FE9629F76372E14A8F387A52E(Il2CppWindowsRuntimeTypeName ___0_key, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m56DC04CF24C7FC1145CDB9635EF4F67FE24FF7BA(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_mD8051E63FB2A02B6AE8320CBC4A5450965440B7A(Il2CppWindowsRuntimeTypeName ___0_key, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m3C4E9DB0CEA06B4F46E6DE2CD61985FED639ED91(IMapView_2_t39B008160454143EFF228DFF19D546A07BABF7B2** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m98F7C16DAC9E00D6658D99AE928C5E3F6E3F69C5(Il2CppWindowsRuntimeTypeName ___0_key, Il2CppIInspectable* ___1_value, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m3DCC81BC7B22D5CA9B37D2493AE719E18E4B8CBE(Il2CppWindowsRuntimeTypeName ___0_key) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m142E687C97B08260910C81DB49861646178B4414() = 0;
};
struct NOVTABLE IMap_2_tFAAAD8DC298A0B2543B9F3CF5720394CDAE9FEE5 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m4030ADF6D530B11338B49C4AEDB1E1310798986E(Il2CppWindowsRuntimeTypeName ___0_key, Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m10D25109501CC82869FE0CD806137CC087CA5D73(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m368FED6A41642574189B07B1CB14214E03244FA3(Il2CppWindowsRuntimeTypeName ___0_key, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m065132B7A34EBDED80707B097781434293CF3412(IMapView_2_t7F7BCC76181FFC9B7918670A6EAF981F28C849F8** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_mAC20B3B6E75F574D33B1CE659538646FC8AB107E(Il2CppWindowsRuntimeTypeName ___0_key, Il2CppHString ___1_value, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_mBE37FB49C7FB34A58171D7A615456E97FDB342F3(Il2CppWindowsRuntimeTypeName ___0_key) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m9687D0DAC591E57B0D6EA8CD9D98BB36B5DEED7D() = 0;
};
struct NOVTABLE IMap_2_t70446BFAF085215A751C8AC357FABA07BB76957A : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m2B254F0095BD7B91F183FD132883985B937EA484(Il2CppWindowsRuntimeTypeName ___0_key, Il2CppWindowsRuntimeTypeName* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m392CEAC64593FEC8339E4B6707074993F8D9F7DB(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m8DC07792B6A3697A30B1D46E8CB7BC821CD480B5(Il2CppWindowsRuntimeTypeName ___0_key, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m648B0380F2EDED28EF9B504585E437BDF3FC5B4E(IMapView_2_tC381E6C9A0EAA8BCED522DECA7E05AAEADD27AB2** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m637FE9589D64B24425814054602D1F7785F732CF(Il2CppWindowsRuntimeTypeName ___0_key, Il2CppWindowsRuntimeTypeName ___1_value, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m14575CC81F019A73AD4E192D587A0D0702CFFEA6(Il2CppWindowsRuntimeTypeName ___0_key) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_mAA7359370F32CBB8F40CCA89FC29D6F8660B9EC8() = 0;
};
struct ConcurrentDictionary_2_t01EC89866F72177CED9A0249F17948367F151834_StaticFields
{
	bool ___s_isValueWriteAtomic;
};
struct ConcurrentDictionary_2_t5AC35AA6AEE255D39813A0173F88D47473E3C1AC_StaticFields
{
	bool ___s_isValueWriteAtomic;
};
struct ConcurrentDictionary_2_t9760FACA5262BDBB7864636E86D42620BA37AFD2_StaticFields
{
	bool ___s_isValueWriteAtomic;
};
struct ConcurrentDictionary_2_t889EC4BD07B5DCB6087E2226ACC8A5E5590E48AB_StaticFields
{
	bool ___s_isValueWriteAtomic;
};
struct ConcurrentDictionary_2_tD35AF7F258B58EA50992681475C37E063603C5AC_StaticFields
{
	bool ___s_isValueWriteAtomic;
};
struct ConcurrentDictionary_2_t55D23D8213078AB94691B414656BE0C3CF0F82F1_StaticFields
{
	bool ___s_isValueWriteAtomic;
};
struct ConcurrentDictionary_2_tE5A8639D8AE0AF65ED6A8B7C1089E9F12ADD7B91_StaticFields
{
	bool ___s_isValueWriteAtomic;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IMap_2_Lookup_m602A6B45737A303FE9629F76372E14A8F387A52E_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppWindowsRuntimeTypeName ___0_key, Il2CppIInspectable** comReturnValue);
il2cpp_hresult_t IMap_2_get_Size_m56DC04CF24C7FC1145CDB9635EF4F67FE24FF7BA_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IMap_2_HasKey_mD8051E63FB2A02B6AE8320CBC4A5450965440B7A_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppWindowsRuntimeTypeName ___0_key, bool* comReturnValue);
il2cpp_hresult_t IMap_2_GetView_m3C4E9DB0CEA06B4F46E6DE2CD61985FED639ED91_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t39B008160454143EFF228DFF19D546A07BABF7B2** comReturnValue);
il2cpp_hresult_t IMap_2_Insert_m98F7C16DAC9E00D6658D99AE928C5E3F6E3F69C5_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppWindowsRuntimeTypeName ___0_key, Il2CppIInspectable* ___1_value, bool* comReturnValue);
il2cpp_hresult_t IMap_2_Remove_m3DCC81BC7B22D5CA9B37D2493AE719E18E4B8CBE_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppWindowsRuntimeTypeName ___0_key);
il2cpp_hresult_t IMap_2_Clear_m142E687C97B08260910C81DB49861646178B4414_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IIterable_1_First_m53DDD6EFCCEB70ED6F36F8A2986853F9B7389AA2_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t1EAD905926D7A8250F1D3FA0DB0CCC04F7CA9A01** comReturnValue);
il2cpp_hresult_t IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue);
il2cpp_hresult_t IMapView_2_Lookup_mA84FC1A8BB6314A7E1C0F5080A969E10BC17B953_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppWindowsRuntimeTypeName ___0_key, Il2CppIInspectable** comReturnValue);
il2cpp_hresult_t IMapView_2_get_Size_mDEDF0F55E9B27438BF3D0FDDB1A1CE45BF575B92_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IMapView_2_HasKey_m4ACE6CE4E91FD63D2763EA90943749F5614F4A9A_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppWindowsRuntimeTypeName ___0_key, bool* comReturnValue);
il2cpp_hresult_t IMapView_2_Split_mE390A2ACFB459C6528FA5F147F002B5C963DC724_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t39B008160454143EFF228DFF19D546A07BABF7B2** ___0_first, IMapView_2_t39B008160454143EFF228DFF19D546A07BABF7B2** ___1_second);
il2cpp_hresult_t IMap_2_Lookup_m4030ADF6D530B11338B49C4AEDB1E1310798986E_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppWindowsRuntimeTypeName ___0_key, Il2CppHString* comReturnValue);
il2cpp_hresult_t IMap_2_get_Size_m10D25109501CC82869FE0CD806137CC087CA5D73_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IMap_2_HasKey_m368FED6A41642574189B07B1CB14214E03244FA3_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppWindowsRuntimeTypeName ___0_key, bool* comReturnValue);
il2cpp_hresult_t IMap_2_GetView_m065132B7A34EBDED80707B097781434293CF3412_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t7F7BCC76181FFC9B7918670A6EAF981F28C849F8** comReturnValue);
il2cpp_hresult_t IMap_2_Insert_mAC20B3B6E75F574D33B1CE659538646FC8AB107E_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppWindowsRuntimeTypeName ___0_key, Il2CppHString ___1_value, bool* comReturnValue);
il2cpp_hresult_t IMap_2_Remove_mBE37FB49C7FB34A58171D7A615456E97FDB342F3_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppWindowsRuntimeTypeName ___0_key);
il2cpp_hresult_t IMap_2_Clear_m9687D0DAC591E57B0D6EA8CD9D98BB36B5DEED7D_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IIterable_1_First_mA15AD5FF06E5B8545EE454447E1B71398E1FB9E2_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t4106D731889FB122685B47C537BFA2CDD0CBF65E** comReturnValue);
il2cpp_hresult_t IMapView_2_Lookup_m88F61EBAD76099089250B48FFE732428232F980D_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppWindowsRuntimeTypeName ___0_key, Il2CppHString* comReturnValue);
il2cpp_hresult_t IMapView_2_get_Size_m9AE05C79838028D4ED9E534A33468206531039C8_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IMapView_2_HasKey_m3ADD72F5FF69722A71CC09C503B022CC85FD565C_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppWindowsRuntimeTypeName ___0_key, bool* comReturnValue);
il2cpp_hresult_t IMapView_2_Split_m0C3009745147E05244DF5CF881FAF1AD50F19248_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t7F7BCC76181FFC9B7918670A6EAF981F28C849F8** ___0_first, IMapView_2_t7F7BCC76181FFC9B7918670A6EAF981F28C849F8** ___1_second);
il2cpp_hresult_t IMap_2_Lookup_m2B254F0095BD7B91F183FD132883985B937EA484_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppWindowsRuntimeTypeName ___0_key, Il2CppWindowsRuntimeTypeName* comReturnValue);
il2cpp_hresult_t IMap_2_get_Size_m392CEAC64593FEC8339E4B6707074993F8D9F7DB_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IMap_2_HasKey_m8DC07792B6A3697A30B1D46E8CB7BC821CD480B5_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppWindowsRuntimeTypeName ___0_key, bool* comReturnValue);
il2cpp_hresult_t IMap_2_GetView_m648B0380F2EDED28EF9B504585E437BDF3FC5B4E_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_tC381E6C9A0EAA8BCED522DECA7E05AAEADD27AB2** comReturnValue);
il2cpp_hresult_t IMap_2_Insert_m637FE9589D64B24425814054602D1F7785F732CF_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppWindowsRuntimeTypeName ___0_key, Il2CppWindowsRuntimeTypeName ___1_value, bool* comReturnValue);
il2cpp_hresult_t IMap_2_Remove_m14575CC81F019A73AD4E192D587A0D0702CFFEA6_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppWindowsRuntimeTypeName ___0_key);
il2cpp_hresult_t IMap_2_Clear_mAA7359370F32CBB8F40CCA89FC29D6F8660B9EC8_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IIterable_1_First_m97D2BA387AF31C2A9E560115D31CCF381A239A43_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t7D2407E249CC5C7625BA53BA46FD8B945CD3076D** comReturnValue);
il2cpp_hresult_t IMapView_2_Lookup_mDF91D3D108E94412399404E6FE2236005715CA96_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppWindowsRuntimeTypeName ___0_key, Il2CppWindowsRuntimeTypeName* comReturnValue);
il2cpp_hresult_t IMapView_2_get_Size_m0132C75E42CC1A348C1DA71B90D77E72A5789B28_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IMapView_2_HasKey_mAB4A3A320D0289CF0B845D01D5F0D43C9A7D8EA8_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppWindowsRuntimeTypeName ___0_key, bool* comReturnValue);
il2cpp_hresult_t IMapView_2_Split_mD127730DC7A8A027FC05A1990F365ACF8E739CB9_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_tC381E6C9A0EAA8BCED522DECA7E05AAEADD27AB2** ___0_first, IMapView_2_tC381E6C9A0EAA8BCED522DECA7E05AAEADD27AB2** ___1_second);



struct ConcurrentDictionary_2_t01EC89866F72177CED9A0249F17948367F151834_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ConcurrentDictionary_2_t01EC89866F72177CED9A0249F17948367F151834_ComCallableWrapper>, IMap_2_t94BB51590ADEF90FD25C7AA7274881AB1B52D6AB, IIterable_1_t2A910923889829F909CCCDAA5B96C72E8DDFBA5B, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IMapView_2_t39B008160454143EFF228DFF19D546A07BABF7B2
{
	inline ConcurrentDictionary_2_t01EC89866F72177CED9A0249F17948367F151834_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ConcurrentDictionary_2_t01EC89866F72177CED9A0249F17948367F151834_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IMap_2_t94BB51590ADEF90FD25C7AA7274881AB1B52D6AB::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMap_2_t94BB51590ADEF90FD25C7AA7274881AB1B52D6AB*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t2A910923889829F909CCCDAA5B96C72E8DDFBA5B::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t2A910923889829F909CCCDAA5B96C72E8DDFBA5B*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IMapView_2_t39B008160454143EFF228DFF19D546A07BABF7B2::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMapView_2_t39B008160454143EFF228DFF19D546A07BABF7B2*>(this);
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
		interfaceIds[0] = IMap_2_t94BB51590ADEF90FD25C7AA7274881AB1B52D6AB::IID;
		interfaceIds[1] = IIterable_1_t2A910923889829F909CCCDAA5B96C72E8DDFBA5B::IID;
		interfaceIds[2] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[3] = IMapView_2_t39B008160454143EFF228DFF19D546A07BABF7B2::IID;

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

	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m602A6B45737A303FE9629F76372E14A8F387A52E(Il2CppWindowsRuntimeTypeName ___0_key, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_Lookup_m602A6B45737A303FE9629F76372E14A8F387A52E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m56DC04CF24C7FC1145CDB9635EF4F67FE24FF7BA(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_get_Size_m56DC04CF24C7FC1145CDB9635EF4F67FE24FF7BA_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_mD8051E63FB2A02B6AE8320CBC4A5450965440B7A(Il2CppWindowsRuntimeTypeName ___0_key, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_HasKey_mD8051E63FB2A02B6AE8320CBC4A5450965440B7A_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m3C4E9DB0CEA06B4F46E6DE2CD61985FED639ED91(IMapView_2_t39B008160454143EFF228DFF19D546A07BABF7B2** comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_GetView_m3C4E9DB0CEA06B4F46E6DE2CD61985FED639ED91_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m98F7C16DAC9E00D6658D99AE928C5E3F6E3F69C5(Il2CppWindowsRuntimeTypeName ___0_key, Il2CppIInspectable* ___1_value, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_Insert_m98F7C16DAC9E00D6658D99AE928C5E3F6E3F69C5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, ___1_value, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m3DCC81BC7B22D5CA9B37D2493AE719E18E4B8CBE(Il2CppWindowsRuntimeTypeName ___0_key) IL2CPP_OVERRIDE
	{
		return IMap_2_Remove_m3DCC81BC7B22D5CA9B37D2493AE719E18E4B8CBE_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m142E687C97B08260910C81DB49861646178B4414() IL2CPP_OVERRIDE
	{
		return IMap_2_Clear_m142E687C97B08260910C81DB49861646178B4414_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m53DDD6EFCCEB70ED6F36F8A2986853F9B7389AA2(IIterator_1_t1EAD905926D7A8250F1D3FA0DB0CCC04F7CA9A01** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m53DDD6EFCCEB70ED6F36F8A2986853F9B7389AA2_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_mA84FC1A8BB6314A7E1C0F5080A969E10BC17B953(Il2CppWindowsRuntimeTypeName ___0_key, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_Lookup_mA84FC1A8BB6314A7E1C0F5080A969E10BC17B953_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_mDEDF0F55E9B27438BF3D0FDDB1A1CE45BF575B92(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_get_Size_mDEDF0F55E9B27438BF3D0FDDB1A1CE45BF575B92_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m4ACE6CE4E91FD63D2763EA90943749F5614F4A9A(Il2CppWindowsRuntimeTypeName ___0_key, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_HasKey_m4ACE6CE4E91FD63D2763EA90943749F5614F4A9A_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_mE390A2ACFB459C6528FA5F147F002B5C963DC724(IMapView_2_t39B008160454143EFF228DFF19D546A07BABF7B2** ___0_first, IMapView_2_t39B008160454143EFF228DFF19D546A07BABF7B2** ___1_second) IL2CPP_OVERRIDE
	{
		return IMapView_2_Split_mE390A2ACFB459C6528FA5F147F002B5C963DC724_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_first, ___1_second);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ConcurrentDictionary_2_t01EC89866F72177CED9A0249F17948367F151834(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ConcurrentDictionary_2_t01EC89866F72177CED9A0249F17948367F151834_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ConcurrentDictionary_2_t01EC89866F72177CED9A0249F17948367F151834_ComCallableWrapper(obj));
}

struct ConcurrentDictionary_2_t5AC35AA6AEE255D39813A0173F88D47473E3C1AC_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ConcurrentDictionary_2_t5AC35AA6AEE255D39813A0173F88D47473E3C1AC_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline ConcurrentDictionary_2_t5AC35AA6AEE255D39813A0173F88D47473E3C1AC_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ConcurrentDictionary_2_t5AC35AA6AEE255D39813A0173F88D47473E3C1AC_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ConcurrentDictionary_2_t5AC35AA6AEE255D39813A0173F88D47473E3C1AC(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ConcurrentDictionary_2_t5AC35AA6AEE255D39813A0173F88D47473E3C1AC_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ConcurrentDictionary_2_t5AC35AA6AEE255D39813A0173F88D47473E3C1AC_ComCallableWrapper(obj));
}

struct ConcurrentDictionary_2_t9760FACA5262BDBB7864636E86D42620BA37AFD2_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ConcurrentDictionary_2_t9760FACA5262BDBB7864636E86D42620BA37AFD2_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline ConcurrentDictionary_2_t9760FACA5262BDBB7864636E86D42620BA37AFD2_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ConcurrentDictionary_2_t9760FACA5262BDBB7864636E86D42620BA37AFD2_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ConcurrentDictionary_2_t9760FACA5262BDBB7864636E86D42620BA37AFD2(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ConcurrentDictionary_2_t9760FACA5262BDBB7864636E86D42620BA37AFD2_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ConcurrentDictionary_2_t9760FACA5262BDBB7864636E86D42620BA37AFD2_ComCallableWrapper(obj));
}

struct ConcurrentDictionary_2_t889EC4BD07B5DCB6087E2226ACC8A5E5590E48AB_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ConcurrentDictionary_2_t889EC4BD07B5DCB6087E2226ACC8A5E5590E48AB_ComCallableWrapper>, IMap_2_tFAAAD8DC298A0B2543B9F3CF5720394CDAE9FEE5, IIterable_1_t7CE0DCCCC4659DCDD6691E7F4FBF8426947BEFC0, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IMapView_2_t7F7BCC76181FFC9B7918670A6EAF981F28C849F8
{
	inline ConcurrentDictionary_2_t889EC4BD07B5DCB6087E2226ACC8A5E5590E48AB_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ConcurrentDictionary_2_t889EC4BD07B5DCB6087E2226ACC8A5E5590E48AB_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IMap_2_tFAAAD8DC298A0B2543B9F3CF5720394CDAE9FEE5::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMap_2_tFAAAD8DC298A0B2543B9F3CF5720394CDAE9FEE5*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t7CE0DCCCC4659DCDD6691E7F4FBF8426947BEFC0::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t7CE0DCCCC4659DCDD6691E7F4FBF8426947BEFC0*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IMapView_2_t7F7BCC76181FFC9B7918670A6EAF981F28C849F8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMapView_2_t7F7BCC76181FFC9B7918670A6EAF981F28C849F8*>(this);
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
		interfaceIds[0] = IMap_2_tFAAAD8DC298A0B2543B9F3CF5720394CDAE9FEE5::IID;
		interfaceIds[1] = IIterable_1_t7CE0DCCCC4659DCDD6691E7F4FBF8426947BEFC0::IID;
		interfaceIds[2] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[3] = IMapView_2_t7F7BCC76181FFC9B7918670A6EAF981F28C849F8::IID;

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

	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m4030ADF6D530B11338B49C4AEDB1E1310798986E(Il2CppWindowsRuntimeTypeName ___0_key, Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_Lookup_m4030ADF6D530B11338B49C4AEDB1E1310798986E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m10D25109501CC82869FE0CD806137CC087CA5D73(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_get_Size_m10D25109501CC82869FE0CD806137CC087CA5D73_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m368FED6A41642574189B07B1CB14214E03244FA3(Il2CppWindowsRuntimeTypeName ___0_key, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_HasKey_m368FED6A41642574189B07B1CB14214E03244FA3_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m065132B7A34EBDED80707B097781434293CF3412(IMapView_2_t7F7BCC76181FFC9B7918670A6EAF981F28C849F8** comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_GetView_m065132B7A34EBDED80707B097781434293CF3412_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_mAC20B3B6E75F574D33B1CE659538646FC8AB107E(Il2CppWindowsRuntimeTypeName ___0_key, Il2CppHString ___1_value, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_Insert_mAC20B3B6E75F574D33B1CE659538646FC8AB107E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, ___1_value, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_mBE37FB49C7FB34A58171D7A615456E97FDB342F3(Il2CppWindowsRuntimeTypeName ___0_key) IL2CPP_OVERRIDE
	{
		return IMap_2_Remove_mBE37FB49C7FB34A58171D7A615456E97FDB342F3_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m9687D0DAC591E57B0D6EA8CD9D98BB36B5DEED7D() IL2CPP_OVERRIDE
	{
		return IMap_2_Clear_m9687D0DAC591E57B0D6EA8CD9D98BB36B5DEED7D_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mA15AD5FF06E5B8545EE454447E1B71398E1FB9E2(IIterator_1_t4106D731889FB122685B47C537BFA2CDD0CBF65E** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mA15AD5FF06E5B8545EE454447E1B71398E1FB9E2_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m88F61EBAD76099089250B48FFE732428232F980D(Il2CppWindowsRuntimeTypeName ___0_key, Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_Lookup_m88F61EBAD76099089250B48FFE732428232F980D_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m9AE05C79838028D4ED9E534A33468206531039C8(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_get_Size_m9AE05C79838028D4ED9E534A33468206531039C8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m3ADD72F5FF69722A71CC09C503B022CC85FD565C(Il2CppWindowsRuntimeTypeName ___0_key, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_HasKey_m3ADD72F5FF69722A71CC09C503B022CC85FD565C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_m0C3009745147E05244DF5CF881FAF1AD50F19248(IMapView_2_t7F7BCC76181FFC9B7918670A6EAF981F28C849F8** ___0_first, IMapView_2_t7F7BCC76181FFC9B7918670A6EAF981F28C849F8** ___1_second) IL2CPP_OVERRIDE
	{
		return IMapView_2_Split_m0C3009745147E05244DF5CF881FAF1AD50F19248_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_first, ___1_second);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ConcurrentDictionary_2_t889EC4BD07B5DCB6087E2226ACC8A5E5590E48AB(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ConcurrentDictionary_2_t889EC4BD07B5DCB6087E2226ACC8A5E5590E48AB_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ConcurrentDictionary_2_t889EC4BD07B5DCB6087E2226ACC8A5E5590E48AB_ComCallableWrapper(obj));
}

struct ConcurrentDictionary_2_tD35AF7F258B58EA50992681475C37E063603C5AC_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ConcurrentDictionary_2_tD35AF7F258B58EA50992681475C37E063603C5AC_ComCallableWrapper>, IMap_2_t70446BFAF085215A751C8AC357FABA07BB76957A, IIterable_1_t9F4DC3B84BDB9D9DA5CEB3D25A6AB66FBF0DABC2, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IMapView_2_tC381E6C9A0EAA8BCED522DECA7E05AAEADD27AB2
{
	inline ConcurrentDictionary_2_tD35AF7F258B58EA50992681475C37E063603C5AC_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ConcurrentDictionary_2_tD35AF7F258B58EA50992681475C37E063603C5AC_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IMap_2_t70446BFAF085215A751C8AC357FABA07BB76957A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMap_2_t70446BFAF085215A751C8AC357FABA07BB76957A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t9F4DC3B84BDB9D9DA5CEB3D25A6AB66FBF0DABC2::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t9F4DC3B84BDB9D9DA5CEB3D25A6AB66FBF0DABC2*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IMapView_2_tC381E6C9A0EAA8BCED522DECA7E05AAEADD27AB2::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMapView_2_tC381E6C9A0EAA8BCED522DECA7E05AAEADD27AB2*>(this);
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
		interfaceIds[0] = IMap_2_t70446BFAF085215A751C8AC357FABA07BB76957A::IID;
		interfaceIds[1] = IIterable_1_t9F4DC3B84BDB9D9DA5CEB3D25A6AB66FBF0DABC2::IID;
		interfaceIds[2] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[3] = IMapView_2_tC381E6C9A0EAA8BCED522DECA7E05AAEADD27AB2::IID;

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

	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m2B254F0095BD7B91F183FD132883985B937EA484(Il2CppWindowsRuntimeTypeName ___0_key, Il2CppWindowsRuntimeTypeName* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_Lookup_m2B254F0095BD7B91F183FD132883985B937EA484_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m392CEAC64593FEC8339E4B6707074993F8D9F7DB(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_get_Size_m392CEAC64593FEC8339E4B6707074993F8D9F7DB_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m8DC07792B6A3697A30B1D46E8CB7BC821CD480B5(Il2CppWindowsRuntimeTypeName ___0_key, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_HasKey_m8DC07792B6A3697A30B1D46E8CB7BC821CD480B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m648B0380F2EDED28EF9B504585E437BDF3FC5B4E(IMapView_2_tC381E6C9A0EAA8BCED522DECA7E05AAEADD27AB2** comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_GetView_m648B0380F2EDED28EF9B504585E437BDF3FC5B4E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m637FE9589D64B24425814054602D1F7785F732CF(Il2CppWindowsRuntimeTypeName ___0_key, Il2CppWindowsRuntimeTypeName ___1_value, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_Insert_m637FE9589D64B24425814054602D1F7785F732CF_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, ___1_value, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m14575CC81F019A73AD4E192D587A0D0702CFFEA6(Il2CppWindowsRuntimeTypeName ___0_key) IL2CPP_OVERRIDE
	{
		return IMap_2_Remove_m14575CC81F019A73AD4E192D587A0D0702CFFEA6_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_mAA7359370F32CBB8F40CCA89FC29D6F8660B9EC8() IL2CPP_OVERRIDE
	{
		return IMap_2_Clear_mAA7359370F32CBB8F40CCA89FC29D6F8660B9EC8_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m97D2BA387AF31C2A9E560115D31CCF381A239A43(IIterator_1_t7D2407E249CC5C7625BA53BA46FD8B945CD3076D** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m97D2BA387AF31C2A9E560115D31CCF381A239A43_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_mDF91D3D108E94412399404E6FE2236005715CA96(Il2CppWindowsRuntimeTypeName ___0_key, Il2CppWindowsRuntimeTypeName* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_Lookup_mDF91D3D108E94412399404E6FE2236005715CA96_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m0132C75E42CC1A348C1DA71B90D77E72A5789B28(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_get_Size_m0132C75E42CC1A348C1DA71B90D77E72A5789B28_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_mAB4A3A320D0289CF0B845D01D5F0D43C9A7D8EA8(Il2CppWindowsRuntimeTypeName ___0_key, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_HasKey_mAB4A3A320D0289CF0B845D01D5F0D43C9A7D8EA8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_mD127730DC7A8A027FC05A1990F365ACF8E739CB9(IMapView_2_tC381E6C9A0EAA8BCED522DECA7E05AAEADD27AB2** ___0_first, IMapView_2_tC381E6C9A0EAA8BCED522DECA7E05AAEADD27AB2** ___1_second) IL2CPP_OVERRIDE
	{
		return IMapView_2_Split_mD127730DC7A8A027FC05A1990F365ACF8E739CB9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_first, ___1_second);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ConcurrentDictionary_2_tD35AF7F258B58EA50992681475C37E063603C5AC(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ConcurrentDictionary_2_tD35AF7F258B58EA50992681475C37E063603C5AC_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ConcurrentDictionary_2_tD35AF7F258B58EA50992681475C37E063603C5AC_ComCallableWrapper(obj));
}

struct ConcurrentDictionary_2_t55D23D8213078AB94691B414656BE0C3CF0F82F1_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ConcurrentDictionary_2_t55D23D8213078AB94691B414656BE0C3CF0F82F1_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline ConcurrentDictionary_2_t55D23D8213078AB94691B414656BE0C3CF0F82F1_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ConcurrentDictionary_2_t55D23D8213078AB94691B414656BE0C3CF0F82F1_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ConcurrentDictionary_2_t55D23D8213078AB94691B414656BE0C3CF0F82F1(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ConcurrentDictionary_2_t55D23D8213078AB94691B414656BE0C3CF0F82F1_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ConcurrentDictionary_2_t55D23D8213078AB94691B414656BE0C3CF0F82F1_ComCallableWrapper(obj));
}

struct ConcurrentDictionary_2_tE5A8639D8AE0AF65ED6A8B7C1089E9F12ADD7B91_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ConcurrentDictionary_2_tE5A8639D8AE0AF65ED6A8B7C1089E9F12ADD7B91_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline ConcurrentDictionary_2_tE5A8639D8AE0AF65ED6A8B7C1089E9F12ADD7B91_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ConcurrentDictionary_2_tE5A8639D8AE0AF65ED6A8B7C1089E9F12ADD7B91_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ConcurrentDictionary_2_tE5A8639D8AE0AF65ED6A8B7C1089E9F12ADD7B91(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ConcurrentDictionary_2_tE5A8639D8AE0AF65ED6A8B7C1089E9F12ADD7B91_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ConcurrentDictionary_2_tE5A8639D8AE0AF65ED6A8B7C1089E9F12ADD7B91_ComCallableWrapper(obj));
}
