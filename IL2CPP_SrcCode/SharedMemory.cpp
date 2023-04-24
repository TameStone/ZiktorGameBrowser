#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.IntPtr>
struct Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2;
// System.Func`2<System.IntPtr,System.Int32>
struct Func_2_tB5422B774B20A6FA5E1E2A7456E87A4C47AF1F04;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// SharedMemory.CircularBuffer/Node[]
struct NodeU5BU5D_t4430D55C36F60C5C2A1876D4B01D09719861ED0D;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// SharedMemory.BufferReadWrite
struct BufferReadWrite_t47341F578A6C54B0DB9D5B44B0EF1A32A325397D;
// SharedMemory.BufferWithLocks
struct BufferWithLocks_tAC66E561168ED8E40BDABCC964399BA062D85731;
// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
// SharedMemory.CircularBuffer
struct CircularBuffer_tB62401E0B61024C9A683EE0918EE03921EEEE35B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Threading.EventWaitHandle
struct EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E;
// System.IO.FileNotFoundException
struct FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.IO.MemoryMappedFiles.MemoryMappedFile
struct MemoryMappedFile_t3A8911F989B099EDED5FF35E0EED6DF65ECD01E4;
// System.IO.MemoryMappedFiles.MemoryMappedView
struct MemoryMappedView_t589678987CBDE2D54C19A3358975AC8DFB80F2DA;
// System.IO.MemoryMappedFiles.MemoryMappedViewAccessor
struct MemoryMappedViewAccessor_tBE3AFBB21241B0AF9349B08F03DDEF4E11A4D2AE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E;
// System.Runtime.InteropServices.SafeHandle
struct SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7;
// Microsoft.Win32.SafeHandles.SafeHandleZeroOrMinusOneIsInvalid
struct SafeHandleZeroOrMinusOneIsInvalid_tC152552D137451170B3B1A304227B0ECADB65629;
// Microsoft.Win32.SafeHandles.SafeMemoryMappedFileHandle
struct SafeMemoryMappedFileHandle_t0A052D02752BF6099772EFE4BB1145F72571165A;
// Microsoft.Win32.SafeHandles.SafeMemoryMappedViewHandle
struct SafeMemoryMappedViewHandle_t515B2CC8608ADA913D58A7E81A15E12A7A2D05D8;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449;
// SharedMemory.SharedBuffer
struct SharedBuffer_t1BE086CC5133873A7F23428A7998BCC0B9BEAE28;
// SharedMemory.SharedHeader
struct SharedHeader_tA88D452C04A0B4193E2A2DB0D40F6AD4E9144918;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.TimeoutException
struct TimeoutException_t7552449BA7E0911AEA1B6C7D1BEAC6534819305F;
// System.Type
struct Type_t;
// SharedMemory.UnsafeNativeMethods
struct UnsafeNativeMethods_tE91BF5249811343D7CF1B4E28FFF39EC649C29C3;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// SharedMemory.CircularBuffer/NodeHeader
struct NodeHeader_tC7AA1A5DCEAE807D7B9DFE8A402114E0E1AF13F4;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryMappedFile_t3A8911F989B099EDED5FF35E0EED6DF65ECD01E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryMappedViewAccessor_tBE3AFBB21241B0AF9349B08F03DDEF4E11A4D2AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryMappedView_t589678987CBDE2D54C19A3358975AC8DFB80F2DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NodeHeader_tC7AA1A5DCEAE807D7B9DFE8A402114E0E1AF13F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NodeU5BU5D_t4430D55C36F60C5C2A1876D4B01D09719861ED0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SafeMemoryMappedFileHandle_t0A052D02752BF6099772EFE4BB1145F72571165A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SafeMemoryMappedViewHandle_t515B2CC8608ADA913D58A7E81A15E12A7A2D05D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeoutException_t7552449BA7E0911AEA1B6C7D1BEAC6534819305F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral085004DC1ED6FCD52C74272B3EE3583C17FD3E14;
IL2CPP_EXTERN_C String_t* _stringLiteral0D5F70EB328454A8DA9DE9BFF135B05EC083F173;
IL2CPP_EXTERN_C String_t* _stringLiteral2F3DA08BAFB3D51DD9BB6B236770C5322B991451;
IL2CPP_EXTERN_C String_t* _stringLiteral32BF75085265374718471E9E3A91935904E4B351;
IL2CPP_EXTERN_C String_t* _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B;
IL2CPP_EXTERN_C String_t* _stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4;
IL2CPP_EXTERN_C String_t* _stringLiteral5875FDAD1A687531617B7C2D6160BA59D7E5ABCE;
IL2CPP_EXTERN_C String_t* _stringLiteral5BB1CEF15712CA0F5C93B57E99C70177C13C035D;
IL2CPP_EXTERN_C String_t* _stringLiteral7EAF74BD58F39BF24633BBA87400BD3ADB6090CE;
IL2CPP_EXTERN_C String_t* _stringLiteral86F895FF919A0A2E8806EEF54FF5F7A4B5BF6579;
IL2CPP_EXTERN_C String_t* _stringLiteral881327E04BF8E68B19383ACA7460505E1A528006;
IL2CPP_EXTERN_C String_t* _stringLiteral8EE59C951EE78DF0A6A313D549D9DB7C426FA2CA;
IL2CPP_EXTERN_C String_t* _stringLiteralA39E5DE8EFC843E8F7B986C60243AE319B15B683;
IL2CPP_EXTERN_C String_t* _stringLiteralB52060BA247A0BBF1B55B141C85CCB2BCCAA9852;
IL2CPP_EXTERN_C String_t* _stringLiteralB92A5624F7EBFA10B2819D3E09C777C270773C72;
IL2CPP_EXTERN_C String_t* _stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7;
IL2CPP_EXTERN_C String_t* _stringLiteralC8FE4FB2F0C7351CCB064A9D9BD65C0FC83D4E12;
IL2CPP_EXTERN_C String_t* _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F;
IL2CPP_EXTERN_C String_t* _stringLiteralD166849FFA555976B083675F6489209CADDBB6B5;
IL2CPP_EXTERN_C String_t* _stringLiteralD392D175A9D7CBC806A502B5F6C68412BBC9D70E;
IL2CPP_EXTERN_C String_t* _stringLiteralD4C98DC35A3C13E3F77C50C03E38C850F72E409C;
IL2CPP_EXTERN_C String_t* _stringLiteralDD62F77513D96D7D1C7260B773B8F141DC0F4CDA;
IL2CPP_EXTERN_C String_t* _stringLiteralDFB2DFA373D257FB931D5C2B1EFA2514F6DB217E;
IL2CPP_EXTERN_C String_t* _stringLiteralFDAECFF6010BD985F9BC0137C42EF22BDBE8891B;
IL2CPP_EXTERN_C const RuntimeMethod* BufferWithLocks_ReadWait_mD17B1AA303CFC5A5203382AF95481AF7B5922CFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BufferWithLocks_WriteWait_mAE16A867C4D3C925A78DF2FA7EAE7CDFA38EA451_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BufferWithLocks_set_ReadWriteTimeout_m1E0F8F32B3CFCE08EA921AA825B8BDE123176880_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CircularBuffer__ctor_m8E7FFB790FDBBC88F53F2DC52C259995C4E4BACD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CircularBuffer_get_Item_mB26BA3D1EBBD75013F29ECC3AC09A27FCEB8401B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMappedFile_CreateNew_mE5C596EDD27EB18B6CA8D4C03093301BFDA82395_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMappedFile_CreateViewAccessor_m3111CEB2E7741A9B6D16E6A77E326C21D781FF2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMappedFile_DoCreate_m67A3290F97768CC3379F69036F96240E0B955025_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMappedFile_OpenExisting_m100D28BA2084724AD598A04C10F6D25441C703ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMappedViewAccessor_Write_TisSharedHeader_tA88D452C04A0B4193E2A2DB0D40F6AD4E9144918_mA4BDAAA3DCAF62071ACEA91824D81B32544AE517_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMappedView_CreateView_m758071821EC5725A4F7BA5A20C85AF4B85DCB6D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SharedBuffer_WriteArray_TisNode_t90DACB0900841EED2B259072EDC87CF7F68E3D2E_m66DA3B86383F52E9DF40D128F36C59F12DF5D275_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SharedBuffer_Write_TisNodeHeader_tC7AA1A5DCEAE807D7B9DFE8A402114E0E1AF13F4_m9CEDF7B9D137E3F4A3700800C0CF6721F12F945E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SharedBuffer__ctor_mF9A1B8A7114D10B73830A26B8B5828D8415D3EE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* NodeHeader_tC7AA1A5DCEAE807D7B9DFE8A402114E0E1AF13F4_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SharedHeader_tA88D452C04A0B4193E2A2DB0D40F6AD4E9144918_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct NodeU5BU5D_t4430D55C36F60C5C2A1876D4B01D09719861ED0D;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t36EB4330A3DFD589BA84B90DF85721E307B18CF0 
{
};
struct Il2CppArrayBounds;

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9  : public RuntimeObject
{
};

// SharedMemory.FastStructure
struct FastStructure_t4D021F50D79E57833BEAB58DC11D60A20A3F1E3D  : public RuntimeObject
{
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.IO.MemoryMappedFiles.MemoryMappedFile
struct MemoryMappedFile_t3A8911F989B099EDED5FF35E0EED6DF65ECD01E4  : public RuntimeObject
{
	// Microsoft.Win32.SafeHandles.SafeMemoryMappedFileHandle System.IO.MemoryMappedFiles.MemoryMappedFile::_handle
	SafeMemoryMappedFileHandle_t0A052D02752BF6099772EFE4BB1145F72571165A* ____handle_0;
};

// System.IO.MemoryMappedFiles.MemoryMappedFileAccessExtensions
struct MemoryMappedFileAccessExtensions_t2F205A077E4E7DA69B5572AEB63C32CC96C64060  : public RuntimeObject
{
};

// System.IO.MemoryMappedFiles.MemoryMappedView
struct MemoryMappedView_t589678987CBDE2D54C19A3358975AC8DFB80F2DA  : public RuntimeObject
{
	// Microsoft.Win32.SafeHandles.SafeMemoryMappedViewHandle System.IO.MemoryMappedFiles.MemoryMappedView::_handle
	SafeMemoryMappedViewHandle_t515B2CC8608ADA913D58A7E81A15E12A7A2D05D8* ____handle_0;
	// System.Int64 System.IO.MemoryMappedFiles.MemoryMappedView::_size
	int64_t ____size_1;
	// System.Int64 System.IO.MemoryMappedFiles.MemoryMappedView::_offset
	int64_t ____offset_2;
};

// System.IO.MemoryMappedFiles.MemoryMappedViewAccessor
struct MemoryMappedViewAccessor_tBE3AFBB21241B0AF9349B08F03DDEF4E11A4D2AE  : public RuntimeObject
{
	// System.IO.MemoryMappedFiles.MemoryMappedView System.IO.MemoryMappedFiles.MemoryMappedViewAccessor::_view
	MemoryMappedView_t589678987CBDE2D54C19A3358975AC8DFB80F2DA* ____view_0;
};

// SharedMemory.SharedBuffer
struct SharedBuffer_t1BE086CC5133873A7F23428A7998BCC0B9BEAE28  : public RuntimeObject
{
	// System.IO.MemoryMappedFiles.MemoryMappedFile SharedMemory.SharedBuffer::Mmf
	MemoryMappedFile_t3A8911F989B099EDED5FF35E0EED6DF65ECD01E4* ___Mmf_0;
	// System.IO.MemoryMappedFiles.MemoryMappedViewAccessor SharedMemory.SharedBuffer::View
	MemoryMappedViewAccessor_tBE3AFBB21241B0AF9349B08F03DDEF4E11A4D2AE* ___View_1;
	// System.Byte* SharedMemory.SharedBuffer::ViewPtr
	uint8_t* ___ViewPtr_2;
	// System.Byte* SharedMemory.SharedBuffer::BufferStartPtr
	uint8_t* ___BufferStartPtr_3;
	// SharedMemory.SharedHeader* SharedMemory.SharedBuffer::Header
	SharedHeader_tA88D452C04A0B4193E2A2DB0D40F6AD4E9144918* ___Header_4;
	// System.String SharedMemory.SharedBuffer::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_5;
	// System.Int64 SharedMemory.SharedBuffer::<BufferSize>k__BackingField
	int64_t ___U3CBufferSizeU3Ek__BackingField_6;
	// System.Boolean SharedMemory.SharedBuffer::<IsOwnerOfSharedMemory>k__BackingField
	bool ___U3CIsOwnerOfSharedMemoryU3Ek__BackingField_7;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// SharedMemory.UnsafeNativeMethods
struct UnsafeNativeMethods_tE91BF5249811343D7CF1B4E28FFF39EC649C29C3  : public RuntimeObject
{
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// SharedMemory.BufferWithLocks
struct BufferWithLocks_tAC66E561168ED8E40BDABCC964399BA062D85731  : public SharedBuffer_t1BE086CC5133873A7F23428A7998BCC0B9BEAE28
{
	// System.Int32 SharedMemory.BufferWithLocks::_readWriteTimeout
	int32_t ____readWriteTimeout_8;
	// System.Threading.EventWaitHandle SharedMemory.BufferWithLocks::<WriteWaitEvent>k__BackingField
	EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* ___U3CWriteWaitEventU3Ek__BackingField_9;
	// System.Threading.EventWaitHandle SharedMemory.BufferWithLocks::<ReadWaitEvent>k__BackingField
	EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* ___U3CReadWaitEventU3Ek__BackingField_10;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// SharedMemory.CircularBuffer
struct CircularBuffer_tB62401E0B61024C9A683EE0918EE03921EEEE35B  : public SharedBuffer_t1BE086CC5133873A7F23428A7998BCC0B9BEAE28
{
	// SharedMemory.CircularBuffer/NodeHeader* SharedMemory.CircularBuffer::_nodeHeader
	NodeHeader_tC7AA1A5DCEAE807D7B9DFE8A402114E0E1AF13F4* ____nodeHeader_8;
	// System.Int32 SharedMemory.CircularBuffer::<NodeCount>k__BackingField
	int32_t ___U3CNodeCountU3Ek__BackingField_9;
	// System.Int32 SharedMemory.CircularBuffer::<NodeBufferSize>k__BackingField
	int32_t ___U3CNodeBufferSizeU3Ek__BackingField_10;
	// System.Threading.EventWaitHandle SharedMemory.CircularBuffer::<DataExists>k__BackingField
	EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* ___U3CDataExistsU3Ek__BackingField_11;
	// System.Threading.EventWaitHandle SharedMemory.CircularBuffer::<NodeAvailable>k__BackingField
	EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* ___U3CNodeAvailableU3Ek__BackingField_12;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// SharedMemory.SharedHeader
struct SharedHeader_tA88D452C04A0B4193E2A2DB0D40F6AD4E9144918 
{
	// System.Int64 SharedMemory.SharedHeader::SharedMemorySize
	int64_t ___SharedMemorySize_0;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) SharedMemory.SharedHeader::Shutdown
	int32_t ___Shutdown_1;
	// System.Int32 SharedMemory.SharedHeader::_padding0
	int32_t ____padding0_2;
};
// Native definition for P/Invoke marshalling of SharedMemory.SharedHeader
struct SharedHeader_tA88D452C04A0B4193E2A2DB0D40F6AD4E9144918_marshaled_pinvoke
{
	int64_t ___SharedMemorySize_0;
	int32_t ___Shutdown_1;
	int32_t ____padding0_2;
};
// Native definition for COM marshalling of SharedMemory.SharedHeader
struct SharedHeader_tA88D452C04A0B4193E2A2DB0D40F6AD4E9144918_marshaled_com
{
	int64_t ___SharedMemorySize_0;
	int32_t ___Shutdown_1;
	int32_t ____padding0_2;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// System.UIntPtr
struct UIntPtr_t 
{
	// System.Void* System.UIntPtr::_pointer
	void* ____pointer_1;
};

struct UIntPtr_t_StaticFields
{
	// System.UIntPtr System.UIntPtr::Zero
	uintptr_t ___Zero_0;
};

// System.Void
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

// SharedMemory.CircularBuffer/Node
struct Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E 
{
	// System.Int32 SharedMemory.CircularBuffer/Node::Next
	int32_t ___Next_0;
	// System.Int32 SharedMemory.CircularBuffer/Node::Prev
	int32_t ___Prev_1;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) SharedMemory.CircularBuffer/Node::DoneRead
	int32_t ___DoneRead_2;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) SharedMemory.CircularBuffer/Node::DoneWrite
	int32_t ___DoneWrite_3;
	// System.Int64 SharedMemory.CircularBuffer/Node::Offset
	int64_t ___Offset_4;
	// System.Int32 SharedMemory.CircularBuffer/Node::Index
	int32_t ___Index_5;
	// System.Int32 SharedMemory.CircularBuffer/Node::AmountWritten
	int32_t ___AmountWritten_6;
};
// Native definition for P/Invoke marshalling of SharedMemory.CircularBuffer/Node
struct Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E_marshaled_pinvoke
{
	int32_t ___Next_0;
	int32_t ___Prev_1;
	int32_t ___DoneRead_2;
	int32_t ___DoneWrite_3;
	int64_t ___Offset_4;
	int32_t ___Index_5;
	int32_t ___AmountWritten_6;
};
// Native definition for COM marshalling of SharedMemory.CircularBuffer/Node
struct Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E_marshaled_com
{
	int32_t ___Next_0;
	int32_t ___Prev_1;
	int32_t ___DoneRead_2;
	int32_t ___DoneWrite_3;
	int64_t ___Offset_4;
	int32_t ___Index_5;
	int32_t ___AmountWritten_6;
};

// SharedMemory.CircularBuffer/NodeHeader
struct NodeHeader_tC7AA1A5DCEAE807D7B9DFE8A402114E0E1AF13F4 
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) SharedMemory.CircularBuffer/NodeHeader::ReadEnd
	int32_t ___ReadEnd_0;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) SharedMemory.CircularBuffer/NodeHeader::ReadStart
	int32_t ___ReadStart_1;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) SharedMemory.CircularBuffer/NodeHeader::WriteEnd
	int32_t ___WriteEnd_2;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) SharedMemory.CircularBuffer/NodeHeader::WriteStart
	int32_t ___WriteStart_3;
	// System.Int32 SharedMemory.CircularBuffer/NodeHeader::NodeCount
	int32_t ___NodeCount_4;
	// System.Int32 SharedMemory.CircularBuffer/NodeHeader::NodeBufferSize
	int32_t ___NodeBufferSize_5;
};
// Native definition for P/Invoke marshalling of SharedMemory.CircularBuffer/NodeHeader
struct NodeHeader_tC7AA1A5DCEAE807D7B9DFE8A402114E0E1AF13F4_marshaled_pinvoke
{
	int32_t ___ReadEnd_0;
	int32_t ___ReadStart_1;
	int32_t ___WriteEnd_2;
	int32_t ___WriteStart_3;
	int32_t ___NodeCount_4;
	int32_t ___NodeBufferSize_5;
};
// Native definition for COM marshalling of SharedMemory.CircularBuffer/NodeHeader
struct NodeHeader_tC7AA1A5DCEAE807D7B9DFE8A402114E0E1AF13F4_marshaled_com
{
	int32_t ___ReadEnd_0;
	int32_t ___ReadStart_1;
	int32_t ___WriteEnd_2;
	int32_t ___WriteStart_3;
	int32_t ___NodeCount_4;
	int32_t ___NodeBufferSize_5;
};

// SharedMemory.UnsafeNativeMethods/_PROCESSOR_INFO_UNION
struct _PROCESSOR_INFO_UNION_t44803C144EF46E95079A4FAA455E9D82AB4D3A7B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt32 SharedMemory.UnsafeNativeMethods/_PROCESSOR_INFO_UNION::dwOemId
			uint32_t ___dwOemId_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___dwOemId_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt16 SharedMemory.UnsafeNativeMethods/_PROCESSOR_INFO_UNION::wProcessorArchitecture
			uint16_t ___wProcessorArchitecture_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint16_t ___wProcessorArchitecture_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___wReserved_2_OffsetPadding[2];
			// System.UInt16 SharedMemory.UnsafeNativeMethods/_PROCESSOR_INFO_UNION::wReserved
			uint16_t ___wReserved_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___wReserved_2_OffsetPadding_forAlignmentOnly[2];
			uint16_t ___wReserved_2_forAlignmentOnly;
		};
	};
};

// SharedMemory.BufferReadWrite
struct BufferReadWrite_t47341F578A6C54B0DB9D5B44B0EF1A32A325397D  : public BufferWithLocks_tAC66E561168ED8E40BDABCC964399BA062D85731
{
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.Runtime.InteropServices.SafeHandle
struct SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7  : public CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9
{
	// System.IntPtr System.Runtime.InteropServices.SafeHandle::handle
	intptr_t ___handle_0;
	// System.Int32 System.Runtime.InteropServices.SafeHandle::_state
	int32_t ____state_1;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_ownsHandle
	bool ____ownsHandle_2;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_fullyInitialized
	bool ____fullyInitialized_3;
};

// System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IntPtr System.Threading.WaitHandle::waitHandle
	intptr_t ___waitHandle_3;
	// Microsoft.Win32.SafeHandles.SafeWaitHandle modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.WaitHandle::safeWaitHandle
	SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449* ___safeWaitHandle_4;
	// System.Boolean System.Threading.WaitHandle::hasThreadAffinity
	bool ___hasThreadAffinity_5;
};

struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_StaticFields
{
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_11;
};
// Native definition for P/Invoke marshalling of System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshaled_pinvoke : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};
// Native definition for COM marshalling of System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshaled_com : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};

// SharedMemory.UnsafeNativeMethods/SYSTEM_INFO
struct SYSTEM_INFO_t2F91F0CD35F886FB1148BA1884921D9920C008E5 
{
	// SharedMemory.UnsafeNativeMethods/_PROCESSOR_INFO_UNION SharedMemory.UnsafeNativeMethods/SYSTEM_INFO::uProcessorInfo
	_PROCESSOR_INFO_UNION_t44803C144EF46E95079A4FAA455E9D82AB4D3A7B ___uProcessorInfo_0;
	// System.UInt32 SharedMemory.UnsafeNativeMethods/SYSTEM_INFO::dwPageSize
	uint32_t ___dwPageSize_1;
	// System.IntPtr SharedMemory.UnsafeNativeMethods/SYSTEM_INFO::lpMinimumApplicationAddress
	intptr_t ___lpMinimumApplicationAddress_2;
	// System.IntPtr SharedMemory.UnsafeNativeMethods/SYSTEM_INFO::lpMaximumApplicationAddress
	intptr_t ___lpMaximumApplicationAddress_3;
	// System.IntPtr SharedMemory.UnsafeNativeMethods/SYSTEM_INFO::dwActiveProcessorMask
	intptr_t ___dwActiveProcessorMask_4;
	// System.UInt32 SharedMemory.UnsafeNativeMethods/SYSTEM_INFO::dwNumberOfProcessors
	uint32_t ___dwNumberOfProcessors_5;
	// System.UInt32 SharedMemory.UnsafeNativeMethods/SYSTEM_INFO::dwProcessorType
	uint32_t ___dwProcessorType_6;
	// System.UInt32 SharedMemory.UnsafeNativeMethods/SYSTEM_INFO::dwAllocationGranularity
	uint32_t ___dwAllocationGranularity_7;
	// System.UInt16 SharedMemory.UnsafeNativeMethods/SYSTEM_INFO::dwProcessorLevel
	uint16_t ___dwProcessorLevel_8;
	// System.UInt16 SharedMemory.UnsafeNativeMethods/SYSTEM_INFO::dwProcessorRevision
	uint16_t ___dwProcessorRevision_9;
};

// System.Threading.EventWaitHandle
struct EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E  : public WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// Microsoft.Win32.SafeHandles.SafeHandleZeroOrMinusOneIsInvalid
struct SafeHandleZeroOrMinusOneIsInvalid_tC152552D137451170B3B1A304227B0ECADB65629  : public SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Action`1<System.IntPtr>
struct Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2  : public MulticastDelegate_t
{
};

// System.Func`2<System.IntPtr,System.Int32>
struct Func_2_tB5422B774B20A6FA5E1E2A7456E87A4C47AF1F04  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E  : public SafeHandleZeroOrMinusOneIsInvalid_tC152552D137451170B3B1A304227B0ECADB65629
{
};

// Microsoft.Win32.SafeHandles.SafeMemoryMappedFileHandle
struct SafeMemoryMappedFileHandle_t0A052D02752BF6099772EFE4BB1145F72571165A  : public SafeHandleZeroOrMinusOneIsInvalid_tC152552D137451170B3B1A304227B0ECADB65629
{
};

// Microsoft.Win32.SafeHandles.SafeMemoryMappedViewHandle
struct SafeMemoryMappedViewHandle_t515B2CC8608ADA913D58A7E81A15E12A7A2D05D8  : public SafeHandleZeroOrMinusOneIsInvalid_tC152552D137451170B3B1A304227B0ECADB65629
{
};

// System.TimeoutException
struct TimeoutException_t7552449BA7E0911AEA1B6C7D1BEAC6534819305F  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};

// System.IO.FileNotFoundException
struct FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A  : public IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910
{
	// System.String System.IO.FileNotFoundException::<FileName>k__BackingField
	String_t* ___U3CFileNameU3Ek__BackingField_18;
	// System.String System.IO.FileNotFoundException::<FusionLog>k__BackingField
	String_t* ___U3CFusionLogU3Ek__BackingField_19;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// SharedMemory.CircularBuffer/Node[]
struct NodeU5BU5D_t4430D55C36F60C5C2A1876D4B01D09719861ED0D  : public RuntimeArray
{
	ALIGN_FIELD (8) Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E m_Items[1];

	inline Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[]
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


// System.Void System.IO.MemoryMappedFiles.MemoryMappedViewAccessor::Write<SharedMemory.SharedHeader>(System.Int64,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryMappedViewAccessor_Write_TisSharedHeader_tA88D452C04A0B4193E2A2DB0D40F6AD4E9144918_mA4BDAAA3DCAF62071ACEA91824D81B32544AE517_gshared (MemoryMappedViewAccessor_tBE3AFBB21241B0AF9349B08F03DDEF4E11A4D2AE* __this, int64_t ___position0, SharedHeader_tA88D452C04A0B4193E2A2DB0D40F6AD4E9144918* ___structure1, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.IntPtr>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m783EC8C62449882812B741E4DE67BF3106686D9C_gshared_inline (Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* __this, intptr_t ___obj0, const RuntimeMethod* method) ;
// System.Void SharedMemory.SharedBuffer::Write<SharedMemory.CircularBuffer/NodeHeader>(T&,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedBuffer_Write_TisNodeHeader_tC7AA1A5DCEAE807D7B9DFE8A402114E0E1AF13F4_m9CEDF7B9D137E3F4A3700800C0CF6721F12F945E_gshared (SharedBuffer_t1BE086CC5133873A7F23428A7998BCC0B9BEAE28* __this, NodeHeader_tC7AA1A5DCEAE807D7B9DFE8A402114E0E1AF13F4* ___source0, int64_t ___bufferPosition1, const RuntimeMethod* method) ;
// System.Void SharedMemory.SharedBuffer::WriteArray<SharedMemory.CircularBuffer/Node>(T[],System.Int32,System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedBuffer_WriteArray_TisNode_t90DACB0900841EED2B259072EDC87CF7F68E3D2E_m66DA3B86383F52E9DF40D128F36C59F12DF5D275_gshared (SharedBuffer_t1BE086CC5133873A7F23428A7998BCC0B9BEAE28* __this, NodeU5BU5D_t4430D55C36F60C5C2A1876D4B01D09719861ED0D* ___source0, int32_t ___index1, int32_t ___count2, int64_t ___bufferPosition3, const RuntimeMethod* method) ;
// TResult System.Func`2<System.IntPtr,System.Int32>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_mC547E921430F6789DF79C5F7F757D16A56655047_gshared_inline (Func_2_tB5422B774B20A6FA5E1E2A7456E87A4C47AF1F04* __this, intptr_t ___arg0, const RuntimeMethod* method) ;

// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Int32 System.Runtime.InteropServices.Marshal::SizeOf(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7 (Type_t* ___t0, const RuntimeMethod* method) ;
// System.Int64 SharedMemory.SharedBuffer::get_BufferSize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t SharedBuffer_get_BufferSize_m079DC81126C56E7D9A7B4422A149FCC325B4C68C_inline (SharedBuffer_t1BE086CC5133873A7F23428A7998BCC0B9BEAE28* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, RuntimeObject* ___actualValue1, String_t* ___message2, const RuntimeMethod* method) ;
// System.Void SharedMemory.SharedBuffer::set_IsOwnerOfSharedMemory(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SharedBuffer_set_IsOwnerOfSharedMemory_mA2DD6CA90DD1CFC6A62ABA21B31CB9217066C511_inline (SharedBuffer_t1BE086CC5133873A7F23428A7998BCC0B9BEAE28* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void SharedMemory.SharedBuffer::set_Name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SharedBuffer_set_Name_m646E256DC54E5BB4B698865AB509FAD951C7CF6B_inline (SharedBuffer_t1BE086CC5133873A7F23428A7998BCC0B9BEAE28* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean SharedMemory.SharedBuffer::get_IsOwnerOfSharedMemory()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SharedBuffer_get_IsOwnerOfSharedMemory_mE8D1F53A78E6165CF3B93D20D8CDA805B9B79D9E_inline (SharedBuffer_t1BE086CC5133873A7F23428A7998BCC0B9BEAE28* __this, const RuntimeMethod* method) ;
// System.Void SharedMemory.SharedBuffer::set_BufferSize(System.Int64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SharedBuffer_set_BufferSize_mD78750A89B933A2DBD7BDD383C730F8B0EA5F03A_inline (SharedBuffer_t1BE086CC5133873A7F23428A7998BCC0B9BEAE28* __this, int64_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String SharedMemory.SharedBuffer::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SharedBuffer_get_Name_m0FF831FE269B502B1F0766EDE1D2E92889BB26A9_inline (SharedBuffer_t1BE086CC5133873A7F23428A7998BCC0B9BEAE28* __this, const RuntimeMethod* method) ;
// System.IO.MemoryMappedFiles.MemoryMappedFile System.IO.MemoryMappedFiles.MemoryMappedFile::CreateNew(System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemoryMappedFile_t3A8911F989B099EDED5FF35E0EED6DF65ECD01E4* MemoryMappedFile_CreateNew_mE5C596EDD27EB18B6CA8D4C03093301BFDA82395 (String_t* ___mapName0, int64_t ___capacity1, const RuntimeMethod* method) ;
// System.IO.MemoryMappedFiles.MemoryMappedViewAccessor System.IO.MemoryMappedFiles.MemoryMappedFile::CreateViewAccessor(System.Int64,System.Int64,System.IO.MemoryMappedFiles.MemoryMappedFileAccess)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemoryMappedViewAccessor_tBE3AFBB21241B0AF9349B08F03DDEF4E11A4D2AE* MemoryMappedFile_CreateViewAccessor_m3111CEB2E7741A9B6D16E6A77E326C21D781FF2B (MemoryMappedFile_t3A8911F989B099EDED5FF35E0EED6DF65ECD01E4* __this, int64_t ___offset0, int64_t ___size1, uint32_t ___access2, const RuntimeMethod* method) ;
// Microsoft.Win32.SafeHandles.SafeMemoryMappedViewHandle System.IO.MemoryMappedFiles.MemoryMappedViewAccessor::get_SafeMemoryMappedViewHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SafeMemoryMappedViewHandle_t515B2CC8608ADA913D58A7E81A15E12A7A2D05D8* MemoryMappedViewAccessor_get_SafeMemoryMappedViewHandle_m19283DC146A0D18F42D94D2347B87E5880ECEBF3 (MemoryMappedViewAccessor_tBE3AFBB21241B0AF9349B08F03DDEF4E11A4D2AE* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.Win32.SafeHandles.SafeMemoryMappedViewHandle::AcquirePointer(System.Byte*&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeMemoryMappedViewHandle_AcquirePointer_mEA48847EABCD4983E1392586A57A361A124A98A5 (SafeMemoryMappedViewHandle_t515B2CC8608ADA913D58A7E81A15E12A7A2D05D8* __this, uint8_t** ___pointer0, const RuntimeMethod* method) ;
// System.Void SharedMemory.SharedBuffer::InitialiseHeader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedBuffer_InitialiseHeader_m384B04BF5929C697183715DECE90237FB13BD008 (SharedBuffer_t1BE086CC5133873A7F23428A7998BCC0B9BEAE28* __this, const RuntimeMethod* method) ;
// System.IO.MemoryMappedFiles.MemoryMappedFile System.IO.MemoryMappedFiles.MemoryMappedFile::OpenExisting(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemoryMappedFile_t3A8911F989B099EDED5FF35E0EED6DF65ECD01E4* MemoryMappedFile_OpenExisting_m100D28BA2084724AD598A04C10F6D25441C703ED (String_t* ___mapName0, const RuntimeMethod* method) ;
// System.Void Microsoft.Win32.SafeHandles.SafeMemoryMappedViewHandle::ReleasePointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeMemoryMappedViewHandle_ReleasePointer_m01EC55799D58F87A530D49BEA7E7AA4AB250305B (SafeMemoryMappedViewHandle_t515B2CC8608ADA913D58A7E81A15E12A7A2D05D8* __this, const RuntimeMethod* method) ;
// System.Void System.IO.MemoryMappedFiles.MemoryMappedViewAccessor::Write<SharedMemory.SharedHeader>(System.Int64,T&)
inline void MemoryMappedViewAccessor_Write_TisSharedHeader_tA88D452C04A0B4193E2A2DB0D40F6AD4E9144918_mA4BDAAA3DCAF62071ACEA91824D81B32544AE517 (MemoryMappedViewAccessor_tBE3AFBB21241B0AF9349B08F03DDEF4E11A4D2AE* __this, int64_t ___position0, SharedHeader_tA88D452C04A0B4193E2A2DB0D40F6AD4E9144918* ___structure1, const RuntimeMethod* method)
{
	((  void (*) (MemoryMappedViewAccessor_tBE3AFBB21241B0AF9349B08F03DDEF4E11A4D2AE*, int64_t, SharedHeader_tA88D452C04A0B4193E2A2DB0D40F6AD4E9144918*, const RuntimeMethod*))MemoryMappedViewAccessor_Write_TisSharedHeader_tA88D452C04A0B4193E2A2DB0D40F6AD4E9144918_mA4BDAAA3DCAF62071ACEA91824D81B32544AE517_gshared)(__this, ___position0, ___structure1, method);
}
// System.Int32 System.Threading.Interlocked::Exchange(System.Int32&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF (int32_t* ___location10, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void System.IO.MemoryMappedFiles.MemoryMappedViewAccessor::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryMappedViewAccessor_Dispose_m66A512D27D913A64F3A75E069EC1C0FAFBA32ABD (MemoryMappedViewAccessor_tBE3AFBB21241B0AF9349B08F03DDEF4E11A4D2AE* __this, const RuntimeMethod* method) ;
// System.Void System.IO.MemoryMappedFiles.MemoryMappedFile::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryMappedFile_Dispose_mB1F89986FAC837BDB94CB77B2C48729023607063 (MemoryMappedFile_t3A8911F989B099EDED5FF35E0EED6DF65ECD01E4* __this, const RuntimeMethod* method) ;
// System.Void System.IntPtr::.ctor(System.Void*)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline (intptr_t* __this, void* ___value0, const RuntimeMethod* method) ;
// System.Void SharedMemory.UnsafeNativeMethods::CopyMemory(System.IntPtr,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeNativeMethods_CopyMemory_mCEE45D67569FDA59291C7209D2357F585E40ABCA (intptr_t ___dest0, intptr_t ___src1, uint32_t ___count2, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.IntPtr>::Invoke(T)
inline void Action_1_Invoke_m783EC8C62449882812B741E4DE67BF3106686D9C_inline (Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* __this, intptr_t ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2*, intptr_t, const RuntimeMethod*))Action_1_Invoke_m783EC8C62449882812B741E4DE67BF3106686D9C_gshared_inline)(__this, ___obj0, method);
}
// System.Void SharedMemory.SharedBuffer::.ctor(System.String,System.Int64,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedBuffer__ctor_mF9A1B8A7114D10B73830A26B8B5828D8415D3EE9 (SharedBuffer_t1BE086CC5133873A7F23428A7998BCC0B9BEAE28* __this, String_t* ___name0, int64_t ___bufferSize1, bool ___ownsSharedMemory2, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void System.Threading.EventWaitHandle::.ctor(System.Boolean,System.Threading.EventResetMode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventWaitHandle__ctor_m788FE824997F3E5B0351F619C50A824F53BF23C9 (EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* __this, bool ___initialState0, int32_t ___mode1, String_t* ___name2, const RuntimeMethod* method) ;
// System.Void SharedMemory.BufferWithLocks::set_WriteWaitEvent(System.Threading.EventWaitHandle)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BufferWithLocks_set_WriteWaitEvent_m83B40D8E8EDEC300A6EE0C55EB19CAD38384EA1A_inline (BufferWithLocks_tAC66E561168ED8E40BDABCC964399BA062D85731* __this, EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* ___value0, const RuntimeMethod* method) ;
// System.Void SharedMemory.BufferWithLocks::set_ReadWaitEvent(System.Threading.EventWaitHandle)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BufferWithLocks_set_ReadWaitEvent_m3EB06ECC7CD5E3182761323CE9C8816B34A97FB9_inline (BufferWithLocks_tAC66E561168ED8E40BDABCC964399BA062D85731* __this, EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* ___value0, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Threading.EventWaitHandle SharedMemory.BufferWithLocks::get_ReadWaitEvent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* BufferWithLocks_get_ReadWaitEvent_m47385F2D3427305FE3226CFE6C920A88B6066419_inline (BufferWithLocks_tAC66E561168ED8E40BDABCC964399BA062D85731* __this, const RuntimeMethod* method) ;
// System.Threading.EventWaitHandle SharedMemory.BufferWithLocks::get_WriteWaitEvent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* BufferWithLocks_get_WriteWaitEvent_m960C7F7D2FC71C16121E1CF564B8053395F3DD53_inline (BufferWithLocks_tAC66E561168ED8E40BDABCC964399BA062D85731* __this, const RuntimeMethod* method) ;
// System.Boolean System.Threading.EventWaitHandle::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventWaitHandle_Reset_m84719BED571BDAAEE27EE05F57295C7107A74DE6 (EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* __this, const RuntimeMethod* method) ;
// System.Boolean System.Threading.EventWaitHandle::Set()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventWaitHandle_Set_mDF98D67F214714A9590DF82A1C51D3D851281E4D (EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* __this, const RuntimeMethod* method) ;
// System.Void System.TimeoutException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeoutException__ctor_mAC3BF713E7242641234A1E292C470655E1EFA964 (TimeoutException_t7552449BA7E0911AEA1B6C7D1BEAC6534819305F* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void SharedMemory.BufferWithLocks::WriteWait()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferWithLocks_WriteWait_mAE16A867C4D3C925A78DF2FA7EAE7CDFA38EA451 (BufferWithLocks_tAC66E561168ED8E40BDABCC964399BA062D85731* __this, const RuntimeMethod* method) ;
// System.Void SharedMemory.SharedBuffer::Write(System.IntPtr,System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedBuffer_Write_m00645415CBDA6892DA0064D3F416539170BF7896 (SharedBuffer_t1BE086CC5133873A7F23428A7998BCC0B9BEAE28* __this, intptr_t ___source0, int32_t ___length1, int64_t ___bufferPosition2, const RuntimeMethod* method) ;
// System.Void SharedMemory.SharedBuffer::Write(System.Action`1<System.IntPtr>,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedBuffer_Write_m621F0ECDCE8394458720F4CF10884626D636477F (SharedBuffer_t1BE086CC5133873A7F23428A7998BCC0B9BEAE28* __this, Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___writeFunc0, int64_t ___bufferPosition1, const RuntimeMethod* method) ;
// System.Void SharedMemory.BufferWithLocks::ReadWait()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferWithLocks_ReadWait_mD17B1AA303CFC5A5203382AF95481AF7B5922CFD (BufferWithLocks_tAC66E561168ED8E40BDABCC964399BA062D85731* __this, const RuntimeMethod* method) ;
// System.Void SharedMemory.SharedBuffer::Read(System.IntPtr,System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedBuffer_Read_mA09DD8DDB1A1B16520BC154CB57B0CA8F1845FEA (SharedBuffer_t1BE086CC5133873A7F23428A7998BCC0B9BEAE28* __this, intptr_t ___destination0, int32_t ___length1, int64_t ___bufferPosition2, const RuntimeMethod* method) ;
// System.Void SharedMemory.SharedBuffer::Read(System.Action`1<System.IntPtr>,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedBuffer_Read_m068060AE46E117BDB4DE0524ED67C85419EFE6EC (SharedBuffer_t1BE086CC5133873A7F23428A7998BCC0B9BEAE28* __this, Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___readFunc0, int64_t ___bufferPosition1, const RuntimeMethod* method) ;
// System.Void SharedMemory.SharedBuffer::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedBuffer_Dispose_m27620E4F304D70A8D2ED01CFA80D5E91D0DCBB8B (SharedBuffer_t1BE086CC5133873A7F23428A7998BCC0B9BEAE28* __this, bool ___disposeManagedResources0, const RuntimeMethod* method) ;
// System.Int32 SharedMemory.CircularBuffer::get_NodeCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CircularBuffer_get_NodeCount_mF8507542126E0ED2D7118B5184F1E9F65F33ED28_inline (CircularBuffer_tB62401E0B61024C9A683EE0918EE03921EEEE35B* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, const RuntimeMethod* method) ;
// System.Void SharedMemory.CircularBuffer::.ctor(System.String,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircularBuffer__ctor_m8E7FFB790FDBBC88F53F2DC52C259995C4E4BACD (CircularBuffer_tB62401E0B61024C9A683EE0918EE03921EEEE35B* __this, String_t* ___name0, int32_t ___nodeCount1, int32_t ___nodeBufferSize2, bool ___ownsSharedMemory3, const RuntimeMethod* method) ;
// System.Boolean SharedMemory.SharedBuffer::Open()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SharedBuffer_Open_m926621CDD3B74EF7690F5DD93E278F0F65F5C2EE (SharedBuffer_t1BE086CC5133873A7F23428A7998BCC0B9BEAE28* __this, const RuntimeMethod* method) ;
// System.Void SharedMemory.CircularBuffer::set_NodeCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CircularBuffer_set_NodeCount_m36B17D860A2C93AFFEAB202CDCFA41B828E94894_inline (CircularBuffer_tB62401E0B61024C9A683EE0918EE03921EEEE35B* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void SharedMemory.CircularBuffer::set_NodeBufferSize(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CircularBuffer_set_NodeBufferSize_m5D7A14407C03E47DA6A78EDC8E8098ADFD36B21D_inline (CircularBuffer_tB62401E0B61024C9A683EE0918EE03921EEEE35B* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void SharedMemory.CircularBuffer::set_DataExists(System.Threading.EventWaitHandle)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CircularBuffer_set_DataExists_m9474440B1A81063CC562EB9AE53501F99168C9FB_inline (CircularBuffer_tB62401E0B61024C9A683EE0918EE03921EEEE35B* __this, EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* ___value0, const RuntimeMethod* method) ;
// System.Void SharedMemory.CircularBuffer::set_NodeAvailable(System.Threading.EventWaitHandle)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CircularBuffer_set_NodeAvailable_m90195BDF74175BB3A87FEF7943049DC8A685D1C6_inline (CircularBuffer_tB62401E0B61024C9A683EE0918EE03921EEEE35B* __this, EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* ___value0, const RuntimeMethod* method) ;
// System.Void SharedMemory.CircularBuffer::InitialiseNodeHeader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircularBuffer_InitialiseNodeHeader_mF12542C4822A8FB405F393A4F42C9634BAD052BA (CircularBuffer_tB62401E0B61024C9A683EE0918EE03921EEEE35B* __this, const RuntimeMethod* method) ;
// System.Void SharedMemory.CircularBuffer::InitialiseLinkedListNodes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircularBuffer_InitialiseLinkedListNodes_mFBE3CFBC42CB17020CA3CEEBFA66FE30A095E86C (CircularBuffer_tB62401E0B61024C9A683EE0918EE03921EEEE35B* __this, const RuntimeMethod* method) ;
// System.Int32 SharedMemory.CircularBuffer::get_NodeBufferSize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CircularBuffer_get_NodeBufferSize_m6AC51F5DA1A42CD91E92975CF194D71A90D14905_inline (CircularBuffer_tB62401E0B61024C9A683EE0918EE03921EEEE35B* __this, const RuntimeMethod* method) ;
// System.Void SharedMemory.SharedBuffer::Write<SharedMemory.CircularBuffer/NodeHeader>(T&,System.Int64)
inline void SharedBuffer_Write_TisNodeHeader_tC7AA1A5DCEAE807D7B9DFE8A402114E0E1AF13F4_m9CEDF7B9D137E3F4A3700800C0CF6721F12F945E (SharedBuffer_t1BE086CC5133873A7F23428A7998BCC0B9BEAE28* __this, NodeHeader_tC7AA1A5DCEAE807D7B9DFE8A402114E0E1AF13F4* ___source0, int64_t ___bufferPosition1, const RuntimeMethod* method)
{
	((  void (*) (SharedBuffer_t1BE086CC5133873A7F23428A7998BCC0B9BEAE28*, NodeHeader_tC7AA1A5DCEAE807D7B9DFE8A402114E0E1AF13F4*, int64_t, const RuntimeMethod*))SharedBuffer_Write_TisNodeHeader_tC7AA1A5DCEAE807D7B9DFE8A402114E0E1AF13F4_m9CEDF7B9D137E3F4A3700800C0CF6721F12F945E_gshared)(__this, ___source0, ___bufferPosition1, method);
}
// System.Void SharedMemory.SharedBuffer::WriteArray<SharedMemory.CircularBuffer/Node>(T[],System.Int32,System.Int32,System.Int64)
inline void SharedBuffer_WriteArray_TisNode_t90DACB0900841EED2B259072EDC87CF7F68E3D2E_m66DA3B86383F52E9DF40D128F36C59F12DF5D275 (SharedBuffer_t1BE086CC5133873A7F23428A7998BCC0B9BEAE28* __this, NodeU5BU5D_t4430D55C36F60C5C2A1876D4B01D09719861ED0D* ___source0, int32_t ___index1, int32_t ___count2, int64_t ___bufferPosition3, const RuntimeMethod* method)
{
	((  void (*) (SharedBuffer_t1BE086CC5133873A7F23428A7998BCC0B9BEAE28*, NodeU5BU5D_t4430D55C36F60C5C2A1876D4B01D09719861ED0D*, int32_t, int32_t, int64_t, const RuntimeMethod*))SharedBuffer_WriteArray_TisNode_t90DACB0900841EED2B259072EDC87CF7F68E3D2E_m66DA3B86383F52E9DF40D128F36C59F12DF5D275_gshared)(__this, ___source0, ___index1, ___count2, ___bufferPosition3, method);
}
// System.Threading.EventWaitHandle SharedMemory.CircularBuffer::get_DataExists()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* CircularBuffer_get_DataExists_m075EB43256A2AD3F45176F1C1E48465021BB5C95_inline (CircularBuffer_tB62401E0B61024C9A683EE0918EE03921EEEE35B* __this, const RuntimeMethod* method) ;
// System.Threading.EventWaitHandle SharedMemory.CircularBuffer::get_NodeAvailable()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* CircularBuffer_get_NodeAvailable_mE1BD136B7360169ED0280F28595E81A69E899DF9_inline (CircularBuffer_tB62401E0B61024C9A683EE0918EE03921EEEE35B* __this, const RuntimeMethod* method) ;
// System.Int32 System.Threading.Interlocked::CompareExchange(System.Int32&,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717 (int32_t* ___location10, int32_t ___value1, int32_t ___comparand2, const RuntimeMethod* method) ;
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.Byte[],System.Int32,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_m0FD7BFE70EE28FC67B67A6225AD58F95FEE7EB85 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___source0, int32_t ___startIndex1, intptr_t ___destination2, int32_t ___length3, const RuntimeMethod* method) ;
// TResult System.Func`2<System.IntPtr,System.Int32>::Invoke(T)
inline int32_t Func_2_Invoke_mC547E921430F6789DF79C5F7F757D16A56655047_inline (Func_2_tB5422B774B20A6FA5E1E2A7456E87A4C47AF1F04* __this, intptr_t ___arg0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_2_tB5422B774B20A6FA5E1E2A7456E87A4C47AF1F04*, intptr_t, const RuntimeMethod*))Func_2_Invoke_mC547E921430F6789DF79C5F7F757D16A56655047_gshared_inline)(__this, ___arg0, method);
}
// System.Object System.Runtime.InteropServices.Marshal::PtrToStructure(System.IntPtr,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Marshal_PtrToStructure_m235E141E21BFB69A01B07DDDF1702BA7D5723AC3 (intptr_t ___ptr0, Type_t* ___structureType1, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_mF7402FFDB520EA1B8D1C32B368DBEE4B13F1BE77 (intptr_t ___source0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___destination1, int32_t ___startIndex2, int32_t ___length3, const RuntimeMethod* method) ;
// System.Void System.IO.MemoryMappedFiles.MemoryMappedFile::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryMappedFile_Dispose_m2E33663B91A8B304E38473E64B0DD9C9D5C3C159 (MemoryMappedFile_t3A8911F989B099EDED5FF35E0EED6DF65ECD01E4* __this, bool ___disposeManagedResources0, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Int32 System.IntPtr::get_Size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntPtr_get_Size_m1FAAA59DA73D7E32BB1AB55DD92A90AFE3251DBE (const RuntimeMethod* method) ;
// Microsoft.Win32.SafeHandles.SafeMemoryMappedFileHandle System.IO.MemoryMappedFiles.MemoryMappedFile::DoCreate(System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SafeMemoryMappedFileHandle_t0A052D02752BF6099772EFE4BB1145F72571165A* MemoryMappedFile_DoCreate_m67A3290F97768CC3379F69036F96240E0B955025 (String_t* ___mapName0, int64_t ___capacity1, const RuntimeMethod* method) ;
// System.Void System.IO.MemoryMappedFiles.MemoryMappedFile::.ctor(Microsoft.Win32.SafeHandles.SafeMemoryMappedFileHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryMappedFile__ctor_mD7EF21CBD78BCA8DEF52B1C315117046825F25A3 (MemoryMappedFile_t3A8911F989B099EDED5FF35E0EED6DF65ECD01E4* __this, SafeMemoryMappedFileHandle_t0A052D02752BF6099772EFE4BB1145F72571165A* ___handle0, const RuntimeMethod* method) ;
// System.Void System.IntPtr::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntPtr__ctor_m20A566609A091311C734617C699E61F545250AC7 (intptr_t* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.Win32.SafeHandles.SafeFileHandle::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeFileHandle__ctor_mDF2AFEC596DE2F6BD8FBB977135DAC23703213A2 (SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E* __this, intptr_t ___preexistingHandle0, bool ___ownsHandle1, const RuntimeMethod* method) ;
// Microsoft.Win32.SafeHandles.SafeMemoryMappedFileHandle SharedMemory.UnsafeNativeMethods::CreateFileMapping(Microsoft.Win32.SafeHandles.SafeFileHandle,SharedMemory.UnsafeNativeMethods/FileMapProtection,System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SafeMemoryMappedFileHandle_t0A052D02752BF6099772EFE4BB1145F72571165A* UnsafeNativeMethods_CreateFileMapping_m035957C739575675C869938978B5F3F315245EA9 (SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E* ___hFile0, uint32_t ___flProtect1, int64_t ___ddMaxSize2, String_t* ___lpName3, const RuntimeMethod* method) ;
// System.Int32 System.Runtime.InteropServices.Marshal::GetLastWin32Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Marshal_GetLastWin32Error_mCD7EBA7503BF36F46DB58D98E96101FB67684379 (const RuntimeMethod* method) ;
// System.String SharedMemory.UnsafeNativeMethods::GetMessage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnsafeNativeMethods_GetMessage_m355B3B46F65C13D13C2A154ECCACE17272A83497 (int32_t ___errorCode0, const RuntimeMethod* method) ;
// System.Void System.IO.IOException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOException__ctor_mE0612A16064F93C7EBB468D6874777BD70CB50CA (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.IO.MemoryMappedFiles.MemoryMappedView System.IO.MemoryMappedFiles.MemoryMappedView::CreateView(Microsoft.Win32.SafeHandles.SafeMemoryMappedFileHandle,System.IO.MemoryMappedFiles.MemoryMappedFileAccess,System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemoryMappedView_t589678987CBDE2D54C19A3358975AC8DFB80F2DA* MemoryMappedView_CreateView_m758071821EC5725A4F7BA5A20C85AF4B85DCB6D0 (SafeMemoryMappedFileHandle_t0A052D02752BF6099772EFE4BB1145F72571165A* ___safeMemoryMappedFileHandle0, uint32_t ___access1, int64_t ___offset2, int64_t ___size3, const RuntimeMethod* method) ;
// System.Void System.IO.MemoryMappedFiles.MemoryMappedViewAccessor::.ctor(System.IO.MemoryMappedFiles.MemoryMappedView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryMappedViewAccessor__ctor_m1027C8221FF49CE6E99A5A3D0952E0D9C8E5437B (MemoryMappedViewAccessor_tBE3AFBB21241B0AF9349B08F03DDEF4E11A4D2AE* __this, MemoryMappedView_t589678987CBDE2D54C19A3358975AC8DFB80F2DA* ___memoryMappedView0, const RuntimeMethod* method) ;
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.InteropServices.SafeHandle::get_IsClosed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SafeHandle_get_IsClosed_mD2CD4AA6E3B0A242E48080F18BC07199CAB80273 (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.SafeHandle::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle_Dispose_m4FB5B8A7ED78B90757F1B570D4025F3BA26A39F3 (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, const RuntimeMethod* method) ;
// Microsoft.Win32.SafeHandles.SafeMemoryMappedFileHandle SharedMemory.UnsafeNativeMethods::OpenFileMapping(System.UInt32,System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SafeMemoryMappedFileHandle_t0A052D02752BF6099772EFE4BB1145F72571165A* UnsafeNativeMethods_OpenFileMapping_m659C0A3140F523BD2B31B2B1190458915F25C410 (uint32_t ___dwDesiredAccess0, bool ___bInheritHandle1, String_t* ___lpName2, const RuntimeMethod* method) ;
// System.Void System.IO.FileNotFoundException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileNotFoundException__ctor_m02E41C66D9C7421CF93252AEE29CF96C15CA6E0B (FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A* __this, const RuntimeMethod* method) ;
// System.Void System.IO.MemoryMappedFiles.MemoryMappedView::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryMappedView_Dispose_mAD0736F9F783B8D5E0BE99DCC49636E8268DA437 (MemoryMappedView_t589678987CBDE2D54C19A3358975AC8DFB80F2DA* __this, bool ___disposeManagedResources0, const RuntimeMethod* method) ;
// System.Void SharedMemory.UnsafeNativeMethods::GetSystemInfo(SharedMemory.UnsafeNativeMethods/SYSTEM_INFO&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeNativeMethods_GetSystemInfo_m77B9420B5E9BE71921473375091570FF60114CC6 (SYSTEM_INFO_t2F91F0CD35F886FB1148BA1884921D9920C008E5* ___lpSystemInfo0, const RuntimeMethod* method) ;
// SharedMemory.UnsafeNativeMethods/FileMapAccess System.IO.MemoryMappedFiles.MemoryMappedFileAccessExtensions::ToMapViewFileAccess(System.IO.MemoryMappedFiles.MemoryMappedFileAccess)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t MemoryMappedFileAccessExtensions_ToMapViewFileAccess_m0DF6965A208F42D3645B8819F9A23B57B467D2C0 (uint32_t ___access0, const RuntimeMethod* method) ;
// System.Void System.UIntPtr::.ctor(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIntPtr__ctor_m8AD80E1EF069A66D0E48BF7765C91088B5C09419 (uintptr_t* __this, uint64_t ___value0, const RuntimeMethod* method) ;
// Microsoft.Win32.SafeHandles.SafeMemoryMappedViewHandle SharedMemory.UnsafeNativeMethods::MapViewOfFile(Microsoft.Win32.SafeHandles.SafeMemoryMappedFileHandle,SharedMemory.UnsafeNativeMethods/FileMapAccess,System.UInt64,System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SafeMemoryMappedViewHandle_t515B2CC8608ADA913D58A7E81A15E12A7A2D05D8* UnsafeNativeMethods_MapViewOfFile_m35A13512545AB84E34651764FCC2878560818B24 (SafeMemoryMappedFileHandle_t0A052D02752BF6099772EFE4BB1145F72571165A* ___hFileMappingObject0, uint32_t ___dwDesiredAccess1, uint64_t ___ddFileOffset2, uintptr_t ___dwNumberofBytesToMap3, const RuntimeMethod* method) ;
// System.Void System.IO.MemoryMappedFiles.MemoryMappedView::.ctor(Microsoft.Win32.SafeHandles.SafeMemoryMappedViewHandle,System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryMappedView__ctor_m97AF9A558D608D15C99C94B3488538337EF29FD9 (MemoryMappedView_t589678987CBDE2D54C19A3358975AC8DFB80F2DA* __this, SafeMemoryMappedViewHandle_t515B2CC8608ADA913D58A7E81A15E12A7A2D05D8* ___handle0, int64_t ___offset1, int64_t ___size2, const RuntimeMethod* method) ;
// Microsoft.Win32.SafeHandles.SafeMemoryMappedViewHandle System.IO.MemoryMappedFiles.MemoryMappedView::get_SafeMemoryMappedViewHandle()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SafeMemoryMappedViewHandle_t515B2CC8608ADA913D58A7E81A15E12A7A2D05D8* MemoryMappedView_get_SafeMemoryMappedViewHandle_m88039CC954D3321D6B8083A07483C99E9691503F_inline (MemoryMappedView_t589678987CBDE2D54C19A3358975AC8DFB80F2DA* __this, const RuntimeMethod* method) ;
// System.Void System.IO.MemoryMappedFiles.MemoryMappedViewAccessor::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryMappedViewAccessor_Dispose_m20BF64B70988A3434C2B4D4515C187E5D38F810C (MemoryMappedViewAccessor_tBE3AFBB21241B0AF9349B08F03DDEF4E11A4D2AE* __this, bool ___disposeManagedResources0, const RuntimeMethod* method) ;
// System.Void System.IO.MemoryMappedFiles.MemoryMappedView::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryMappedView_Dispose_mC8DB807978DD99F12ADCC4F0228C7ECC4F7C22D7 (MemoryMappedView_t589678987CBDE2D54C19A3358975AC8DFB80F2DA* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.Win32.SafeHandles.SafeHandleZeroOrMinusOneIsInvalid::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandleZeroOrMinusOneIsInvalid__ctor_m9BA85F78EC25654EE170CA999EC379D9A4B59B89 (SafeHandleZeroOrMinusOneIsInvalid_tC152552D137451170B3B1A304227B0ECADB65629* __this, bool ___ownsHandle0, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.SafeHandle::SetHandle(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SafeHandle_SetHandle_m003D64748F9DFBA1E3C0B23798C23BA81AA21C2A_inline (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, intptr_t ___handle0, const RuntimeMethod* method) ;
// System.Boolean SharedMemory.UnsafeNativeMethods::UnmapViewOfFile(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeNativeMethods_UnmapViewOfFile_m5428FB54BB4E04D11147145E318AE0FB954EA177 (intptr_t ___lpBaseAddress0, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.SafeHandle::DangerousAddRef(System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922 (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, bool* ___success0, const RuntimeMethod* method) ;
// System.Void* System.IntPtr::ToPointer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline (intptr_t* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.SafeHandle::DangerousRelease()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, const RuntimeMethod* method) ;
// System.Boolean SharedMemory.UnsafeNativeMethods::CloseHandle(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeNativeMethods_CloseHandle_m14BA1A43B3AC11D27635BC841F656F649C06A325 (intptr_t ___handle0, const RuntimeMethod* method) ;
// System.Void SharedMemory.BufferWithLocks::.ctor(System.String,System.Int64,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferWithLocks__ctor_mD623BF10F7A31DA95257995553BD6103666F6A1A (BufferWithLocks_tAC66E561168ED8E40BDABCC964399BA062D85731* __this, String_t* ___name0, int64_t ___bufferSize1, bool ___ownsSharedMemory2, const RuntimeMethod* method) ;
// System.Void SharedMemory.BufferWithLocks::Write(System.IntPtr,System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferWithLocks_Write_m9A4FFB1C114406EE355E386CB7813283EE723D98 (BufferWithLocks_tAC66E561168ED8E40BDABCC964399BA062D85731* __this, intptr_t ___ptr0, int32_t ___length1, int64_t ___bufferPosition2, const RuntimeMethod* method) ;
// System.Void SharedMemory.BufferWithLocks::Write(System.Action`1<System.IntPtr>,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferWithLocks_Write_m832E9936F9BC59FE508E828FC4D33E011114CCAA (BufferWithLocks_tAC66E561168ED8E40BDABCC964399BA062D85731* __this, Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___writeFunc0, int64_t ___bufferPosition1, const RuntimeMethod* method) ;
// System.Void SharedMemory.BufferWithLocks::Read(System.IntPtr,System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferWithLocks_Read_m5F8CDF4CE0B42FE0E294DE8CD9F40516550C3FC1 (BufferWithLocks_tAC66E561168ED8E40BDABCC964399BA062D85731* __this, intptr_t ___destination0, int32_t ___length1, int64_t ___bufferPosition2, const RuntimeMethod* method) ;
// System.Void SharedMemory.BufferWithLocks::Read(System.Action`1<System.IntPtr>,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferWithLocks_Read_m52F5B2444B2744DEA4760EBA943C9DC4C90A5279 (BufferWithLocks_tAC66E561168ED8E40BDABCC964399BA062D85731* __this, Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___readFunc0, int64_t ___bufferPosition1, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5 (StringBuilder_t* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Int32 System.Text.StringBuilder::get_Capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Capacity_m9DBF3B3940BC0BB882CA26F0EDB53896A491AD1E (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Int32 SharedMemory.UnsafeNativeMethods::FormatMessage(System.Int32,System.IntPtr,System.Int32,System.Int32,System.Text.StringBuilder,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_FormatMessage_m38670E1394A10FABBEC03322E9CA9F7EB2CD5225 (int32_t ___dwFlags0, intptr_t ___lpSource1, int32_t ___dwMessageId2, int32_t ___dwLanguageId3, StringBuilder_t* ___lpBuffer4, int32_t ___nSize5, intptr_t ___va_list_arguments6, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A (RuntimeObject* ___arg00, RuntimeObject* ___arg11, const RuntimeMethod* method) ;
// System.Void Microsoft.Win32.SafeHandles.SafeMemoryMappedFileHandle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeMemoryMappedFileHandle__ctor_mB8E01CD5B51F427F24B60B51B9CD29AB71405A73 (SafeMemoryMappedFileHandle_t0A052D02752BF6099772EFE4BB1145F72571165A* __this, const RuntimeMethod* method) ;
// Microsoft.Win32.SafeHandles.SafeMemoryMappedFileHandle SharedMemory.UnsafeNativeMethods::CreateFileMapping(Microsoft.Win32.SafeHandles.SafeFileHandle,System.IntPtr,SharedMemory.UnsafeNativeMethods/FileMapProtection,System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SafeMemoryMappedFileHandle_t0A052D02752BF6099772EFE4BB1145F72571165A* UnsafeNativeMethods_CreateFileMapping_m5EF2227B84438166056766607046652ECF9ACE42 (SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E* ___hFile0, intptr_t ___lpAttributes1, uint32_t ___fProtect2, int32_t ___dwMaxSizeHi3, int32_t ___dwMaxSizeLo4, String_t* ___lpName5, const RuntimeMethod* method) ;
// System.Void Microsoft.Win32.SafeHandles.SafeMemoryMappedViewHandle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeMemoryMappedViewHandle__ctor_mC8FED37C835D7466A35C4706926C3B59392F3F76 (SafeMemoryMappedViewHandle_t515B2CC8608ADA913D58A7E81A15E12A7A2D05D8* __this, const RuntimeMethod* method) ;
// Microsoft.Win32.SafeHandles.SafeMemoryMappedViewHandle SharedMemory.UnsafeNativeMethods::MapViewOfFile(Microsoft.Win32.SafeHandles.SafeMemoryMappedFileHandle,SharedMemory.UnsafeNativeMethods/FileMapAccess,System.UInt32,System.UInt32,System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SafeMemoryMappedViewHandle_t515B2CC8608ADA913D58A7E81A15E12A7A2D05D8* UnsafeNativeMethods_MapViewOfFile_mA39D0CAE81DF91EB0032ECCDE9AD122EC4AFABA5 (SafeMemoryMappedFileHandle_t0A052D02752BF6099772EFE4BB1145F72571165A* ___hFileMappingObject0, uint32_t ___dwDesiredAccess1, uint32_t ___dwFileOffsetHigh2, uint32_t ___dwFileOffsetLow3, uintptr_t ___dwNumberOfBytesToMap4, const RuntimeMethod* method) ;
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kernel32_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL CopyMemory(intptr_t, intptr_t, uint32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kernel32_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FormatMessage(int32_t, intptr_t, int32_t, int32_t, Il2CppChar*, int32_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kernel32_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL CloseHandle(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kernel32_INTERNAL
IL2CPP_EXTERN_C void* DEFAULT_CALL CreateFileMapping(void*, intptr_t, uint32_t, int32_t, int32_t, Il2CppChar*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kernel32_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL GetSystemInfo(SYSTEM_INFO_t2F91F0CD35F886FB1148BA1884921D9920C008E5*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kernel32_INTERNAL
IL2CPP_EXTERN_C void* DEFAULT_CALL MapViewOfFile(void*, uint32_t, uint32_t, uint32_t, uintptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kernel32_INTERNAL
IL2CPP_EXTERN_C void* DEFAULT_CALL OpenFileMapping(uint32_t, int32_t, Il2CppChar*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kernel32_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnmapViewOfFile(intptr_t);
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
// System.String SharedMemory.SharedBuffer::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SharedBuffer_get_Name_m0FF831FE269B502B1F0766EDE1D2E92889BB26A9 (SharedBuffer_t1BE086CC5133873A7F23428A7998BCC0B9BEAE28* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void SharedMemory.SharedBuffer::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedBuffer_set_Name_m646E256DC54E5BB4B698865AB509FAD951C7CF6B (SharedBuffer_t1BE086CC5133873A7F23428A7998BCC0B9BEAE28* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.Int64 SharedMemory.SharedBuffer::get_BufferSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t SharedBuffer_get_BufferSize_m079DC81126C56E7D9A7B4422A149FCC325B4C68C (SharedBuffer_t1BE086CC5133873A7F23428A7998BCC0B9BEAE28* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___U3CBufferSizeU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void SharedMemory.SharedBuffer::set_BufferSize(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedBuffer_set_BufferSize_mD78750A89B933A2DBD7BDD383C730F8B0EA5F03A (SharedBuffer_t1BE086CC5133873A7F23428A7998BCC0B9BEAE28* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___value0;
		__this->___U3CBufferSizeU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Int64 SharedMemory.SharedBuffer::get_SharedMemorySize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t SharedBuffer_get_SharedMemorySize_m54DA06123961BEED8D499BC446DB0C6E2F34A171 (SharedBuffer_t1BE086CC5133873A7F23428A7998BCC0B9BEAE28* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SharedHeader_tA88D452C04A0B4193E2A2DB0D40F6AD4E9144918_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0;
		L_0 = VirtualFuncInvoker0< int64_t >::Invoke(6 /* System.Int64 SharedMemory.SharedBuffer::get_HeaderOffset() */, __this);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (SharedHeader_tA88D452C04A0B4193E2A2DB0D40F6AD4E9144918_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7(L_2, NULL);
		int64_t L_4;
		L_4 = SharedBuffer_get_BufferSize_m079DC81126C56E7D9A7B4422A149FCC325B4C68C_inline(__this, NULL);
		return ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(L_0, ((int64_t)L_3))), L_4));
	}
}
// System.Boolean SharedMemory.SharedBuffer::get_IsOwnerOfSharedMemory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SharedBuffer_get_IsOwnerOfSharedMemory_mE8D1F53A78E6165CF3B93D20D8CDA805B9B79D9E (SharedBuffer_t1BE086CC5133873A7F23428A7998BCC0B9BEAE28* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIsOwnerOfSharedMemoryU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void SharedMemory.SharedBuffer::set_IsOwnerOfSharedMemory(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedBuffer_set_IsOwnerOfSharedMemory_mA2DD6CA90DD1CFC6A62ABA21B31CB9217066C511 (SharedBuffer_t1BE086CC5133873A7F23428A7998BCC0B9BEAE28* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CIsOwnerOfSharedMemoryU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.Boolean SharedMemory.SharedBuffer::get_ShuttingDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SharedBuffer_get_ShuttingDown_mBC7767EAA5F394925DC7D1FC776FCA896E1524AA (SharedBuffer_t1BE086CC5133873A7F23428A7998BCC0B9BEAE28* __this, const RuntimeMethod* method) 
{
	{
		SharedHeader_tA88D452C04A0B4193E2A2DB0D40F6AD4E9144918* L_0 = __this->___Header_4;
		if ((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_001a;
		}
	}
	{
		SharedHeader_tA88D452C04A0B4193E2A2DB0D40F6AD4E9144918* L_1 = __this->___Header_4;
		NullCheck(L_1);
		int32_t L_2 = L_1->___Shutdown_1;
		il2cpp_codegen_memory_barrier();
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001c;
		}
	}

IL_001a:
	{
		return (bool)1;
	}

IL_001c:
	{
		return (bool)0;
	}
}
// System.Int64 SharedMemory.SharedBuffer::get_HeaderOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t SharedBuffer_get_HeaderOffset_mE55DC73CCFFD506168A535332320DA8A9516D723 (SharedBuffer_t1BE086CC5133873A7F23428A7998BCC0B9BEAE28* __this, const RuntimeMethod* method) 
{
	{
		return ((int64_t)0);
	}
}
// System.Int64 SharedMemory.SharedBuffer::get_BufferOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t SharedBuffer_get_BufferOffset_m36A252E10D69D015143383CE4983FE6DD06A5E70 (SharedBuffer_t1BE086CC5133873A7F23428A7998BCC0B9BEAE28* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SharedHeader_tA88D452C04A0B4193E2A2DB0D40F6AD4E9144918_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0;
		L_0 = VirtualFuncInvoker0< int64_t >::Invoke(6 /* System.Int64 SharedMemory.SharedBuffer::get_HeaderOffset() */, __this);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (SharedHeader_tA88D452C04A0B4193E2A2DB0D40F6AD4E9144918_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7(L_2, NULL);
		return ((int64_t)il2cpp_codegen_add(L_0, ((int64_t)L_3)));
	}
}
// System.Void SharedMemory.SharedBuffer::.ctor(System.String,System.Int64,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedBuffer__ctor_mF9A1B8A7114D10B73830A26B8B5828D8415D3EE9 (SharedBuffer_t1BE086CC5133873A7F23428A7998BCC0B9BEAE28* __this, String_t* ___name0, int64_t ___bufferSize1, bool ___ownsSharedMemory2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___ViewPtr_2 = (uint8_t*)((uintptr_t)0);
		__this->___BufferStartPtr_3 = (uint8_t*)((uintptr_t)0);
		__this->___Header_4 = (SharedHeader_tA88D452C04A0B4193E2A2DB0D40F6AD4E9144918*)((uintptr_t)0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___name0;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_002e;
		}
	}
	{
		String_t* L_3 = ___name0;
		if (L_3)
		{
			goto IL_003e;
		}
	}

IL_002e:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD166849FFA555976B083675F6489209CADDBB6B5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SharedBuffer__ctor_mF9A1B8A7114D10B73830A26B8B5828D8415D3EE9_RuntimeMethod_var)));
	}

IL_003e:
	{
		bool L_5 = ___ownsSharedMemory2;
		if (!L_5)
		{
			goto IL_005c;
		}
	}
	{
		int64_t L_6 = ___bufferSize1;
		if ((((int64_t)L_6) > ((int64_t)((int64_t)0))))
		{
			goto IL_005c;
		}
	}
	{
		int64_t L_7 = ___bufferSize1;
		int64_t L_8 = L_7;
		RuntimeObject* L_9 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var)), &L_8);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_10 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC8FE4FB2F0C7351CCB064A9D9BD65C0FC83D4E12)), L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA39E5DE8EFC843E8F7B986C60243AE319B15B683)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SharedBuffer__ctor_mF9A1B8A7114D10B73830A26B8B5828D8415D3EE9_RuntimeMethod_var)));
	}

IL_005c:
	{
		bool L_11 = ___ownsSharedMemory2;
		SharedBuffer_set_IsOwnerOfSharedMemory_mA2DD6CA90DD1CFC6A62ABA21B31CB9217066C511_inline(__this, L_11, NULL);
		String_t* L_12 = ___name0;
		SharedBuffer_set_Name_m646E256DC54E5BB4B698865AB509FAD951C7CF6B_inline(__this, L_12, NULL);
		bool L_13;
		L_13 = SharedBuffer_get_IsOwnerOfSharedMemory_mE8D1F53A78E6165CF3B93D20D8CDA805B9B79D9E_inline(__this, NULL);
		if (!L_13)
		{
			goto IL_0079;
		}
	}
	{
		int64_t L_14 = ___bufferSize1;
		SharedBuffer_set_BufferSize_mD78750A89B933A2DBD7BDD383C730F8B0EA5F03A_inline(__this, L_14, NULL);
	}

IL_0079:
	{
		return;
	}
}
// System.Void SharedMemory.SharedBuffer::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedBuffer_Finalize_m06C9C944769CBCD3CB9CEA359D4749B5FEFF1FBB (SharedBuffer_t1BE086CC5133873A7F23428A7998BCC0B9BEAE28* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0009:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			VirtualActionInvoker1< bool >::Invoke(22 /* System.Void SharedMemory.SharedBuffer::Dispose(System.Boolean) */, __this, (bool)0);
			goto IL_0010;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0010:
	{
		return;
	}
}
// System.Boolean SharedMemory.SharedBuffer::Open()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SharedBuffer_Open_m926621CDD3B74EF7690F5DD93E278F0F65F5C2EE (SharedBuffer_t1BE086CC5133873A7F23428A7998BCC0B9BEAE28* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SharedHeader_tA88D452C04A0B4193E2A2DB0D40F6AD4E9144918_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryMappedViewAccessor_tBE3AFBB21241B0AF9349B08F03DDEF4E11A4D2AE* V_0 = NULL;
	uint8_t* V_1 = NULL;
	SharedHeader_tA88D452C04A0B4193E2A2DB0D40F6AD4E9144918* V_2 = NULL;
	bool V_3 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		VirtualActionInvoker0::Invoke(9 /* System.Void SharedMemory.SharedBuffer::Close() */, __this);
	}
	try
	{// begin try (depth: 1)
		{
			bool L_0;
			L_0 = SharedBuffer_get_IsOwnerOfSharedMemory_mE8D1F53A78E6165CF3B93D20D8CDA805B9B79D9E_inline(__this, NULL);
			if (!L_0)
			{
				goto IL_0088_1;
			}
		}
		{
			String_t* L_1;
			L_1 = SharedBuffer_get_Name_m0FF831FE269B502B1F0766EDE1D2E92889BB26A9_inline(__this, NULL);
			int64_t L_2;
			L_2 = VirtualFuncInvoker0< int64_t >::Invoke(5 /* System.Int64 SharedMemory.SharedBuffer::get_SharedMemorySize() */, __this);
			MemoryMappedFile_t3A8911F989B099EDED5FF35E0EED6DF65ECD01E4* L_3;
			L_3 = MemoryMappedFile_CreateNew_mE5C596EDD27EB18B6CA8D4C03093301BFDA82395(L_1, L_2, NULL);
			__this->___Mmf_0 = L_3;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___Mmf_0), (void*)L_3);
			MemoryMappedFile_t3A8911F989B099EDED5FF35E0EED6DF65ECD01E4* L_4 = __this->___Mmf_0;
			int64_t L_5;
			L_5 = VirtualFuncInvoker0< int64_t >::Invoke(5 /* System.Int64 SharedMemory.SharedBuffer::get_SharedMemorySize() */, __this);
			NullCheck(L_4);
			MemoryMappedViewAccessor_tBE3AFBB21241B0AF9349B08F03DDEF4E11A4D2AE* L_6;
			L_6 = MemoryMappedFile_CreateViewAccessor_m3111CEB2E7741A9B6D16E6A77E326C21D781FF2B(L_4, ((int64_t)0), L_5, 4, NULL);
			__this->___View_1 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___View_1), (void*)L_6);
			MemoryMappedViewAccessor_tBE3AFBB21241B0AF9349B08F03DDEF4E11A4D2AE* L_7 = __this->___View_1;
			NullCheck(L_7);
			SafeMemoryMappedViewHandle_t515B2CC8608ADA913D58A7E81A15E12A7A2D05D8* L_8;
			L_8 = MemoryMappedViewAccessor_get_SafeMemoryMappedViewHandle_m19283DC146A0D18F42D94D2347B87E5880ECEBF3(L_7, NULL);
			uint8_t** L_9 = (&__this->___ViewPtr_2);
			NullCheck(L_8);
			SafeMemoryMappedViewHandle_AcquirePointer_mEA48847EABCD4983E1392586A57A361A124A98A5(L_8, L_9, NULL);
			uint8_t* L_10 = __this->___ViewPtr_2;
			int64_t L_11;
			L_11 = VirtualFuncInvoker0< int64_t >::Invoke(6 /* System.Int64 SharedMemory.SharedBuffer::get_HeaderOffset() */, __this);
			__this->___Header_4 = (SharedHeader_tA88D452C04A0B4193E2A2DB0D40F6AD4E9144918*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)L_11)));
			uint8_t* L_12 = __this->___ViewPtr_2;
			int64_t L_13;
			L_13 = VirtualFuncInvoker0< int64_t >::Invoke(7 /* System.Int64 SharedMemory.SharedBuffer::get_BufferOffset() */, __this);
			__this->___BufferStartPtr_3 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)L_13)));
			SharedBuffer_InitialiseHeader_m384B04BF5929C697183715DECE90237FB13BD008(__this, NULL);
			goto IL_0175_1;
		}

IL_0088_1:
		{
			String_t* L_14;
			L_14 = SharedBuffer_get_Name_m0FF831FE269B502B1F0766EDE1D2E92889BB26A9_inline(__this, NULL);
			MemoryMappedFile_t3A8911F989B099EDED5FF35E0EED6DF65ECD01E4* L_15;
			L_15 = MemoryMappedFile_OpenExisting_m100D28BA2084724AD598A04C10F6D25441C703ED(L_14, NULL);
			__this->___Mmf_0 = L_15;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___Mmf_0), (void*)L_15);
			MemoryMappedFile_t3A8911F989B099EDED5FF35E0EED6DF65ECD01E4* L_16 = __this->___Mmf_0;
			int64_t L_17;
			L_17 = VirtualFuncInvoker0< int64_t >::Invoke(6 /* System.Int64 SharedMemory.SharedBuffer::get_HeaderOffset() */, __this);
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (SharedHeader_tA88D452C04A0B4193E2A2DB0D40F6AD4E9144918_0_0_0_var) };
			il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
			Type_t* L_19;
			L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
			il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
			int32_t L_20;
			L_20 = Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7(L_19, NULL);
			NullCheck(L_16);
			MemoryMappedViewAccessor_tBE3AFBB21241B0AF9349B08F03DDEF4E11A4D2AE* L_21;
			L_21 = MemoryMappedFile_CreateViewAccessor_m3111CEB2E7741A9B6D16E6A77E326C21D781FF2B(L_16, ((int64_t)0), ((int64_t)il2cpp_codegen_add(L_17, ((int64_t)L_20))), 2, NULL);
			V_0 = L_21;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_0103_1:
				{// begin finally (depth: 2)
					{
						MemoryMappedViewAccessor_tBE3AFBB21241B0AF9349B08F03DDEF4E11A4D2AE* L_22 = V_0;
						if (!L_22)
						{
							goto IL_010c_1;
						}
					}
					{
						MemoryMappedViewAccessor_tBE3AFBB21241B0AF9349B08F03DDEF4E11A4D2AE* L_23 = V_0;
						NullCheck(L_23);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_23);
					}

IL_010c_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				V_1 = (uint8_t*)((uintptr_t)0);
				MemoryMappedViewAccessor_tBE3AFBB21241B0AF9349B08F03DDEF4E11A4D2AE* L_24 = V_0;
				NullCheck(L_24);
				SafeMemoryMappedViewHandle_t515B2CC8608ADA913D58A7E81A15E12A7A2D05D8* L_25;
				L_25 = MemoryMappedViewAccessor_get_SafeMemoryMappedViewHandle_m19283DC146A0D18F42D94D2347B87E5880ECEBF3(L_24, NULL);
				NullCheck(L_25);
				SafeMemoryMappedViewHandle_AcquirePointer_mEA48847EABCD4983E1392586A57A361A124A98A5(L_25, (&V_1), NULL);
				uint8_t* L_26 = V_1;
				int64_t L_27;
				L_27 = VirtualFuncInvoker0< int64_t >::Invoke(6 /* System.Int64 SharedMemory.SharedBuffer::get_HeaderOffset() */, __this);
				V_2 = (SharedHeader_tA88D452C04A0B4193E2A2DB0D40F6AD4E9144918*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)L_27)));
				SharedHeader_tA88D452C04A0B4193E2A2DB0D40F6AD4E9144918* L_28 = V_2;
				NullCheck(L_28);
				int64_t L_29 = L_28->___SharedMemorySize_0;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_30 = { reinterpret_cast<intptr_t> (SharedHeader_tA88D452C04A0B4193E2A2DB0D40F6AD4E9144918_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_31;
				L_31 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_30, NULL);
				il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
				int32_t L_32;
				L_32 = Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7(L_31, NULL);
				SharedBuffer_set_BufferSize_mD78750A89B933A2DBD7BDD383C730F8B0EA5F03A_inline(__this, ((int64_t)il2cpp_codegen_subtract(L_29, ((int64_t)L_32))), NULL);
				MemoryMappedViewAccessor_tBE3AFBB21241B0AF9349B08F03DDEF4E11A4D2AE* L_33 = V_0;
				NullCheck(L_33);
				SafeMemoryMappedViewHandle_t515B2CC8608ADA913D58A7E81A15E12A7A2D05D8* L_34;
				L_34 = MemoryMappedViewAccessor_get_SafeMemoryMappedViewHandle_m19283DC146A0D18F42D94D2347B87E5880ECEBF3(L_33, NULL);
				NullCheck(L_34);
				SafeMemoryMappedViewHandle_ReleasePointer_m01EC55799D58F87A530D49BEA7E7AA4AB250305B(L_34, NULL);
				goto IL_010d_1;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_010d_1:
		{
			MemoryMappedFile_t3A8911F989B099EDED5FF35E0EED6DF65ECD01E4* L_35 = __this->___Mmf_0;
			int64_t L_36;
			L_36 = VirtualFuncInvoker0< int64_t >::Invoke(5 /* System.Int64 SharedMemory.SharedBuffer::get_SharedMemorySize() */, __this);
			NullCheck(L_35);
			MemoryMappedViewAccessor_tBE3AFBB21241B0AF9349B08F03DDEF4E11A4D2AE* L_37;
			L_37 = MemoryMappedFile_CreateViewAccessor_m3111CEB2E7741A9B6D16E6A77E326C21D781FF2B(L_35, ((int64_t)0), L_36, 4, NULL);
			__this->___View_1 = L_37;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___View_1), (void*)L_37);
			MemoryMappedViewAccessor_tBE3AFBB21241B0AF9349B08F03DDEF4E11A4D2AE* L_38 = __this->___View_1;
			NullCheck(L_38);
			SafeMemoryMappedViewHandle_t515B2CC8608ADA913D58A7E81A15E12A7A2D05D8* L_39;
			L_39 = MemoryMappedViewAccessor_get_SafeMemoryMappedViewHandle_m19283DC146A0D18F42D94D2347B87E5880ECEBF3(L_38, NULL);
			uint8_t** L_40 = (&__this->___ViewPtr_2);
			NullCheck(L_39);
			SafeMemoryMappedViewHandle_AcquirePointer_mEA48847EABCD4983E1392586A57A361A124A98A5(L_39, L_40, NULL);
			uint8_t* L_41 = __this->___ViewPtr_2;
			int64_t L_42;
			L_42 = VirtualFuncInvoker0< int64_t >::Invoke(6 /* System.Int64 SharedMemory.SharedBuffer::get_HeaderOffset() */, __this);
			__this->___Header_4 = (SharedHeader_tA88D452C04A0B4193E2A2DB0D40F6AD4E9144918*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_41, ((intptr_t)L_42)));
			uint8_t* L_43 = __this->___ViewPtr_2;
			int64_t L_44;
			L_44 = VirtualFuncInvoker0< int64_t >::Invoke(6 /* System.Int64 SharedMemory.SharedBuffer::get_HeaderOffset() */, __this);
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_45 = { reinterpret_cast<intptr_t> (SharedHeader_tA88D452C04A0B4193E2A2DB0D40F6AD4E9144918_0_0_0_var) };
			il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
			Type_t* L_46;
			L_46 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_45, NULL);
			il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
			int32_t L_47;
			L_47 = Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7(L_46, NULL);
			__this->___BufferStartPtr_3 = ((uint8_t*)il2cpp_codegen_add((intptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)L_44))), L_47));
		}

IL_0175_1:
		{
			goto IL_0180;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0177;
		}
		throw e;
	}

CATCH_0177:
	{// begin catch(System.Object)
		VirtualActionInvoker0::Invoke(9 /* System.Void SharedMemory.SharedBuffer::Close() */, __this);
		IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
	}// end catch (depth: 1)

IL_0180:
	try
	{// begin try (depth: 1)

IL_0180_1:
		{
			bool L_48;
			L_48 = VirtualFuncInvoker0< bool >::Invoke(8 /* System.Boolean SharedMemory.SharedBuffer::DoOpen() */, __this);
			if (L_48)
			{
				goto IL_0192_1;
			}
		}
		{
			VirtualActionInvoker0::Invoke(9 /* System.Void SharedMemory.SharedBuffer::Close() */, __this);
			V_3 = (bool)0;
			goto IL_019f;
		}

IL_0192_1:
		{
			V_3 = (bool)1;
			goto IL_019f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0196;
		}
		throw e;
	}

CATCH_0196:
	{// begin catch(System.Object)
		VirtualActionInvoker0::Invoke(9 /* System.Void SharedMemory.SharedBuffer::Close() */, __this);
		IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
	}// end catch (depth: 1)

IL_019f:
	{
		bool L_49 = V_3;
		return L_49;
	}
}
// System.Boolean SharedMemory.SharedBuffer::DoOpen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SharedBuffer_DoOpen_m561514C2E90446B84B9B7B17742720209FE4E446 (SharedBuffer_t1BE086CC5133873A7F23428A7998BCC0B9BEAE28* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
// System.Void SharedMemory.SharedBuffer::InitialiseHeader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedBuffer_InitialiseHeader_m384B04BF5929C697183715DECE90237FB13BD008 (SharedBuffer_t1BE086CC5133873A7F23428A7998BCC0B9BEAE28* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMappedViewAccessor_Write_TisSharedHeader_tA88D452C04A0B4193E2A2DB0D40F6AD4E9144918_mA4BDAAA3DCAF62071ACEA91824D81B32544AE517_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	SharedHeader_tA88D452C04A0B4193E2A2DB0D40F6AD4E9144918 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		bool L_0;
		L_0 = SharedBuffer_get_IsOwnerOfSharedMemory_mE8D1F53A78E6165CF3B93D20D8CDA805B9B79D9E_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(SharedHeader_tA88D452C04A0B4193E2A2DB0D40F6AD4E9144918));
		int64_t L_1;
		L_1 = VirtualFuncInvoker0< int64_t >::Invoke(5 /* System.Int64 SharedMemory.SharedBuffer::get_SharedMemorySize() */, __this);
		(&V_0)->___SharedMemorySize_0 = L_1;
		il2cpp_codegen_memory_barrier();
		(&V_0)->___Shutdown_1 = 0;
		MemoryMappedViewAccessor_tBE3AFBB21241B0AF9349B08F03DDEF4E11A4D2AE* L_2 = __this->___View_1;
		int64_t L_3;
		L_3 = VirtualFuncInvoker0< int64_t >::Invoke(6 /* System.Int64 SharedMemory.SharedBuffer::get_HeaderOffset() */, __this);
		NullCheck(L_2);
		MemoryMappedViewAccessor_Write_TisSharedHeader_tA88D452C04A0B4193E2A2DB0D40F6AD4E9144918_mA4BDAAA3DCAF62071ACEA91824D81B32544AE517(L_2, L_3, (&V_0), MemoryMappedViewAccessor_Write_TisSharedHeader_tA88D452C04A0B4193E2A2DB0D40F6AD4E9144918_mA4BDAAA3DCAF62071ACEA91824D81B32544AE517_RuntimeMethod_var);
		return;
	}
}
// System.Void SharedMemory.SharedBuffer::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedBuffer_Close_m6B07ED08A02D08A9E142750A858F257367D44098 (SharedBuffer_t1BE086CC5133873A7F23428A7998BCC0B9BEAE28* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = SharedBuffer_get_IsOwnerOfSharedMemory_mE8D1F53A78E6165CF3B93D20D8CDA805B9B79D9E_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		MemoryMappedViewAccessor_tBE3AFBB21241B0AF9349B08F03DDEF4E11A4D2AE* L_1 = __this->___View_1;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		SharedHeader_tA88D452C04A0B4193E2A2DB0D40F6AD4E9144918* L_2 = __this->___Header_4;
		NullCheck(L_2);
		int32_t* L_3 = (&L_2->___Shutdown_1);
		il2cpp_codegen_memory_barrier();
		int32_t L_4;
		L_4 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF(L_3, 1, NULL);
	}

IL_0022:
	{
		VirtualActionInvoker0::Invoke(10 /* System.Void SharedMemory.SharedBuffer::DoClose() */, __this);
		MemoryMappedViewAccessor_tBE3AFBB21241B0AF9349B08F03DDEF4E11A4D2AE* L_5 = __this->___View_1;
		if (!L_5)
		{
			goto IL_004b;
		}
	}
	{
		MemoryMappedViewAccessor_tBE3AFBB21241B0AF9349B08F03DDEF4E11A4D2AE* L_6 = __this->___View_1;
		NullCheck(L_6);
		SafeMemoryMappedViewHandle_t515B2CC8608ADA913D58A7E81A15E12A7A2D05D8* L_7;
		L_7 = MemoryMappedViewAccessor_get_SafeMemoryMappedViewHandle_m19283DC146A0D18F42D94D2347B87E5880ECEBF3(L_6, NULL);
		NullCheck(L_7);
		SafeMemoryMappedViewHandle_ReleasePointer_m01EC55799D58F87A530D49BEA7E7AA4AB250305B(L_7, NULL);
		MemoryMappedViewAccessor_tBE3AFBB21241B0AF9349B08F03DDEF4E11A4D2AE* L_8 = __this->___View_1;
		NullCheck(L_8);
		MemoryMappedViewAccessor_Dispose_m66A512D27D913A64F3A75E069EC1C0FAFBA32ABD(L_8, NULL);
	}

IL_004b:
	{
		MemoryMappedFile_t3A8911F989B099EDED5FF35E0EED6DF65ECD01E4* L_9 = __this->___Mmf_0;
		if (!L_9)
		{
			goto IL_005e;
		}
	}
	{
		MemoryMappedFile_t3A8911F989B099EDED5FF35E0EED6DF65ECD01E4* L_10 = __this->___Mmf_0;
		NullCheck(L_10);
		MemoryMappedFile_Dispose_mB1F89986FAC837BDB94CB77B2C48729023607063(L_10, NULL);
	}

IL_005e:
	{
		__this->___Header_4 = (SharedHeader_tA88D452C04A0B4193E2A2DB0D40F6AD4E9144918*)((uintptr_t)0);
		__this->___ViewPtr_2 = (uint8_t*)((uintptr_t)0);
		__this->___BufferStartPtr_3 = (uint8_t*)((uintptr_t)0);
		__this->___View_1 = (MemoryMappedViewAccessor_tBE3AFBB21241B0AF9349B08F03DDEF4E11A4D2AE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___View_1), (void*)(MemoryMappedViewAccessor_tBE3AFBB21241B0AF9349B08F03DDEF4E11A4D2AE*)NULL);
		__this->___Mmf_0 = (MemoryMappedFile_t3A8911F989B099EDED5FF35E0EED6DF65ECD01E4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Mmf_0), (void*)(MemoryMappedFile_t3A8911F989B099EDED5FF35E0EED6DF65ECD01E4*)NULL);
		return;
	}
}
// System.Void SharedMemory.SharedBuffer::DoClose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedBuffer_DoClose_m6A57CF5E9B708F005271900B1686320C0BC59FAA (SharedBuffer_t1BE086CC5133873A7F23428A7998BCC0B9BEAE28* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void SharedMemory.SharedBuffer::Write(System.IntPtr,System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedBuffer_Write_m00645415CBDA6892DA0064D3F416539170BF7896 (SharedBuffer_t1BE086CC5133873A7F23428A7998BCC0B9BEAE28* __this, intptr_t ___source0, int32_t ___length1, int64_t ___bufferPosition2, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = __this->___BufferStartPtr_3;
		int64_t L_1 = ___bufferPosition2;
		intptr_t L_2;
		memset((&L_2), 0, sizeof(L_2));
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&L_2), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)L_1))), /*hidden argument*/NULL);
		intptr_t L_3 = ___source0;
		int32_t L_4 = ___length1;
		UnsafeNativeMethods_CopyMemory_mCEE45D67569FDA59291C7209D2357F585E40ABCA(L_2, L_3, L_4, NULL);
		return;
	}
}
// System.Void SharedMemory.SharedBuffer::Write(System.Action`1<System.IntPtr>,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedBuffer_Write_m621F0ECDCE8394458720F4CF10884626D636477F (SharedBuffer_t1BE086CC5133873A7F23428A7998BCC0B9BEAE28* __this, Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___writeFunc0, int64_t ___bufferPosition1, const RuntimeMethod* method) 
{
	{
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_0 = ___writeFunc0;
		uint8_t* L_1 = __this->___BufferStartPtr_3;
		int64_t L_2 = ___bufferPosition1;
		intptr_t L_3;
		memset((&L_3), 0, sizeof(L_3));
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&L_3), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)L_2))), /*hidden argument*/NULL);
		NullCheck(L_0);
		Action_1_Invoke_m783EC8C62449882812B741E4DE67BF3106686D9C_inline(L_0, L_3, NULL);
		return;
	}
}
// System.Void SharedMemory.SharedBuffer::Read(System.IntPtr,System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedBuffer_Read_mA09DD8DDB1A1B16520BC154CB57B0CA8F1845FEA (SharedBuffer_t1BE086CC5133873A7F23428A7998BCC0B9BEAE28* __this, intptr_t ___destination0, int32_t ___length1, int64_t ___bufferPosition2, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___destination0;
		uint8_t* L_1 = __this->___BufferStartPtr_3;
		int64_t L_2 = ___bufferPosition2;
		intptr_t L_3;
		memset((&L_3), 0, sizeof(L_3));
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&L_3), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)L_2))), /*hidden argument*/NULL);
		int32_t L_4 = ___length1;
		UnsafeNativeMethods_CopyMemory_mCEE45D67569FDA59291C7209D2357F585E40ABCA(L_0, L_3, L_4, NULL);
		return;
	}
}
// System.Void SharedMemory.SharedBuffer::Read(System.Action`1<System.IntPtr>,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedBuffer_Read_m068060AE46E117BDB4DE0524ED67C85419EFE6EC (SharedBuffer_t1BE086CC5133873A7F23428A7998BCC0B9BEAE28* __this, Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___readFunc0, int64_t ___bufferPosition1, const RuntimeMethod* method) 
{
	{
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_0 = ___readFunc0;
		uint8_t* L_1 = __this->___BufferStartPtr_3;
		int64_t L_2 = ___bufferPosition1;
		intptr_t L_3;
		memset((&L_3), 0, sizeof(L_3));
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&L_3), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)L_2))), /*hidden argument*/NULL);
		NullCheck(L_0);
		Action_1_Invoke_m783EC8C62449882812B741E4DE67BF3106686D9C_inline(L_0, L_3, NULL);
		return;
	}
}
// System.Void SharedMemory.SharedBuffer::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedBuffer_Dispose_m65F68B784B5E2ED122DF3A016781F020FF131BC3 (SharedBuffer_t1BE086CC5133873A7F23428A7998BCC0B9BEAE28* __this, const RuntimeMethod* method) 
{
	{
		VirtualActionInvoker1< bool >::Invoke(22 /* System.Void SharedMemory.SharedBuffer::Dispose(System.Boolean) */, __this, (bool)1);
		return;
	}
}
// System.Void SharedMemory.SharedBuffer::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedBuffer_Dispose_m27620E4F304D70A8D2ED01CFA80D5E91D0DCBB8B (SharedBuffer_t1BE086CC5133873A7F23428A7998BCC0B9BEAE28* __this, bool ___disposeManagedResources0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___disposeManagedResources0;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		VirtualActionInvoker0::Invoke(9 /* System.Void SharedMemory.SharedBuffer::Close() */, __this);
	}

IL_0009:
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
// System.Threading.EventWaitHandle SharedMemory.BufferWithLocks::get_WriteWaitEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* BufferWithLocks_get_WriteWaitEvent_m960C7F7D2FC71C16121E1CF564B8053395F3DD53 (BufferWithLocks_tAC66E561168ED8E40BDABCC964399BA062D85731* __this, const RuntimeMethod* method) 
{
	{
		EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* L_0 = __this->___U3CWriteWaitEventU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void SharedMemory.BufferWithLocks::set_WriteWaitEvent(System.Threading.EventWaitHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferWithLocks_set_WriteWaitEvent_m83B40D8E8EDEC300A6EE0C55EB19CAD38384EA1A (BufferWithLocks_tAC66E561168ED8E40BDABCC964399BA062D85731* __this, EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* ___value0, const RuntimeMethod* method) 
{
	{
		EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* L_0 = ___value0;
		__this->___U3CWriteWaitEventU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CWriteWaitEventU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
// System.Threading.EventWaitHandle SharedMemory.BufferWithLocks::get_ReadWaitEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* BufferWithLocks_get_ReadWaitEvent_m47385F2D3427305FE3226CFE6C920A88B6066419 (BufferWithLocks_tAC66E561168ED8E40BDABCC964399BA062D85731* __this, const RuntimeMethod* method) 
{
	{
		EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* L_0 = __this->___U3CReadWaitEventU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void SharedMemory.BufferWithLocks::set_ReadWaitEvent(System.Threading.EventWaitHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferWithLocks_set_ReadWaitEvent_m3EB06ECC7CD5E3182761323CE9C8816B34A97FB9 (BufferWithLocks_tAC66E561168ED8E40BDABCC964399BA062D85731* __this, EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* ___value0, const RuntimeMethod* method) 
{
	{
		EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* L_0 = ___value0;
		__this->___U3CReadWaitEventU3Ek__BackingField_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CReadWaitEventU3Ek__BackingField_10), (void*)L_0);
		return;
	}
}
// System.Void SharedMemory.BufferWithLocks::.ctor(System.String,System.Int64,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferWithLocks__ctor_mD623BF10F7A31DA95257995553BD6103666F6A1A (BufferWithLocks_tAC66E561168ED8E40BDABCC964399BA062D85731* __this, String_t* ___name0, int64_t ___bufferSize1, bool ___ownsSharedMemory2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8EE59C951EE78DF0A6A313D549D9DB7C426FA2CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB52060BA247A0BBF1B55B141C85CCB2BCCAA9852);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->____readWriteTimeout_8 = ((int32_t)100);
		String_t* L_0 = ___name0;
		int64_t L_1 = ___bufferSize1;
		bool L_2 = ___ownsSharedMemory2;
		SharedBuffer__ctor_mF9A1B8A7114D10B73830A26B8B5828D8415D3EE9(__this, L_0, L_1, L_2, NULL);
		String_t* L_3;
		L_3 = SharedBuffer_get_Name_m0FF831FE269B502B1F0766EDE1D2E92889BB26A9_inline(__this, NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_3, _stringLiteral8EE59C951EE78DF0A6A313D549D9DB7C426FA2CA, NULL);
		EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* L_5 = (EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E*)il2cpp_codegen_object_new(EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		EventWaitHandle__ctor_m788FE824997F3E5B0351F619C50A824F53BF23C9(L_5, (bool)1, 1, L_4, NULL);
		BufferWithLocks_set_WriteWaitEvent_m83B40D8E8EDEC300A6EE0C55EB19CAD38384EA1A_inline(__this, L_5, NULL);
		String_t* L_6;
		L_6 = SharedBuffer_get_Name_m0FF831FE269B502B1F0766EDE1D2E92889BB26A9_inline(__this, NULL);
		String_t* L_7;
		L_7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_6, _stringLiteralB52060BA247A0BBF1B55B141C85CCB2BCCAA9852, NULL);
		EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* L_8 = (EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E*)il2cpp_codegen_object_new(EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		EventWaitHandle__ctor_m788FE824997F3E5B0351F619C50A824F53BF23C9(L_8, (bool)1, 1, L_7, NULL);
		BufferWithLocks_set_ReadWaitEvent_m3EB06ECC7CD5E3182761323CE9C8816B34A97FB9_inline(__this, L_8, NULL);
		return;
	}
}
// System.Int32 SharedMemory.BufferWithLocks::get_ReadWriteTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BufferWithLocks_get_ReadWriteTimeout_mC1EE1A3EE9FE4D2D6B3E55D2D5BD04FC68CEFCB1 (BufferWithLocks_tAC66E561168ED8E40BDABCC964399BA062D85731* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____readWriteTimeout_8;
		return L_0;
	}
}
// System.Void SharedMemory.BufferWithLocks::set_ReadWriteTimeout(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferWithLocks_set_ReadWriteTimeout_m1E0F8F32B3CFCE08EA921AA825B8BDE123176880 (BufferWithLocks_tAC66E561168ED8E40BDABCC964399BA062D85731* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB92A5624F7EBFA10B2819D3E09C777C270773C72)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5875FDAD1A687531617B7C2D6160BA59D7E5ABCE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BufferWithLocks_set_ReadWriteTimeout_m1E0F8F32B3CFCE08EA921AA825B8BDE123176880_RuntimeMethod_var)));
	}

IL_0014:
	{
		int32_t L_2 = ___value0;
		__this->____readWriteTimeout_8 = L_2;
		return;
	}
}
// System.Boolean SharedMemory.BufferWithLocks::AcquireReadLock(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BufferWithLocks_AcquireReadLock_m326833339FB27C3B66259CD51F9B1CF837E11033 (BufferWithLocks_tAC66E561168ED8E40BDABCC964399BA062D85731* __this, int32_t ___millisecondsTimeout0, const RuntimeMethod* method) 
{
	{
		EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* L_0;
		L_0 = BufferWithLocks_get_ReadWaitEvent_m47385F2D3427305FE3226CFE6C920A88B6066419_inline(__this, NULL);
		int32_t L_1 = ___millisecondsTimeout0;
		NullCheck(L_0);
		bool L_2;
		L_2 = VirtualFuncInvoker1< bool, int32_t >::Invoke(10 /* System.Boolean System.Threading.WaitHandle::WaitOne(System.Int32) */, L_0, L_1);
		if (L_2)
		{
			goto IL_0010;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* L_3;
		L_3 = BufferWithLocks_get_WriteWaitEvent_m960C7F7D2FC71C16121E1CF564B8053395F3DD53_inline(__this, NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = EventWaitHandle_Reset_m84719BED571BDAAEE27EE05F57295C7107A74DE6(L_3, NULL);
		return (bool)1;
	}
}
// System.Void SharedMemory.BufferWithLocks::ReleaseReadLock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferWithLocks_ReleaseReadLock_m2E15DB957FF5075C1F2AB352F4BA9B30E38F049B (BufferWithLocks_tAC66E561168ED8E40BDABCC964399BA062D85731* __this, const RuntimeMethod* method) 
{
	{
		EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* L_0;
		L_0 = BufferWithLocks_get_WriteWaitEvent_m960C7F7D2FC71C16121E1CF564B8053395F3DD53_inline(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = EventWaitHandle_Set_mDF98D67F214714A9590DF82A1C51D3D851281E4D(L_0, NULL);
		return;
	}
}
// System.Boolean SharedMemory.BufferWithLocks::AcquireWriteLock(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BufferWithLocks_AcquireWriteLock_m20ECA634A604FB1A2C40CB7BA967BCE54815A501 (BufferWithLocks_tAC66E561168ED8E40BDABCC964399BA062D85731* __this, int32_t ___millisecondsTimeout0, const RuntimeMethod* method) 
{
	{
		EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* L_0;
		L_0 = BufferWithLocks_get_WriteWaitEvent_m960C7F7D2FC71C16121E1CF564B8053395F3DD53_inline(__this, NULL);
		int32_t L_1 = ___millisecondsTimeout0;
		NullCheck(L_0);
		bool L_2;
		L_2 = VirtualFuncInvoker1< bool, int32_t >::Invoke(10 /* System.Boolean System.Threading.WaitHandle::WaitOne(System.Int32) */, L_0, L_1);
		if (L_2)
		{
			goto IL_0010;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* L_3;
		L_3 = BufferWithLocks_get_ReadWaitEvent_m47385F2D3427305FE3226CFE6C920A88B6066419_inline(__this, NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = EventWaitHandle_Reset_m84719BED571BDAAEE27EE05F57295C7107A74DE6(L_3, NULL);
		return (bool)1;
	}
}
// System.Void SharedMemory.BufferWithLocks::ReleaseWriteLock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferWithLocks_ReleaseWriteLock_m9F6E157C7170EE3D82A0A855D70C1160103BE61D (BufferWithLocks_tAC66E561168ED8E40BDABCC964399BA062D85731* __this, const RuntimeMethod* method) 
{
	{
		EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* L_0;
		L_0 = BufferWithLocks_get_ReadWaitEvent_m47385F2D3427305FE3226CFE6C920A88B6066419_inline(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = EventWaitHandle_Set_mDF98D67F214714A9590DF82A1C51D3D851281E4D(L_0, NULL);
		return;
	}
}
// System.Void SharedMemory.BufferWithLocks::WriteWait()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferWithLocks_WriteWait_mAE16A867C4D3C925A78DF2FA7EAE7CDFA38EA451 (BufferWithLocks_tAC66E561168ED8E40BDABCC964399BA062D85731* __this, const RuntimeMethod* method) 
{
	{
		EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* L_0;
		L_0 = BufferWithLocks_get_WriteWaitEvent_m960C7F7D2FC71C16121E1CF564B8053395F3DD53_inline(__this, NULL);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 SharedMemory.BufferWithLocks::get_ReadWriteTimeout() */, __this);
		NullCheck(L_0);
		bool L_2;
		L_2 = VirtualFuncInvoker1< bool, int32_t >::Invoke(10 /* System.Boolean System.Threading.WaitHandle::WaitOne(System.Int32) */, L_0, L_1);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		TimeoutException_t7552449BA7E0911AEA1B6C7D1BEAC6534819305F* L_3 = (TimeoutException_t7552449BA7E0911AEA1B6C7D1BEAC6534819305F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TimeoutException_t7552449BA7E0911AEA1B6C7D1BEAC6534819305F_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		TimeoutException__ctor_mAC3BF713E7242641234A1E292C470655E1EFA964(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDFB2DFA373D257FB931D5C2B1EFA2514F6DB217E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BufferWithLocks_WriteWait_mAE16A867C4D3C925A78DF2FA7EAE7CDFA38EA451_RuntimeMethod_var)));
	}

IL_001e:
	{
		return;
	}
}
// System.Void SharedMemory.BufferWithLocks::Write(System.IntPtr,System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferWithLocks_Write_m9A4FFB1C114406EE355E386CB7813283EE723D98 (BufferWithLocks_tAC66E561168ED8E40BDABCC964399BA062D85731* __this, intptr_t ___ptr0, int32_t ___length1, int64_t ___bufferPosition2, const RuntimeMethod* method) 
{
	{
		BufferWithLocks_WriteWait_mAE16A867C4D3C925A78DF2FA7EAE7CDFA38EA451(__this, NULL);
		intptr_t L_0 = ___ptr0;
		int32_t L_1 = ___length1;
		int64_t L_2 = ___bufferPosition2;
		SharedBuffer_Write_m00645415CBDA6892DA0064D3F416539170BF7896(__this, L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void SharedMemory.BufferWithLocks::Write(System.Action`1<System.IntPtr>,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferWithLocks_Write_m832E9936F9BC59FE508E828FC4D33E011114CCAA (BufferWithLocks_tAC66E561168ED8E40BDABCC964399BA062D85731* __this, Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___writeFunc0, int64_t ___bufferPosition1, const RuntimeMethod* method) 
{
	{
		BufferWithLocks_WriteWait_mAE16A867C4D3C925A78DF2FA7EAE7CDFA38EA451(__this, NULL);
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_0 = ___writeFunc0;
		int64_t L_1 = ___bufferPosition1;
		SharedBuffer_Write_m621F0ECDCE8394458720F4CF10884626D636477F(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void SharedMemory.BufferWithLocks::ReadWait()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferWithLocks_ReadWait_mD17B1AA303CFC5A5203382AF95481AF7B5922CFD (BufferWithLocks_tAC66E561168ED8E40BDABCC964399BA062D85731* __this, const RuntimeMethod* method) 
{
	{
		EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* L_0;
		L_0 = BufferWithLocks_get_ReadWaitEvent_m47385F2D3427305FE3226CFE6C920A88B6066419_inline(__this, NULL);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 SharedMemory.BufferWithLocks::get_ReadWriteTimeout() */, __this);
		NullCheck(L_0);
		bool L_2;
		L_2 = VirtualFuncInvoker1< bool, int32_t >::Invoke(10 /* System.Boolean System.Threading.WaitHandle::WaitOne(System.Int32) */, L_0, L_1);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		TimeoutException_t7552449BA7E0911AEA1B6C7D1BEAC6534819305F* L_3 = (TimeoutException_t7552449BA7E0911AEA1B6C7D1BEAC6534819305F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TimeoutException_t7552449BA7E0911AEA1B6C7D1BEAC6534819305F_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		TimeoutException__ctor_mAC3BF713E7242641234A1E292C470655E1EFA964(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5BB1CEF15712CA0F5C93B57E99C70177C13C035D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BufferWithLocks_ReadWait_mD17B1AA303CFC5A5203382AF95481AF7B5922CFD_RuntimeMethod_var)));
	}

IL_001e:
	{
		return;
	}
}
// System.Void SharedMemory.BufferWithLocks::Read(System.IntPtr,System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferWithLocks_Read_m5F8CDF4CE0B42FE0E294DE8CD9F40516550C3FC1 (BufferWithLocks_tAC66E561168ED8E40BDABCC964399BA062D85731* __this, intptr_t ___destination0, int32_t ___length1, int64_t ___bufferPosition2, const RuntimeMethod* method) 
{
	{
		BufferWithLocks_ReadWait_mD17B1AA303CFC5A5203382AF95481AF7B5922CFD(__this, NULL);
		intptr_t L_0 = ___destination0;
		int32_t L_1 = ___length1;
		int64_t L_2 = ___bufferPosition2;
		SharedBuffer_Read_mA09DD8DDB1A1B16520BC154CB57B0CA8F1845FEA(__this, L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void SharedMemory.BufferWithLocks::Read(System.Action`1<System.IntPtr>,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferWithLocks_Read_m52F5B2444B2744DEA4760EBA943C9DC4C90A5279 (BufferWithLocks_tAC66E561168ED8E40BDABCC964399BA062D85731* __this, Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___readFunc0, int64_t ___bufferPosition1, const RuntimeMethod* method) 
{
	{
		BufferWithLocks_ReadWait_mD17B1AA303CFC5A5203382AF95481AF7B5922CFD(__this, NULL);
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_0 = ___readFunc0;
		int64_t L_1 = ___bufferPosition1;
		SharedBuffer_Read_m068060AE46E117BDB4DE0524ED67C85419EFE6EC(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void SharedMemory.BufferWithLocks::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferWithLocks_Dispose_m03747B7CB1A5D954B1934716BA7117550AED44A8 (BufferWithLocks_tAC66E561168ED8E40BDABCC964399BA062D85731* __this, bool ___disposeManagedResources0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___disposeManagedResources0;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* L_1;
		L_1 = BufferWithLocks_get_WriteWaitEvent_m960C7F7D2FC71C16121E1CF564B8053395F3DD53_inline(__this, NULL);
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_1);
		EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* L_2;
		L_2 = BufferWithLocks_get_ReadWaitEvent_m47385F2D3427305FE3226CFE6C920A88B6066419_inline(__this, NULL);
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
	}

IL_0019:
	{
		bool L_3 = ___disposeManagedResources0;
		SharedBuffer_Dispose_m27620E4F304D70A8D2ED01CFA80D5E91D0DCBB8B(__this, L_3, NULL);
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
// System.Int32 SharedMemory.CircularBuffer::get_NodeCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CircularBuffer_get_NodeCount_mF8507542126E0ED2D7118B5184F1E9F65F33ED28 (CircularBuffer_tB62401E0B61024C9A683EE0918EE03921EEEE35B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CNodeCountU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void SharedMemory.CircularBuffer::set_NodeCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircularBuffer_set_NodeCount_m36B17D860A2C93AFFEAB202CDCFA41B828E94894 (CircularBuffer_tB62401E0B61024C9A683EE0918EE03921EEEE35B* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CNodeCountU3Ek__BackingField_9 = L_0;
		return;
	}
}
// System.Int32 SharedMemory.CircularBuffer::get_NodeBufferSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CircularBuffer_get_NodeBufferSize_m6AC51F5DA1A42CD91E92975CF194D71A90D14905 (CircularBuffer_tB62401E0B61024C9A683EE0918EE03921EEEE35B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CNodeBufferSizeU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void SharedMemory.CircularBuffer::set_NodeBufferSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircularBuffer_set_NodeBufferSize_m5D7A14407C03E47DA6A78EDC8E8098ADFD36B21D (CircularBuffer_tB62401E0B61024C9A683EE0918EE03921EEEE35B* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CNodeBufferSizeU3Ek__BackingField_10 = L_0;
		return;
	}
}
// System.Threading.EventWaitHandle SharedMemory.CircularBuffer::get_DataExists()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* CircularBuffer_get_DataExists_m075EB43256A2AD3F45176F1C1E48465021BB5C95 (CircularBuffer_tB62401E0B61024C9A683EE0918EE03921EEEE35B* __this, const RuntimeMethod* method) 
{
	{
		EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* L_0 = __this->___U3CDataExistsU3Ek__BackingField_11;
		return L_0;
	}
}
// System.Void SharedMemory.CircularBuffer::set_DataExists(System.Threading.EventWaitHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircularBuffer_set_DataExists_m9474440B1A81063CC562EB9AE53501F99168C9FB (CircularBuffer_tB62401E0B61024C9A683EE0918EE03921EEEE35B* __this, EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* ___value0, const RuntimeMethod* method) 
{
	{
		EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* L_0 = ___value0;
		__this->___U3CDataExistsU3Ek__BackingField_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDataExistsU3Ek__BackingField_11), (void*)L_0);
		return;
	}
}
// System.Threading.EventWaitHandle SharedMemory.CircularBuffer::get_NodeAvailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* CircularBuffer_get_NodeAvailable_mE1BD136B7360169ED0280F28595E81A69E899DF9 (CircularBuffer_tB62401E0B61024C9A683EE0918EE03921EEEE35B* __this, const RuntimeMethod* method) 
{
	{
		EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* L_0 = __this->___U3CNodeAvailableU3Ek__BackingField_12;
		return L_0;
	}
}
// System.Void SharedMemory.CircularBuffer::set_NodeAvailable(System.Threading.EventWaitHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircularBuffer_set_NodeAvailable_m90195BDF74175BB3A87FEF7943049DC8A685D1C6 (CircularBuffer_tB62401E0B61024C9A683EE0918EE03921EEEE35B* __this, EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* ___value0, const RuntimeMethod* method) 
{
	{
		EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* L_0 = ___value0;
		__this->___U3CNodeAvailableU3Ek__BackingField_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNodeAvailableU3Ek__BackingField_12), (void*)L_0);
		return;
	}
}
// System.Int64 SharedMemory.CircularBuffer::get_NodeHeaderOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t CircularBuffer_get_NodeHeaderOffset_m2387DE11FD89951E95FCC3EE9B70CF935A358DAF (CircularBuffer_tB62401E0B61024C9A683EE0918EE03921EEEE35B* __this, const RuntimeMethod* method) 
{
	{
		return ((int64_t)0);
	}
}
// System.Int64 SharedMemory.CircularBuffer::get_NodeOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t CircularBuffer_get_NodeOffset_mDD46995DF392AC04A2452E2F5493D2616FD9C5FF (CircularBuffer_tB62401E0B61024C9A683EE0918EE03921EEEE35B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NodeHeader_tC7AA1A5DCEAE807D7B9DFE8A402114E0E1AF13F4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0;
		L_0 = VirtualFuncInvoker0< int64_t >::Invoke(23 /* System.Int64 SharedMemory.CircularBuffer::get_NodeHeaderOffset() */, __this);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (NodeHeader_tC7AA1A5DCEAE807D7B9DFE8A402114E0E1AF13F4_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7(L_2, NULL);
		return ((int64_t)il2cpp_codegen_add(L_0, ((int64_t)L_3)));
	}
}
// System.Int64 SharedMemory.CircularBuffer::get_NodeBufferOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t CircularBuffer_get_NodeBufferOffset_mE37DB14DC9D12D017B2FFC9F2C4A1C55AF9B73D4 (CircularBuffer_tB62401E0B61024C9A683EE0918EE03921EEEE35B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0;
		L_0 = VirtualFuncInvoker0< int64_t >::Invoke(24 /* System.Int64 SharedMemory.CircularBuffer::get_NodeOffset() */, __this);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7(L_2, NULL);
		int32_t L_4;
		L_4 = CircularBuffer_get_NodeCount_mF8507542126E0ED2D7118B5184F1E9F65F33ED28_inline(__this, NULL);
		return ((int64_t)il2cpp_codegen_add(L_0, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_3, L_4)))));
	}
}
// SharedMemory.CircularBuffer/Node* SharedMemory.CircularBuffer::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E* CircularBuffer_get_Item_mB26BA3D1EBBD75013F29ECC3AC09A27FCEB8401B (CircularBuffer_tB62401E0B61024C9A683EE0918EE03921EEEE35B* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___i0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___i0;
		int32_t L_2;
		L_2 = CircularBuffer_get_NodeCount_mF8507542126E0ED2D7118B5184F1E9F65F33ED28_inline(__this, NULL);
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0013;
		}
	}

IL_000d:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CircularBuffer_get_Item_mB26BA3D1EBBD75013F29ECC3AC09A27FCEB8401B_RuntimeMethod_var)));
	}

IL_0013:
	{
		uint8_t* L_4 = ((SharedBuffer_t1BE086CC5133873A7F23428A7998BCC0B9BEAE28*)__this)->___BufferStartPtr_3;
		int64_t L_5;
		L_5 = VirtualFuncInvoker0< int64_t >::Invoke(24 /* System.Int64 SharedMemory.CircularBuffer::get_NodeOffset() */, __this);
		int32_t L_6 = ___i0;
		uint32_t L_7 = sizeof(Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E);
		return (Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E*)(((uint8_t*)il2cpp_codegen_add((intptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)L_5))), ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_6), (int32_t)L_7)))));
	}
}
// System.Void SharedMemory.CircularBuffer::.ctor(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircularBuffer__ctor_m1C63A2E1228FC2387BDD14799B998796CE3BAAD6 (CircularBuffer_tB62401E0B61024C9A683EE0918EE03921EEEE35B* __this, String_t* ___name0, int32_t ___nodeCount1, int32_t ___nodeBufferSize2, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___name0;
		int32_t L_1 = ___nodeCount1;
		int32_t L_2 = ___nodeBufferSize2;
		CircularBuffer__ctor_m8E7FFB790FDBBC88F53F2DC52C259995C4E4BACD(__this, L_0, L_1, L_2, (bool)1, NULL);
		bool L_3;
		L_3 = SharedBuffer_Open_m926621CDD3B74EF7690F5DD93E278F0F65F5C2EE(__this, NULL);
		return;
	}
}
// System.Void SharedMemory.CircularBuffer::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircularBuffer__ctor_m57B65DE8FEB72E7870045F051626D4CBC0F86FC5 (CircularBuffer_tB62401E0B61024C9A683EE0918EE03921EEEE35B* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___name0;
		CircularBuffer__ctor_m8E7FFB790FDBBC88F53F2DC52C259995C4E4BACD(__this, L_0, 0, 0, (bool)0, NULL);
		bool L_1;
		L_1 = SharedBuffer_Open_m926621CDD3B74EF7690F5DD93E278F0F65F5C2EE(__this, NULL);
		return;
	}
}
// System.Void SharedMemory.CircularBuffer::.ctor(System.String,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircularBuffer__ctor_m8E7FFB790FDBBC88F53F2DC52C259995C4E4BACD (CircularBuffer_tB62401E0B61024C9A683EE0918EE03921EEEE35B* __this, String_t* ___name0, int32_t ___nodeCount1, int32_t ___nodeBufferSize2, bool ___ownsSharedMemory3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NodeHeader_tC7AA1A5DCEAE807D7B9DFE8A402114E0E1AF13F4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->____nodeHeader_8 = (NodeHeader_tC7AA1A5DCEAE807D7B9DFE8A402114E0E1AF13F4*)((uintptr_t)0);
		String_t* L_0 = ___name0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (NodeHeader_tC7AA1A5DCEAE807D7B9DFE8A402114E0E1AF13F4_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7(L_2, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E_0_0_0_var) };
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		int32_t L_6;
		L_6 = Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7(L_5, NULL);
		int32_t L_7 = ___nodeCount1;
		int32_t L_8 = ___nodeCount1;
		int32_t L_9 = ___nodeBufferSize2;
		bool L_10 = ___ownsSharedMemory3;
		SharedBuffer__ctor_mF9A1B8A7114D10B73830A26B8B5828D8415D3EE9(__this, L_0, ((int64_t)il2cpp_codegen_add(((int64_t)((int32_t)il2cpp_codegen_add(L_3, ((int32_t)il2cpp_codegen_multiply(L_6, L_7))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_8), ((int64_t)L_9))))), L_10, NULL);
		bool L_11 = ___ownsSharedMemory3;
		if (!L_11)
		{
			goto IL_0057;
		}
	}
	{
		int32_t L_12 = ___nodeCount1;
		if ((((int32_t)L_12) >= ((int32_t)2)))
		{
			goto IL_0057;
		}
	}
	{
		int32_t L_13 = ___nodeCount1;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_16);
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7EAF74BD58F39BF24633BBA87400BD3ADB6090CE)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD392D175A9D7CBC806A502B5F6C68412BBC9D70E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CircularBuffer__ctor_m8E7FFB790FDBBC88F53F2DC52C259995C4E4BACD_RuntimeMethod_var)));
	}

IL_0057:
	{
		bool L_17;
		L_17 = SharedBuffer_get_IsOwnerOfSharedMemory_mE8D1F53A78E6165CF3B93D20D8CDA805B9B79D9E_inline(__this, NULL);
		if (!L_17)
		{
			goto IL_006d;
		}
	}
	{
		int32_t L_18 = ___nodeCount1;
		CircularBuffer_set_NodeCount_m36B17D860A2C93AFFEAB202CDCFA41B828E94894_inline(__this, L_18, NULL);
		int32_t L_19 = ___nodeBufferSize2;
		CircularBuffer_set_NodeBufferSize_m5D7A14407C03E47DA6A78EDC8E8098ADFD36B21D_inline(__this, L_19, NULL);
	}

IL_006d:
	{
		return;
	}
}
// System.Boolean SharedMemory.CircularBuffer::DoOpen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CircularBuffer_DoOpen_mDF57D8678D53AF5D2EEB37BBE1358874E04067D6 (CircularBuffer_tB62401E0B61024C9A683EE0918EE03921EEEE35B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral085004DC1ED6FCD52C74272B3EE3583C17FD3E14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D5F70EB328454A8DA9DE9BFF135B05EC083F173);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = SharedBuffer_get_Name_m0FF831FE269B502B1F0766EDE1D2E92889BB26A9_inline(__this, NULL);
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_0, _stringLiteral0D5F70EB328454A8DA9DE9BFF135B05EC083F173, NULL);
		EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* L_2 = (EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E*)il2cpp_codegen_object_new(EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		EventWaitHandle__ctor_m788FE824997F3E5B0351F619C50A824F53BF23C9(L_2, (bool)0, 0, L_1, NULL);
		CircularBuffer_set_DataExists_m9474440B1A81063CC562EB9AE53501F99168C9FB_inline(__this, L_2, NULL);
		String_t* L_3;
		L_3 = SharedBuffer_get_Name_m0FF831FE269B502B1F0766EDE1D2E92889BB26A9_inline(__this, NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_3, _stringLiteral085004DC1ED6FCD52C74272B3EE3583C17FD3E14, NULL);
		EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* L_5 = (EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E*)il2cpp_codegen_object_new(EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		EventWaitHandle__ctor_m788FE824997F3E5B0351F619C50A824F53BF23C9(L_5, (bool)0, 0, L_4, NULL);
		CircularBuffer_set_NodeAvailable_m90195BDF74175BB3A87FEF7943049DC8A685D1C6_inline(__this, L_5, NULL);
		bool L_6;
		L_6 = SharedBuffer_get_IsOwnerOfSharedMemory_mE8D1F53A78E6165CF3B93D20D8CDA805B9B79D9E_inline(__this, NULL);
		if (!L_6)
		{
			goto IL_0064;
		}
	}
	{
		uint8_t* L_7 = ((SharedBuffer_t1BE086CC5133873A7F23428A7998BCC0B9BEAE28*)__this)->___BufferStartPtr_3;
		int64_t L_8;
		L_8 = VirtualFuncInvoker0< int64_t >::Invoke(23 /* System.Int64 SharedMemory.CircularBuffer::get_NodeHeaderOffset() */, __this);
		__this->____nodeHeader_8 = (NodeHeader_tC7AA1A5DCEAE807D7B9DFE8A402114E0E1AF13F4*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)L_8)));
		CircularBuffer_InitialiseNodeHeader_mF12542C4822A8FB405F393A4F42C9634BAD052BA(__this, NULL);
		CircularBuffer_InitialiseLinkedListNodes_mFBE3CFBC42CB17020CA3CEEBFA66FE30A095E86C(__this, NULL);
		goto IL_009a;
	}

IL_0064:
	{
		uint8_t* L_9 = ((SharedBuffer_t1BE086CC5133873A7F23428A7998BCC0B9BEAE28*)__this)->___BufferStartPtr_3;
		int64_t L_10;
		L_10 = VirtualFuncInvoker0< int64_t >::Invoke(23 /* System.Int64 SharedMemory.CircularBuffer::get_NodeHeaderOffset() */, __this);
		__this->____nodeHeader_8 = (NodeHeader_tC7AA1A5DCEAE807D7B9DFE8A402114E0E1AF13F4*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)L_10)));
		NodeHeader_tC7AA1A5DCEAE807D7B9DFE8A402114E0E1AF13F4* L_11 = __this->____nodeHeader_8;
		NullCheck(L_11);
		int32_t L_12 = L_11->___NodeCount_4;
		CircularBuffer_set_NodeCount_m36B17D860A2C93AFFEAB202CDCFA41B828E94894_inline(__this, L_12, NULL);
		NodeHeader_tC7AA1A5DCEAE807D7B9DFE8A402114E0E1AF13F4* L_13 = __this->____nodeHeader_8;
		NullCheck(L_13);
		int32_t L_14 = L_13->___NodeBufferSize_5;
		CircularBuffer_set_NodeBufferSize_m5D7A14407C03E47DA6A78EDC8E8098ADFD36B21D_inline(__this, L_14, NULL);
	}

IL_009a:
	{
		return (bool)1;
	}
}
// System.Void SharedMemory.CircularBuffer::InitialiseNodeHeader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircularBuffer_InitialiseNodeHeader_mF12542C4822A8FB405F393A4F42C9634BAD052BA (CircularBuffer_tB62401E0B61024C9A683EE0918EE03921EEEE35B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SharedBuffer_Write_TisNodeHeader_tC7AA1A5DCEAE807D7B9DFE8A402114E0E1AF13F4_m9CEDF7B9D137E3F4A3700800C0CF6721F12F945E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NodeHeader_tC7AA1A5DCEAE807D7B9DFE8A402114E0E1AF13F4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		bool L_0;
		L_0 = SharedBuffer_get_IsOwnerOfSharedMemory_mE8D1F53A78E6165CF3B93D20D8CDA805B9B79D9E_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NodeHeader_tC7AA1A5DCEAE807D7B9DFE8A402114E0E1AF13F4));
		il2cpp_codegen_memory_barrier();
		(&V_0)->___ReadStart_1 = 0;
		il2cpp_codegen_memory_barrier();
		(&V_0)->___ReadEnd_0 = 0;
		il2cpp_codegen_memory_barrier();
		(&V_0)->___WriteEnd_2 = 0;
		il2cpp_codegen_memory_barrier();
		(&V_0)->___WriteStart_3 = 0;
		int32_t L_1;
		L_1 = CircularBuffer_get_NodeBufferSize_m6AC51F5DA1A42CD91E92975CF194D71A90D14905_inline(__this, NULL);
		(&V_0)->___NodeBufferSize_5 = L_1;
		int32_t L_2;
		L_2 = CircularBuffer_get_NodeCount_mF8507542126E0ED2D7118B5184F1E9F65F33ED28_inline(__this, NULL);
		(&V_0)->___NodeCount_4 = L_2;
		int64_t L_3;
		L_3 = VirtualFuncInvoker0< int64_t >::Invoke(23 /* System.Int64 SharedMemory.CircularBuffer::get_NodeHeaderOffset() */, __this);
		SharedBuffer_Write_TisNodeHeader_tC7AA1A5DCEAE807D7B9DFE8A402114E0E1AF13F4_m9CEDF7B9D137E3F4A3700800C0CF6721F12F945E(__this, (&V_0), L_3, SharedBuffer_Write_TisNodeHeader_tC7AA1A5DCEAE807D7B9DFE8A402114E0E1AF13F4_m9CEDF7B9D137E3F4A3700800C0CF6721F12F945E_RuntimeMethod_var);
		return;
	}
}
// System.Void SharedMemory.CircularBuffer::InitialiseLinkedListNodes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircularBuffer_InitialiseLinkedListNodes_mFBE3CFBC42CB17020CA3CEEBFA66FE30A095E86C (CircularBuffer_tB62401E0B61024C9A683EE0918EE03921EEEE35B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NodeU5BU5D_t4430D55C36F60C5C2A1876D4B01D09719861ED0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SharedBuffer_WriteArray_TisNode_t90DACB0900841EED2B259072EDC87CF7F68E3D2E_m66DA3B86383F52E9DF40D128F36C59F12DF5D275_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	NodeU5BU5D_t4430D55C36F60C5C2A1876D4B01D09719861ED0D* V_1 = NULL;
	{
		bool L_0;
		L_0 = SharedBuffer_get_IsOwnerOfSharedMemory_mE8D1F53A78E6165CF3B93D20D8CDA805B9B79D9E_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		V_0 = 0;
		int32_t L_1;
		L_1 = CircularBuffer_get_NodeCount_mF8507542126E0ED2D7118B5184F1E9F65F33ED28_inline(__this, NULL);
		NodeU5BU5D_t4430D55C36F60C5C2A1876D4B01D09719861ED0D* L_2 = (NodeU5BU5D_t4430D55C36F60C5C2A1876D4B01D09719861ED0D*)(NodeU5BU5D_t4430D55C36F60C5C2A1876D4B01D09719861ED0D*)SZArrayNew(NodeU5BU5D_t4430D55C36F60C5C2A1876D4B01D09719861ED0D_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_1 = L_2;
		NodeU5BU5D_t4430D55C36F60C5C2A1876D4B01D09719861ED0D* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___Next_0 = 1;
		NodeU5BU5D_t4430D55C36F60C5C2A1876D4B01D09719861ED0D* L_5 = V_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7;
		L_7 = CircularBuffer_get_NodeCount_mF8507542126E0ED2D7118B5184F1E9F65F33ED28_inline(__this, NULL);
		((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___Prev_1 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
		NodeU5BU5D_t4430D55C36F60C5C2A1876D4B01D09719861ED0D* L_8 = V_1;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int64_t L_10;
		L_10 = VirtualFuncInvoker0< int64_t >::Invoke(25 /* System.Int64 SharedMemory.CircularBuffer::get_NodeBufferOffset() */, __this);
		((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___Offset_4 = L_10;
		NodeU5BU5D_t4430D55C36F60C5C2A1876D4B01D09719861ED0D* L_11 = V_1;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = V_0;
		((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)))->___Index_5 = L_13;
		V_0 = 1;
		goto IL_00a6;
	}

IL_005b:
	{
		NodeU5BU5D_t4430D55C36F60C5C2A1876D4B01D09719861ED0D* L_14 = V_1;
		int32_t L_15 = V_0;
		NullCheck(L_14);
		int32_t L_16 = V_0;
		((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___Next_0 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		NodeU5BU5D_t4430D55C36F60C5C2A1876D4B01D09719861ED0D* L_17 = V_1;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		int32_t L_19 = V_0;
		((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___Prev_1 = ((int32_t)il2cpp_codegen_subtract(L_19, 1));
		NodeU5BU5D_t4430D55C36F60C5C2A1876D4B01D09719861ED0D* L_20 = V_1;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		int64_t L_22;
		L_22 = VirtualFuncInvoker0< int64_t >::Invoke(25 /* System.Int64 SharedMemory.CircularBuffer::get_NodeBufferOffset() */, __this);
		int32_t L_23;
		L_23 = CircularBuffer_get_NodeBufferSize_m6AC51F5DA1A42CD91E92975CF194D71A90D14905_inline(__this, NULL);
		int32_t L_24 = V_0;
		((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___Offset_4 = ((int64_t)il2cpp_codegen_add(L_22, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_23, L_24)))));
		NodeU5BU5D_t4430D55C36F60C5C2A1876D4B01D09719861ED0D* L_25 = V_1;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = V_0;
		((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___Index_5 = L_27;
		int32_t L_28 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00a6:
	{
		int32_t L_29 = V_0;
		int32_t L_30;
		L_30 = CircularBuffer_get_NodeCount_mF8507542126E0ED2D7118B5184F1E9F65F33ED28_inline(__this, NULL);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_30, 1)))))
		{
			goto IL_005b;
		}
	}
	{
		NodeU5BU5D_t4430D55C36F60C5C2A1876D4B01D09719861ED0D* L_31 = V_1;
		int32_t L_32 = V_0;
		NullCheck(L_31);
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___Next_0 = 0;
		NodeU5BU5D_t4430D55C36F60C5C2A1876D4B01D09719861ED0D* L_33 = V_1;
		int32_t L_34 = V_0;
		NullCheck(L_33);
		int32_t L_35;
		L_35 = CircularBuffer_get_NodeCount_mF8507542126E0ED2D7118B5184F1E9F65F33ED28_inline(__this, NULL);
		((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___Prev_1 = ((int32_t)il2cpp_codegen_subtract(L_35, 2));
		NodeU5BU5D_t4430D55C36F60C5C2A1876D4B01D09719861ED0D* L_36 = V_1;
		int32_t L_37 = V_0;
		NullCheck(L_36);
		int64_t L_38;
		L_38 = VirtualFuncInvoker0< int64_t >::Invoke(25 /* System.Int64 SharedMemory.CircularBuffer::get_NodeBufferOffset() */, __this);
		int32_t L_39;
		L_39 = CircularBuffer_get_NodeBufferSize_m6AC51F5DA1A42CD91E92975CF194D71A90D14905_inline(__this, NULL);
		int32_t L_40 = V_0;
		((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_37)))->___Offset_4 = ((int64_t)il2cpp_codegen_add(L_38, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_39, L_40)))));
		NodeU5BU5D_t4430D55C36F60C5C2A1876D4B01D09719861ED0D* L_41 = V_1;
		int32_t L_42 = V_0;
		NullCheck(L_41);
		int32_t L_43 = V_0;
		((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___Index_5 = L_43;
		NodeU5BU5D_t4430D55C36F60C5C2A1876D4B01D09719861ED0D* L_44 = V_1;
		NodeU5BU5D_t4430D55C36F60C5C2A1876D4B01D09719861ED0D* L_45 = V_1;
		NullCheck(L_45);
		int64_t L_46;
		L_46 = VirtualFuncInvoker0< int64_t >::Invoke(24 /* System.Int64 SharedMemory.CircularBuffer::get_NodeOffset() */, __this);
		SharedBuffer_WriteArray_TisNode_t90DACB0900841EED2B259072EDC87CF7F68E3D2E_m66DA3B86383F52E9DF40D128F36C59F12DF5D275(__this, L_44, 0, ((int32_t)(((RuntimeArray*)L_45)->max_length)), L_46, SharedBuffer_WriteArray_TisNode_t90DACB0900841EED2B259072EDC87CF7F68E3D2E_m66DA3B86383F52E9DF40D128F36C59F12DF5D275_RuntimeMethod_var);
		return;
	}
}
// System.Void SharedMemory.CircularBuffer::DoClose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircularBuffer_DoClose_mF3ACEF68A571AA72252997DD8032A0728E567FD3 (CircularBuffer_tB62401E0B61024C9A683EE0918EE03921EEEE35B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* L_0;
		L_0 = CircularBuffer_get_DataExists_m075EB43256A2AD3F45176F1C1E48465021BB5C95_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* L_1;
		L_1 = CircularBuffer_get_DataExists_m075EB43256A2AD3F45176F1C1E48465021BB5C95_inline(__this, NULL);
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_1);
		CircularBuffer_set_DataExists_m9474440B1A81063CC562EB9AE53501F99168C9FB_inline(__this, (EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E*)NULL, NULL);
		EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* L_2;
		L_2 = CircularBuffer_get_NodeAvailable_mE1BD136B7360169ED0280F28595E81A69E899DF9_inline(__this, NULL);
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
		CircularBuffer_set_NodeAvailable_m90195BDF74175BB3A87FEF7943049DC8A685D1C6_inline(__this, (EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E*)NULL, NULL);
	}

IL_002c:
	{
		__this->____nodeHeader_8 = (NodeHeader_tC7AA1A5DCEAE807D7B9DFE8A402114E0E1AF13F4*)((uintptr_t)0);
		return;
	}
}
// SharedMemory.CircularBuffer/Node* SharedMemory.CircularBuffer::GetNodeForWriting(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E* CircularBuffer_GetNodeForWriting_mA6ACD24B38F024EC1BEFBC5EB97C702524FD83DC (CircularBuffer_tB62401E0B61024C9A683EE0918EE03921EEEE35B* __this, int32_t ___timeout0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E* V_1 = NULL;

IL_0000:
	{
		NodeHeader_tC7AA1A5DCEAE807D7B9DFE8A402114E0E1AF13F4* L_0 = __this->____nodeHeader_8;
		NullCheck(L_0);
		int32_t L_1 = L_0->___WriteStart_3;
		il2cpp_codegen_memory_barrier();
		V_0 = L_1;
		int32_t L_2 = V_0;
		Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E* L_3;
		L_3 = VirtualFuncInvoker1< Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E*, int32_t >::Invoke(26 /* SharedMemory.CircularBuffer/Node* SharedMemory.CircularBuffer::get_Item(System.Int32) */, __this, L_2);
		V_1 = L_3;
		Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E* L_4 = V_1;
		NullCheck(L_4);
		int32_t L_5 = L_4->___Next_0;
		NodeHeader_tC7AA1A5DCEAE807D7B9DFE8A402114E0E1AF13F4* L_6 = __this->____nodeHeader_8;
		NullCheck(L_6);
		int32_t L_7 = L_6->___ReadEnd_0;
		il2cpp_codegen_memory_barrier();
		if ((!(((uint32_t)L_5) == ((uint32_t)L_7))))
		{
			goto IL_003c;
		}
	}
	{
		EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* L_8;
		L_8 = CircularBuffer_get_NodeAvailable_mE1BD136B7360169ED0280F28595E81A69E899DF9_inline(__this, NULL);
		int32_t L_9 = ___timeout0;
		NullCheck(L_8);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, int32_t >::Invoke(10 /* System.Boolean System.Threading.WaitHandle::WaitOne(System.Int32) */, L_8, L_9);
		if (L_10)
		{
			goto IL_0000;
		}
	}
	{
		return (Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E*)(((uintptr_t)0));
	}

IL_003c:
	{
		NodeHeader_tC7AA1A5DCEAE807D7B9DFE8A402114E0E1AF13F4* L_11 = __this->____nodeHeader_8;
		NullCheck(L_11);
		int32_t* L_12 = (&L_11->___WriteStart_3);
		il2cpp_codegen_memory_barrier();
		Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E* L_13 = V_1;
		NullCheck(L_13);
		int32_t L_14 = L_13->___Next_0;
		int32_t L_15 = V_0;
		int32_t L_16;
		L_16 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(L_12, L_14, L_15, NULL);
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0000;
		}
	}
	{
		Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E* L_18 = V_1;
		return L_18;
	}
}
// System.Void SharedMemory.CircularBuffer::PostNode(SharedMemory.CircularBuffer/Node*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircularBuffer_PostNode_m43DC69869FF31C40379BCBCABD72FAD71050CC63 (CircularBuffer_tB62401E0B61024C9A683EE0918EE03921EEEE35B* __this, Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E* ___node0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E* L_0 = ___node0;
		NullCheck(L_0);
		il2cpp_codegen_memory_barrier();
		L_0->___DoneWrite_3 = 1;
	}

IL_0009:
	{
		NodeHeader_tC7AA1A5DCEAE807D7B9DFE8A402114E0E1AF13F4* L_1 = __this->____nodeHeader_8;
		NullCheck(L_1);
		int32_t L_2 = L_1->___WriteEnd_2;
		il2cpp_codegen_memory_barrier();
		V_0 = L_2;
		int32_t L_3 = V_0;
		Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E* L_4;
		L_4 = VirtualFuncInvoker1< Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E*, int32_t >::Invoke(26 /* SharedMemory.CircularBuffer/Node* SharedMemory.CircularBuffer::get_Item(System.Int32) */, __this, L_3);
		___node0 = L_4;
		Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E* L_5 = ___node0;
		NullCheck(L_5);
		int32_t* L_6 = (&L_5->___DoneWrite_3);
		il2cpp_codegen_memory_barrier();
		int32_t L_7;
		L_7 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(L_6, 0, 1, NULL);
		if ((((int32_t)L_7) == ((int32_t)1)))
		{
			goto IL_0031;
		}
	}
	{
		return;
	}

IL_0031:
	{
		NodeHeader_tC7AA1A5DCEAE807D7B9DFE8A402114E0E1AF13F4* L_8 = __this->____nodeHeader_8;
		NullCheck(L_8);
		int32_t* L_9 = (&L_8->___WriteEnd_2);
		il2cpp_codegen_memory_barrier();
		Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E* L_10 = ___node0;
		NullCheck(L_10);
		int32_t L_11 = L_10->___Next_0;
		int32_t L_12 = V_0;
		int32_t L_13;
		L_13 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(L_9, L_11, L_12, NULL);
		int32_t L_14 = V_0;
		NodeHeader_tC7AA1A5DCEAE807D7B9DFE8A402114E0E1AF13F4* L_15 = __this->____nodeHeader_8;
		NullCheck(L_15);
		int32_t L_16 = L_15->___ReadStart_1;
		il2cpp_codegen_memory_barrier();
		if ((!(((uint32_t)L_14) == ((uint32_t)L_16))))
		{
			goto IL_0009;
		}
	}
	{
		EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* L_17;
		L_17 = CircularBuffer_get_DataExists_m075EB43256A2AD3F45176F1C1E48465021BB5C95_inline(__this, NULL);
		NullCheck(L_17);
		bool L_18;
		L_18 = EventWaitHandle_Set_mDF98D67F214714A9590DF82A1C51D3D851281E4D(L_17, NULL);
		goto IL_0009;
	}
}
// System.Int32 SharedMemory.CircularBuffer::Write(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CircularBuffer_Write_m8D9AC99E9024C08D560E02205CE9489F22EEC658 (CircularBuffer_tB62401E0B61024C9A683EE0918EE03921EEEE35B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___source0, int32_t ___startIndex1, int32_t ___timeout2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___timeout2;
		Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E* L_1;
		L_1 = VirtualFuncInvoker1< Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E*, int32_t >::Invoke(27 /* SharedMemory.CircularBuffer/Node* SharedMemory.CircularBuffer::GetNodeForWriting(System.Int32) */, __this, L_0);
		V_0 = L_1;
		Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E* L_2 = V_0;
		if ((!(((uintptr_t)L_2) == ((uintptr_t)((uintptr_t)0)))))
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___source0;
		NullCheck(L_3);
		int32_t L_4 = ___startIndex1;
		int32_t L_5;
		L_5 = CircularBuffer_get_NodeBufferSize_m6AC51F5DA1A42CD91E92975CF194D71A90D14905_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4)), L_5, NULL);
		V_1 = L_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___source0;
		int32_t L_8 = ___startIndex1;
		uint8_t* L_9 = ((SharedBuffer_t1BE086CC5133873A7F23428A7998BCC0B9BEAE28*)__this)->___BufferStartPtr_3;
		Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E* L_10 = V_0;
		NullCheck(L_10);
		int64_t L_11 = L_10->___Offset_4;
		intptr_t L_12;
		memset((&L_12), 0, sizeof(L_12));
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&L_12), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)L_11))), /*hidden argument*/NULL);
		int32_t L_13 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_Copy_m0FD7BFE70EE28FC67B67A6225AD58F95FEE7EB85(L_7, L_8, L_12, L_13, NULL);
		Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E* L_14 = V_0;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		L_14->___AmountWritten_6 = L_15;
		Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E* L_16 = V_0;
		VirtualActionInvoker1< Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E* >::Invoke(28 /* System.Void SharedMemory.CircularBuffer::PostNode(SharedMemory.CircularBuffer/Node*) */, __this, L_16);
		int32_t L_17 = V_1;
		return L_17;
	}
}
// System.Int32 SharedMemory.CircularBuffer::Write(System.IntPtr,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CircularBuffer_Write_m5C9B9BA1338796EA188A3DDEC530FA51401774F1 (CircularBuffer_tB62401E0B61024C9A683EE0918EE03921EEEE35B* __this, intptr_t ___source0, int32_t ___length1, int32_t ___timeout2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___timeout2;
		Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E* L_1;
		L_1 = VirtualFuncInvoker1< Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E*, int32_t >::Invoke(27 /* SharedMemory.CircularBuffer/Node* SharedMemory.CircularBuffer::GetNodeForWriting(System.Int32) */, __this, L_0);
		V_0 = L_1;
		Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E* L_2 = V_0;
		if ((!(((uintptr_t)L_2) == ((uintptr_t)((uintptr_t)0)))))
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		int32_t L_3 = ___length1;
		int32_t L_4;
		L_4 = CircularBuffer_get_NodeBufferSize_m6AC51F5DA1A42CD91E92975CF194D71A90D14905_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_3, L_4, NULL);
		V_1 = L_5;
		intptr_t L_6 = ___source0;
		int32_t L_7 = V_1;
		Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E* L_8 = V_0;
		NullCheck(L_8);
		int64_t L_9 = L_8->___Offset_4;
		SharedBuffer_Write_m00645415CBDA6892DA0064D3F416539170BF7896(__this, L_6, L_7, L_9, NULL);
		Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E* L_10 = V_0;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		L_10->___AmountWritten_6 = L_11;
		Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E* L_12 = V_0;
		VirtualActionInvoker1< Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E* >::Invoke(28 /* System.Void SharedMemory.CircularBuffer::PostNode(SharedMemory.CircularBuffer/Node*) */, __this, L_12);
		int32_t L_13 = V_1;
		return L_13;
	}
}
// System.Int32 SharedMemory.CircularBuffer::Write(System.Func`2<System.IntPtr,System.Int32>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CircularBuffer_Write_mD659B7E4511C298B8E8FAC84B1812F52C5A4C429 (CircularBuffer_tB62401E0B61024C9A683EE0918EE03921EEEE35B* __this, Func_2_tB5422B774B20A6FA5E1E2A7456E87A4C47AF1F04* ___writeFunc0, int32_t ___timeout1, const RuntimeMethod* method) 
{
	Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___timeout1;
		Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E* L_1;
		L_1 = VirtualFuncInvoker1< Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E*, int32_t >::Invoke(27 /* SharedMemory.CircularBuffer/Node* SharedMemory.CircularBuffer::GetNodeForWriting(System.Int32) */, __this, L_0);
		V_0 = L_1;
		Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E* L_2 = V_0;
		if ((!(((uintptr_t)L_2) == ((uintptr_t)((uintptr_t)0)))))
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		V_1 = 0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0034:
			{// begin finally (depth: 1)
				Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E* L_3 = V_0;
				VirtualActionInvoker1< Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E* >::Invoke(28 /* System.Void SharedMemory.CircularBuffer::PostNode(SharedMemory.CircularBuffer/Node*) */, __this, L_3);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			Func_2_tB5422B774B20A6FA5E1E2A7456E87A4C47AF1F04* L_4 = ___writeFunc0;
			uint8_t* L_5 = ((SharedBuffer_t1BE086CC5133873A7F23428A7998BCC0B9BEAE28*)__this)->___BufferStartPtr_3;
			Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E* L_6 = V_0;
			NullCheck(L_6);
			int64_t L_7 = L_6->___Offset_4;
			intptr_t L_8;
			memset((&L_8), 0, sizeof(L_8));
			IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&L_8), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)L_7))), /*hidden argument*/NULL);
			NullCheck(L_4);
			int32_t L_9;
			L_9 = Func_2_Invoke_mC547E921430F6789DF79C5F7F757D16A56655047_inline(L_4, L_8, NULL);
			V_1 = L_9;
			Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E* L_10 = V_0;
			int32_t L_11 = V_1;
			NullCheck(L_10);
			L_10->___AmountWritten_6 = L_11;
			goto IL_003c;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003c:
	{
		int32_t L_12 = V_1;
		return L_12;
	}
}
// SharedMemory.CircularBuffer/NodeHeader SharedMemory.CircularBuffer::ReadNodeHeader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NodeHeader_tC7AA1A5DCEAE807D7B9DFE8A402114E0E1AF13F4 CircularBuffer_ReadNodeHeader_m21D8FCF3D7ED760DD4B101F7E7C6EC04F99450D6 (CircularBuffer_tB62401E0B61024C9A683EE0918EE03921EEEE35B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NodeHeader_tC7AA1A5DCEAE807D7B9DFE8A402114E0E1AF13F4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NodeHeader_tC7AA1A5DCEAE807D7B9DFE8A402114E0E1AF13F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NodeHeader_tC7AA1A5DCEAE807D7B9DFE8A402114E0E1AF13F4* L_0 = __this->____nodeHeader_8;
		intptr_t L_1;
		memset((&L_1), 0, sizeof(L_1));
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&L_1), (void*)L_0, /*hidden argument*/NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (NodeHeader_tC7AA1A5DCEAE807D7B9DFE8A402114E0E1AF13F4_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		RuntimeObject* L_4;
		L_4 = Marshal_PtrToStructure_m235E141E21BFB69A01B07DDDF1702BA7D5723AC3(L_1, L_3, NULL);
		return ((*(NodeHeader_tC7AA1A5DCEAE807D7B9DFE8A402114E0E1AF13F4*)((NodeHeader_tC7AA1A5DCEAE807D7B9DFE8A402114E0E1AF13F4*)(NodeHeader_tC7AA1A5DCEAE807D7B9DFE8A402114E0E1AF13F4*)UnBox(L_4, NodeHeader_tC7AA1A5DCEAE807D7B9DFE8A402114E0E1AF13F4_il2cpp_TypeInfo_var))));
	}
}
// SharedMemory.CircularBuffer/Node* SharedMemory.CircularBuffer::GetNodeForReading(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E* CircularBuffer_GetNodeForReading_m00C5825AF0334CB9E31F7E776D00226240CC37FD (CircularBuffer_tB62401E0B61024C9A683EE0918EE03921EEEE35B* __this, int32_t ___timeout0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E* V_1 = NULL;

IL_0000:
	{
		NodeHeader_tC7AA1A5DCEAE807D7B9DFE8A402114E0E1AF13F4* L_0 = __this->____nodeHeader_8;
		NullCheck(L_0);
		int32_t L_1 = L_0->___ReadStart_1;
		il2cpp_codegen_memory_barrier();
		V_0 = L_1;
		int32_t L_2 = V_0;
		Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E* L_3;
		L_3 = VirtualFuncInvoker1< Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E*, int32_t >::Invoke(26 /* SharedMemory.CircularBuffer/Node* SharedMemory.CircularBuffer::get_Item(System.Int32) */, __this, L_2);
		V_1 = L_3;
		int32_t L_4 = V_0;
		NodeHeader_tC7AA1A5DCEAE807D7B9DFE8A402114E0E1AF13F4* L_5 = __this->____nodeHeader_8;
		NullCheck(L_5);
		int32_t L_6 = L_5->___WriteEnd_2;
		il2cpp_codegen_memory_barrier();
		if ((!(((uint32_t)L_4) == ((uint32_t)L_6))))
		{
			goto IL_0037;
		}
	}
	{
		EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* L_7;
		L_7 = CircularBuffer_get_DataExists_m075EB43256A2AD3F45176F1C1E48465021BB5C95_inline(__this, NULL);
		int32_t L_8 = ___timeout0;
		NullCheck(L_7);
		bool L_9;
		L_9 = VirtualFuncInvoker1< bool, int32_t >::Invoke(10 /* System.Boolean System.Threading.WaitHandle::WaitOne(System.Int32) */, L_7, L_8);
		if (L_9)
		{
			goto IL_0000;
		}
	}
	{
		return (Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E*)(((uintptr_t)0));
	}

IL_0037:
	{
		NodeHeader_tC7AA1A5DCEAE807D7B9DFE8A402114E0E1AF13F4* L_10 = __this->____nodeHeader_8;
		NullCheck(L_10);
		int32_t* L_11 = (&L_10->___ReadStart_1);
		il2cpp_codegen_memory_barrier();
		Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E* L_12 = V_1;
		NullCheck(L_12);
		int32_t L_13 = L_12->___Next_0;
		int32_t L_14 = V_0;
		int32_t L_15;
		L_15 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(L_11, L_13, L_14, NULL);
		int32_t L_16 = V_0;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_0000;
		}
	}
	{
		Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E* L_17 = V_1;
		return L_17;
	}
}
// System.Void SharedMemory.CircularBuffer::ReturnNode(SharedMemory.CircularBuffer/Node*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircularBuffer_ReturnNode_m1B3D1654B7B153AE3FCF9524CD69C6D22DFFA939 (CircularBuffer_tB62401E0B61024C9A683EE0918EE03921EEEE35B* __this, Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E* ___node0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E* L_0 = ___node0;
		NullCheck(L_0);
		il2cpp_codegen_memory_barrier();
		L_0->___DoneRead_2 = 1;
		Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E* L_1 = ___node0;
		NullCheck(L_1);
		L_1->___AmountWritten_6 = 0;
	}

IL_0010:
	{
		NodeHeader_tC7AA1A5DCEAE807D7B9DFE8A402114E0E1AF13F4* L_2 = __this->____nodeHeader_8;
		NullCheck(L_2);
		int32_t L_3 = L_2->___ReadEnd_0;
		il2cpp_codegen_memory_barrier();
		V_0 = L_3;
		int32_t L_4 = V_0;
		Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E* L_5;
		L_5 = VirtualFuncInvoker1< Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E*, int32_t >::Invoke(26 /* SharedMemory.CircularBuffer/Node* SharedMemory.CircularBuffer::get_Item(System.Int32) */, __this, L_4);
		___node0 = L_5;
		Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E* L_6 = ___node0;
		NullCheck(L_6);
		int32_t* L_7 = (&L_6->___DoneRead_2);
		il2cpp_codegen_memory_barrier();
		int32_t L_8;
		L_8 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(L_7, 0, 1, NULL);
		if ((((int32_t)L_8) == ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		return;
	}

IL_0038:
	{
		NodeHeader_tC7AA1A5DCEAE807D7B9DFE8A402114E0E1AF13F4* L_9 = __this->____nodeHeader_8;
		NullCheck(L_9);
		int32_t* L_10 = (&L_9->___ReadEnd_0);
		il2cpp_codegen_memory_barrier();
		Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E* L_11 = ___node0;
		NullCheck(L_11);
		int32_t L_12 = L_11->___Next_0;
		int32_t L_13 = V_0;
		int32_t L_14;
		L_14 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(L_10, L_12, L_13, NULL);
		Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E* L_15 = ___node0;
		NullCheck(L_15);
		int32_t L_16 = L_15->___Prev_1;
		NodeHeader_tC7AA1A5DCEAE807D7B9DFE8A402114E0E1AF13F4* L_17 = __this->____nodeHeader_8;
		NullCheck(L_17);
		int32_t L_18 = L_17->___WriteStart_3;
		il2cpp_codegen_memory_barrier();
		if ((!(((uint32_t)L_16) == ((uint32_t)L_18))))
		{
			goto IL_0010;
		}
	}
	{
		EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* L_19;
		L_19 = CircularBuffer_get_NodeAvailable_mE1BD136B7360169ED0280F28595E81A69E899DF9_inline(__this, NULL);
		NullCheck(L_19);
		bool L_20;
		L_20 = EventWaitHandle_Set_mDF98D67F214714A9590DF82A1C51D3D851281E4D(L_19, NULL);
		goto IL_0010;
	}
}
// System.Int32 SharedMemory.CircularBuffer::Read(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CircularBuffer_Read_m27CBA46CA6852FF28BC11B1E8FAF2B63B9E6E84B (CircularBuffer_tB62401E0B61024C9A683EE0918EE03921EEEE35B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___destination0, int32_t ___startIndex1, int32_t ___timeout2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___timeout2;
		Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E* L_1;
		L_1 = VirtualFuncInvoker1< Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E*, int32_t >::Invoke(34 /* SharedMemory.CircularBuffer/Node* SharedMemory.CircularBuffer::GetNodeForReading(System.Int32) */, __this, L_0);
		V_0 = L_1;
		Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E* L_2 = V_0;
		if ((!(((uintptr_t)L_2) == ((uintptr_t)((uintptr_t)0)))))
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___destination0;
		NullCheck(L_3);
		int32_t L_4 = ___startIndex1;
		Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = L_5->___AmountWritten_6;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4)), L_6, NULL);
		V_1 = L_7;
		uint8_t* L_8 = ((SharedBuffer_t1BE086CC5133873A7F23428A7998BCC0B9BEAE28*)__this)->___BufferStartPtr_3;
		Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E* L_9 = V_0;
		NullCheck(L_9);
		int64_t L_10 = L_9->___Offset_4;
		intptr_t L_11;
		memset((&L_11), 0, sizeof(L_11));
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&L_11), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)L_10))), /*hidden argument*/NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___destination0;
		int32_t L_13 = ___startIndex1;
		int32_t L_14 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_Copy_mF7402FFDB520EA1B8D1C32B368DBEE4B13F1BE77(L_11, L_12, L_13, L_14, NULL);
		Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E* L_15 = V_0;
		VirtualActionInvoker1< Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E* >::Invoke(35 /* System.Void SharedMemory.CircularBuffer::ReturnNode(SharedMemory.CircularBuffer/Node*) */, __this, L_15);
		int32_t L_16 = V_1;
		return L_16;
	}
}
// System.Int32 SharedMemory.CircularBuffer::Read(System.IntPtr,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CircularBuffer_Read_m3C69CAFADF08E351222B30CB244CF6033BFC6851 (CircularBuffer_tB62401E0B61024C9A683EE0918EE03921EEEE35B* __this, intptr_t ___destination0, int32_t ___length1, int32_t ___timeout2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___timeout2;
		Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E* L_1;
		L_1 = VirtualFuncInvoker1< Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E*, int32_t >::Invoke(34 /* SharedMemory.CircularBuffer/Node* SharedMemory.CircularBuffer::GetNodeForReading(System.Int32) */, __this, L_0);
		V_0 = L_1;
		Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E* L_2 = V_0;
		if ((!(((uintptr_t)L_2) == ((uintptr_t)((uintptr_t)0)))))
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		int32_t L_3 = ___length1;
		Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = L_4->___AmountWritten_6;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_3, L_5, NULL);
		V_1 = L_6;
		intptr_t L_7 = ___destination0;
		int32_t L_8 = V_1;
		Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E* L_9 = V_0;
		NullCheck(L_9);
		int64_t L_10 = L_9->___Offset_4;
		SharedBuffer_Read_mA09DD8DDB1A1B16520BC154CB57B0CA8F1845FEA(__this, L_7, L_8, L_10, NULL);
		Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E* L_11 = V_0;
		VirtualActionInvoker1< Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E* >::Invoke(35 /* System.Void SharedMemory.CircularBuffer::ReturnNode(SharedMemory.CircularBuffer/Node*) */, __this, L_11);
		int32_t L_12 = V_1;
		return L_12;
	}
}
// System.Int32 SharedMemory.CircularBuffer::Read(System.Func`2<System.IntPtr,System.Int32>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CircularBuffer_Read_mBCC8101F57726E7330838C1A9203EDF7C1AF6BDE (CircularBuffer_tB62401E0B61024C9A683EE0918EE03921EEEE35B* __this, Func_2_tB5422B774B20A6FA5E1E2A7456E87A4C47AF1F04* ___readFunc0, int32_t ___timeout1, const RuntimeMethod* method) 
{
	Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___timeout1;
		Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E* L_1;
		L_1 = VirtualFuncInvoker1< Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E*, int32_t >::Invoke(34 /* SharedMemory.CircularBuffer/Node* SharedMemory.CircularBuffer::GetNodeForReading(System.Int32) */, __this, L_0);
		V_0 = L_1;
		Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E* L_2 = V_0;
		if ((!(((uintptr_t)L_2) == ((uintptr_t)((uintptr_t)0)))))
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		V_1 = 0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002d:
			{// begin finally (depth: 1)
				Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E* L_3 = V_0;
				VirtualActionInvoker1< Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E* >::Invoke(35 /* System.Void SharedMemory.CircularBuffer::ReturnNode(SharedMemory.CircularBuffer/Node*) */, __this, L_3);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			Func_2_tB5422B774B20A6FA5E1E2A7456E87A4C47AF1F04* L_4 = ___readFunc0;
			uint8_t* L_5 = ((SharedBuffer_t1BE086CC5133873A7F23428A7998BCC0B9BEAE28*)__this)->___BufferStartPtr_3;
			Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E* L_6 = V_0;
			NullCheck(L_6);
			int64_t L_7 = L_6->___Offset_4;
			intptr_t L_8;
			memset((&L_8), 0, sizeof(L_8));
			IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&L_8), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)L_7))), /*hidden argument*/NULL);
			NullCheck(L_4);
			int32_t L_9;
			L_9 = Func_2_Invoke_mC547E921430F6789DF79C5F7F757D16A56655047_inline(L_4, L_8, NULL);
			V_1 = L_9;
			goto IL_0035;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0035:
	{
		int32_t L_10 = V_1;
		return L_10;
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
// Conversion methods for marshalling of: SharedMemory.CircularBuffer/NodeHeader
IL2CPP_EXTERN_C void NodeHeader_tC7AA1A5DCEAE807D7B9DFE8A402114E0E1AF13F4_marshal_pinvoke(const NodeHeader_tC7AA1A5DCEAE807D7B9DFE8A402114E0E1AF13F4& unmarshaled, NodeHeader_tC7AA1A5DCEAE807D7B9DFE8A402114E0E1AF13F4_marshaled_pinvoke& marshaled)
{
	marshaled.___ReadEnd_0 = unmarshaled.___ReadEnd_0;
	marshaled.___ReadStart_1 = unmarshaled.___ReadStart_1;
	marshaled.___WriteEnd_2 = unmarshaled.___WriteEnd_2;
	marshaled.___WriteStart_3 = unmarshaled.___WriteStart_3;
	marshaled.___NodeCount_4 = unmarshaled.___NodeCount_4;
	marshaled.___NodeBufferSize_5 = unmarshaled.___NodeBufferSize_5;
}
IL2CPP_EXTERN_C void NodeHeader_tC7AA1A5DCEAE807D7B9DFE8A402114E0E1AF13F4_marshal_pinvoke_back(const NodeHeader_tC7AA1A5DCEAE807D7B9DFE8A402114E0E1AF13F4_marshaled_pinvoke& marshaled, NodeHeader_tC7AA1A5DCEAE807D7B9DFE8A402114E0E1AF13F4& unmarshaled)
{
	int32_t unmarshaledReadEnd_temp_0;
	memset((&unmarshaledReadEnd_temp_0), 0, sizeof(unmarshaledReadEnd_temp_0));
	unmarshaledReadEnd_temp_0 = marshaled.___ReadEnd_0;
	unmarshaled.___ReadEnd_0 = unmarshaledReadEnd_temp_0;
	int32_t unmarshaledReadStart_temp_1;
	memset((&unmarshaledReadStart_temp_1), 0, sizeof(unmarshaledReadStart_temp_1));
	unmarshaledReadStart_temp_1 = marshaled.___ReadStart_1;
	unmarshaled.___ReadStart_1 = unmarshaledReadStart_temp_1;
	int32_t unmarshaledWriteEnd_temp_2;
	memset((&unmarshaledWriteEnd_temp_2), 0, sizeof(unmarshaledWriteEnd_temp_2));
	unmarshaledWriteEnd_temp_2 = marshaled.___WriteEnd_2;
	unmarshaled.___WriteEnd_2 = unmarshaledWriteEnd_temp_2;
	int32_t unmarshaledWriteStart_temp_3;
	memset((&unmarshaledWriteStart_temp_3), 0, sizeof(unmarshaledWriteStart_temp_3));
	unmarshaledWriteStart_temp_3 = marshaled.___WriteStart_3;
	unmarshaled.___WriteStart_3 = unmarshaledWriteStart_temp_3;
	int32_t unmarshaledNodeCount_temp_4 = 0;
	unmarshaledNodeCount_temp_4 = marshaled.___NodeCount_4;
	unmarshaled.___NodeCount_4 = unmarshaledNodeCount_temp_4;
	int32_t unmarshaledNodeBufferSize_temp_5 = 0;
	unmarshaledNodeBufferSize_temp_5 = marshaled.___NodeBufferSize_5;
	unmarshaled.___NodeBufferSize_5 = unmarshaledNodeBufferSize_temp_5;
}
// Conversion method for clean up from marshalling of: SharedMemory.CircularBuffer/NodeHeader
IL2CPP_EXTERN_C void NodeHeader_tC7AA1A5DCEAE807D7B9DFE8A402114E0E1AF13F4_marshal_pinvoke_cleanup(NodeHeader_tC7AA1A5DCEAE807D7B9DFE8A402114E0E1AF13F4_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: SharedMemory.CircularBuffer/NodeHeader
IL2CPP_EXTERN_C void NodeHeader_tC7AA1A5DCEAE807D7B9DFE8A402114E0E1AF13F4_marshal_com(const NodeHeader_tC7AA1A5DCEAE807D7B9DFE8A402114E0E1AF13F4& unmarshaled, NodeHeader_tC7AA1A5DCEAE807D7B9DFE8A402114E0E1AF13F4_marshaled_com& marshaled)
{
	marshaled.___ReadEnd_0 = unmarshaled.___ReadEnd_0;
	marshaled.___ReadStart_1 = unmarshaled.___ReadStart_1;
	marshaled.___WriteEnd_2 = unmarshaled.___WriteEnd_2;
	marshaled.___WriteStart_3 = unmarshaled.___WriteStart_3;
	marshaled.___NodeCount_4 = unmarshaled.___NodeCount_4;
	marshaled.___NodeBufferSize_5 = unmarshaled.___NodeBufferSize_5;
}
IL2CPP_EXTERN_C void NodeHeader_tC7AA1A5DCEAE807D7B9DFE8A402114E0E1AF13F4_marshal_com_back(const NodeHeader_tC7AA1A5DCEAE807D7B9DFE8A402114E0E1AF13F4_marshaled_com& marshaled, NodeHeader_tC7AA1A5DCEAE807D7B9DFE8A402114E0E1AF13F4& unmarshaled)
{
	int32_t unmarshaledReadEnd_temp_0;
	memset((&unmarshaledReadEnd_temp_0), 0, sizeof(unmarshaledReadEnd_temp_0));
	unmarshaledReadEnd_temp_0 = marshaled.___ReadEnd_0;
	unmarshaled.___ReadEnd_0 = unmarshaledReadEnd_temp_0;
	int32_t unmarshaledReadStart_temp_1;
	memset((&unmarshaledReadStart_temp_1), 0, sizeof(unmarshaledReadStart_temp_1));
	unmarshaledReadStart_temp_1 = marshaled.___ReadStart_1;
	unmarshaled.___ReadStart_1 = unmarshaledReadStart_temp_1;
	int32_t unmarshaledWriteEnd_temp_2;
	memset((&unmarshaledWriteEnd_temp_2), 0, sizeof(unmarshaledWriteEnd_temp_2));
	unmarshaledWriteEnd_temp_2 = marshaled.___WriteEnd_2;
	unmarshaled.___WriteEnd_2 = unmarshaledWriteEnd_temp_2;
	int32_t unmarshaledWriteStart_temp_3;
	memset((&unmarshaledWriteStart_temp_3), 0, sizeof(unmarshaledWriteStart_temp_3));
	unmarshaledWriteStart_temp_3 = marshaled.___WriteStart_3;
	unmarshaled.___WriteStart_3 = unmarshaledWriteStart_temp_3;
	int32_t unmarshaledNodeCount_temp_4 = 0;
	unmarshaledNodeCount_temp_4 = marshaled.___NodeCount_4;
	unmarshaled.___NodeCount_4 = unmarshaledNodeCount_temp_4;
	int32_t unmarshaledNodeBufferSize_temp_5 = 0;
	unmarshaledNodeBufferSize_temp_5 = marshaled.___NodeBufferSize_5;
	unmarshaled.___NodeBufferSize_5 = unmarshaledNodeBufferSize_temp_5;
}
// Conversion method for clean up from marshalling of: SharedMemory.CircularBuffer/NodeHeader
IL2CPP_EXTERN_C void NodeHeader_tC7AA1A5DCEAE807D7B9DFE8A402114E0E1AF13F4_marshal_com_cleanup(NodeHeader_tC7AA1A5DCEAE807D7B9DFE8A402114E0E1AF13F4_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: SharedMemory.CircularBuffer/Node
IL2CPP_EXTERN_C void Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E_marshal_pinvoke(const Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E& unmarshaled, Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E_marshaled_pinvoke& marshaled)
{
	marshaled.___Next_0 = unmarshaled.___Next_0;
	marshaled.___Prev_1 = unmarshaled.___Prev_1;
	marshaled.___DoneRead_2 = unmarshaled.___DoneRead_2;
	marshaled.___DoneWrite_3 = unmarshaled.___DoneWrite_3;
	marshaled.___Offset_4 = unmarshaled.___Offset_4;
	marshaled.___Index_5 = unmarshaled.___Index_5;
	marshaled.___AmountWritten_6 = unmarshaled.___AmountWritten_6;
}
IL2CPP_EXTERN_C void Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E_marshal_pinvoke_back(const Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E_marshaled_pinvoke& marshaled, Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E& unmarshaled)
{
	int32_t unmarshaledNext_temp_0 = 0;
	unmarshaledNext_temp_0 = marshaled.___Next_0;
	unmarshaled.___Next_0 = unmarshaledNext_temp_0;
	int32_t unmarshaledPrev_temp_1 = 0;
	unmarshaledPrev_temp_1 = marshaled.___Prev_1;
	unmarshaled.___Prev_1 = unmarshaledPrev_temp_1;
	int32_t unmarshaledDoneRead_temp_2;
	memset((&unmarshaledDoneRead_temp_2), 0, sizeof(unmarshaledDoneRead_temp_2));
	unmarshaledDoneRead_temp_2 = marshaled.___DoneRead_2;
	unmarshaled.___DoneRead_2 = unmarshaledDoneRead_temp_2;
	int32_t unmarshaledDoneWrite_temp_3;
	memset((&unmarshaledDoneWrite_temp_3), 0, sizeof(unmarshaledDoneWrite_temp_3));
	unmarshaledDoneWrite_temp_3 = marshaled.___DoneWrite_3;
	unmarshaled.___DoneWrite_3 = unmarshaledDoneWrite_temp_3;
	int64_t unmarshaledOffset_temp_4 = 0;
	unmarshaledOffset_temp_4 = marshaled.___Offset_4;
	unmarshaled.___Offset_4 = unmarshaledOffset_temp_4;
	int32_t unmarshaledIndex_temp_5 = 0;
	unmarshaledIndex_temp_5 = marshaled.___Index_5;
	unmarshaled.___Index_5 = unmarshaledIndex_temp_5;
	int32_t unmarshaledAmountWritten_temp_6 = 0;
	unmarshaledAmountWritten_temp_6 = marshaled.___AmountWritten_6;
	unmarshaled.___AmountWritten_6 = unmarshaledAmountWritten_temp_6;
}
// Conversion method for clean up from marshalling of: SharedMemory.CircularBuffer/Node
IL2CPP_EXTERN_C void Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E_marshal_pinvoke_cleanup(Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: SharedMemory.CircularBuffer/Node
IL2CPP_EXTERN_C void Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E_marshal_com(const Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E& unmarshaled, Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E_marshaled_com& marshaled)
{
	marshaled.___Next_0 = unmarshaled.___Next_0;
	marshaled.___Prev_1 = unmarshaled.___Prev_1;
	marshaled.___DoneRead_2 = unmarshaled.___DoneRead_2;
	marshaled.___DoneWrite_3 = unmarshaled.___DoneWrite_3;
	marshaled.___Offset_4 = unmarshaled.___Offset_4;
	marshaled.___Index_5 = unmarshaled.___Index_5;
	marshaled.___AmountWritten_6 = unmarshaled.___AmountWritten_6;
}
IL2CPP_EXTERN_C void Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E_marshal_com_back(const Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E_marshaled_com& marshaled, Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E& unmarshaled)
{
	int32_t unmarshaledNext_temp_0 = 0;
	unmarshaledNext_temp_0 = marshaled.___Next_0;
	unmarshaled.___Next_0 = unmarshaledNext_temp_0;
	int32_t unmarshaledPrev_temp_1 = 0;
	unmarshaledPrev_temp_1 = marshaled.___Prev_1;
	unmarshaled.___Prev_1 = unmarshaledPrev_temp_1;
	int32_t unmarshaledDoneRead_temp_2;
	memset((&unmarshaledDoneRead_temp_2), 0, sizeof(unmarshaledDoneRead_temp_2));
	unmarshaledDoneRead_temp_2 = marshaled.___DoneRead_2;
	unmarshaled.___DoneRead_2 = unmarshaledDoneRead_temp_2;
	int32_t unmarshaledDoneWrite_temp_3;
	memset((&unmarshaledDoneWrite_temp_3), 0, sizeof(unmarshaledDoneWrite_temp_3));
	unmarshaledDoneWrite_temp_3 = marshaled.___DoneWrite_3;
	unmarshaled.___DoneWrite_3 = unmarshaledDoneWrite_temp_3;
	int64_t unmarshaledOffset_temp_4 = 0;
	unmarshaledOffset_temp_4 = marshaled.___Offset_4;
	unmarshaled.___Offset_4 = unmarshaledOffset_temp_4;
	int32_t unmarshaledIndex_temp_5 = 0;
	unmarshaledIndex_temp_5 = marshaled.___Index_5;
	unmarshaled.___Index_5 = unmarshaledIndex_temp_5;
	int32_t unmarshaledAmountWritten_temp_6 = 0;
	unmarshaledAmountWritten_temp_6 = marshaled.___AmountWritten_6;
	unmarshaled.___AmountWritten_6 = unmarshaledAmountWritten_temp_6;
}
// Conversion method for clean up from marshalling of: SharedMemory.CircularBuffer/Node
IL2CPP_EXTERN_C void Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E_marshal_com_cleanup(Node_t90DACB0900841EED2B259072EDC87CF7F68E3D2E_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: SharedMemory.SharedHeader
IL2CPP_EXTERN_C void SharedHeader_tA88D452C04A0B4193E2A2DB0D40F6AD4E9144918_marshal_pinvoke(const SharedHeader_tA88D452C04A0B4193E2A2DB0D40F6AD4E9144918& unmarshaled, SharedHeader_tA88D452C04A0B4193E2A2DB0D40F6AD4E9144918_marshaled_pinvoke& marshaled)
{
	marshaled.___SharedMemorySize_0 = unmarshaled.___SharedMemorySize_0;
	marshaled.___Shutdown_1 = unmarshaled.___Shutdown_1;
	marshaled.____padding0_2 = unmarshaled.____padding0_2;
}
IL2CPP_EXTERN_C void SharedHeader_tA88D452C04A0B4193E2A2DB0D40F6AD4E9144918_marshal_pinvoke_back(const SharedHeader_tA88D452C04A0B4193E2A2DB0D40F6AD4E9144918_marshaled_pinvoke& marshaled, SharedHeader_tA88D452C04A0B4193E2A2DB0D40F6AD4E9144918& unmarshaled)
{
	int64_t unmarshaledSharedMemorySize_temp_0 = 0;
	unmarshaledSharedMemorySize_temp_0 = marshaled.___SharedMemorySize_0;
	unmarshaled.___SharedMemorySize_0 = unmarshaledSharedMemorySize_temp_0;
	int32_t unmarshaledShutdown_temp_1;
	memset((&unmarshaledShutdown_temp_1), 0, sizeof(unmarshaledShutdown_temp_1));
	unmarshaledShutdown_temp_1 = marshaled.___Shutdown_1;
	unmarshaled.___Shutdown_1 = unmarshaledShutdown_temp_1;
	int32_t unmarshaled_padding0_temp_2 = 0;
	unmarshaled_padding0_temp_2 = marshaled.____padding0_2;
	unmarshaled.____padding0_2 = unmarshaled_padding0_temp_2;
}
// Conversion method for clean up from marshalling of: SharedMemory.SharedHeader
IL2CPP_EXTERN_C void SharedHeader_tA88D452C04A0B4193E2A2DB0D40F6AD4E9144918_marshal_pinvoke_cleanup(SharedHeader_tA88D452C04A0B4193E2A2DB0D40F6AD4E9144918_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: SharedMemory.SharedHeader
IL2CPP_EXTERN_C void SharedHeader_tA88D452C04A0B4193E2A2DB0D40F6AD4E9144918_marshal_com(const SharedHeader_tA88D452C04A0B4193E2A2DB0D40F6AD4E9144918& unmarshaled, SharedHeader_tA88D452C04A0B4193E2A2DB0D40F6AD4E9144918_marshaled_com& marshaled)
{
	marshaled.___SharedMemorySize_0 = unmarshaled.___SharedMemorySize_0;
	marshaled.___Shutdown_1 = unmarshaled.___Shutdown_1;
	marshaled.____padding0_2 = unmarshaled.____padding0_2;
}
IL2CPP_EXTERN_C void SharedHeader_tA88D452C04A0B4193E2A2DB0D40F6AD4E9144918_marshal_com_back(const SharedHeader_tA88D452C04A0B4193E2A2DB0D40F6AD4E9144918_marshaled_com& marshaled, SharedHeader_tA88D452C04A0B4193E2A2DB0D40F6AD4E9144918& unmarshaled)
{
	int64_t unmarshaledSharedMemorySize_temp_0 = 0;
	unmarshaledSharedMemorySize_temp_0 = marshaled.___SharedMemorySize_0;
	unmarshaled.___SharedMemorySize_0 = unmarshaledSharedMemorySize_temp_0;
	int32_t unmarshaledShutdown_temp_1;
	memset((&unmarshaledShutdown_temp_1), 0, sizeof(unmarshaledShutdown_temp_1));
	unmarshaledShutdown_temp_1 = marshaled.___Shutdown_1;
	unmarshaled.___Shutdown_1 = unmarshaledShutdown_temp_1;
	int32_t unmarshaled_padding0_temp_2 = 0;
	unmarshaled_padding0_temp_2 = marshaled.____padding0_2;
	unmarshaled.____padding0_2 = unmarshaled_padding0_temp_2;
}
// Conversion method for clean up from marshalling of: SharedMemory.SharedHeader
IL2CPP_EXTERN_C void SharedHeader_tA88D452C04A0B4193E2A2DB0D40F6AD4E9144918_marshal_com_cleanup(SharedHeader_tA88D452C04A0B4193E2A2DB0D40F6AD4E9144918_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Microsoft.Win32.SafeHandles.SafeMemoryMappedFileHandle System.IO.MemoryMappedFiles.MemoryMappedFile::get_SafeMemoryMappedFileHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SafeMemoryMappedFileHandle_t0A052D02752BF6099772EFE4BB1145F72571165A* MemoryMappedFile_get_SafeMemoryMappedFileHandle_mC222BB7B1DB4FD08592824B3306C155F8B289E61 (MemoryMappedFile_t3A8911F989B099EDED5FF35E0EED6DF65ECD01E4* __this, const RuntimeMethod* method) 
{
	{
		SafeMemoryMappedFileHandle_t0A052D02752BF6099772EFE4BB1145F72571165A* L_0 = __this->____handle_0;
		return L_0;
	}
}
// System.Void System.IO.MemoryMappedFiles.MemoryMappedFile::.ctor(Microsoft.Win32.SafeHandles.SafeMemoryMappedFileHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryMappedFile__ctor_mD7EF21CBD78BCA8DEF52B1C315117046825F25A3 (MemoryMappedFile_t3A8911F989B099EDED5FF35E0EED6DF65ECD01E4* __this, SafeMemoryMappedFileHandle_t0A052D02752BF6099772EFE4BB1145F72571165A* ___handle0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		SafeMemoryMappedFileHandle_t0A052D02752BF6099772EFE4BB1145F72571165A* L_0 = ___handle0;
		__this->____handle_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____handle_0), (void*)L_0);
		return;
	}
}
// System.Void System.IO.MemoryMappedFiles.MemoryMappedFile::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryMappedFile_Finalize_m9844225F884529794E1A8A40438C79378519F469 (MemoryMappedFile_t3A8911F989B099EDED5FF35E0EED6DF65ECD01E4* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0009:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			MemoryMappedFile_Dispose_m2E33663B91A8B304E38473E64B0DD9C9D5C3C159(__this, (bool)0, NULL);
			goto IL_0010;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0010:
	{
		return;
	}
}
// System.IO.MemoryMappedFiles.MemoryMappedFile System.IO.MemoryMappedFiles.MemoryMappedFile::CreateNew(System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemoryMappedFile_t3A8911F989B099EDED5FF35E0EED6DF65ECD01E4* MemoryMappedFile_CreateNew_mE5C596EDD27EB18B6CA8D4C03093301BFDA82395 (String_t* ___mapName0, int64_t ___capacity1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMappedFile_t3A8911F989B099EDED5FF35E0EED6DF65ECD01E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___mapName0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral32BF75085265374718471E9E3A91935904E4B351)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MemoryMappedFile_CreateNew_mE5C596EDD27EB18B6CA8D4C03093301BFDA82395_RuntimeMethod_var)));
	}

IL_0013:
	{
		int64_t L_3 = ___capacity1;
		if ((((int64_t)L_3) > ((int64_t)((int64_t)0))))
		{
			goto IL_0028;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2F3DA08BAFB3D51DD9BB6B236770C5322B991451)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MemoryMappedFile_CreateNew_mE5C596EDD27EB18B6CA8D4C03093301BFDA82395_RuntimeMethod_var)));
	}

IL_0028:
	{
		int32_t L_5;
		L_5 = IntPtr_get_Size_m1FAAA59DA73D7E32BB1AB55DD92A90AFE3251DBE(NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)4))))
		{
			goto IL_004c;
		}
	}
	{
		int64_t L_6 = ___capacity1;
		if ((((int64_t)L_6) <= ((int64_t)((int64_t)4294967296LL))))
		{
			goto IL_004c;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_7 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDD62F77513D96D7D1C7260B773B8F141DC0F4CDA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MemoryMappedFile_CreateNew_mE5C596EDD27EB18B6CA8D4C03093301BFDA82395_RuntimeMethod_var)));
	}

IL_004c:
	{
		String_t* L_8 = ___mapName0;
		int64_t L_9 = ___capacity1;
		SafeMemoryMappedFileHandle_t0A052D02752BF6099772EFE4BB1145F72571165A* L_10;
		L_10 = MemoryMappedFile_DoCreate_m67A3290F97768CC3379F69036F96240E0B955025(L_8, L_9, NULL);
		MemoryMappedFile_t3A8911F989B099EDED5FF35E0EED6DF65ECD01E4* L_11 = (MemoryMappedFile_t3A8911F989B099EDED5FF35E0EED6DF65ECD01E4*)il2cpp_codegen_object_new(MemoryMappedFile_t3A8911F989B099EDED5FF35E0EED6DF65ECD01E4_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		MemoryMappedFile__ctor_mD7EF21CBD78BCA8DEF52B1C315117046825F25A3(L_11, L_10, NULL);
		return L_11;
	}
}
// Microsoft.Win32.SafeHandles.SafeMemoryMappedFileHandle System.IO.MemoryMappedFiles.MemoryMappedFile::DoCreate(System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SafeMemoryMappedFileHandle_t0A052D02752BF6099772EFE4BB1145F72571165A* MemoryMappedFile_DoCreate_m67A3290F97768CC3379F69036F96240E0B955025 (String_t* ___mapName0, int64_t ___capacity1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E* V_0 = NULL;
	SafeMemoryMappedFileHandle_t0A052D02752BF6099772EFE4BB1145F72571165A* V_1 = NULL;
	int32_t V_2 = 0;
	{
		intptr_t L_0;
		memset((&L_0), 0, sizeof(L_0));
		IntPtr__ctor_m20A566609A091311C734617C699E61F545250AC7((&L_0), (-1), /*hidden argument*/NULL);
		SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E* L_1 = (SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E*)il2cpp_codegen_object_new(SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		SafeFileHandle__ctor_mDF2AFEC596DE2F6BD8FBB977135DAC23703213A2(L_1, L_0, (bool)1, NULL);
		V_0 = L_1;
		V_1 = (SafeMemoryMappedFileHandle_t0A052D02752BF6099772EFE4BB1145F72571165A*)NULL;
		SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E* L_2 = V_0;
		int64_t L_3 = ___capacity1;
		String_t* L_4 = ___mapName0;
		SafeMemoryMappedFileHandle_t0A052D02752BF6099772EFE4BB1145F72571165A* L_5;
		L_5 = UnsafeNativeMethods_CreateFileMapping_m035957C739575675C869938978B5F3F315245EA9(L_2, 4, L_3, L_4, NULL);
		V_1 = L_5;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = Marshal_GetLastWin32Error_mCD7EBA7503BF36F46DB58D98E96101FB67684379(NULL);
		V_2 = L_6;
		SafeMemoryMappedFileHandle_t0A052D02752BF6099772EFE4BB1145F72571165A* L_7 = V_1;
		NullCheck(L_7);
		bool L_8;
		L_8 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.Runtime.InteropServices.SafeHandle::get_IsInvalid() */, L_7);
		if (L_8)
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)183)))))
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_10 = V_2;
		String_t* L_11;
		L_11 = UnsafeNativeMethods_GetMessage_m355B3B46F65C13D13C2A154ECCACE17272A83497(L_10, NULL);
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_12 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		IOException__ctor_mE0612A16064F93C7EBB468D6874777BD70CB50CA(L_12, L_11, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MemoryMappedFile_DoCreate_m67A3290F97768CC3379F69036F96240E0B955025_RuntimeMethod_var)));
	}

IL_003b:
	{
		SafeMemoryMappedFileHandle_t0A052D02752BF6099772EFE4BB1145F72571165A* L_13 = V_1;
		NullCheck(L_13);
		bool L_14;
		L_14 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.Runtime.InteropServices.SafeHandle::get_IsInvalid() */, L_13);
		if (!L_14)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_15 = V_2;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_16 = V_2;
		String_t* L_17;
		L_17 = UnsafeNativeMethods_GetMessage_m355B3B46F65C13D13C2A154ECCACE17272A83497(L_16, NULL);
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_18 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)));
		NullCheck(L_18);
		IOException__ctor_mE0612A16064F93C7EBB468D6874777BD70CB50CA(L_18, L_17, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MemoryMappedFile_DoCreate_m67A3290F97768CC3379F69036F96240E0B955025_RuntimeMethod_var)));
	}

IL_0053:
	{
		SafeMemoryMappedFileHandle_t0A052D02752BF6099772EFE4BB1145F72571165A* L_19 = V_1;
		if (!L_19)
		{
			goto IL_005e;
		}
	}
	{
		SafeMemoryMappedFileHandle_t0A052D02752BF6099772EFE4BB1145F72571165A* L_20 = V_1;
		NullCheck(L_20);
		bool L_21;
		L_21 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.Runtime.InteropServices.SafeHandle::get_IsInvalid() */, L_20);
		if (!L_21)
		{
			goto IL_0069;
		}
	}

IL_005e:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_22 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_22);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_22, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFDAECFF6010BD985F9BC0137C42EF22BDBE8891B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MemoryMappedFile_DoCreate_m67A3290F97768CC3379F69036F96240E0B955025_RuntimeMethod_var)));
	}

IL_0069:
	{
		SafeMemoryMappedFileHandle_t0A052D02752BF6099772EFE4BB1145F72571165A* L_23 = V_1;
		return L_23;
	}
}
// System.IO.MemoryMappedFiles.MemoryMappedViewAccessor System.IO.MemoryMappedFiles.MemoryMappedFile::CreateViewAccessor(System.Int64,System.Int64,System.IO.MemoryMappedFiles.MemoryMappedFileAccess)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemoryMappedViewAccessor_tBE3AFBB21241B0AF9349B08F03DDEF4E11A4D2AE* MemoryMappedFile_CreateViewAccessor_m3111CEB2E7741A9B6D16E6A77E326C21D781FF2B (MemoryMappedFile_t3A8911F989B099EDED5FF35E0EED6DF65ECD01E4* __this, int64_t ___offset0, int64_t ___size1, uint32_t ___access2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMappedViewAccessor_tBE3AFBB21241B0AF9349B08F03DDEF4E11A4D2AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryMappedView_t589678987CBDE2D54C19A3358975AC8DFB80F2DA* V_0 = NULL;
	{
		int64_t L_0 = ___offset0;
		if ((((int64_t)L_0) >= ((int64_t)((int64_t)0))))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral881327E04BF8E68B19383ACA7460505E1A528006)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MemoryMappedFile_CreateViewAccessor_m3111CEB2E7741A9B6D16E6A77E326C21D781FF2B_RuntimeMethod_var)));
	}

IL_0015:
	{
		int64_t L_2 = ___size1;
		if ((((int64_t)L_2) >= ((int64_t)((int64_t)0))))
		{
			goto IL_002a;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD4C98DC35A3C13E3F77C50C03E38C850F72E409C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MemoryMappedFile_CreateViewAccessor_m3111CEB2E7741A9B6D16E6A77E326C21D781FF2B_RuntimeMethod_var)));
	}

IL_002a:
	{
		int32_t L_4;
		L_4 = IntPtr_get_Size_m1FAAA59DA73D7E32BB1AB55DD92A90AFE3251DBE(NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)4))))
		{
			goto IL_004e;
		}
	}
	{
		int64_t L_5 = ___size1;
		if ((((int64_t)L_5) <= ((int64_t)((int64_t)4294967296LL))))
		{
			goto IL_004e;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDD62F77513D96D7D1C7260B773B8F141DC0F4CDA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MemoryMappedFile_CreateViewAccessor_m3111CEB2E7741A9B6D16E6A77E326C21D781FF2B_RuntimeMethod_var)));
	}

IL_004e:
	{
		SafeMemoryMappedFileHandle_t0A052D02752BF6099772EFE4BB1145F72571165A* L_7 = __this->____handle_0;
		uint32_t L_8 = ___access2;
		int64_t L_9 = ___offset0;
		int64_t L_10 = ___size1;
		MemoryMappedView_t589678987CBDE2D54C19A3358975AC8DFB80F2DA* L_11;
		L_11 = MemoryMappedView_CreateView_m758071821EC5725A4F7BA5A20C85AF4B85DCB6D0(L_7, L_8, L_9, L_10, NULL);
		V_0 = L_11;
		MemoryMappedView_t589678987CBDE2D54C19A3358975AC8DFB80F2DA* L_12 = V_0;
		MemoryMappedViewAccessor_tBE3AFBB21241B0AF9349B08F03DDEF4E11A4D2AE* L_13 = (MemoryMappedViewAccessor_tBE3AFBB21241B0AF9349B08F03DDEF4E11A4D2AE*)il2cpp_codegen_object_new(MemoryMappedViewAccessor_tBE3AFBB21241B0AF9349B08F03DDEF4E11A4D2AE_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		MemoryMappedViewAccessor__ctor_m1027C8221FF49CE6E99A5A3D0952E0D9C8E5437B(L_13, L_12, NULL);
		return L_13;
	}
}
// System.Void System.IO.MemoryMappedFiles.MemoryMappedFile::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryMappedFile_Dispose_mB1F89986FAC837BDB94CB77B2C48729023607063 (MemoryMappedFile_t3A8911F989B099EDED5FF35E0EED6DF65ECD01E4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MemoryMappedFile_Dispose_m2E33663B91A8B304E38473E64B0DD9C9D5C3C159(__this, (bool)1, NULL);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		return;
	}
}
// System.Void System.IO.MemoryMappedFiles.MemoryMappedFile::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryMappedFile_Dispose_m2E33663B91A8B304E38473E64B0DD9C9D5C3C159 (MemoryMappedFile_t3A8911F989B099EDED5FF35E0EED6DF65ECD01E4* __this, bool ___disposeManagedResources0, const RuntimeMethod* method) 
{
	{
		SafeMemoryMappedFileHandle_t0A052D02752BF6099772EFE4BB1145F72571165A* L_0 = __this->____handle_0;
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		SafeMemoryMappedFileHandle_t0A052D02752BF6099772EFE4BB1145F72571165A* L_1 = __this->____handle_0;
		NullCheck(L_1);
		bool L_2;
		L_2 = SafeHandle_get_IsClosed_mD2CD4AA6E3B0A242E48080F18BC07199CAB80273(L_1, NULL);
		if (L_2)
		{
			goto IL_0027;
		}
	}
	{
		SafeMemoryMappedFileHandle_t0A052D02752BF6099772EFE4BB1145F72571165A* L_3 = __this->____handle_0;
		NullCheck(L_3);
		SafeHandle_Dispose_m4FB5B8A7ED78B90757F1B570D4025F3BA26A39F3(L_3, NULL);
		__this->____handle_0 = (SafeMemoryMappedFileHandle_t0A052D02752BF6099772EFE4BB1145F72571165A*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____handle_0), (void*)(SafeMemoryMappedFileHandle_t0A052D02752BF6099772EFE4BB1145F72571165A*)NULL);
	}

IL_0027:
	{
		return;
	}
}
// System.IO.MemoryMappedFiles.MemoryMappedFile System.IO.MemoryMappedFiles.MemoryMappedFile::OpenExisting(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemoryMappedFile_t3A8911F989B099EDED5FF35E0EED6DF65ECD01E4* MemoryMappedFile_OpenExisting_m100D28BA2084724AD598A04C10F6D25441C703ED (String_t* ___mapName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMappedFile_t3A8911F989B099EDED5FF35E0EED6DF65ECD01E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SafeMemoryMappedFileHandle_t0A052D02752BF6099772EFE4BB1145F72571165A* V_0 = NULL;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___mapName0;
		SafeMemoryMappedFileHandle_t0A052D02752BF6099772EFE4BB1145F72571165A* L_1;
		L_1 = UnsafeNativeMethods_OpenFileMapping_m659C0A3140F523BD2B31B2B1190458915F25C410(6, (bool)0, L_0, NULL);
		V_0 = L_1;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Marshal_GetLastWin32Error_mCD7EBA7503BF36F46DB58D98E96101FB67684379(NULL);
		V_1 = L_2;
		SafeMemoryMappedFileHandle_t0A052D02752BF6099772EFE4BB1145F72571165A* L_3 = V_0;
		NullCheck(L_3);
		bool L_4;
		L_4 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.Runtime.InteropServices.SafeHandle::get_IsInvalid() */, L_3);
		if (!L_4)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_5 = V_1;
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_0021;
		}
	}
	{
		FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A* L_6 = (FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		FileNotFoundException__ctor_m02E41C66D9C7421CF93252AEE29CF96C15CA6E0B(L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MemoryMappedFile_OpenExisting_m100D28BA2084724AD598A04C10F6D25441C703ED_RuntimeMethod_var)));
	}

IL_0021:
	{
		int32_t L_7 = V_1;
		String_t* L_8;
		L_8 = UnsafeNativeMethods_GetMessage_m355B3B46F65C13D13C2A154ECCACE17272A83497(L_7, NULL);
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_9 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		IOException__ctor_mE0612A16064F93C7EBB468D6874777BD70CB50CA(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MemoryMappedFile_OpenExisting_m100D28BA2084724AD598A04C10F6D25441C703ED_RuntimeMethod_var)));
	}

IL_002d:
	{
		SafeMemoryMappedFileHandle_t0A052D02752BF6099772EFE4BB1145F72571165A* L_10 = V_0;
		MemoryMappedFile_t3A8911F989B099EDED5FF35E0EED6DF65ECD01E4* L_11 = (MemoryMappedFile_t3A8911F989B099EDED5FF35E0EED6DF65ECD01E4*)il2cpp_codegen_object_new(MemoryMappedFile_t3A8911F989B099EDED5FF35E0EED6DF65ECD01E4_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		MemoryMappedFile__ctor_mD7EF21CBD78BCA8DEF52B1C315117046825F25A3(L_11, L_10, NULL);
		return L_11;
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
// SharedMemory.UnsafeNativeMethods/FileMapAccess System.IO.MemoryMappedFiles.MemoryMappedFileAccessExtensions::ToMapViewFileAccess(System.IO.MemoryMappedFiles.MemoryMappedFileAccess)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t MemoryMappedFileAccessExtensions_ToMapViewFileAccess_m0DF6965A208F42D3645B8819F9A23B57B467D2C0 (uint32_t ___access0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = ___access0;
		V_0 = L_0;
		uint32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, 2)))
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_002c;
			}
			case 2:
			{
				goto IL_0024;
			}
		}
	}
	{
		uint32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)32))))
		{
			goto IL_0026;
		}
	}
	{
		uint32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)64))))
		{
			goto IL_0029;
		}
	}
	{
		goto IL_002c;
	}

IL_0022:
	{
		return (uint32_t)(4);
	}

IL_0024:
	{
		return (uint32_t)(6);
	}

IL_0026:
	{
		return (uint32_t)(((int32_t)36));
	}

IL_0029:
	{
		return (uint32_t)(((int32_t)38));
	}

IL_002c:
	{
		return (uint32_t)(((int32_t)31));
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
// Microsoft.Win32.SafeHandles.SafeMemoryMappedViewHandle System.IO.MemoryMappedFiles.MemoryMappedView::get_SafeMemoryMappedViewHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SafeMemoryMappedViewHandle_t515B2CC8608ADA913D58A7E81A15E12A7A2D05D8* MemoryMappedView_get_SafeMemoryMappedViewHandle_m88039CC954D3321D6B8083A07483C99E9691503F (MemoryMappedView_t589678987CBDE2D54C19A3358975AC8DFB80F2DA* __this, const RuntimeMethod* method) 
{
	{
		SafeMemoryMappedViewHandle_t515B2CC8608ADA913D58A7E81A15E12A7A2D05D8* L_0 = __this->____handle_0;
		return L_0;
	}
}
// System.Int64 System.IO.MemoryMappedFiles.MemoryMappedView::get_Size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t MemoryMappedView_get_Size_m9112F3DA6E12B8136FEB7D55212902AD53E4E283 (MemoryMappedView_t589678987CBDE2D54C19A3358975AC8DFB80F2DA* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->____size_1;
		return L_0;
	}
}
// System.Int64 System.IO.MemoryMappedFiles.MemoryMappedView::get_ViewStartOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t MemoryMappedView_get_ViewStartOffset_m0F235D9781D39CD1DA4B1C80DBDE0CCEB2B32374 (MemoryMappedView_t589678987CBDE2D54C19A3358975AC8DFB80F2DA* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->____offset_2;
		return L_0;
	}
}
// System.Void System.IO.MemoryMappedFiles.MemoryMappedView::.ctor(Microsoft.Win32.SafeHandles.SafeMemoryMappedViewHandle,System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryMappedView__ctor_m97AF9A558D608D15C99C94B3488538337EF29FD9 (MemoryMappedView_t589678987CBDE2D54C19A3358975AC8DFB80F2DA* __this, SafeMemoryMappedViewHandle_t515B2CC8608ADA913D58A7E81A15E12A7A2D05D8* ___handle0, int64_t ___offset1, int64_t ___size2, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		SafeMemoryMappedViewHandle_t515B2CC8608ADA913D58A7E81A15E12A7A2D05D8* L_0 = ___handle0;
		__this->____handle_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____handle_0), (void*)L_0);
		int64_t L_1 = ___offset1;
		__this->____offset_2 = L_1;
		int64_t L_2 = ___size2;
		__this->____size_1 = L_2;
		return;
	}
}
// System.Void System.IO.MemoryMappedFiles.MemoryMappedView::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryMappedView_Finalize_m564A2D50FBCE1CB2640259A47D633E35298F7F5D (MemoryMappedView_t589678987CBDE2D54C19A3358975AC8DFB80F2DA* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0009:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			MemoryMappedView_Dispose_mAD0736F9F783B8D5E0BE99DCC49636E8268DA437(__this, (bool)0, NULL);
			goto IL_0010;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0010:
	{
		return;
	}
}
// System.Void System.IO.MemoryMappedFiles.MemoryMappedView::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryMappedView_Dispose_mC8DB807978DD99F12ADCC4F0228C7ECC4F7C22D7 (MemoryMappedView_t589678987CBDE2D54C19A3358975AC8DFB80F2DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MemoryMappedView_Dispose_mAD0736F9F783B8D5E0BE99DCC49636E8268DA437(__this, (bool)1, NULL);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		return;
	}
}
// System.Void System.IO.MemoryMappedFiles.MemoryMappedView::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryMappedView_Dispose_mAD0736F9F783B8D5E0BE99DCC49636E8268DA437 (MemoryMappedView_t589678987CBDE2D54C19A3358975AC8DFB80F2DA* __this, bool ___disposeManagedResources0, const RuntimeMethod* method) 
{
	{
		SafeMemoryMappedViewHandle_t515B2CC8608ADA913D58A7E81A15E12A7A2D05D8* L_0 = __this->____handle_0;
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		SafeMemoryMappedViewHandle_t515B2CC8608ADA913D58A7E81A15E12A7A2D05D8* L_1 = __this->____handle_0;
		NullCheck(L_1);
		bool L_2;
		L_2 = SafeHandle_get_IsClosed_mD2CD4AA6E3B0A242E48080F18BC07199CAB80273(L_1, NULL);
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		SafeMemoryMappedViewHandle_t515B2CC8608ADA913D58A7E81A15E12A7A2D05D8* L_3 = __this->____handle_0;
		NullCheck(L_3);
		SafeHandle_Dispose_m4FB5B8A7ED78B90757F1B570D4025F3BA26A39F3(L_3, NULL);
	}

IL_0020:
	{
		__this->____handle_0 = (SafeMemoryMappedViewHandle_t515B2CC8608ADA913D58A7E81A15E12A7A2D05D8*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____handle_0), (void*)(SafeMemoryMappedViewHandle_t515B2CC8608ADA913D58A7E81A15E12A7A2D05D8*)NULL);
		return;
	}
}
// System.IO.MemoryMappedFiles.MemoryMappedView System.IO.MemoryMappedFiles.MemoryMappedView::CreateView(Microsoft.Win32.SafeHandles.SafeMemoryMappedFileHandle,System.IO.MemoryMappedFiles.MemoryMappedFileAccess,System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemoryMappedView_t589678987CBDE2D54C19A3358975AC8DFB80F2DA* MemoryMappedView_CreateView_m758071821EC5725A4F7BA5A20C85AF4B85DCB6D0 (SafeMemoryMappedFileHandle_t0A052D02752BF6099772EFE4BB1145F72571165A* ___safeMemoryMappedFileHandle0, uint32_t ___access1, int64_t ___offset2, int64_t ___size3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMappedView_t589678987CBDE2D54C19A3358975AC8DFB80F2DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SYSTEM_INFO_t2F91F0CD35F886FB1148BA1884921D9920C008E5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	SafeMemoryMappedViewHandle_t515B2CC8608ADA913D58A7E81A15E12A7A2D05D8* V_4 = NULL;
	int32_t V_5 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(SYSTEM_INFO_t2F91F0CD35F886FB1148BA1884921D9920C008E5));
		UnsafeNativeMethods_GetSystemInfo_m77B9420B5E9BE71921473375091570FF60114CC6((&V_0), NULL);
		int64_t L_0 = ___offset2;
		uint32_t L_1 = (&V_0)->___dwAllocationGranularity_7;
		uint32_t L_2 = (&V_0)->___dwAllocationGranularity_7;
		V_1 = ((int64_t)il2cpp_codegen_multiply(((int64_t)(L_0/((int64_t)(uint64_t)L_1))), ((int64_t)(uint64_t)L_2)));
		int64_t L_3 = ___offset2;
		uint32_t L_4 = (&V_0)->___dwAllocationGranularity_7;
		int64_t L_5 = ___size3;
		V_2 = ((int64_t)il2cpp_codegen_add(((int64_t)(L_3%((int64_t)(uint64_t)L_4))), L_5));
		int64_t L_6 = ___offset2;
		int64_t L_7 = V_1;
		V_3 = ((int64_t)il2cpp_codegen_subtract(L_6, L_7));
		SafeMemoryMappedFileHandle_t0A052D02752BF6099772EFE4BB1145F72571165A* L_8 = ___safeMemoryMappedFileHandle0;
		uint32_t L_9 = ___access1;
		uint32_t L_10;
		L_10 = MemoryMappedFileAccessExtensions_ToMapViewFileAccess_m0DF6965A208F42D3645B8819F9A23B57B467D2C0(L_9, NULL);
		int64_t L_11 = V_1;
		int64_t L_12 = V_2;
		uintptr_t L_13;
		memset((&L_13), 0, sizeof(L_13));
		UIntPtr__ctor_m8AD80E1EF069A66D0E48BF7765C91088B5C09419((&L_13), L_12, /*hidden argument*/NULL);
		SafeMemoryMappedViewHandle_t515B2CC8608ADA913D58A7E81A15E12A7A2D05D8* L_14;
		L_14 = UnsafeNativeMethods_MapViewOfFile_m35A13512545AB84E34651764FCC2878560818B24(L_8, L_10, L_11, L_13, NULL);
		V_4 = L_14;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_15;
		L_15 = Marshal_GetLastWin32Error_mCD7EBA7503BF36F46DB58D98E96101FB67684379(NULL);
		V_5 = L_15;
		SafeMemoryMappedViewHandle_t515B2CC8608ADA913D58A7E81A15E12A7A2D05D8* L_16 = V_4;
		NullCheck(L_16);
		bool L_17;
		L_17 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.Runtime.InteropServices.SafeHandle::get_IsInvalid() */, L_16);
		if (!L_17)
		{
			goto IL_0071;
		}
	}
	{
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_18) == ((uint32_t)2))))
		{
			goto IL_0064;
		}
	}
	{
		FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A* L_19 = (FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A_il2cpp_TypeInfo_var)));
		NullCheck(L_19);
		FileNotFoundException__ctor_m02E41C66D9C7421CF93252AEE29CF96C15CA6E0B(L_19, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MemoryMappedView_CreateView_m758071821EC5725A4F7BA5A20C85AF4B85DCB6D0_RuntimeMethod_var)));
	}

IL_0064:
	{
		int32_t L_20 = V_5;
		String_t* L_21;
		L_21 = UnsafeNativeMethods_GetMessage_m355B3B46F65C13D13C2A154ECCACE17272A83497(L_20, NULL);
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_22 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)));
		NullCheck(L_22);
		IOException__ctor_mE0612A16064F93C7EBB468D6874777BD70CB50CA(L_22, L_21, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MemoryMappedView_CreateView_m758071821EC5725A4F7BA5A20C85AF4B85DCB6D0_RuntimeMethod_var)));
	}

IL_0071:
	{
		SafeMemoryMappedViewHandle_t515B2CC8608ADA913D58A7E81A15E12A7A2D05D8* L_23 = V_4;
		int64_t L_24 = V_3;
		int64_t L_25 = ___size3;
		MemoryMappedView_t589678987CBDE2D54C19A3358975AC8DFB80F2DA* L_26 = (MemoryMappedView_t589678987CBDE2D54C19A3358975AC8DFB80F2DA*)il2cpp_codegen_object_new(MemoryMappedView_t589678987CBDE2D54C19A3358975AC8DFB80F2DA_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		MemoryMappedView__ctor_m97AF9A558D608D15C99C94B3488538337EF29FD9(L_26, L_23, L_24, L_25, NULL);
		return L_26;
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
// System.Void System.IO.MemoryMappedFiles.MemoryMappedViewAccessor::.ctor(System.IO.MemoryMappedFiles.MemoryMappedView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryMappedViewAccessor__ctor_m1027C8221FF49CE6E99A5A3D0952E0D9C8E5437B (MemoryMappedViewAccessor_tBE3AFBB21241B0AF9349B08F03DDEF4E11A4D2AE* __this, MemoryMappedView_t589678987CBDE2D54C19A3358975AC8DFB80F2DA* ___memoryMappedView0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		MemoryMappedView_t589678987CBDE2D54C19A3358975AC8DFB80F2DA* L_0 = ___memoryMappedView0;
		__this->____view_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____view_0), (void*)L_0);
		return;
	}
}
// Microsoft.Win32.SafeHandles.SafeMemoryMappedViewHandle System.IO.MemoryMappedFiles.MemoryMappedViewAccessor::get_SafeMemoryMappedViewHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SafeMemoryMappedViewHandle_t515B2CC8608ADA913D58A7E81A15E12A7A2D05D8* MemoryMappedViewAccessor_get_SafeMemoryMappedViewHandle_m19283DC146A0D18F42D94D2347B87E5880ECEBF3 (MemoryMappedViewAccessor_tBE3AFBB21241B0AF9349B08F03DDEF4E11A4D2AE* __this, const RuntimeMethod* method) 
{
	{
		MemoryMappedView_t589678987CBDE2D54C19A3358975AC8DFB80F2DA* L_0 = __this->____view_0;
		NullCheck(L_0);
		SafeMemoryMappedViewHandle_t515B2CC8608ADA913D58A7E81A15E12A7A2D05D8* L_1;
		L_1 = MemoryMappedView_get_SafeMemoryMappedViewHandle_m88039CC954D3321D6B8083A07483C99E9691503F_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void System.IO.MemoryMappedFiles.MemoryMappedViewAccessor::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryMappedViewAccessor_Dispose_m66A512D27D913A64F3A75E069EC1C0FAFBA32ABD (MemoryMappedViewAccessor_tBE3AFBB21241B0AF9349B08F03DDEF4E11A4D2AE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MemoryMappedViewAccessor_Dispose_m20BF64B70988A3434C2B4D4515C187E5D38F810C(__this, (bool)1, NULL);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		return;
	}
}
// System.Void System.IO.MemoryMappedFiles.MemoryMappedViewAccessor::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryMappedViewAccessor_Dispose_m20BF64B70988A3434C2B4D4515C187E5D38F810C (MemoryMappedViewAccessor_tBE3AFBB21241B0AF9349B08F03DDEF4E11A4D2AE* __this, bool ___disposeManagedResources0, const RuntimeMethod* method) 
{
	{
		MemoryMappedView_t589678987CBDE2D54C19A3358975AC8DFB80F2DA* L_0 = __this->____view_0;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		MemoryMappedView_t589678987CBDE2D54C19A3358975AC8DFB80F2DA* L_1 = __this->____view_0;
		NullCheck(L_1);
		MemoryMappedView_Dispose_mC8DB807978DD99F12ADCC4F0228C7ECC4F7C22D7(L_1, NULL);
	}

IL_0013:
	{
		__this->____view_0 = (MemoryMappedView_t589678987CBDE2D54C19A3358975AC8DFB80F2DA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____view_0), (void*)(MemoryMappedView_t589678987CBDE2D54C19A3358975AC8DFB80F2DA*)NULL);
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
// System.Void Microsoft.Win32.SafeHandles.SafeMemoryMappedViewHandle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeMemoryMappedViewHandle__ctor_mC8FED37C835D7466A35C4706926C3B59392F3F76 (SafeMemoryMappedViewHandle_t515B2CC8608ADA913D58A7E81A15E12A7A2D05D8* __this, const RuntimeMethod* method) 
{
	{
		SafeHandleZeroOrMinusOneIsInvalid__ctor_m9BA85F78EC25654EE170CA999EC379D9A4B59B89(__this, (bool)1, NULL);
		return;
	}
}
// System.Void Microsoft.Win32.SafeHandles.SafeMemoryMappedViewHandle::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeMemoryMappedViewHandle__ctor_mF1AB4EF52056C51D74132A88F59FDA9306BBF929 (SafeMemoryMappedViewHandle_t515B2CC8608ADA913D58A7E81A15E12A7A2D05D8* __this, intptr_t ___handle0, bool ___ownsHandle1, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___ownsHandle1;
		SafeHandleZeroOrMinusOneIsInvalid__ctor_m9BA85F78EC25654EE170CA999EC379D9A4B59B89(__this, L_0, NULL);
		intptr_t L_1 = ___handle0;
		SafeHandle_SetHandle_m003D64748F9DFBA1E3C0B23798C23BA81AA21C2A_inline(__this, L_1, NULL);
		return;
	}
}
// System.Boolean Microsoft.Win32.SafeHandles.SafeMemoryMappedViewHandle::ReleaseHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SafeMemoryMappedViewHandle_ReleaseHandle_mEFB91065FEBBFD8B858D05B0050E8CC581EC746D (SafeMemoryMappedViewHandle_t515B2CC8608ADA913D58A7E81A15E12A7A2D05D8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000e:
			{// begin finally (depth: 1)
				intptr_t L_0 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle_0 = L_0;
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_1 = ((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle_0;
			bool L_2;
			L_2 = UnsafeNativeMethods_UnmapViewOfFile_m5428FB54BB4E04D11147145E318AE0FB954EA177(L_1, NULL);
			V_0 = L_2;
			goto IL_001a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Void Microsoft.Win32.SafeHandles.SafeMemoryMappedViewHandle::AcquirePointer(System.Byte*&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeMemoryMappedViewHandle_AcquirePointer_mEA48847EABCD4983E1392586A57A361A124A98A5 (SafeMemoryMappedViewHandle_t515B2CC8608ADA913D58A7E81A15E12A7A2D05D8* __this, uint8_t** ___pointer0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		V_0 = (bool)0;
		SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(__this, (&V_0), NULL);
		uint8_t** L_0 = ___pointer0;
		intptr_t* L_1 = (&((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle_0);
		void* L_2;
		L_2 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_1, NULL);
		*((intptr_t*)L_0) = (intptr_t)L_2;
		return;
	}
}
// System.Void Microsoft.Win32.SafeHandles.SafeMemoryMappedViewHandle::ReleasePointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeMemoryMappedViewHandle_ReleasePointer_m01EC55799D58F87A530D49BEA7E7AA4AB250305B (SafeMemoryMappedViewHandle_t515B2CC8608ADA913D58A7E81A15E12A7A2D05D8* __this, const RuntimeMethod* method) 
{
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(__this, NULL);
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
// System.Void Microsoft.Win32.SafeHandles.SafeMemoryMappedFileHandle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeMemoryMappedFileHandle__ctor_mB8E01CD5B51F427F24B60B51B9CD29AB71405A73 (SafeMemoryMappedFileHandle_t0A052D02752BF6099772EFE4BB1145F72571165A* __this, const RuntimeMethod* method) 
{
	{
		SafeHandleZeroOrMinusOneIsInvalid__ctor_m9BA85F78EC25654EE170CA999EC379D9A4B59B89(__this, (bool)1, NULL);
		return;
	}
}
// System.Void Microsoft.Win32.SafeHandles.SafeMemoryMappedFileHandle::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeMemoryMappedFileHandle__ctor_m3BD215BEB6D803FB45BAFA734CDABE9CC5B61046 (SafeMemoryMappedFileHandle_t0A052D02752BF6099772EFE4BB1145F72571165A* __this, intptr_t ___handle0, bool ___ownsHandle1, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___ownsHandle1;
		SafeHandleZeroOrMinusOneIsInvalid__ctor_m9BA85F78EC25654EE170CA999EC379D9A4B59B89(__this, L_0, NULL);
		intptr_t L_1 = ___handle0;
		SafeHandle_SetHandle_m003D64748F9DFBA1E3C0B23798C23BA81AA21C2A_inline(__this, L_1, NULL);
		return;
	}
}
// System.Boolean Microsoft.Win32.SafeHandles.SafeMemoryMappedFileHandle::ReleaseHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SafeMemoryMappedFileHandle_ReleaseHandle_m2AC2B0A237125647976C29B429E238D0134F5426 (SafeMemoryMappedFileHandle_t0A052D02752BF6099772EFE4BB1145F72571165A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000e:
			{// begin finally (depth: 1)
				intptr_t L_0 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle_0 = L_0;
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_1 = ((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle_0;
			bool L_2;
			L_2 = UnsafeNativeMethods_CloseHandle_m14BA1A43B3AC11D27635BC841F656F649C06A325(L_1, NULL);
			V_0 = L_2;
			goto IL_001a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		bool L_3 = V_0;
		return L_3;
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
// System.Void SharedMemory.BufferReadWrite::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferReadWrite__ctor_m2D4294618A5935DE17266CB166B04390E2C9618A (BufferReadWrite_t47341F578A6C54B0DB9D5B44B0EF1A32A325397D* __this, String_t* ___name0, int32_t ___bufferSize1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___name0;
		int32_t L_1 = ___bufferSize1;
		BufferWithLocks__ctor_mD623BF10F7A31DA95257995553BD6103666F6A1A(__this, L_0, ((int64_t)L_1), (bool)1, NULL);
		bool L_2;
		L_2 = SharedBuffer_Open_m926621CDD3B74EF7690F5DD93E278F0F65F5C2EE(__this, NULL);
		return;
	}
}
// System.Void SharedMemory.BufferReadWrite::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferReadWrite__ctor_mACAA09B1A8FD614D5A24A3DAED4F6EFE3686817D (BufferReadWrite_t47341F578A6C54B0DB9D5B44B0EF1A32A325397D* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___name0;
		BufferWithLocks__ctor_mD623BF10F7A31DA95257995553BD6103666F6A1A(__this, L_0, ((int64_t)0), (bool)0, NULL);
		bool L_1;
		L_1 = SharedBuffer_Open_m926621CDD3B74EF7690F5DD93E278F0F65F5C2EE(__this, NULL);
		return;
	}
}
// System.Void SharedMemory.BufferReadWrite::Write(System.IntPtr,System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferReadWrite_Write_mD4A0E9469B8D8AC6ECA2B7F9120B458B1C1E856A (BufferReadWrite_t47341F578A6C54B0DB9D5B44B0EF1A32A325397D* __this, intptr_t ___ptr0, int32_t ___length1, int64_t ___bufferPosition2, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___ptr0;
		int32_t L_1 = ___length1;
		int64_t L_2 = ___bufferPosition2;
		BufferWithLocks_Write_m9A4FFB1C114406EE355E386CB7813283EE723D98(__this, L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void SharedMemory.BufferReadWrite::Write(System.Action`1<System.IntPtr>,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferReadWrite_Write_m4F7FFA8D26D0360654E953B28971D2DD5B7904FF (BufferReadWrite_t47341F578A6C54B0DB9D5B44B0EF1A32A325397D* __this, Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___writeFunc0, int64_t ___bufferPosition1, const RuntimeMethod* method) 
{
	{
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_0 = ___writeFunc0;
		int64_t L_1 = ___bufferPosition1;
		BufferWithLocks_Write_m832E9936F9BC59FE508E828FC4D33E011114CCAA(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void SharedMemory.BufferReadWrite::Read(System.IntPtr,System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferReadWrite_Read_m065DDAF9A44764C6DA310DE387957D98A1F51922 (BufferReadWrite_t47341F578A6C54B0DB9D5B44B0EF1A32A325397D* __this, intptr_t ___destination0, int32_t ___length1, int64_t ___bufferPosition2, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___destination0;
		int32_t L_1 = ___length1;
		int64_t L_2 = ___bufferPosition2;
		BufferWithLocks_Read_m5F8CDF4CE0B42FE0E294DE8CD9F40516550C3FC1(__this, L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void SharedMemory.BufferReadWrite::Read(System.Action`1<System.IntPtr>,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferReadWrite_Read_m0EF4CB9D89A98F5DF38E8BFFAE5998C65CA54401 (BufferReadWrite_t47341F578A6C54B0DB9D5B44B0EF1A32A325397D* __this, Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___readFunc0, int64_t ___bufferPosition1, const RuntimeMethod* method) 
{
	{
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_0 = ___readFunc0;
		int64_t L_1 = ___bufferPosition1;
		BufferWithLocks_Read_m52F5B2444B2744DEA4760EBA943C9DC4C90A5279(__this, L_0, L_1, NULL);
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
// System.Void SharedMemory.UnsafeNativeMethods::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeNativeMethods__ctor_m791449640DCA78C12CF46DD5BCDE346001233C75 (UnsafeNativeMethods_tE91BF5249811343D7CF1B4E28FFF39EC649C29C3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void SharedMemory.UnsafeNativeMethods::CopyMemory(System.IntPtr,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeNativeMethods_CopyMemory_mCEE45D67569FDA59291C7209D2357F585E40ABCA (intptr_t ___dest0, intptr_t ___src1, uint32_t ___count2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, uint32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kernel32_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kernel32.dll"), "CopyMemory", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kernel32_INTERNAL
	reinterpret_cast<PInvokeFunc>(CopyMemory)(___dest0, ___src1, ___count2);
	#else
	il2cppPInvokeFunc(___dest0, ___src1, ___count2);
	#endif

}
// System.Void SharedMemory.UnsafeNativeMethods::CopyMemoryPtr(System.Void*,System.Void*,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeNativeMethods_CopyMemoryPtr_m4D1C0325C66BB874BFDFFDAAA3FB33ADECB26DF7 (void* ___dest0, void* ___src1, uint32_t ___count2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, void*, uint32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kernel32_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kernel32.dll"), "CopyMemory", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kernel32_INTERNAL
	reinterpret_cast<PInvokeFunc>(CopyMemory)(___dest0, ___src1, ___count2);
	#else
	il2cppPInvokeFunc(___dest0, ___src1, ___count2);
	#endif

}
// System.Int32 SharedMemory.UnsafeNativeMethods::FormatMessage(System.Int32,System.IntPtr,System.Int32,System.Int32,System.Text.StringBuilder,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_FormatMessage_m38670E1394A10FABBEC03322E9CA9F7EB2CD5225 (int32_t ___dwFlags0, intptr_t ___lpSource1, int32_t ___dwMessageId2, int32_t ___dwLanguageId3, StringBuilder_t* ___lpBuffer4, int32_t ___nSize5, intptr_t ___va_list_arguments6, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, intptr_t, int32_t, int32_t, Il2CppChar*, int32_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kernel32_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(intptr_t) + sizeof(int32_t) + sizeof(int32_t) + sizeof(void*) + sizeof(int32_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kernel32.dll"), "FormatMessage", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___lpBuffer4' to native representation
	Il2CppChar* ____lpBuffer4_marshaled = NULL;
	____lpBuffer4_marshaled = il2cpp_codegen_marshal_wstring_builder(___lpBuffer4);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kernel32_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FormatMessage)(___dwFlags0, ___lpSource1, ___dwMessageId2, ___dwLanguageId3, ____lpBuffer4_marshaled, ___nSize5, ___va_list_arguments6);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___dwFlags0, ___lpSource1, ___dwMessageId2, ___dwLanguageId3, ____lpBuffer4_marshaled, ___nSize5, ___va_list_arguments6);
	#endif

	// Marshaling of parameter '___lpBuffer4' back from native representation
	il2cpp_codegen_marshal_wstring_builder_result(___lpBuffer4, ____lpBuffer4_marshaled);

	// Marshaling cleanup of parameter '___lpBuffer4' native representation
	il2cpp_codegen_marshal_free(____lpBuffer4_marshaled);
	____lpBuffer4_marshaled = NULL;

	return returnValue;
}
// System.String SharedMemory.UnsafeNativeMethods::GetMessage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnsafeNativeMethods_GetMessage_m355B3B46F65C13D13C2A154ECCACE17272A83497 (int32_t ___errorCode0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86F895FF919A0A2E8806EEF54FF5F7A4B5BF6579);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5(L_0, ((int32_t)512), NULL);
		V_0 = L_0;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		int32_t L_2 = ___errorCode0;
		StringBuilder_t* L_3 = V_0;
		StringBuilder_t* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = StringBuilder_get_Capacity_m9DBF3B3940BC0BB882CA26F0EDB53896A491AD1E(L_4, NULL);
		intptr_t L_6 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		int32_t L_7;
		L_7 = UnsafeNativeMethods_FormatMessage_m38670E1394A10FABBEC03322E9CA9F7EB2CD5225(((int32_t)12800), L_1, L_2, 0, L_3, L_5, L_6, NULL);
		if (!L_7)
		{
			goto IL_0031;
		}
	}
	{
		StringBuilder_t* L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		return L_9;
	}

IL_0031:
	{
		int32_t L_10 = ___errorCode0;
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_11);
		String_t* L_13;
		L_13 = String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A(_stringLiteral86F895FF919A0A2E8806EEF54FF5F7A4B5BF6579, L_12, NULL);
		return L_13;
	}
}
// System.Boolean SharedMemory.UnsafeNativeMethods::CloseHandle(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeNativeMethods_CloseHandle_m14BA1A43B3AC11D27635BC841F656F649C06A325 (intptr_t ___handle0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kernel32_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kernel32.dll"), "CloseHandle", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kernel32_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(CloseHandle)(___handle0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0);
	#endif
	il2cpp_codegen_marshal_store_last_error();

	return static_cast<bool>(returnValue);
}
// Microsoft.Win32.SafeHandles.SafeMemoryMappedFileHandle SharedMemory.UnsafeNativeMethods::CreateFileMapping(Microsoft.Win32.SafeHandles.SafeFileHandle,System.IntPtr,SharedMemory.UnsafeNativeMethods/FileMapProtection,System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SafeMemoryMappedFileHandle_t0A052D02752BF6099772EFE4BB1145F72571165A* UnsafeNativeMethods_CreateFileMapping_m5EF2227B84438166056766607046652ECF9ACE42 (SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E* ___hFile0, intptr_t ___lpAttributes1, uint32_t ___fProtect2, int32_t ___dwMaxSizeHi3, int32_t ___dwMaxSizeLo4, String_t* ___lpName5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SafeMemoryMappedFileHandle_t0A052D02752BF6099772EFE4BB1145F72571165A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	typedef void* (DEFAULT_CALL *PInvokeFunc) (void*, intptr_t, uint32_t, int32_t, int32_t, Il2CppChar*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kernel32_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t) + sizeof(uint32_t) + sizeof(int32_t) + sizeof(int32_t) + sizeof(Il2CppChar*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kernel32.dll"), "CreateFileMapping", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___hFile0' to native representation
	void* ____hFile0_marshaled = NULL;
	if (___hFile0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("hFile"), NULL);
	bool ___safeHandle_reference_incremented_for____hFile0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___hFile0, (&___safeHandle_reference_incremented_for____hFile0), NULL);
	____hFile0_marshaled = reinterpret_cast<void*>((___hFile0)->___handle_0);

	// Marshaling of parameter '___lpName5' to native representation
	Il2CppChar* ____lpName5_marshaled = NULL;
	if (___lpName5 != NULL)
	{
		____lpName5_marshaled = &___lpName5->____firstChar_5;
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kernel32_INTERNAL
	void* returnValue = reinterpret_cast<PInvokeFunc>(CreateFileMapping)(____hFile0_marshaled, ___lpAttributes1, ___fProtect2, ___dwMaxSizeHi3, ___dwMaxSizeLo4, ____lpName5_marshaled);
	#else
	void* returnValue = il2cppPInvokeFunc(____hFile0_marshaled, ___lpAttributes1, ___fProtect2, ___dwMaxSizeHi3, ___dwMaxSizeLo4, ____lpName5_marshaled);
	#endif
	il2cpp_codegen_marshal_store_last_error();

	// Marshaling of return value back from native representation
	SafeMemoryMappedFileHandle_t0A052D02752BF6099772EFE4BB1145F72571165A* _returnValue_unmarshaled = (SafeMemoryMappedFileHandle_t0A052D02752BF6099772EFE4BB1145F72571165A*)il2cpp_codegen_object_new(SafeMemoryMappedFileHandle_t0A052D02752BF6099772EFE4BB1145F72571165A_il2cpp_TypeInfo_var);
	SafeMemoryMappedFileHandle__ctor_mB8E01CD5B51F427F24B60B51B9CD29AB71405A73(_returnValue_unmarshaled, NULL);
	intptr_t _returnValue_unmarshaled_handle_temp;
	_returnValue_unmarshaled_handle_temp = (intptr_t)returnValue;
	(_returnValue_unmarshaled)->___handle_0 = _returnValue_unmarshaled_handle_temp;

	// Marshaling cleanup of parameter '___hFile0' native representation
	if (___safeHandle_reference_incremented_for____hFile0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___hFile0, NULL);
	}

	return _returnValue_unmarshaled;
}
// Microsoft.Win32.SafeHandles.SafeMemoryMappedFileHandle SharedMemory.UnsafeNativeMethods::CreateFileMapping(Microsoft.Win32.SafeHandles.SafeFileHandle,SharedMemory.UnsafeNativeMethods/FileMapProtection,System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SafeMemoryMappedFileHandle_t0A052D02752BF6099772EFE4BB1145F72571165A* UnsafeNativeMethods_CreateFileMapping_m035957C739575675C869938978B5F3F315245EA9 (SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E* ___hFile0, uint32_t ___flProtect1, int64_t ___ddMaxSize2, String_t* ___lpName3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int64_t L_0 = ___ddMaxSize2;
		V_0 = ((int32_t)((int64_t)(L_0/((int64_t)((int32_t)2147483647LL)))));
		int64_t L_1 = ___ddMaxSize2;
		V_1 = ((int32_t)((int64_t)(L_1%((int64_t)((int32_t)2147483647LL)))));
		SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E* L_2 = ___hFile0;
		intptr_t L_3 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		uint32_t L_4 = ___flProtect1;
		int32_t L_5 = V_0;
		int32_t L_6 = V_1;
		String_t* L_7 = ___lpName3;
		SafeMemoryMappedFileHandle_t0A052D02752BF6099772EFE4BB1145F72571165A* L_8;
		L_8 = UnsafeNativeMethods_CreateFileMapping_m5EF2227B84438166056766607046652ECF9ACE42(L_2, L_3, L_4, L_5, L_6, L_7, NULL);
		return L_8;
	}
}
// System.Void SharedMemory.UnsafeNativeMethods::GetSystemInfo(SharedMemory.UnsafeNativeMethods/SYSTEM_INFO&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeNativeMethods_GetSystemInfo_m77B9420B5E9BE71921473375091570FF60114CC6 (SYSTEM_INFO_t2F91F0CD35F886FB1148BA1884921D9920C008E5* ___lpSystemInfo0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (SYSTEM_INFO_t2F91F0CD35F886FB1148BA1884921D9920C008E5*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kernel32_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(SYSTEM_INFO_t2F91F0CD35F886FB1148BA1884921D9920C008E5*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kernel32.dll"), "GetSystemInfo", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kernel32_INTERNAL
	reinterpret_cast<PInvokeFunc>(GetSystemInfo)(___lpSystemInfo0);
	#else
	il2cppPInvokeFunc(___lpSystemInfo0);
	#endif

}
// Microsoft.Win32.SafeHandles.SafeMemoryMappedViewHandle SharedMemory.UnsafeNativeMethods::MapViewOfFile(Microsoft.Win32.SafeHandles.SafeMemoryMappedFileHandle,SharedMemory.UnsafeNativeMethods/FileMapAccess,System.UInt32,System.UInt32,System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SafeMemoryMappedViewHandle_t515B2CC8608ADA913D58A7E81A15E12A7A2D05D8* UnsafeNativeMethods_MapViewOfFile_mA39D0CAE81DF91EB0032ECCDE9AD122EC4AFABA5 (SafeMemoryMappedFileHandle_t0A052D02752BF6099772EFE4BB1145F72571165A* ___hFileMappingObject0, uint32_t ___dwDesiredAccess1, uint32_t ___dwFileOffsetHigh2, uint32_t ___dwFileOffsetLow3, uintptr_t ___dwNumberOfBytesToMap4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SafeMemoryMappedViewHandle_t515B2CC8608ADA913D58A7E81A15E12A7A2D05D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	typedef void* (DEFAULT_CALL *PInvokeFunc) (void*, uint32_t, uint32_t, uint32_t, uintptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kernel32_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(uint32_t) + sizeof(uint32_t) + sizeof(uint32_t) + sizeof(uintptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kernel32.dll"), "MapViewOfFile", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___hFileMappingObject0' to native representation
	void* ____hFileMappingObject0_marshaled = NULL;
	if (___hFileMappingObject0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("hFileMappingObject"), NULL);
	bool ___safeHandle_reference_incremented_for____hFileMappingObject0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___hFileMappingObject0, (&___safeHandle_reference_incremented_for____hFileMappingObject0), NULL);
	____hFileMappingObject0_marshaled = reinterpret_cast<void*>((___hFileMappingObject0)->___handle_0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kernel32_INTERNAL
	void* returnValue = reinterpret_cast<PInvokeFunc>(MapViewOfFile)(____hFileMappingObject0_marshaled, ___dwDesiredAccess1, ___dwFileOffsetHigh2, ___dwFileOffsetLow3, ___dwNumberOfBytesToMap4);
	#else
	void* returnValue = il2cppPInvokeFunc(____hFileMappingObject0_marshaled, ___dwDesiredAccess1, ___dwFileOffsetHigh2, ___dwFileOffsetLow3, ___dwNumberOfBytesToMap4);
	#endif
	il2cpp_codegen_marshal_store_last_error();

	// Marshaling of return value back from native representation
	SafeMemoryMappedViewHandle_t515B2CC8608ADA913D58A7E81A15E12A7A2D05D8* _returnValue_unmarshaled = (SafeMemoryMappedViewHandle_t515B2CC8608ADA913D58A7E81A15E12A7A2D05D8*)il2cpp_codegen_object_new(SafeMemoryMappedViewHandle_t515B2CC8608ADA913D58A7E81A15E12A7A2D05D8_il2cpp_TypeInfo_var);
	SafeMemoryMappedViewHandle__ctor_mC8FED37C835D7466A35C4706926C3B59392F3F76(_returnValue_unmarshaled, NULL);
	intptr_t _returnValue_unmarshaled_handle_temp;
	_returnValue_unmarshaled_handle_temp = (intptr_t)returnValue;
	(_returnValue_unmarshaled)->___handle_0 = _returnValue_unmarshaled_handle_temp;

	// Marshaling cleanup of parameter '___hFileMappingObject0' native representation
	if (___safeHandle_reference_incremented_for____hFileMappingObject0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___hFileMappingObject0, NULL);
	}

	return _returnValue_unmarshaled;
}
// Microsoft.Win32.SafeHandles.SafeMemoryMappedViewHandle SharedMemory.UnsafeNativeMethods::MapViewOfFile(Microsoft.Win32.SafeHandles.SafeMemoryMappedFileHandle,SharedMemory.UnsafeNativeMethods/FileMapAccess,System.UInt64,System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SafeMemoryMappedViewHandle_t515B2CC8608ADA913D58A7E81A15E12A7A2D05D8* UnsafeNativeMethods_MapViewOfFile_m35A13512545AB84E34651764FCC2878560818B24 (SafeMemoryMappedFileHandle_t0A052D02752BF6099772EFE4BB1145F72571165A* ___hFileMappingObject0, uint32_t ___dwDesiredAccess1, uint64_t ___ddFileOffset2, uintptr_t ___dwNumberofBytesToMap3, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		uint64_t L_0 = ___ddFileOffset2;
		V_0 = ((int32_t)(uint32_t)((int64_t)((uint64_t)(int64_t)L_0/(uint64_t)(int64_t)((int64_t)(uint64_t)((uint32_t)(-1))))));
		uint64_t L_1 = ___ddFileOffset2;
		V_1 = ((int32_t)(uint32_t)((int64_t)((uint64_t)(int64_t)L_1%(uint64_t)(int64_t)((int64_t)(uint64_t)((uint32_t)(-1))))));
		SafeMemoryMappedFileHandle_t0A052D02752BF6099772EFE4BB1145F72571165A* L_2 = ___hFileMappingObject0;
		uint32_t L_3 = ___dwDesiredAccess1;
		uint32_t L_4 = V_0;
		uint32_t L_5 = V_1;
		uintptr_t L_6 = ___dwNumberofBytesToMap3;
		SafeMemoryMappedViewHandle_t515B2CC8608ADA913D58A7E81A15E12A7A2D05D8* L_7;
		L_7 = UnsafeNativeMethods_MapViewOfFile_mA39D0CAE81DF91EB0032ECCDE9AD122EC4AFABA5(L_2, L_3, L_4, L_5, L_6, NULL);
		return L_7;
	}
}
// Microsoft.Win32.SafeHandles.SafeMemoryMappedFileHandle SharedMemory.UnsafeNativeMethods::OpenFileMapping(System.UInt32,System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SafeMemoryMappedFileHandle_t0A052D02752BF6099772EFE4BB1145F72571165A* UnsafeNativeMethods_OpenFileMapping_m659C0A3140F523BD2B31B2B1190458915F25C410 (uint32_t ___dwDesiredAccess0, bool ___bInheritHandle1, String_t* ___lpName2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SafeMemoryMappedFileHandle_t0A052D02752BF6099772EFE4BB1145F72571165A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	typedef void* (DEFAULT_CALL *PInvokeFunc) (uint32_t, int32_t, Il2CppChar*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kernel32_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(uint32_t) + 4 + sizeof(Il2CppChar*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kernel32.dll"), "OpenFileMapping", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___lpName2' to native representation
	Il2CppChar* ____lpName2_marshaled = NULL;
	if (___lpName2 != NULL)
	{
		____lpName2_marshaled = &___lpName2->____firstChar_5;
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kernel32_INTERNAL
	void* returnValue = reinterpret_cast<PInvokeFunc>(OpenFileMapping)(___dwDesiredAccess0, static_cast<int32_t>(___bInheritHandle1), ____lpName2_marshaled);
	#else
	void* returnValue = il2cppPInvokeFunc(___dwDesiredAccess0, static_cast<int32_t>(___bInheritHandle1), ____lpName2_marshaled);
	#endif
	il2cpp_codegen_marshal_store_last_error();

	// Marshaling of return value back from native representation
	SafeMemoryMappedFileHandle_t0A052D02752BF6099772EFE4BB1145F72571165A* _returnValue_unmarshaled = (SafeMemoryMappedFileHandle_t0A052D02752BF6099772EFE4BB1145F72571165A*)il2cpp_codegen_object_new(SafeMemoryMappedFileHandle_t0A052D02752BF6099772EFE4BB1145F72571165A_il2cpp_TypeInfo_var);
	SafeMemoryMappedFileHandle__ctor_mB8E01CD5B51F427F24B60B51B9CD29AB71405A73(_returnValue_unmarshaled, NULL);
	intptr_t _returnValue_unmarshaled_handle_temp;
	_returnValue_unmarshaled_handle_temp = (intptr_t)returnValue;
	(_returnValue_unmarshaled)->___handle_0 = _returnValue_unmarshaled_handle_temp;

	return _returnValue_unmarshaled;
}
// System.Boolean SharedMemory.UnsafeNativeMethods::UnmapViewOfFile(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeNativeMethods_UnmapViewOfFile_m5428FB54BB4E04D11147145E318AE0FB954EA177 (intptr_t ___lpBaseAddress0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kernel32_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kernel32.dll"), "UnmapViewOfFile", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kernel32_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnmapViewOfFile)(___lpBaseAddress0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___lpBaseAddress0);
	#endif
	il2cpp_codegen_marshal_store_last_error();

	return static_cast<bool>(returnValue);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t SharedBuffer_get_BufferSize_m079DC81126C56E7D9A7B4422A149FCC325B4C68C_inline (SharedBuffer_t1BE086CC5133873A7F23428A7998BCC0B9BEAE28* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___U3CBufferSizeU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SharedBuffer_set_IsOwnerOfSharedMemory_mA2DD6CA90DD1CFC6A62ABA21B31CB9217066C511_inline (SharedBuffer_t1BE086CC5133873A7F23428A7998BCC0B9BEAE28* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CIsOwnerOfSharedMemoryU3Ek__BackingField_7 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SharedBuffer_set_Name_m646E256DC54E5BB4B698865AB509FAD951C7CF6B_inline (SharedBuffer_t1BE086CC5133873A7F23428A7998BCC0B9BEAE28* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SharedBuffer_get_IsOwnerOfSharedMemory_mE8D1F53A78E6165CF3B93D20D8CDA805B9B79D9E_inline (SharedBuffer_t1BE086CC5133873A7F23428A7998BCC0B9BEAE28* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIsOwnerOfSharedMemoryU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SharedBuffer_set_BufferSize_mD78750A89B933A2DBD7BDD383C730F8B0EA5F03A_inline (SharedBuffer_t1BE086CC5133873A7F23428A7998BCC0B9BEAE28* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___value0;
		__this->___U3CBufferSizeU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SharedBuffer_get_Name_m0FF831FE269B502B1F0766EDE1D2E92889BB26A9_inline (SharedBuffer_t1BE086CC5133873A7F23428A7998BCC0B9BEAE28* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline (intptr_t* __this, void* ___value0, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___value0;
		*__this = ((intptr_t)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BufferWithLocks_set_WriteWaitEvent_m83B40D8E8EDEC300A6EE0C55EB19CAD38384EA1A_inline (BufferWithLocks_tAC66E561168ED8E40BDABCC964399BA062D85731* __this, EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* ___value0, const RuntimeMethod* method) 
{
	{
		EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* L_0 = ___value0;
		__this->___U3CWriteWaitEventU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CWriteWaitEventU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BufferWithLocks_set_ReadWaitEvent_m3EB06ECC7CD5E3182761323CE9C8816B34A97FB9_inline (BufferWithLocks_tAC66E561168ED8E40BDABCC964399BA062D85731* __this, EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* ___value0, const RuntimeMethod* method) 
{
	{
		EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* L_0 = ___value0;
		__this->___U3CReadWaitEventU3Ek__BackingField_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CReadWaitEventU3Ek__BackingField_10), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* BufferWithLocks_get_ReadWaitEvent_m47385F2D3427305FE3226CFE6C920A88B6066419_inline (BufferWithLocks_tAC66E561168ED8E40BDABCC964399BA062D85731* __this, const RuntimeMethod* method) 
{
	{
		EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* L_0 = __this->___U3CReadWaitEventU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* BufferWithLocks_get_WriteWaitEvent_m960C7F7D2FC71C16121E1CF564B8053395F3DD53_inline (BufferWithLocks_tAC66E561168ED8E40BDABCC964399BA062D85731* __this, const RuntimeMethod* method) 
{
	{
		EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* L_0 = __this->___U3CWriteWaitEventU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CircularBuffer_get_NodeCount_mF8507542126E0ED2D7118B5184F1E9F65F33ED28_inline (CircularBuffer_tB62401E0B61024C9A683EE0918EE03921EEEE35B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CNodeCountU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CircularBuffer_set_NodeCount_m36B17D860A2C93AFFEAB202CDCFA41B828E94894_inline (CircularBuffer_tB62401E0B61024C9A683EE0918EE03921EEEE35B* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CNodeCountU3Ek__BackingField_9 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CircularBuffer_set_NodeBufferSize_m5D7A14407C03E47DA6A78EDC8E8098ADFD36B21D_inline (CircularBuffer_tB62401E0B61024C9A683EE0918EE03921EEEE35B* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CNodeBufferSizeU3Ek__BackingField_10 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CircularBuffer_set_DataExists_m9474440B1A81063CC562EB9AE53501F99168C9FB_inline (CircularBuffer_tB62401E0B61024C9A683EE0918EE03921EEEE35B* __this, EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* ___value0, const RuntimeMethod* method) 
{
	{
		EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* L_0 = ___value0;
		__this->___U3CDataExistsU3Ek__BackingField_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDataExistsU3Ek__BackingField_11), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CircularBuffer_set_NodeAvailable_m90195BDF74175BB3A87FEF7943049DC8A685D1C6_inline (CircularBuffer_tB62401E0B61024C9A683EE0918EE03921EEEE35B* __this, EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* ___value0, const RuntimeMethod* method) 
{
	{
		EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* L_0 = ___value0;
		__this->___U3CNodeAvailableU3Ek__BackingField_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNodeAvailableU3Ek__BackingField_12), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CircularBuffer_get_NodeBufferSize_m6AC51F5DA1A42CD91E92975CF194D71A90D14905_inline (CircularBuffer_tB62401E0B61024C9A683EE0918EE03921EEEE35B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CNodeBufferSizeU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* CircularBuffer_get_DataExists_m075EB43256A2AD3F45176F1C1E48465021BB5C95_inline (CircularBuffer_tB62401E0B61024C9A683EE0918EE03921EEEE35B* __this, const RuntimeMethod* method) 
{
	{
		EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* L_0 = __this->___U3CDataExistsU3Ek__BackingField_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* CircularBuffer_get_NodeAvailable_mE1BD136B7360169ED0280F28595E81A69E899DF9_inline (CircularBuffer_tB62401E0B61024C9A683EE0918EE03921EEEE35B* __this, const RuntimeMethod* method) 
{
	{
		EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* L_0 = __this->___U3CNodeAvailableU3Ek__BackingField_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SafeMemoryMappedViewHandle_t515B2CC8608ADA913D58A7E81A15E12A7A2D05D8* MemoryMappedView_get_SafeMemoryMappedViewHandle_m88039CC954D3321D6B8083A07483C99E9691503F_inline (MemoryMappedView_t589678987CBDE2D54C19A3358975AC8DFB80F2DA* __this, const RuntimeMethod* method) 
{
	{
		SafeMemoryMappedViewHandle_t515B2CC8608ADA913D58A7E81A15E12A7A2D05D8* L_0 = __this->____handle_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SafeHandle_SetHandle_m003D64748F9DFBA1E3C0B23798C23BA81AA21C2A_inline (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, intptr_t ___handle0, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___handle0;
		__this->___handle_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline (intptr_t* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = *__this;
		return (void*)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m783EC8C62449882812B741E4DE67BF3106686D9C_gshared_inline (Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* __this, intptr_t ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_mC547E921430F6789DF79C5F7F757D16A56655047_gshared_inline (Func_2_tB5422B774B20A6FA5E1E2A7456E87A4C47AF1F04* __this, intptr_t ___arg0, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
