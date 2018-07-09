#pragma warning( disable : 4100 )
#pragma warning( disable : 4127 )
#pragma warning( disable : 4189 )
#pragma warning( disable : 4355 )
#pragma warning( disable : 4503 )
#pragma warning( disable : 4505 )
#pragma warning( disable : 4512 )
#pragma warning( disable:  4651 )
#pragma warning( disable : 4691 )
#pragma warning( disable : 4723 )
#pragma warning( disable : 4702 )
#define SCOPE_NO_UDT
#if defined(COMPILE_NATIVE)
#include "ScopeCommonError.h"
#include "ScopeError.h"
#include "ScopeOperators.h"
#endif
#if defined(COMPILE_MANAGED)
#using <mscorlib.dll>
[assembly: System::Runtime::Versioning::TargetFrameworkAttribute(".NETFramework,Version=v4.5", FrameworkDisplayName = ".NET Framework, Version 4.5")];
#include "ScopeManaged.h"
#endif
#if defined(COMPILE_NATIVE)
#endif
using namespace ScopeEngine;
static ScopeEngine::CompilerSettings GetCompilerSettings()
{
    static ScopeEngine::CompilerSettings settings;
    settings.m_restrictOperatorMemorySpilling = false;
    settings.m_verboseRuntimeStatistic = false;
    return settings;
};

enum OperatorUID
{
UID_GetSStream_0 = 1,
UID_GetSStream_0_Data0 = 2,
UID_Process_1 = 3,
UID_Process_1_Data0 = 4,
UID_Process_2 = 5,
UID_Process_2_Data0 = 6,
UID_Process_3 = 7,
UID_Process_3_Data0 = 8,
UID_GetSStream_4 = 9,
UID_GetSStream_4_Data0 = 10,
UID_Process_5 = 11,
UID_Process_5_Data0 = 12,
UID_Process_6 = 13,
UID_Process_6_Data0 = 14,
UID_Process_7 = 15,
UID_Process_7_Data0 = 16,
UID_GetSStream_8 = 17,
UID_GetSStream_8_Data0 = 18,
UID_Process_9 = 19,
UID_Process_9_Data0 = 20,
UID_Process_10 = 21,
UID_Process_10_Data0 = 22,
UID_Process_11 = 23,
UID_Process_11_Data0 = 24,
UID_GetSStream_12 = 25,
UID_GetSStream_12_Data0 = 26,
UID_Process_13 = 27,
UID_Process_13_Data0 = 28,
UID_Process_14 = 29,
UID_Process_14_Data0 = 30,
UID_Process_15 = 31,
UID_Process_15_Data0 = 32,
UID_GetSStream_16 = 33,
UID_GetSStream_16_Data0 = 34,
UID_Process_17 = 35,
UID_Process_17_Data0 = 36,
UID_Process_18 = 37,
UID_Process_18_Data0 = 38,
UID_Process_19 = 39,
UID_Process_19_Data0 = 40,
UID_GetSStream_20 = 41,
UID_GetSStream_20_Data0 = 42,
UID_Process_21 = 43,
UID_Process_21_Data0 = 44,
UID_Process_22 = 45,
UID_Process_22_Data0 = 46,
UID_Process_23 = 47,
UID_Process_23_Data0 = 48,
UID_GetSStream_24 = 49,
UID_GetSStream_24_Data0 = 50,
UID_Process_25 = 51,
UID_Process_25_Data0 = 52,
UID_Process_26 = 53,
UID_Process_26_Data0 = 54,
UID_Process_27 = 55,
UID_Process_27_Data0 = 56,
UID_GetSStream_28 = 57,
UID_GetSStream_28_Data0 = 58,
UID_Process_29 = 59,
UID_Process_29_Data0 = 60,
UID_Process_30 = 61,
UID_Process_30_Data0 = 62,
UID_Process_31 = 63,
UID_Process_31_Data0 = 64,
UID_Aggregate_32 = 65,
UID_Aggregate_32_Data0 = 66,
UID_SV1_Extract_Combine_out0 = 67,
UID_ParallelUnionAll_Aggregate_32
};
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

//namespace ScopeGeneratedClasses
//{
    // IDs representing UDTs to be used in native code
    enum UserDefinedTypeId
    {
        
    };

#if defined(COMPILE_MANAGED)
// Explicit instantiations for templated functions that are defined in managed code
#endif // defined(COMPILE_MANAGED)


    class PartitionSchema_GetSStream_0
    {
    public:
        FString m_Branch;
        FString m_InputLanguage;
        PartitionSchema_GetSStream_0();
        PartitionSchema_GetSStream_0(const PartitionSchema_GetSStream_0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        PartitionSchema_GetSStream_0(const PartitionSchema_GetSStream_0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);


        static string GetDefinition()
        {
            return std::string{ u8"Branch:string,InputLanguage:string" };
        }

        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }

        friend std::ostream& operator<<(std::ostream& os, const PartitionSchema_GetSStream_0& row)
        {

            ScopeEngine::OutputRowContent(
                std::string{ u8"Branch:string,InputLanguage:string" },
                reinterpret_cast<const char*>(&row),
                os);

            return os;
        }
    };

    class PartitionKeySchema_GetSStream_0
    {
    public:
        PartitionKeySchema_GetSStream_0();
        PartitionKeySchema_GetSStream_0(const PartitionKeySchema_GetSStream_0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        PartitionKeySchema_GetSStream_0(const PartitionKeySchema_GetSStream_0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }

        friend std::ostream& operator<<(std::ostream& os, const PartitionKeySchema_GetSStream_0& row)
        {
            return os;
        }
    };

    class GetSStream_0_Data0
    {
    public:
        ScopeGuid m_RowGuid;
        FString m_InputLanguage;
        FString m_Branch;
        FString m_FinalText;
        FString m_InkIsf;
        GetSStream_0_Data0();
        GetSStream_0_Data0(const GetSStream_0_Data0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        GetSStream_0_Data0(const GetSStream_0_Data0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }

        friend std::ostream& operator<<(std::ostream& os, const GetSStream_0_Data0& row)
        {

            ScopeEngine::OutputRowContent(
                std::string{ u8"RowGuid:Guid,InputLanguage:string,Branch:string,FinalText:string,InkIsf:string" },
                reinterpret_cast<const char*>(&row),
                os);

            return os;
        }
    };

    class Process_1_Data0
    {
    public:
        ScopeGuid m_RowGuid;
        FString m_FinalText;
        FString m_InkIsf;
        Process_1_Data0();
        Process_1_Data0(const Process_1_Data0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        Process_1_Data0(const Process_1_Data0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }

        friend std::ostream& operator<<(std::ostream& os, const Process_1_Data0& row)
        {

            ScopeEngine::OutputRowContent(
                std::string{ u8"RowGuid:Guid,FinalText:string,InkIsf:string" },
                reinterpret_cast<const char*>(&row),
                os);

            return os;
        }
    };

    class Process_3_Data0
    {
    public:
        ScopeGuid m_RowGuid;
        FString m_FinalText;
        FString m_InkIsf;
        double m_Weight;
        Process_3_Data0();
        Process_3_Data0(const Process_3_Data0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        Process_3_Data0(const Process_3_Data0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }

        friend std::ostream& operator<<(std::ostream& os, const Process_3_Data0& row)
        {

            ScopeEngine::OutputRowContent(
                std::string{ u8"RowGuid:Guid,FinalText:string,InkIsf:string,Weight:double" },
                reinterpret_cast<const char*>(&row),
                os);

            return os;
        }
    };

#if defined(COMPILE_MANAGED)
    template<>
    struct ManagedRow<Process_1_Data0>
    {
        typedef ___Scope_Generated_Classes___::Row_RowGuid_Guid_FinalText_String_InkIsf_String Row;

        ManagedRow()
        {
            m_row.reset(gcnew Row());
        }

        Row^ get()
        {
            return m_row.get();
        }
        
    private:
    
        ScopeTypedManagedHandle<Row^> m_row;
        ManagedRow & operator=(ManagedRow &);
    };

    template class ManagedRowFactory<Process_1_Data0>;    

#endif // defined(COMPILE_MANAGED)


//}

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class BinaryExtractPolicy<PartitionSchema_GetSStream_0>
    {
    public:
        static bool Deserialize(BinaryInputStream * input, PartitionSchema_GetSStream_0 & row)
        {
            try
            {
                char b = 0;
                input->Read(b);
                if (b==0)
                {
                    input->Read(row.m_Branch);
                    input->Read(row.m_InputLanguage);
                }
                else
                {
                    char ___masking___[1];
                    ___masking___[0] = b;
                    if ((___masking___[0] & 2 ) != 2)
                    {
                        input->Read(row.m_Branch);
                    }
                    else
                    {
                        row.m_Branch.SetNull();
                    }
                    if ((___masking___[0] & 4 ) != 4)
                    {
                        input->Read(row.m_InputLanguage);
                    }
                    else
                    {
                        row.m_InputLanguage.SetNull();
                    }
                }
            }
            catch (ScopeStreamException &) 
            {
                // we reach the end of file
                return false;
            }

            return true;
        }
        static bool DeserializeKeyForSS(MemoryInputStream * input, PartitionSchema_GetSStream_0 & row)
        {
            try
            {
                char b = 0;
                input->Read(b);
                if (b==0)
                {
                    input->Read(row.m_Branch);
                    input->Read(row.m_InputLanguage);
                }
                else
                {
                    char ___masking___[1];
                    input->Read(___masking___[0]); 
                    if ((___masking___[0] & 1 ) != 1)
                    {
                        input->Read(row.m_Branch);
                    }
                    else
                    {
                        row.m_Branch.SetNull();
                    }
                    if ((___masking___[0] & 2 ) != 2)
                    {
                        input->Read(row.m_InputLanguage);
                    }
                    else
                    {
                        row.m_InputLanguage.SetNull();
                    }
                }
            }
            catch (ScopeStreamException &) 
            {
                // we reach the end of file
                return false;
            }

            return true;
        }
        static void DeserializeKey(ResourceInputStream * input, PartitionSchema_GetSStream_0 & row)
        {
            char type = 0, null = 0;
                input->Read(type);
                SCOPE_ASSERT(type != 34 && type != 35);
                input->Read(null);
                if (null)
                {
                    row.m_Branch.SetNull();
                }
                else
                {
                    input->Read(row.m_Branch);
                }
                input->Read(type);
                SCOPE_ASSERT(type != 34 && type != 35);
                input->Read(null);
                if (null)
                {
                    row.m_InputLanguage.SetNull();
                }
                else
                {
                    input->Read(row.m_InputLanguage);
                }
        }
        static void DeserializePartitionSpec(ResourceInputStream * input, PartitionSchema_GetSStream_0 & row)
        {
            char ___masking___[1];
            input->Read(___masking___); 
            if ((___masking___[0] & 1 ) != 1)
            {
                input->Read(row.m_Branch);
            }
            else
            {
                row.m_Branch.SetNull();
            }
            if ((___masking___[0] & 2 ) != 2)
            {
                input->Read(row.m_InputLanguage);
            }
            else
            {
                row.m_InputLanguage.SetNull();
            }
        }

    };
#endif // defined(COMPILE_NATIVE)

    template<> 
    class BinaryOutputPolicy<PartitionSchema_GetSStream_0>
    {
    public:
    
        static void SerializeHeader(BinaryOutputStream * output)
        {
            SCOPE_ASSERT(!"BinaryOutputPolicy::SerializeHeader method should not be invoked.");
        }
        
        __declspec(noinline) static void Serialize(BinaryOutputStream * output, PartitionSchema_GetSStream_0 & row)
        {
            SIZE_T rowStart =  output->GetOutputer().GetCurrentPosition();
            char b = 0;
            char ___masking___[1];
            ___masking___[0] = 1;
            bool hasNull = false;
            if (row.m_Branch.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 2;
            }
            if (row.m_InputLanguage.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 4;
            }
            if (hasNull)
            {
                output->Write(___masking___[0]);
            }
            else
            {
                output->Write(b);
            }
            if (!row.m_Branch.IsNull())
            {
                output->Write(row.m_Branch);
            }
            if (!row.m_InputLanguage.IsNull())
            {
                output->Write(row.m_InputLanguage);
            }
            SIZE_T rowSize =  output->GetOutputer().GetCurrentPosition() - rowStart;
            auto rowLimit = ScopeEngine::Configuration::GetGlobal().GetMaxOnDiskRowSize();
            if (rowSize > rowLimit)
            {
                std::stringstream ss;
                ss << row << std::endl;
                throw RuntimeException(E_USER_ONDISKROW_TOO_BIG, {rowSize, rowLimit, ss.str()});
            }
        }
        static void Serialize(DummyOutputStream * output, const PartitionSchema_GetSStream_0 & row)
        {
            SCOPE_ASSERT(false); 
        }
        static void SerializeKeyForSS(MemoryOutputStream* output, const PartitionSchema_GetSStream_0 & row)        
        {
            char b = 0;
            char ___masking___[1];
            memset(___masking___, 0, sizeof(___masking___));

            bool hasNull = false;
            if (row.m_Branch.IsNull())
            {
                hasNull = true;
                b = 1;
                ___masking___[0] |= 1;
            }
            if (row.m_InputLanguage.IsNull())
            {
                hasNull = true;
                b = 1;
                ___masking___[0] |= 2;
            }
            output->Write(b);

            if (hasNull)
            {
                output->Write(___masking___, sizeof(___masking___));
            }
            if (!row.m_Branch.IsNull())
            {
                output->Write(row.m_Branch);
            }
            if (!row.m_InputLanguage.IsNull())
            {
                output->Write(row.m_InputLanguage);
            }
        }
    };

#pragma region Schema Constructors
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE PartitionSchema_GetSStream_0::PartitionSchema_GetSStream_0()
    {
    }
    INLINE PartitionSchema_GetSStream_0::PartitionSchema_GetSStream_0(const PartitionSchema_GetSStream_0 & c, IncrementalAllocator * alloc) :
            m_Branch(c.m_Branch, alloc),
            m_InputLanguage(c.m_InputLanguage, alloc)
    {
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE PartitionKeySchema_GetSStream_0::PartitionKeySchema_GetSStream_0()
    {
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE GetSStream_0_Data0::GetSStream_0_Data0()
    {
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE Process_1_Data0::Process_1_Data0()
    {
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE Process_3_Data0::Process_3_Data0()
    {
        m_Weight = 0.0;
    }
    INLINE Process_3_Data0::Process_3_Data0(const Process_3_Data0 & c, IncrementalAllocator * alloc) :
            m_RowGuid(c.m_RowGuid),
            m_FinalText(c.m_FinalText, alloc),
            m_InkIsf(c.m_InkIsf, alloc)
    {
        m_Weight = c.m_Weight;
    }

#pragma endregion Schema Constructors
#pragma hdrstop
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_INIT_SHUTDOWN)
#if defined(COMPILE_MANAGED)
extern "C" __declspec(dllexport) void __stdcall InitVertexManaged(std::string * argv, int argc)
{
#if defined(FORCEMANAGEDDATETIMESER)
    ScopeEngine::ScopeDateTime::ForceManagedSerialization = true;
#endif
    cli::array<String^>^ arguments = ScopeEngineManaged::GroupArguments(argv, argc);
    ScopeEngineManaged::InitializeScopeEngineManaged(arguments);

    // Register Debug Streams from command line arguments
    ScopeRuntime::Global::DebugStreamManager->RegisterDebugStreams(arguments);
    ScopeRuntime::ScopeTrace::AddListener(gcnew System::Diagnostics::ConsoleTraceListener());
    ScopeRuntime::RuntimeConfiguration::Initialize(___Scope_Generated_Classes___::__UdtTypeTable__);
}

extern "C" __declspec(dllexport) void __stdcall ShutdownVertexManaged(CLRMemoryStat& stat)
{
    ScopeEngineManaged::FinalizeScopeEngineManaged(stat);
    ScopeRuntime::ScopeTrace::RemoveAllListeners();
    ScopeRuntime::Global::DebugStreamManager->FinalizeDebugStreams();
}
#endif //#if defined(COMPILE_MANAGED)

#if defined(COMPILE_NATIVE)
ScopeEngine::ScopeCEPCheckpointManager* g_scopeCEPCheckpointManager = NULL;

extern "C" __declspec(dllexport) void __stdcall InitVertexNative(VertexExecutionInfo * vertexExecutionInfo)
{
#if defined(FORCEMANAGEDDATETIMESER)
    ScopeEngine::ScopeDateTime::ForceManagedSerialization = true;
#endif

    ErrorManager::GetGlobal()->EnableJSON();
}

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



// Add broadcast vertex code
extern "C" __declspec(dllexport) void __stdcall SV_CopyThrough_execute(std::string * argv, int argc, InputFileInfo* inputs, int inputCnt, OutputFileInfo* outputs, int outputCnt, VertexExecutionInfo * vertexExecutionInfo)
{
    SCOPE_ASSERT(inputCnt == 1 && outputCnt == 1);
    IOManager::CopyStream(IOManager::GetGlobal()->GetDevice(inputs[0].inputFileName), IOManager::GetGlobal()->GetDevice(outputs[0].outputFileName));
}

#endif //#if defined(COMPILE_NATIVE)


#endif //#if defined(COMPILE_INIT_SHUTDOWN)
#pragma region SV1_Extract_Combine
#if defined(COMPILE_SV1_EXTRACT_COMBINE) || defined(COMPILE_ALL_VERTICES)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class SStreamV3ExtractPolicy<GetSStream_0_Data0, UID_GetSStream_0, NullSchema>
    {
    public:
        typedef NullSchema CorrelatedParameters;
        typedef bool (*PredFn)(SSLibV3::ColumnIterator* iters, IncrementalAllocator* alloc, CorrelatedParameters* params);

    public:
        typedef GetSStream_0_Data0 DataRowSchema;
        typedef PartitionSchema_GetSStream_0 PartitionSchema;
        typedef PartitionKeySchema_GetSStream_0 DataKeySchema;
        typedef RowComparePolicy<DataKeySchema, DataKeySchema, UID_GetSStream_0> DataKeyComparePolicy;
        typedef ResourceInputStream SystemResourceInputStream;

        static const PartitioningType m_partitioning = RangePartition;
        static const bool m_residualFilterForKeyRange = false;
        static const bool m_residualFilterForRefinedHash = false;
        static const int m_numberOfPartitionAfterRefinedHash = 0;
        static const bool m_keyRangeSeek = false;
        static const bool m_truncatedRangeKey = false;
        static const bool m_generateMetadata = false;
        static const UINT m_numOfBuffers = 4;
        static const bool m_hasCorrelatedSchema = false;

        // FailFastSStreamRead ignores the maxUnavailability value and forces a fast failure in case of store errors
        static const bool m_skipUnavailable = true/*100*/;

        static const string& DataSchemaString()
        {
            static string* spDataSchemaString = new string(std::string{ u8"<?xml version=\"1.0\"?>\r\n<Schema>\r\n  <Format>1</Format>\r\n  <Columns>\r\n    <Column>\r\n      <Name>RowGuid</Name>\r\n      <Type>Guid</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>isLabeled</Name>\r\n      <Type>bool</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>ModelHash</Name>\r\n      <Type>int</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>UserHash</Name>\r\n      <Type>int</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>DateId</Name>\r\n      <Type>int</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>CountryCode</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>InputLanguage</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>OsVer</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>Branch</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>OSUILocale</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>DeviceModel</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>OEMName</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>OEMModel</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>AppId</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>AppVer</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>IsTimeout</Name>\r\n      <Type>bool?</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>FinalText</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>IsAppend</Name>\r\n      <Type>bool?</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>WritingRectLeft</Name>\r\n      <Type>double?</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>WritingRectTop</Name>\r\n      <Type>double?</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>WritingRectRight</Name>\r\n      <Type>double?</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>WritingRectBottom</Name>\r\n      <Type>double?</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>DrawingRectLeft</Name>\r\n      <Type>double?</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>DrawingRectTop</Name>\r\n      <Type>double?</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>DrawingRectRight</Name>\r\n      <Type>double?</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>DrawingRectBottom</Name>\r\n      <Type>double?</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>BoundingRectLeft</Name>\r\n      <Type>double?</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>BoundingRectTop</Name>\r\n      <Type>double?</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>BoundingRectRight</Name>\r\n      <Type>double?</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>BoundingRectBottom</Name>\r\n      <Type>double?</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>Midline</Name>\r\n      <Type>ulong?</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>Rows</Name>\r\n      <Type>ulong?</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>Column</Name>\r\n      <Type>long?</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>FontFace</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>FontSize</Name>\r\n      <Type>double?</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>PreContext</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>PreviousWordRects</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>Candidates</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>InputScope</Name>\r\n      <Type>ulong?</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>InkIsf</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n  </Columns>\r\n</Schema>" });
            return *spDataSchemaString;
        }

        static BYTE* DataColumnSizes()
        {
            static BYTE sizes[] = 
            {
                16,
                1,
                4,
                4,
                4,
                0,
                0,
                0,
                0,
                0,
                0,
                0,
                0,
                0,
                0,
                1,
                0,
                1,
                8,
                8,
                8,
                8,
                8,
                8,
                8,
                8,
                8,
                8,
                8,
                8,
                8,
                8,
                8,
                0,
                8,
                0,
                0,
                0,
                8,
                0,
            };

            return sizes;
        }
        static const UINT m_dataColumnSizesCnt = 40;

        static BYTE* IndexColumnSizes()
        {
            static BYTE sizes[] = 
                {
                // Low key
                // Hi Key
                8, // BlockOffset
                8, // BlockLength
                4, // RowCount
                };

            return sizes;
        }
        static const UINT m_indexColumnSizesCnt = 2 * 0 + 3;

        static UINT* SortKeys() { return nullptr; }
        static const UINT m_sortKeysCnt = 0;

        static const bool m_descending = false;


        static bool Deserialize(SSLibV3::ColumnIterator* iters, DataRowSchema & row, IncrementalAllocator* alloc, const BYTE* blockEnd, UINT32 defaultDistributionId, UINT64 defaultRowId)
        {
            STRUCTURED_DATA_ASSERT(iters[0].HasData(blockEnd));
            row.m_RowGuid = iters[0].Data<ScopeGuid>();
            STRUCTURED_DATA_ASSERT(iters[6].HasData(blockEnd));
            if (iters[6].IsNull())
            {
                row.m_InputLanguage.SetNull();
            }
            else
            {
                row.m_InputLanguage.CopyFromNotNull((FString::PointerType)iters[6].DataRaw(), (int)iters[6].Length(), alloc);
            }
            STRUCTURED_DATA_ASSERT(iters[8].HasData(blockEnd));
            if (iters[8].IsNull())
            {
                row.m_Branch.SetNull();
            }
            else
            {
                row.m_Branch.CopyFromNotNull((FString::PointerType)iters[8].DataRaw(), (int)iters[8].Length(), alloc);
            }
            STRUCTURED_DATA_ASSERT(iters[16].HasData(blockEnd));
            if (iters[16].IsNull())
            {
                row.m_FinalText.SetNull();
            }
            else
            {
                row.m_FinalText.CopyFromNotNull((FString::PointerType)iters[16].DataRaw(), (int)iters[16].Length(), alloc);
            }
            STRUCTURED_DATA_ASSERT(iters[39].HasData(blockEnd));
            if (iters[39].IsNull())
            {
                row.m_InkIsf.SetNull();
            }
            else
            {
                row.m_InkIsf.CopyFromNotNull((FString::PointerType)iters[39].DataRaw(), (int)iters[39].Length(), alloc);
            }
            return true;
        }

        static void SkipRow(SSLibV3::ColumnIterator* iters)
        {
            iters[0].IncrementFixedNotNullable<16>();
            if (iters[6].IsNull())
            {
                iters[6].IncrementNull();
            }
            else
            {
                iters[6].IncrementVariable();
            }
            if (iters[8].IsNull())
            {
                iters[8].IncrementNull();
            }
            else
            {
                iters[8].IncrementVariable();
            }
            if (iters[16].IsNull())
            {
                iters[16].IncrementNull();
            }
            else
            {
                iters[16].IncrementVariable();
            }
            if (iters[39].IsNull())
            {
                iters[39].IncrementNull();
            }
            else
            {
                iters[39].IncrementVariable();
            }
            //// Section of the Partition Key iterators skip.
            //// Section of the System column iterators skip.
        }


        //// The deserialize method that extract Partition Key values without advance any of the iterators.
        static UINT64 DeserializeDataKey(SSLibV3::ColumnIterator* iters, DataKeySchema& key, IncrementalAllocator* alloc, const BYTE* blockEnd, UINT64 defaultRowId)
        {
            return defaultRowId;
        }

        //// The deserialize method that extract current RowId without advance any of the iterators.
        static SStreamRowActionType DeserializeActionType(SSLibV3::ColumnIterator* iters, const BYTE* blockEnd)
        {
            return SStreamRowActionType::Insert;
        }

        static PredFn* PredicatesLow() { return nullptr; }
        static PredFn* PredicatesHi() { return nullptr; }
        static const UINT m_predicateCnt = 0;
        static bool LowIncludedPredicateRefineSeek(SSLibV3::ColumnIterator* iters, IncrementalAllocator* alloc, PartitionSchema& row)
        {
            return true;
        }

        static bool LowExcludedPredicateRefineSeek(SSLibV3::ColumnIterator* iters, IncrementalAllocator* alloc, PartitionSchema& row)
        {
            return true;
        }

        static bool HiIncludedPredicateRefineSeek(SSLibV3::ColumnIterator* iters, IncrementalAllocator* alloc, PartitionSchema& row)
        {
            return true;
        }

        static bool HiExcludedPredicateRefineSeek(SSLibV3::ColumnIterator* iters, IncrementalAllocator* alloc, PartitionSchema& row)
        {
            return true;
        }

        static bool LowIncludedPredicateRefineResidual(SSLibV3::ColumnIterator* iters, IncrementalAllocator* alloc, PartitionSchema& row)
        {
            return true;
        }

        static bool LowExcludedPredicateRefineResidual(SSLibV3::ColumnIterator* iters, IncrementalAllocator* alloc, PartitionSchema& row)
        {
            return true;
        }

        static bool HiIncludedPredicateRefineResidual(SSLibV3::ColumnIterator* iters, IncrementalAllocator* alloc, PartitionSchema& row)
        {
            return true;
        }

        static bool HiExcludedPredicateRefineResidual(SSLibV3::ColumnIterator* iters, IncrementalAllocator* alloc, PartitionSchema& row)
        {
            return true;
        }

        // PredicateRefinedHashResidual
        static bool PredicateRefinedHashResidual(SSLibV3::ColumnIterator* iters, IncrementalAllocator* alloc, int partitionIndex, int numberOfPartitions)
        {
            return true;
 
        }
    };


#endif // defined(COMPILE_NATIVE)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_NATIVE)
    template<> 
    class RowComparePolicy<PartitionKeySchema_GetSStream_0, PartitionKeySchema_GetSStream_0, UID_GetSStream_0> 
    {
    public:
        // compare key from left and right schema object
        static int Compare(const PartitionKeySchema_GetSStream_0 * left, const PartitionKeySchema_GetSStream_0 * right)
        {
            return 0;
        }
    };
#endif // defined(COMPILE_NATIVE)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    static const char * StringTable_Process_1 [] =
    {
        "InputLanguage == \"en-us\" && (Branch == \"rs_prerelease\" || Branch == \"rs4_release\" || Branch == \"rs5_release\")",
        "RowGuid",
        "FinalText",
        "InkIsf",
        "\"*** After Last Expression ***\"",
    };

    template<>
    class RowTransformPolicy<GetSStream_0_Data0, Process_1_Data0, UID_Process_1>
    {
    public:

        static bool FilterTransformRow(GetSStream_0_Data0 & input, Process_1_Data0 & output, IncrementalAllocator * alloc)
        {

            int exceptionIndex = 0;
            try
            {
                if (input.m_InputLanguage == staticconstant_0 && (input.m_Branch == staticconstant_1 || input.m_Branch == staticconstant_2 || input.m_Branch == staticconstant_3))
                {

                    exceptionIndex++;
                    output.m_RowGuid = input.m_RowGuid;
                    exceptionIndex++;
                    output.m_FinalText = input.m_FinalText;
                    exceptionIndex++;
                    output.m_InkIsf = input.m_InkIsf;
                    exceptionIndex++;
                    return true;
                }
            
                return false;
                }
                catch(...)
                {
                    std::throw_with_nested(RuntimeExpressionException(StringTable_Process_1[exceptionIndex]));
                }
}
        static FString staticconstant_0;
        static FString staticconstant_1;
        static FString staticconstant_2;
        static FString staticconstant_3;

            #pragma warning(push)
            #pragma warning(disable: 4100) // 'alloc': unreferenced formal parameter
            static void InitializeStatics(IncrementalAllocator * alloc)
            {
            #pragma warning(pop)
                staticconstant_0 = FString("en-us", 5);
                staticconstant_1 = FString("rs_prerelease", 13);
                staticconstant_2 = FString("rs4_release", 11);
                staticconstant_3 = FString("rs5_release", 11);
            }
    
            // get operator resource requirements
            static OperatorRequirements GetOperatorRequirements()
            {
                return OperatorRequirements();
            }
        };
    
#if defined(COMPILE_NATIVE)
#pragma warning(push)
#pragma warning(disable:4592)
    FString RowTransformPolicy<GetSStream_0_Data0, Process_1_Data0, UID_Process_1>::staticconstant_0;
    FString RowTransformPolicy<GetSStream_0_Data0, Process_1_Data0, UID_Process_1>::staticconstant_1;
    FString RowTransformPolicy<GetSStream_0_Data0, Process_1_Data0, UID_Process_1>::staticconstant_2;
    FString RowTransformPolicy<GetSStream_0_Data0, Process_1_Data0, UID_Process_1>::staticconstant_3;
#pragma warning(pop)
#endif // defined(COMPILE_NATIVE)

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<>
    class RowTransformPolicy<Process_1_Data0, Process_1_Data0, UID_Process_2>
    {
    public:

        static bool FilterTransformRow(Process_1_Data0 & input, Process_1_Data0 & output, IncrementalAllocator * alloc)
        {
return true;
}

            #pragma warning(push)
            #pragma warning(disable: 4100) // 'alloc': unreferenced formal parameter
            static void InitializeStatics(IncrementalAllocator * alloc)
            {
            #pragma warning(pop)
            }
    
            // get operator resource requirements
            static OperatorRequirements GetOperatorRequirements()
            {
                return OperatorRequirements();
            }
        };
    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
    template<>
    struct ManagedUDO<UID_Process_2>
    {
        typedef ScopeRuntime::Processor UDO;

        ManagedUDO(std::string * argv, int argc)
        {
            try
            {
                m_udo.reset(___Scope_Generated_Classes___::__OperatorFactory__::Create_Process_2());
                m_args.reset(gcnew Generic::List<String^>(ConvertArgsToArray(std::wstring{ L"-produce RowGuid,#_InputLanguage,#_FinalText,#_WritingRectRight,#_Branch,#_InkIsf -skipValidation" })));
            }
            catch (Exception ^ex)
            {
                ScopeEngineManaged::UserExceptionHelper::WrapUserException(___Scope_Generated_Classes___::__OperatorFactory__::Name_Process_2, "Constructor", ex);
                throw;
            }
            auto curRow = gcnew ___Scope_Generated_Classes___::Row_RowGuid_Guid_FinalText_String_InkIsf_String();
            m_udo->GetType()->GetField("_outputRow", BindingFlags::NonPublic | BindingFlags::Instance)->SetValue(m_udo.get(), curRow);
            m_udo->GetType()->GetField("_outputSchema", BindingFlags::NonPublic | BindingFlags::Instance)->SetValue(m_udo.get(), m_udo->DefaultRow->Schema);
        }


        UDO^ get()
        {
            return m_udo.get();
        }

        Generic::List<String^>^ args()
        {
            return m_args.get();
        }
        cli::array<String^>^ ReadOnlyColumns_Output()
        {
            return nullptr;
        }
        
        cli::array<String^>^ ReadOnlyColumns_Input()
        {
            return nullptr;
        }

    private:
        ScopeTypedManagedHandle<UDO^> m_udo;
        ScopeTypedManagedHandle<Generic::List<String^>^> m_args;
        ManagedUDO & operator=(ManagedUDO &);
    };
    template<>
    class InteropToManagedRowPolicy<Process_1_Data0, UID_Process_2>
    {
    public:
        static void Marshal(Process_1_Data0& nativeRow, ScopeRuntime::Row^% managedRow, InteropAllocator * alloc)
        {
            alloc->CopyToManagedColumn(nativeRow.m_RowGuid, managedRow[0], 0);
            alloc->CopyToManagedColumn(nativeRow.m_FinalText, managedRow[1], 1);
            alloc->CopyToManagedColumn(nativeRow.m_InkIsf, managedRow[2], 2);
        }
    };
    template<>
    class InteropToNativeRowPolicy<Process_1_Data0, UID_Process_2>
    {
    public:
        static void Marshal(ScopeRuntime::Row^ managedRow, Process_1_Data0& nativeRow, IncrementalAllocator* alloc)
        {
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_RowGuid, managedRow[0]->Guid, alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_FinalText, managedRow[1]->Binary, alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_InkIsf, managedRow[2]->Binary, alloc);
        }
    };
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    static const char * StringTable_Process_3 [] =
    {
        "RowGuid",
        "FinalText",
        "InkIsf",
        "1.0",
        "\"*** After Last Expression ***\"",
    };

    template<>
    class RowTransformPolicy<Process_1_Data0, Process_3_Data0, UID_Process_3>
    {
    public:

        static bool FilterTransformRow(Process_1_Data0 & input, Process_3_Data0 & output, IncrementalAllocator * alloc)
        {

            int exceptionIndex = 0;
            try
            {
                    output.m_RowGuid = input.m_RowGuid;
                    exceptionIndex++;
                    output.m_FinalText = input.m_FinalText;
                    exceptionIndex++;
                    output.m_InkIsf = input.m_InkIsf;
                    exceptionIndex++;
                    output.m_Weight = 1.0;
                    exceptionIndex++;
                    return true;
                    }
                    catch(...)
                    {
                        std::throw_with_nested(RuntimeExpressionException(StringTable_Process_3[exceptionIndex]));
                    }
    }

            #pragma warning(push)
            #pragma warning(disable: 4100) // 'alloc': unreferenced formal parameter
            static void InitializeStatics(IncrementalAllocator * alloc)
            {
            #pragma warning(pop)
            }
    
            // get operator resource requirements
            static OperatorRequirements GetOperatorRequirements()
            {
                return OperatorRequirements();
            }
        };
    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_NATIVE)
    template<> 
    class RowComparePolicy<PartitionKeySchema_GetSStream_0, PartitionKeySchema_GetSStream_0, UID_GetSStream_4> 
    {
    public:
        // compare key from left and right schema object
        static int Compare(const PartitionKeySchema_GetSStream_0 * left, const PartitionKeySchema_GetSStream_0 * right)
        {
            return 0;
        }
    };
#endif // defined(COMPILE_NATIVE)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    static const char * StringTable_Process_5 [] =
    {
        "InputLanguage == \"en-us\" && (Branch == \"rs_prerelease\" || Branch == \"rs4_release\" || Branch == \"rs5_release\")",
        "RowGuid",
        "FinalText",
        "InkIsf",
        "\"*** After Last Expression ***\"",
    };

    template<>
    class RowTransformPolicy<GetSStream_0_Data0, Process_1_Data0, UID_Process_5>
    {
    public:

        static bool FilterTransformRow(GetSStream_0_Data0 & input, Process_1_Data0 & output, IncrementalAllocator * alloc)
        {

            int exceptionIndex = 0;
            try
            {
                if (input.m_InputLanguage == staticconstant_0 && (input.m_Branch == staticconstant_1 || input.m_Branch == staticconstant_2 || input.m_Branch == staticconstant_3))
                {

                    exceptionIndex++;
                    output.m_RowGuid = input.m_RowGuid;
                    exceptionIndex++;
                    output.m_FinalText = input.m_FinalText;
                    exceptionIndex++;
                    output.m_InkIsf = input.m_InkIsf;
                    exceptionIndex++;
                    return true;
                }
            
                return false;
                }
                catch(...)
                {
                    std::throw_with_nested(RuntimeExpressionException(StringTable_Process_5[exceptionIndex]));
                }
}
        static FString staticconstant_0;
        static FString staticconstant_1;
        static FString staticconstant_2;
        static FString staticconstant_3;

            #pragma warning(push)
            #pragma warning(disable: 4100) // 'alloc': unreferenced formal parameter
            static void InitializeStatics(IncrementalAllocator * alloc)
            {
            #pragma warning(pop)
                staticconstant_0 = FString("en-us", 5);
                staticconstant_1 = FString("rs_prerelease", 13);
                staticconstant_2 = FString("rs4_release", 11);
                staticconstant_3 = FString("rs5_release", 11);
            }
    
            // get operator resource requirements
            static OperatorRequirements GetOperatorRequirements()
            {
                return OperatorRequirements();
            }
        };
    
#if defined(COMPILE_NATIVE)
#pragma warning(push)
#pragma warning(disable:4592)
    FString RowTransformPolicy<GetSStream_0_Data0, Process_1_Data0, UID_Process_5>::staticconstant_0;
    FString RowTransformPolicy<GetSStream_0_Data0, Process_1_Data0, UID_Process_5>::staticconstant_1;
    FString RowTransformPolicy<GetSStream_0_Data0, Process_1_Data0, UID_Process_5>::staticconstant_2;
    FString RowTransformPolicy<GetSStream_0_Data0, Process_1_Data0, UID_Process_5>::staticconstant_3;
#pragma warning(pop)
#endif // defined(COMPILE_NATIVE)

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<>
    class RowTransformPolicy<Process_1_Data0, Process_1_Data0, UID_Process_6>
    {
    public:

        static bool FilterTransformRow(Process_1_Data0 & input, Process_1_Data0 & output, IncrementalAllocator * alloc)
        {
return true;
}

            #pragma warning(push)
            #pragma warning(disable: 4100) // 'alloc': unreferenced formal parameter
            static void InitializeStatics(IncrementalAllocator * alloc)
            {
            #pragma warning(pop)
            }
    
            // get operator resource requirements
            static OperatorRequirements GetOperatorRequirements()
            {
                return OperatorRequirements();
            }
        };
    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
    template<>
    struct ManagedUDO<UID_Process_6>
    {
        typedef ScopeRuntime::Processor UDO;

        ManagedUDO(std::string * argv, int argc)
        {
            try
            {
                m_udo.reset(___Scope_Generated_Classes___::__OperatorFactory__::Create_Process_6());
                m_args.reset(gcnew Generic::List<String^>(ConvertArgsToArray(std::wstring{ L"-produce RowGuid,#_InputLanguage,#_FinalText,#_WritingRectRight,#_Branch,#_InkIsf -skipValidation" })));
            }
            catch (Exception ^ex)
            {
                ScopeEngineManaged::UserExceptionHelper::WrapUserException(___Scope_Generated_Classes___::__OperatorFactory__::Name_Process_6, "Constructor", ex);
                throw;
            }
            auto curRow = gcnew ___Scope_Generated_Classes___::Row_RowGuid_Guid_FinalText_String_InkIsf_String();
            m_udo->GetType()->GetField("_outputRow", BindingFlags::NonPublic | BindingFlags::Instance)->SetValue(m_udo.get(), curRow);
            m_udo->GetType()->GetField("_outputSchema", BindingFlags::NonPublic | BindingFlags::Instance)->SetValue(m_udo.get(), m_udo->DefaultRow->Schema);
        }


        UDO^ get()
        {
            return m_udo.get();
        }

        Generic::List<String^>^ args()
        {
            return m_args.get();
        }
        cli::array<String^>^ ReadOnlyColumns_Output()
        {
            return nullptr;
        }
        
        cli::array<String^>^ ReadOnlyColumns_Input()
        {
            return nullptr;
        }

    private:
        ScopeTypedManagedHandle<UDO^> m_udo;
        ScopeTypedManagedHandle<Generic::List<String^>^> m_args;
        ManagedUDO & operator=(ManagedUDO &);
    };
    template<>
    class InteropToManagedRowPolicy<Process_1_Data0, UID_Process_6>
    {
    public:
        static void Marshal(Process_1_Data0& nativeRow, ScopeRuntime::Row^% managedRow, InteropAllocator * alloc)
        {
            alloc->CopyToManagedColumn(nativeRow.m_RowGuid, managedRow[0], 0);
            alloc->CopyToManagedColumn(nativeRow.m_FinalText, managedRow[1], 1);
            alloc->CopyToManagedColumn(nativeRow.m_InkIsf, managedRow[2], 2);
        }
    };
    template<>
    class InteropToNativeRowPolicy<Process_1_Data0, UID_Process_6>
    {
    public:
        static void Marshal(ScopeRuntime::Row^ managedRow, Process_1_Data0& nativeRow, IncrementalAllocator* alloc)
        {
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_RowGuid, managedRow[0]->Guid, alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_FinalText, managedRow[1]->Binary, alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_InkIsf, managedRow[2]->Binary, alloc);
        }
    };
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    static const char * StringTable_Process_7 [] =
    {
        "RowGuid",
        "FinalText",
        "InkIsf",
        "1.0",
        "\"*** After Last Expression ***\"",
    };

    template<>
    class RowTransformPolicy<Process_1_Data0, Process_3_Data0, UID_Process_7>
    {
    public:

        static bool FilterTransformRow(Process_1_Data0 & input, Process_3_Data0 & output, IncrementalAllocator * alloc)
        {

            int exceptionIndex = 0;
            try
            {
                    output.m_RowGuid = input.m_RowGuid;
                    exceptionIndex++;
                    output.m_FinalText = input.m_FinalText;
                    exceptionIndex++;
                    output.m_InkIsf = input.m_InkIsf;
                    exceptionIndex++;
                    output.m_Weight = 1.0;
                    exceptionIndex++;
                    return true;
                    }
                    catch(...)
                    {
                        std::throw_with_nested(RuntimeExpressionException(StringTable_Process_7[exceptionIndex]));
                    }
    }

            #pragma warning(push)
            #pragma warning(disable: 4100) // 'alloc': unreferenced formal parameter
            static void InitializeStatics(IncrementalAllocator * alloc)
            {
            #pragma warning(pop)
            }
    
            // get operator resource requirements
            static OperatorRequirements GetOperatorRequirements()
            {
                return OperatorRequirements();
            }
        };
    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_NATIVE)
    template<> 
    class RowComparePolicy<PartitionKeySchema_GetSStream_0, PartitionKeySchema_GetSStream_0, UID_GetSStream_8> 
    {
    public:
        // compare key from left and right schema object
        static int Compare(const PartitionKeySchema_GetSStream_0 * left, const PartitionKeySchema_GetSStream_0 * right)
        {
            return 0;
        }
    };
#endif // defined(COMPILE_NATIVE)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    static const char * StringTable_Process_9 [] =
    {
        "InputLanguage == \"en-us\" && (Branch == \"rs_prerelease\" || Branch == \"rs4_release\" || Branch == \"rs5_release\")",
        "RowGuid",
        "FinalText",
        "InkIsf",
        "\"*** After Last Expression ***\"",
    };

    template<>
    class RowTransformPolicy<GetSStream_0_Data0, Process_1_Data0, UID_Process_9>
    {
    public:

        static bool FilterTransformRow(GetSStream_0_Data0 & input, Process_1_Data0 & output, IncrementalAllocator * alloc)
        {

            int exceptionIndex = 0;
            try
            {
                if (input.m_InputLanguage == staticconstant_0 && (input.m_Branch == staticconstant_1 || input.m_Branch == staticconstant_2 || input.m_Branch == staticconstant_3))
                {

                    exceptionIndex++;
                    output.m_RowGuid = input.m_RowGuid;
                    exceptionIndex++;
                    output.m_FinalText = input.m_FinalText;
                    exceptionIndex++;
                    output.m_InkIsf = input.m_InkIsf;
                    exceptionIndex++;
                    return true;
                }
            
                return false;
                }
                catch(...)
                {
                    std::throw_with_nested(RuntimeExpressionException(StringTable_Process_9[exceptionIndex]));
                }
}
        static FString staticconstant_0;
        static FString staticconstant_1;
        static FString staticconstant_2;
        static FString staticconstant_3;

            #pragma warning(push)
            #pragma warning(disable: 4100) // 'alloc': unreferenced formal parameter
            static void InitializeStatics(IncrementalAllocator * alloc)
            {
            #pragma warning(pop)
                staticconstant_0 = FString("en-us", 5);
                staticconstant_1 = FString("rs_prerelease", 13);
                staticconstant_2 = FString("rs4_release", 11);
                staticconstant_3 = FString("rs5_release", 11);
            }
    
            // get operator resource requirements
            static OperatorRequirements GetOperatorRequirements()
            {
                return OperatorRequirements();
            }
        };
    
#if defined(COMPILE_NATIVE)
#pragma warning(push)
#pragma warning(disable:4592)
    FString RowTransformPolicy<GetSStream_0_Data0, Process_1_Data0, UID_Process_9>::staticconstant_0;
    FString RowTransformPolicy<GetSStream_0_Data0, Process_1_Data0, UID_Process_9>::staticconstant_1;
    FString RowTransformPolicy<GetSStream_0_Data0, Process_1_Data0, UID_Process_9>::staticconstant_2;
    FString RowTransformPolicy<GetSStream_0_Data0, Process_1_Data0, UID_Process_9>::staticconstant_3;
#pragma warning(pop)
#endif // defined(COMPILE_NATIVE)

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<>
    class RowTransformPolicy<Process_1_Data0, Process_1_Data0, UID_Process_10>
    {
    public:

        static bool FilterTransformRow(Process_1_Data0 & input, Process_1_Data0 & output, IncrementalAllocator * alloc)
        {
return true;
}

            #pragma warning(push)
            #pragma warning(disable: 4100) // 'alloc': unreferenced formal parameter
            static void InitializeStatics(IncrementalAllocator * alloc)
            {
            #pragma warning(pop)
            }
    
            // get operator resource requirements
            static OperatorRequirements GetOperatorRequirements()
            {
                return OperatorRequirements();
            }
        };
    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
    template<>
    struct ManagedUDO<UID_Process_10>
    {
        typedef ScopeRuntime::Processor UDO;

        ManagedUDO(std::string * argv, int argc)
        {
            try
            {
                m_udo.reset(___Scope_Generated_Classes___::__OperatorFactory__::Create_Process_10());
                m_args.reset(gcnew Generic::List<String^>(ConvertArgsToArray(std::wstring{ L"-produce RowGuid,#_InputLanguage,#_FinalText,#_WritingRectRight,#_Branch,#_InkIsf -skipValidation" })));
            }
            catch (Exception ^ex)
            {
                ScopeEngineManaged::UserExceptionHelper::WrapUserException(___Scope_Generated_Classes___::__OperatorFactory__::Name_Process_10, "Constructor", ex);
                throw;
            }
            auto curRow = gcnew ___Scope_Generated_Classes___::Row_RowGuid_Guid_FinalText_String_InkIsf_String();
            m_udo->GetType()->GetField("_outputRow", BindingFlags::NonPublic | BindingFlags::Instance)->SetValue(m_udo.get(), curRow);
            m_udo->GetType()->GetField("_outputSchema", BindingFlags::NonPublic | BindingFlags::Instance)->SetValue(m_udo.get(), m_udo->DefaultRow->Schema);
        }


        UDO^ get()
        {
            return m_udo.get();
        }

        Generic::List<String^>^ args()
        {
            return m_args.get();
        }
        cli::array<String^>^ ReadOnlyColumns_Output()
        {
            return nullptr;
        }
        
        cli::array<String^>^ ReadOnlyColumns_Input()
        {
            return nullptr;
        }

    private:
        ScopeTypedManagedHandle<UDO^> m_udo;
        ScopeTypedManagedHandle<Generic::List<String^>^> m_args;
        ManagedUDO & operator=(ManagedUDO &);
    };
    template<>
    class InteropToManagedRowPolicy<Process_1_Data0, UID_Process_10>
    {
    public:
        static void Marshal(Process_1_Data0& nativeRow, ScopeRuntime::Row^% managedRow, InteropAllocator * alloc)
        {
            alloc->CopyToManagedColumn(nativeRow.m_RowGuid, managedRow[0], 0);
            alloc->CopyToManagedColumn(nativeRow.m_FinalText, managedRow[1], 1);
            alloc->CopyToManagedColumn(nativeRow.m_InkIsf, managedRow[2], 2);
        }
    };
    template<>
    class InteropToNativeRowPolicy<Process_1_Data0, UID_Process_10>
    {
    public:
        static void Marshal(ScopeRuntime::Row^ managedRow, Process_1_Data0& nativeRow, IncrementalAllocator* alloc)
        {
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_RowGuid, managedRow[0]->Guid, alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_FinalText, managedRow[1]->Binary, alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_InkIsf, managedRow[2]->Binary, alloc);
        }
    };
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    static const char * StringTable_Process_11 [] =
    {
        "RowGuid",
        "FinalText",
        "InkIsf",
        "1.0",
        "\"*** After Last Expression ***\"",
    };

    template<>
    class RowTransformPolicy<Process_1_Data0, Process_3_Data0, UID_Process_11>
    {
    public:

        static bool FilterTransformRow(Process_1_Data0 & input, Process_3_Data0 & output, IncrementalAllocator * alloc)
        {

            int exceptionIndex = 0;
            try
            {
                    output.m_RowGuid = input.m_RowGuid;
                    exceptionIndex++;
                    output.m_FinalText = input.m_FinalText;
                    exceptionIndex++;
                    output.m_InkIsf = input.m_InkIsf;
                    exceptionIndex++;
                    output.m_Weight = 1.0;
                    exceptionIndex++;
                    return true;
                    }
                    catch(...)
                    {
                        std::throw_with_nested(RuntimeExpressionException(StringTable_Process_11[exceptionIndex]));
                    }
    }

            #pragma warning(push)
            #pragma warning(disable: 4100) // 'alloc': unreferenced formal parameter
            static void InitializeStatics(IncrementalAllocator * alloc)
            {
            #pragma warning(pop)
            }
    
            // get operator resource requirements
            static OperatorRequirements GetOperatorRequirements()
            {
                return OperatorRequirements();
            }
        };
    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_NATIVE)
    template<> 
    class RowComparePolicy<PartitionKeySchema_GetSStream_0, PartitionKeySchema_GetSStream_0, UID_GetSStream_12> 
    {
    public:
        // compare key from left and right schema object
        static int Compare(const PartitionKeySchema_GetSStream_0 * left, const PartitionKeySchema_GetSStream_0 * right)
        {
            return 0;
        }
    };
#endif // defined(COMPILE_NATIVE)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    static const char * StringTable_Process_13 [] =
    {
        "InputLanguage == \"en-us\" && (Branch == \"rs_prerelease\" || Branch == \"rs4_release\" || Branch == \"rs5_release\")",
        "RowGuid",
        "FinalText",
        "InkIsf",
        "\"*** After Last Expression ***\"",
    };

    template<>
    class RowTransformPolicy<GetSStream_0_Data0, Process_1_Data0, UID_Process_13>
    {
    public:

        static bool FilterTransformRow(GetSStream_0_Data0 & input, Process_1_Data0 & output, IncrementalAllocator * alloc)
        {

            int exceptionIndex = 0;
            try
            {
                if (input.m_InputLanguage == staticconstant_0 && (input.m_Branch == staticconstant_1 || input.m_Branch == staticconstant_2 || input.m_Branch == staticconstant_3))
                {

                    exceptionIndex++;
                    output.m_RowGuid = input.m_RowGuid;
                    exceptionIndex++;
                    output.m_FinalText = input.m_FinalText;
                    exceptionIndex++;
                    output.m_InkIsf = input.m_InkIsf;
                    exceptionIndex++;
                    return true;
                }
            
                return false;
                }
                catch(...)
                {
                    std::throw_with_nested(RuntimeExpressionException(StringTable_Process_13[exceptionIndex]));
                }
}
        static FString staticconstant_0;
        static FString staticconstant_1;
        static FString staticconstant_2;
        static FString staticconstant_3;

            #pragma warning(push)
            #pragma warning(disable: 4100) // 'alloc': unreferenced formal parameter
            static void InitializeStatics(IncrementalAllocator * alloc)
            {
            #pragma warning(pop)
                staticconstant_0 = FString("en-us", 5);
                staticconstant_1 = FString("rs_prerelease", 13);
                staticconstant_2 = FString("rs4_release", 11);
                staticconstant_3 = FString("rs5_release", 11);
            }
    
            // get operator resource requirements
            static OperatorRequirements GetOperatorRequirements()
            {
                return OperatorRequirements();
            }
        };
    
#if defined(COMPILE_NATIVE)
#pragma warning(push)
#pragma warning(disable:4592)
    FString RowTransformPolicy<GetSStream_0_Data0, Process_1_Data0, UID_Process_13>::staticconstant_0;
    FString RowTransformPolicy<GetSStream_0_Data0, Process_1_Data0, UID_Process_13>::staticconstant_1;
    FString RowTransformPolicy<GetSStream_0_Data0, Process_1_Data0, UID_Process_13>::staticconstant_2;
    FString RowTransformPolicy<GetSStream_0_Data0, Process_1_Data0, UID_Process_13>::staticconstant_3;
#pragma warning(pop)
#endif // defined(COMPILE_NATIVE)

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<>
    class RowTransformPolicy<Process_1_Data0, Process_1_Data0, UID_Process_14>
    {
    public:

        static bool FilterTransformRow(Process_1_Data0 & input, Process_1_Data0 & output, IncrementalAllocator * alloc)
        {
return true;
}

            #pragma warning(push)
            #pragma warning(disable: 4100) // 'alloc': unreferenced formal parameter
            static void InitializeStatics(IncrementalAllocator * alloc)
            {
            #pragma warning(pop)
            }
    
            // get operator resource requirements
            static OperatorRequirements GetOperatorRequirements()
            {
                return OperatorRequirements();
            }
        };
    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
    template<>
    struct ManagedUDO<UID_Process_14>
    {
        typedef ScopeRuntime::Processor UDO;

        ManagedUDO(std::string * argv, int argc)
        {
            try
            {
                m_udo.reset(___Scope_Generated_Classes___::__OperatorFactory__::Create_Process_14());
                m_args.reset(gcnew Generic::List<String^>(ConvertArgsToArray(std::wstring{ L"-produce RowGuid,#_InputLanguage,#_FinalText,#_WritingRectRight,#_Branch,#_InkIsf -skipValidation" })));
            }
            catch (Exception ^ex)
            {
                ScopeEngineManaged::UserExceptionHelper::WrapUserException(___Scope_Generated_Classes___::__OperatorFactory__::Name_Process_14, "Constructor", ex);
                throw;
            }
            auto curRow = gcnew ___Scope_Generated_Classes___::Row_RowGuid_Guid_FinalText_String_InkIsf_String();
            m_udo->GetType()->GetField("_outputRow", BindingFlags::NonPublic | BindingFlags::Instance)->SetValue(m_udo.get(), curRow);
            m_udo->GetType()->GetField("_outputSchema", BindingFlags::NonPublic | BindingFlags::Instance)->SetValue(m_udo.get(), m_udo->DefaultRow->Schema);
        }


        UDO^ get()
        {
            return m_udo.get();
        }

        Generic::List<String^>^ args()
        {
            return m_args.get();
        }
        cli::array<String^>^ ReadOnlyColumns_Output()
        {
            return nullptr;
        }
        
        cli::array<String^>^ ReadOnlyColumns_Input()
        {
            return nullptr;
        }

    private:
        ScopeTypedManagedHandle<UDO^> m_udo;
        ScopeTypedManagedHandle<Generic::List<String^>^> m_args;
        ManagedUDO & operator=(ManagedUDO &);
    };
    template<>
    class InteropToManagedRowPolicy<Process_1_Data0, UID_Process_14>
    {
    public:
        static void Marshal(Process_1_Data0& nativeRow, ScopeRuntime::Row^% managedRow, InteropAllocator * alloc)
        {
            alloc->CopyToManagedColumn(nativeRow.m_RowGuid, managedRow[0], 0);
            alloc->CopyToManagedColumn(nativeRow.m_FinalText, managedRow[1], 1);
            alloc->CopyToManagedColumn(nativeRow.m_InkIsf, managedRow[2], 2);
        }
    };
    template<>
    class InteropToNativeRowPolicy<Process_1_Data0, UID_Process_14>
    {
    public:
        static void Marshal(ScopeRuntime::Row^ managedRow, Process_1_Data0& nativeRow, IncrementalAllocator* alloc)
        {
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_RowGuid, managedRow[0]->Guid, alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_FinalText, managedRow[1]->Binary, alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_InkIsf, managedRow[2]->Binary, alloc);
        }
    };
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    static const char * StringTable_Process_15 [] =
    {
        "RowGuid",
        "FinalText",
        "InkIsf",
        "1.0",
        "\"*** After Last Expression ***\"",
    };

    template<>
    class RowTransformPolicy<Process_1_Data0, Process_3_Data0, UID_Process_15>
    {
    public:

        static bool FilterTransformRow(Process_1_Data0 & input, Process_3_Data0 & output, IncrementalAllocator * alloc)
        {

            int exceptionIndex = 0;
            try
            {
                    output.m_RowGuid = input.m_RowGuid;
                    exceptionIndex++;
                    output.m_FinalText = input.m_FinalText;
                    exceptionIndex++;
                    output.m_InkIsf = input.m_InkIsf;
                    exceptionIndex++;
                    output.m_Weight = 1.0;
                    exceptionIndex++;
                    return true;
                    }
                    catch(...)
                    {
                        std::throw_with_nested(RuntimeExpressionException(StringTable_Process_15[exceptionIndex]));
                    }
    }

            #pragma warning(push)
            #pragma warning(disable: 4100) // 'alloc': unreferenced formal parameter
            static void InitializeStatics(IncrementalAllocator * alloc)
            {
            #pragma warning(pop)
            }
    
            // get operator resource requirements
            static OperatorRequirements GetOperatorRequirements()
            {
                return OperatorRequirements();
            }
        };
    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_NATIVE)
    template<> 
    class RowComparePolicy<PartitionKeySchema_GetSStream_0, PartitionKeySchema_GetSStream_0, UID_GetSStream_16> 
    {
    public:
        // compare key from left and right schema object
        static int Compare(const PartitionKeySchema_GetSStream_0 * left, const PartitionKeySchema_GetSStream_0 * right)
        {
            return 0;
        }
    };
#endif // defined(COMPILE_NATIVE)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    static const char * StringTable_Process_17 [] =
    {
        "InputLanguage == \"en-us\" && (Branch == \"rs_prerelease\" || Branch == \"rs4_release\" || Branch == \"rs5_release\")",
        "RowGuid",
        "FinalText",
        "InkIsf",
        "\"*** After Last Expression ***\"",
    };

    template<>
    class RowTransformPolicy<GetSStream_0_Data0, Process_1_Data0, UID_Process_17>
    {
    public:

        static bool FilterTransformRow(GetSStream_0_Data0 & input, Process_1_Data0 & output, IncrementalAllocator * alloc)
        {

            int exceptionIndex = 0;
            try
            {
                if (input.m_InputLanguage == staticconstant_0 && (input.m_Branch == staticconstant_1 || input.m_Branch == staticconstant_2 || input.m_Branch == staticconstant_3))
                {

                    exceptionIndex++;
                    output.m_RowGuid = input.m_RowGuid;
                    exceptionIndex++;
                    output.m_FinalText = input.m_FinalText;
                    exceptionIndex++;
                    output.m_InkIsf = input.m_InkIsf;
                    exceptionIndex++;
                    return true;
                }
            
                return false;
                }
                catch(...)
                {
                    std::throw_with_nested(RuntimeExpressionException(StringTable_Process_17[exceptionIndex]));
                }
}
        static FString staticconstant_0;
        static FString staticconstant_1;
        static FString staticconstant_2;
        static FString staticconstant_3;

            #pragma warning(push)
            #pragma warning(disable: 4100) // 'alloc': unreferenced formal parameter
            static void InitializeStatics(IncrementalAllocator * alloc)
            {
            #pragma warning(pop)
                staticconstant_0 = FString("en-us", 5);
                staticconstant_1 = FString("rs_prerelease", 13);
                staticconstant_2 = FString("rs4_release", 11);
                staticconstant_3 = FString("rs5_release", 11);
            }
    
            // get operator resource requirements
            static OperatorRequirements GetOperatorRequirements()
            {
                return OperatorRequirements();
            }
        };
    
#if defined(COMPILE_NATIVE)
#pragma warning(push)
#pragma warning(disable:4592)
    FString RowTransformPolicy<GetSStream_0_Data0, Process_1_Data0, UID_Process_17>::staticconstant_0;
    FString RowTransformPolicy<GetSStream_0_Data0, Process_1_Data0, UID_Process_17>::staticconstant_1;
    FString RowTransformPolicy<GetSStream_0_Data0, Process_1_Data0, UID_Process_17>::staticconstant_2;
    FString RowTransformPolicy<GetSStream_0_Data0, Process_1_Data0, UID_Process_17>::staticconstant_3;
#pragma warning(pop)
#endif // defined(COMPILE_NATIVE)

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<>
    class RowTransformPolicy<Process_1_Data0, Process_1_Data0, UID_Process_18>
    {
    public:

        static bool FilterTransformRow(Process_1_Data0 & input, Process_1_Data0 & output, IncrementalAllocator * alloc)
        {
return true;
}

            #pragma warning(push)
            #pragma warning(disable: 4100) // 'alloc': unreferenced formal parameter
            static void InitializeStatics(IncrementalAllocator * alloc)
            {
            #pragma warning(pop)
            }
    
            // get operator resource requirements
            static OperatorRequirements GetOperatorRequirements()
            {
                return OperatorRequirements();
            }
        };
    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
    template<>
    struct ManagedUDO<UID_Process_18>
    {
        typedef ScopeRuntime::Processor UDO;

        ManagedUDO(std::string * argv, int argc)
        {
            try
            {
                m_udo.reset(___Scope_Generated_Classes___::__OperatorFactory__::Create_Process_18());
                m_args.reset(gcnew Generic::List<String^>(ConvertArgsToArray(std::wstring{ L"-produce RowGuid,#_InputLanguage,#_FinalText,#_WritingRectRight,#_Branch,#_InkIsf -skipValidation" })));
            }
            catch (Exception ^ex)
            {
                ScopeEngineManaged::UserExceptionHelper::WrapUserException(___Scope_Generated_Classes___::__OperatorFactory__::Name_Process_18, "Constructor", ex);
                throw;
            }
            auto curRow = gcnew ___Scope_Generated_Classes___::Row_RowGuid_Guid_FinalText_String_InkIsf_String();
            m_udo->GetType()->GetField("_outputRow", BindingFlags::NonPublic | BindingFlags::Instance)->SetValue(m_udo.get(), curRow);
            m_udo->GetType()->GetField("_outputSchema", BindingFlags::NonPublic | BindingFlags::Instance)->SetValue(m_udo.get(), m_udo->DefaultRow->Schema);
        }


        UDO^ get()
        {
            return m_udo.get();
        }

        Generic::List<String^>^ args()
        {
            return m_args.get();
        }
        cli::array<String^>^ ReadOnlyColumns_Output()
        {
            return nullptr;
        }
        
        cli::array<String^>^ ReadOnlyColumns_Input()
        {
            return nullptr;
        }

    private:
        ScopeTypedManagedHandle<UDO^> m_udo;
        ScopeTypedManagedHandle<Generic::List<String^>^> m_args;
        ManagedUDO & operator=(ManagedUDO &);
    };
    template<>
    class InteropToManagedRowPolicy<Process_1_Data0, UID_Process_18>
    {
    public:
        static void Marshal(Process_1_Data0& nativeRow, ScopeRuntime::Row^% managedRow, InteropAllocator * alloc)
        {
            alloc->CopyToManagedColumn(nativeRow.m_RowGuid, managedRow[0], 0);
            alloc->CopyToManagedColumn(nativeRow.m_FinalText, managedRow[1], 1);
            alloc->CopyToManagedColumn(nativeRow.m_InkIsf, managedRow[2], 2);
        }
    };
    template<>
    class InteropToNativeRowPolicy<Process_1_Data0, UID_Process_18>
    {
    public:
        static void Marshal(ScopeRuntime::Row^ managedRow, Process_1_Data0& nativeRow, IncrementalAllocator* alloc)
        {
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_RowGuid, managedRow[0]->Guid, alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_FinalText, managedRow[1]->Binary, alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_InkIsf, managedRow[2]->Binary, alloc);
        }
    };
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    static const char * StringTable_Process_19 [] =
    {
        "RowGuid",
        "FinalText",
        "InkIsf",
        "1.0",
        "\"*** After Last Expression ***\"",
    };

    template<>
    class RowTransformPolicy<Process_1_Data0, Process_3_Data0, UID_Process_19>
    {
    public:

        static bool FilterTransformRow(Process_1_Data0 & input, Process_3_Data0 & output, IncrementalAllocator * alloc)
        {

            int exceptionIndex = 0;
            try
            {
                    output.m_RowGuid = input.m_RowGuid;
                    exceptionIndex++;
                    output.m_FinalText = input.m_FinalText;
                    exceptionIndex++;
                    output.m_InkIsf = input.m_InkIsf;
                    exceptionIndex++;
                    output.m_Weight = 1.0;
                    exceptionIndex++;
                    return true;
                    }
                    catch(...)
                    {
                        std::throw_with_nested(RuntimeExpressionException(StringTable_Process_19[exceptionIndex]));
                    }
    }

            #pragma warning(push)
            #pragma warning(disable: 4100) // 'alloc': unreferenced formal parameter
            static void InitializeStatics(IncrementalAllocator * alloc)
            {
            #pragma warning(pop)
            }
    
            // get operator resource requirements
            static OperatorRequirements GetOperatorRequirements()
            {
                return OperatorRequirements();
            }
        };
    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_NATIVE)
    template<> 
    class RowComparePolicy<PartitionKeySchema_GetSStream_0, PartitionKeySchema_GetSStream_0, UID_GetSStream_20> 
    {
    public:
        // compare key from left and right schema object
        static int Compare(const PartitionKeySchema_GetSStream_0 * left, const PartitionKeySchema_GetSStream_0 * right)
        {
            return 0;
        }
    };
#endif // defined(COMPILE_NATIVE)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    static const char * StringTable_Process_21 [] =
    {
        "InputLanguage == \"en-us\" && (Branch == \"rs_prerelease\" || Branch == \"rs4_release\" || Branch == \"rs5_release\")",
        "RowGuid",
        "FinalText",
        "InkIsf",
        "\"*** After Last Expression ***\"",
    };

    template<>
    class RowTransformPolicy<GetSStream_0_Data0, Process_1_Data0, UID_Process_21>
    {
    public:

        static bool FilterTransformRow(GetSStream_0_Data0 & input, Process_1_Data0 & output, IncrementalAllocator * alloc)
        {

            int exceptionIndex = 0;
            try
            {
                if (input.m_InputLanguage == staticconstant_0 && (input.m_Branch == staticconstant_1 || input.m_Branch == staticconstant_2 || input.m_Branch == staticconstant_3))
                {

                    exceptionIndex++;
                    output.m_RowGuid = input.m_RowGuid;
                    exceptionIndex++;
                    output.m_FinalText = input.m_FinalText;
                    exceptionIndex++;
                    output.m_InkIsf = input.m_InkIsf;
                    exceptionIndex++;
                    return true;
                }
            
                return false;
                }
                catch(...)
                {
                    std::throw_with_nested(RuntimeExpressionException(StringTable_Process_21[exceptionIndex]));
                }
}
        static FString staticconstant_0;
        static FString staticconstant_1;
        static FString staticconstant_2;
        static FString staticconstant_3;

            #pragma warning(push)
            #pragma warning(disable: 4100) // 'alloc': unreferenced formal parameter
            static void InitializeStatics(IncrementalAllocator * alloc)
            {
            #pragma warning(pop)
                staticconstant_0 = FString("en-us", 5);
                staticconstant_1 = FString("rs_prerelease", 13);
                staticconstant_2 = FString("rs4_release", 11);
                staticconstant_3 = FString("rs5_release", 11);
            }
    
            // get operator resource requirements
            static OperatorRequirements GetOperatorRequirements()
            {
                return OperatorRequirements();
            }
        };
    
#if defined(COMPILE_NATIVE)
#pragma warning(push)
#pragma warning(disable:4592)
    FString RowTransformPolicy<GetSStream_0_Data0, Process_1_Data0, UID_Process_21>::staticconstant_0;
    FString RowTransformPolicy<GetSStream_0_Data0, Process_1_Data0, UID_Process_21>::staticconstant_1;
    FString RowTransformPolicy<GetSStream_0_Data0, Process_1_Data0, UID_Process_21>::staticconstant_2;
    FString RowTransformPolicy<GetSStream_0_Data0, Process_1_Data0, UID_Process_21>::staticconstant_3;
#pragma warning(pop)
#endif // defined(COMPILE_NATIVE)

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<>
    class RowTransformPolicy<Process_1_Data0, Process_1_Data0, UID_Process_22>
    {
    public:

        static bool FilterTransformRow(Process_1_Data0 & input, Process_1_Data0 & output, IncrementalAllocator * alloc)
        {
return true;
}

            #pragma warning(push)
            #pragma warning(disable: 4100) // 'alloc': unreferenced formal parameter
            static void InitializeStatics(IncrementalAllocator * alloc)
            {
            #pragma warning(pop)
            }
    
            // get operator resource requirements
            static OperatorRequirements GetOperatorRequirements()
            {
                return OperatorRequirements();
            }
        };
    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
    template<>
    struct ManagedUDO<UID_Process_22>
    {
        typedef ScopeRuntime::Processor UDO;

        ManagedUDO(std::string * argv, int argc)
        {
            try
            {
                m_udo.reset(___Scope_Generated_Classes___::__OperatorFactory__::Create_Process_22());
                m_args.reset(gcnew Generic::List<String^>(ConvertArgsToArray(std::wstring{ L"-produce RowGuid,#_InputLanguage,#_FinalText,#_WritingRectRight,#_Branch,#_InkIsf -skipValidation" })));
            }
            catch (Exception ^ex)
            {
                ScopeEngineManaged::UserExceptionHelper::WrapUserException(___Scope_Generated_Classes___::__OperatorFactory__::Name_Process_22, "Constructor", ex);
                throw;
            }
            auto curRow = gcnew ___Scope_Generated_Classes___::Row_RowGuid_Guid_FinalText_String_InkIsf_String();
            m_udo->GetType()->GetField("_outputRow", BindingFlags::NonPublic | BindingFlags::Instance)->SetValue(m_udo.get(), curRow);
            m_udo->GetType()->GetField("_outputSchema", BindingFlags::NonPublic | BindingFlags::Instance)->SetValue(m_udo.get(), m_udo->DefaultRow->Schema);
        }


        UDO^ get()
        {
            return m_udo.get();
        }

        Generic::List<String^>^ args()
        {
            return m_args.get();
        }
        cli::array<String^>^ ReadOnlyColumns_Output()
        {
            return nullptr;
        }
        
        cli::array<String^>^ ReadOnlyColumns_Input()
        {
            return nullptr;
        }

    private:
        ScopeTypedManagedHandle<UDO^> m_udo;
        ScopeTypedManagedHandle<Generic::List<String^>^> m_args;
        ManagedUDO & operator=(ManagedUDO &);
    };
    template<>
    class InteropToManagedRowPolicy<Process_1_Data0, UID_Process_22>
    {
    public:
        static void Marshal(Process_1_Data0& nativeRow, ScopeRuntime::Row^% managedRow, InteropAllocator * alloc)
        {
            alloc->CopyToManagedColumn(nativeRow.m_RowGuid, managedRow[0], 0);
            alloc->CopyToManagedColumn(nativeRow.m_FinalText, managedRow[1], 1);
            alloc->CopyToManagedColumn(nativeRow.m_InkIsf, managedRow[2], 2);
        }
    };
    template<>
    class InteropToNativeRowPolicy<Process_1_Data0, UID_Process_22>
    {
    public:
        static void Marshal(ScopeRuntime::Row^ managedRow, Process_1_Data0& nativeRow, IncrementalAllocator* alloc)
        {
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_RowGuid, managedRow[0]->Guid, alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_FinalText, managedRow[1]->Binary, alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_InkIsf, managedRow[2]->Binary, alloc);
        }
    };
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    static const char * StringTable_Process_23 [] =
    {
        "RowGuid",
        "FinalText",
        "InkIsf",
        "1.0",
        "\"*** After Last Expression ***\"",
    };

    template<>
    class RowTransformPolicy<Process_1_Data0, Process_3_Data0, UID_Process_23>
    {
    public:

        static bool FilterTransformRow(Process_1_Data0 & input, Process_3_Data0 & output, IncrementalAllocator * alloc)
        {

            int exceptionIndex = 0;
            try
            {
                    output.m_RowGuid = input.m_RowGuid;
                    exceptionIndex++;
                    output.m_FinalText = input.m_FinalText;
                    exceptionIndex++;
                    output.m_InkIsf = input.m_InkIsf;
                    exceptionIndex++;
                    output.m_Weight = 1.0;
                    exceptionIndex++;
                    return true;
                    }
                    catch(...)
                    {
                        std::throw_with_nested(RuntimeExpressionException(StringTable_Process_23[exceptionIndex]));
                    }
    }

            #pragma warning(push)
            #pragma warning(disable: 4100) // 'alloc': unreferenced formal parameter
            static void InitializeStatics(IncrementalAllocator * alloc)
            {
            #pragma warning(pop)
            }
    
            // get operator resource requirements
            static OperatorRequirements GetOperatorRequirements()
            {
                return OperatorRequirements();
            }
        };
    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_NATIVE)
    template<> 
    class RowComparePolicy<PartitionKeySchema_GetSStream_0, PartitionKeySchema_GetSStream_0, UID_GetSStream_24> 
    {
    public:
        // compare key from left and right schema object
        static int Compare(const PartitionKeySchema_GetSStream_0 * left, const PartitionKeySchema_GetSStream_0 * right)
        {
            return 0;
        }
    };
#endif // defined(COMPILE_NATIVE)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    static const char * StringTable_Process_25 [] =
    {
        "InputLanguage == \"en-us\" && (Branch == \"rs_prerelease\" || Branch == \"rs4_release\" || Branch == \"rs5_release\")",
        "RowGuid",
        "FinalText",
        "InkIsf",
        "\"*** After Last Expression ***\"",
    };

    template<>
    class RowTransformPolicy<GetSStream_0_Data0, Process_1_Data0, UID_Process_25>
    {
    public:

        static bool FilterTransformRow(GetSStream_0_Data0 & input, Process_1_Data0 & output, IncrementalAllocator * alloc)
        {

            int exceptionIndex = 0;
            try
            {
                if (input.m_InputLanguage == staticconstant_0 && (input.m_Branch == staticconstant_1 || input.m_Branch == staticconstant_2 || input.m_Branch == staticconstant_3))
                {

                    exceptionIndex++;
                    output.m_RowGuid = input.m_RowGuid;
                    exceptionIndex++;
                    output.m_FinalText = input.m_FinalText;
                    exceptionIndex++;
                    output.m_InkIsf = input.m_InkIsf;
                    exceptionIndex++;
                    return true;
                }
            
                return false;
                }
                catch(...)
                {
                    std::throw_with_nested(RuntimeExpressionException(StringTable_Process_25[exceptionIndex]));
                }
}
        static FString staticconstant_0;
        static FString staticconstant_1;
        static FString staticconstant_2;
        static FString staticconstant_3;

            #pragma warning(push)
            #pragma warning(disable: 4100) // 'alloc': unreferenced formal parameter
            static void InitializeStatics(IncrementalAllocator * alloc)
            {
            #pragma warning(pop)
                staticconstant_0 = FString("en-us", 5);
                staticconstant_1 = FString("rs_prerelease", 13);
                staticconstant_2 = FString("rs4_release", 11);
                staticconstant_3 = FString("rs5_release", 11);
            }
    
            // get operator resource requirements
            static OperatorRequirements GetOperatorRequirements()
            {
                return OperatorRequirements();
            }
        };
    
#if defined(COMPILE_NATIVE)
#pragma warning(push)
#pragma warning(disable:4592)
    FString RowTransformPolicy<GetSStream_0_Data0, Process_1_Data0, UID_Process_25>::staticconstant_0;
    FString RowTransformPolicy<GetSStream_0_Data0, Process_1_Data0, UID_Process_25>::staticconstant_1;
    FString RowTransformPolicy<GetSStream_0_Data0, Process_1_Data0, UID_Process_25>::staticconstant_2;
    FString RowTransformPolicy<GetSStream_0_Data0, Process_1_Data0, UID_Process_25>::staticconstant_3;
#pragma warning(pop)
#endif // defined(COMPILE_NATIVE)

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<>
    class RowTransformPolicy<Process_1_Data0, Process_1_Data0, UID_Process_26>
    {
    public:

        static bool FilterTransformRow(Process_1_Data0 & input, Process_1_Data0 & output, IncrementalAllocator * alloc)
        {
return true;
}

            #pragma warning(push)
            #pragma warning(disable: 4100) // 'alloc': unreferenced formal parameter
            static void InitializeStatics(IncrementalAllocator * alloc)
            {
            #pragma warning(pop)
            }
    
            // get operator resource requirements
            static OperatorRequirements GetOperatorRequirements()
            {
                return OperatorRequirements();
            }
        };
    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
    template<>
    struct ManagedUDO<UID_Process_26>
    {
        typedef ScopeRuntime::Processor UDO;

        ManagedUDO(std::string * argv, int argc)
        {
            try
            {
                m_udo.reset(___Scope_Generated_Classes___::__OperatorFactory__::Create_Process_26());
                m_args.reset(gcnew Generic::List<String^>(ConvertArgsToArray(std::wstring{ L"-produce RowGuid,#_InputLanguage,#_FinalText,#_WritingRectRight,#_Branch,#_InkIsf -skipValidation" })));
            }
            catch (Exception ^ex)
            {
                ScopeEngineManaged::UserExceptionHelper::WrapUserException(___Scope_Generated_Classes___::__OperatorFactory__::Name_Process_26, "Constructor", ex);
                throw;
            }
            auto curRow = gcnew ___Scope_Generated_Classes___::Row_RowGuid_Guid_FinalText_String_InkIsf_String();
            m_udo->GetType()->GetField("_outputRow", BindingFlags::NonPublic | BindingFlags::Instance)->SetValue(m_udo.get(), curRow);
            m_udo->GetType()->GetField("_outputSchema", BindingFlags::NonPublic | BindingFlags::Instance)->SetValue(m_udo.get(), m_udo->DefaultRow->Schema);
        }


        UDO^ get()
        {
            return m_udo.get();
        }

        Generic::List<String^>^ args()
        {
            return m_args.get();
        }
        cli::array<String^>^ ReadOnlyColumns_Output()
        {
            return nullptr;
        }
        
        cli::array<String^>^ ReadOnlyColumns_Input()
        {
            return nullptr;
        }

    private:
        ScopeTypedManagedHandle<UDO^> m_udo;
        ScopeTypedManagedHandle<Generic::List<String^>^> m_args;
        ManagedUDO & operator=(ManagedUDO &);
    };
    template<>
    class InteropToManagedRowPolicy<Process_1_Data0, UID_Process_26>
    {
    public:
        static void Marshal(Process_1_Data0& nativeRow, ScopeRuntime::Row^% managedRow, InteropAllocator * alloc)
        {
            alloc->CopyToManagedColumn(nativeRow.m_RowGuid, managedRow[0], 0);
            alloc->CopyToManagedColumn(nativeRow.m_FinalText, managedRow[1], 1);
            alloc->CopyToManagedColumn(nativeRow.m_InkIsf, managedRow[2], 2);
        }
    };
    template<>
    class InteropToNativeRowPolicy<Process_1_Data0, UID_Process_26>
    {
    public:
        static void Marshal(ScopeRuntime::Row^ managedRow, Process_1_Data0& nativeRow, IncrementalAllocator* alloc)
        {
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_RowGuid, managedRow[0]->Guid, alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_FinalText, managedRow[1]->Binary, alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_InkIsf, managedRow[2]->Binary, alloc);
        }
    };
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    static const char * StringTable_Process_27 [] =
    {
        "RowGuid",
        "FinalText",
        "InkIsf",
        "1.0",
        "\"*** After Last Expression ***\"",
    };

    template<>
    class RowTransformPolicy<Process_1_Data0, Process_3_Data0, UID_Process_27>
    {
    public:

        static bool FilterTransformRow(Process_1_Data0 & input, Process_3_Data0 & output, IncrementalAllocator * alloc)
        {

            int exceptionIndex = 0;
            try
            {
                    output.m_RowGuid = input.m_RowGuid;
                    exceptionIndex++;
                    output.m_FinalText = input.m_FinalText;
                    exceptionIndex++;
                    output.m_InkIsf = input.m_InkIsf;
                    exceptionIndex++;
                    output.m_Weight = 1.0;
                    exceptionIndex++;
                    return true;
                    }
                    catch(...)
                    {
                        std::throw_with_nested(RuntimeExpressionException(StringTable_Process_27[exceptionIndex]));
                    }
    }

            #pragma warning(push)
            #pragma warning(disable: 4100) // 'alloc': unreferenced formal parameter
            static void InitializeStatics(IncrementalAllocator * alloc)
            {
            #pragma warning(pop)
            }
    
            // get operator resource requirements
            static OperatorRequirements GetOperatorRequirements()
            {
                return OperatorRequirements();
            }
        };
    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_NATIVE)
    template<> 
    class RowComparePolicy<PartitionKeySchema_GetSStream_0, PartitionKeySchema_GetSStream_0, UID_GetSStream_28> 
    {
    public:
        // compare key from left and right schema object
        static int Compare(const PartitionKeySchema_GetSStream_0 * left, const PartitionKeySchema_GetSStream_0 * right)
        {
            return 0;
        }
    };
#endif // defined(COMPILE_NATIVE)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    static const char * StringTable_Process_29 [] =
    {
        "InputLanguage == \"en-us\" && (Branch == \"rs_prerelease\" || Branch == \"rs4_release\" || Branch == \"rs5_release\")",
        "RowGuid",
        "FinalText",
        "InkIsf",
        "\"*** After Last Expression ***\"",
    };

    template<>
    class RowTransformPolicy<GetSStream_0_Data0, Process_1_Data0, UID_Process_29>
    {
    public:

        static bool FilterTransformRow(GetSStream_0_Data0 & input, Process_1_Data0 & output, IncrementalAllocator * alloc)
        {

            int exceptionIndex = 0;
            try
            {
                if (input.m_InputLanguage == staticconstant_0 && (input.m_Branch == staticconstant_1 || input.m_Branch == staticconstant_2 || input.m_Branch == staticconstant_3))
                {

                    exceptionIndex++;
                    output.m_RowGuid = input.m_RowGuid;
                    exceptionIndex++;
                    output.m_FinalText = input.m_FinalText;
                    exceptionIndex++;
                    output.m_InkIsf = input.m_InkIsf;
                    exceptionIndex++;
                    return true;
                }
            
                return false;
                }
                catch(...)
                {
                    std::throw_with_nested(RuntimeExpressionException(StringTable_Process_29[exceptionIndex]));
                }
}
        static FString staticconstant_0;
        static FString staticconstant_1;
        static FString staticconstant_2;
        static FString staticconstant_3;

            #pragma warning(push)
            #pragma warning(disable: 4100) // 'alloc': unreferenced formal parameter
            static void InitializeStatics(IncrementalAllocator * alloc)
            {
            #pragma warning(pop)
                staticconstant_0 = FString("en-us", 5);
                staticconstant_1 = FString("rs_prerelease", 13);
                staticconstant_2 = FString("rs4_release", 11);
                staticconstant_3 = FString("rs5_release", 11);
            }
    
            // get operator resource requirements
            static OperatorRequirements GetOperatorRequirements()
            {
                return OperatorRequirements();
            }
        };
    
#if defined(COMPILE_NATIVE)
#pragma warning(push)
#pragma warning(disable:4592)
    FString RowTransformPolicy<GetSStream_0_Data0, Process_1_Data0, UID_Process_29>::staticconstant_0;
    FString RowTransformPolicy<GetSStream_0_Data0, Process_1_Data0, UID_Process_29>::staticconstant_1;
    FString RowTransformPolicy<GetSStream_0_Data0, Process_1_Data0, UID_Process_29>::staticconstant_2;
    FString RowTransformPolicy<GetSStream_0_Data0, Process_1_Data0, UID_Process_29>::staticconstant_3;
#pragma warning(pop)
#endif // defined(COMPILE_NATIVE)

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<>
    class RowTransformPolicy<Process_1_Data0, Process_1_Data0, UID_Process_30>
    {
    public:

        static bool FilterTransformRow(Process_1_Data0 & input, Process_1_Data0 & output, IncrementalAllocator * alloc)
        {
return true;
}

            #pragma warning(push)
            #pragma warning(disable: 4100) // 'alloc': unreferenced formal parameter
            static void InitializeStatics(IncrementalAllocator * alloc)
            {
            #pragma warning(pop)
            }
    
            // get operator resource requirements
            static OperatorRequirements GetOperatorRequirements()
            {
                return OperatorRequirements();
            }
        };
    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
    template<>
    struct ManagedUDO<UID_Process_30>
    {
        typedef ScopeRuntime::Processor UDO;

        ManagedUDO(std::string * argv, int argc)
        {
            try
            {
                m_udo.reset(___Scope_Generated_Classes___::__OperatorFactory__::Create_Process_30());
                m_args.reset(gcnew Generic::List<String^>(ConvertArgsToArray(std::wstring{ L"-produce RowGuid,#_InputLanguage,#_FinalText,#_WritingRectRight,#_Branch,#_InkIsf -skipValidation" })));
            }
            catch (Exception ^ex)
            {
                ScopeEngineManaged::UserExceptionHelper::WrapUserException(___Scope_Generated_Classes___::__OperatorFactory__::Name_Process_30, "Constructor", ex);
                throw;
            }
            auto curRow = gcnew ___Scope_Generated_Classes___::Row_RowGuid_Guid_FinalText_String_InkIsf_String();
            m_udo->GetType()->GetField("_outputRow", BindingFlags::NonPublic | BindingFlags::Instance)->SetValue(m_udo.get(), curRow);
            m_udo->GetType()->GetField("_outputSchema", BindingFlags::NonPublic | BindingFlags::Instance)->SetValue(m_udo.get(), m_udo->DefaultRow->Schema);
        }


        UDO^ get()
        {
            return m_udo.get();
        }

        Generic::List<String^>^ args()
        {
            return m_args.get();
        }
        cli::array<String^>^ ReadOnlyColumns_Output()
        {
            return nullptr;
        }
        
        cli::array<String^>^ ReadOnlyColumns_Input()
        {
            return nullptr;
        }

    private:
        ScopeTypedManagedHandle<UDO^> m_udo;
        ScopeTypedManagedHandle<Generic::List<String^>^> m_args;
        ManagedUDO & operator=(ManagedUDO &);
    };
    template<>
    class InteropToManagedRowPolicy<Process_1_Data0, UID_Process_30>
    {
    public:
        static void Marshal(Process_1_Data0& nativeRow, ScopeRuntime::Row^% managedRow, InteropAllocator * alloc)
        {
            alloc->CopyToManagedColumn(nativeRow.m_RowGuid, managedRow[0], 0);
            alloc->CopyToManagedColumn(nativeRow.m_FinalText, managedRow[1], 1);
            alloc->CopyToManagedColumn(nativeRow.m_InkIsf, managedRow[2], 2);
        }
    };
    template<>
    class InteropToNativeRowPolicy<Process_1_Data0, UID_Process_30>
    {
    public:
        static void Marshal(ScopeRuntime::Row^ managedRow, Process_1_Data0& nativeRow, IncrementalAllocator* alloc)
        {
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_RowGuid, managedRow[0]->Guid, alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_FinalText, managedRow[1]->Binary, alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_InkIsf, managedRow[2]->Binary, alloc);
        }
    };
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    static const char * StringTable_Process_31 [] =
    {
        "RowGuid",
        "FinalText",
        "InkIsf",
        "1.0",
        "\"*** After Last Expression ***\"",
    };

    template<>
    class RowTransformPolicy<Process_1_Data0, Process_3_Data0, UID_Process_31>
    {
    public:

        static bool FilterTransformRow(Process_1_Data0 & input, Process_3_Data0 & output, IncrementalAllocator * alloc)
        {

            int exceptionIndex = 0;
            try
            {
                    output.m_RowGuid = input.m_RowGuid;
                    exceptionIndex++;
                    output.m_FinalText = input.m_FinalText;
                    exceptionIndex++;
                    output.m_InkIsf = input.m_InkIsf;
                    exceptionIndex++;
                    output.m_Weight = 1.0;
                    exceptionIndex++;
                    return true;
                    }
                    catch(...)
                    {
                        std::throw_with_nested(RuntimeExpressionException(StringTable_Process_31[exceptionIndex]));
                    }
    }

            #pragma warning(push)
            #pragma warning(disable: 4100) // 'alloc': unreferenced formal parameter
            static void InitializeStatics(IncrementalAllocator * alloc)
            {
            #pragma warning(pop)
            }
    
            // get operator resource requirements
            static OperatorRequirements GetOperatorRequirements()
            {
                return OperatorRequirements();
            }
        };
    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    template<> 
    class TextOutputPolicy<Process_3_Data0, UID_SV1_Extract_Combine_out0>
    {
    public:

        static void Serialize(TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, true, false, false, false, Default, false, CharFormat_uint16>, CosmosOutput> * output, Process_3_Data0 & row)
        {
            output->Write<ScopeGuid,false>(row.m_RowGuid);
            output->WriteDelimiter();
            if (!row.m_FinalText.IsNull())
            {
                output->Write<FString,false>(row.m_FinalText);
            }
            output->WriteDelimiter();
            if (!row.m_InkIsf.IsNull())
            {
                output->Write<FString,false>(row.m_InkIsf);
            }
            output->WriteDelimiter();
            output->Write<double,false>(row.m_Weight);
            output->WriteNewLine();
        }

        static void SerializeHeader(TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, true, false, false, false, Default, false, CharFormat_uint16>, CosmosOutput> * output)
        {
            SCOPE_ASSERT(!"TextOutputPolicy::SerializeHeader method should not be invoked.");
        }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_NATIVE)
    typedef SStreamExtractorV4<GetSStream_0_Data0, SStreamV3ExtractPolicy<GetSStream_0_Data0, UID_GetSStream_0, NullSchema>, UID_GetSStream_0, NullSchema, false> SStreamV3ExtractorType_SV1_Extract_Combine_GetSStream_0;
    SStreamV3ExtractorType_SV1_Extract_Combine_GetSStream_0 * CreateExtractor_SV1_Extract_Combine_GetSStream_0(unique_ptr<SStreamV3ExtractorType_SV1_Extract_Combine_GetSStream_0> * extractor_ptr)
    {
        extractor_ptr->reset(new SStreamV3ExtractorType_SV1_Extract_Combine_GetSStream_0(0, "", UID_GetSStream_0));
        return extractor_ptr->get();
    }
#endif // defined(COMPILE_NATIVE)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_NATIVE)
    typedef SStreamExtractorV4<GetSStream_0_Data0, SStreamV3ExtractPolicy<GetSStream_0_Data0, UID_GetSStream_0, NullSchema>, UID_GetSStream_0, NullSchema, false> SStreamV3ExtractorType_SV1_Extract_Combine_GetSStream_4;
    SStreamV3ExtractorType_SV1_Extract_Combine_GetSStream_4 * CreateExtractor_SV1_Extract_Combine_GetSStream_4(unique_ptr<SStreamV3ExtractorType_SV1_Extract_Combine_GetSStream_4> * extractor_ptr)
    {
        extractor_ptr->reset(new SStreamV3ExtractorType_SV1_Extract_Combine_GetSStream_4(4, "", UID_GetSStream_4));
        return extractor_ptr->get();
    }
#endif // defined(COMPILE_NATIVE)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_NATIVE)
    typedef SStreamExtractorV4<GetSStream_0_Data0, SStreamV3ExtractPolicy<GetSStream_0_Data0, UID_GetSStream_0, NullSchema>, UID_GetSStream_0, NullSchema, false> SStreamV3ExtractorType_SV1_Extract_Combine_GetSStream_8;
    SStreamV3ExtractorType_SV1_Extract_Combine_GetSStream_8 * CreateExtractor_SV1_Extract_Combine_GetSStream_8(unique_ptr<SStreamV3ExtractorType_SV1_Extract_Combine_GetSStream_8> * extractor_ptr)
    {
        extractor_ptr->reset(new SStreamV3ExtractorType_SV1_Extract_Combine_GetSStream_8(8, "", UID_GetSStream_8));
        return extractor_ptr->get();
    }
#endif // defined(COMPILE_NATIVE)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_NATIVE)
    typedef SStreamExtractorV4<GetSStream_0_Data0, SStreamV3ExtractPolicy<GetSStream_0_Data0, UID_GetSStream_0, NullSchema>, UID_GetSStream_0, NullSchema, false> SStreamV3ExtractorType_SV1_Extract_Combine_GetSStream_12;
    SStreamV3ExtractorType_SV1_Extract_Combine_GetSStream_12 * CreateExtractor_SV1_Extract_Combine_GetSStream_12(unique_ptr<SStreamV3ExtractorType_SV1_Extract_Combine_GetSStream_12> * extractor_ptr)
    {
        extractor_ptr->reset(new SStreamV3ExtractorType_SV1_Extract_Combine_GetSStream_12(12, "", UID_GetSStream_12));
        return extractor_ptr->get();
    }
#endif // defined(COMPILE_NATIVE)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_NATIVE)
    typedef SStreamExtractorV4<GetSStream_0_Data0, SStreamV3ExtractPolicy<GetSStream_0_Data0, UID_GetSStream_0, NullSchema>, UID_GetSStream_0, NullSchema, false> SStreamV3ExtractorType_SV1_Extract_Combine_GetSStream_16;
    SStreamV3ExtractorType_SV1_Extract_Combine_GetSStream_16 * CreateExtractor_SV1_Extract_Combine_GetSStream_16(unique_ptr<SStreamV3ExtractorType_SV1_Extract_Combine_GetSStream_16> * extractor_ptr)
    {
        extractor_ptr->reset(new SStreamV3ExtractorType_SV1_Extract_Combine_GetSStream_16(16, "", UID_GetSStream_16));
        return extractor_ptr->get();
    }
#endif // defined(COMPILE_NATIVE)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_NATIVE)
    typedef SStreamExtractorV4<GetSStream_0_Data0, SStreamV3ExtractPolicy<GetSStream_0_Data0, UID_GetSStream_0, NullSchema>, UID_GetSStream_0, NullSchema, false> SStreamV3ExtractorType_SV1_Extract_Combine_GetSStream_20;
    SStreamV3ExtractorType_SV1_Extract_Combine_GetSStream_20 * CreateExtractor_SV1_Extract_Combine_GetSStream_20(unique_ptr<SStreamV3ExtractorType_SV1_Extract_Combine_GetSStream_20> * extractor_ptr)
    {
        extractor_ptr->reset(new SStreamV3ExtractorType_SV1_Extract_Combine_GetSStream_20(20, "", UID_GetSStream_20));
        return extractor_ptr->get();
    }
#endif // defined(COMPILE_NATIVE)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_NATIVE)
    typedef SStreamExtractorV4<GetSStream_0_Data0, SStreamV3ExtractPolicy<GetSStream_0_Data0, UID_GetSStream_0, NullSchema>, UID_GetSStream_0, NullSchema, false> SStreamV3ExtractorType_SV1_Extract_Combine_GetSStream_24;
    SStreamV3ExtractorType_SV1_Extract_Combine_GetSStream_24 * CreateExtractor_SV1_Extract_Combine_GetSStream_24(unique_ptr<SStreamV3ExtractorType_SV1_Extract_Combine_GetSStream_24> * extractor_ptr)
    {
        extractor_ptr->reset(new SStreamV3ExtractorType_SV1_Extract_Combine_GetSStream_24(24, "", UID_GetSStream_24));
        return extractor_ptr->get();
    }
#endif // defined(COMPILE_NATIVE)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_NATIVE)
    typedef SStreamExtractorV4<GetSStream_0_Data0, SStreamV3ExtractPolicy<GetSStream_0_Data0, UID_GetSStream_0, NullSchema>, UID_GetSStream_0, NullSchema, false> SStreamV3ExtractorType_SV1_Extract_Combine_GetSStream_28;
    SStreamV3ExtractorType_SV1_Extract_Combine_GetSStream_28 * CreateExtractor_SV1_Extract_Combine_GetSStream_28(unique_ptr<SStreamV3ExtractorType_SV1_Extract_Combine_GetSStream_28> * extractor_ptr)
    {
        extractor_ptr->reset(new SStreamV3ExtractorType_SV1_Extract_Combine_GetSStream_28(28, "", UID_GetSStream_28));
        return extractor_ptr->get();
    }
#endif // defined(COMPILE_NATIVE)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



#if defined(COMPILE_NATIVE)
namespace ScopeGeneratedClasses
{
    extern "C" __declspec(dllexport) void __stdcall SV1_Extract_Combine_execute(std::string * argv, int argc, InputFileInfo* inputs, int inputCnt, OutputFileInfo* outputs, int outputCnt, VertexExecutionInfo * vertexExecutionInfo)
    {
#ifdef USE_SSE4_2
        // check CPUID to make sure this machine supports SSE4_2 instructions
        // - this is incase we download a cluster vertex and try and debug it on a machine that doesn't support these instructions
        int cpuInfo[4];
        __cpuid(cpuInfo, 0x00000001);
        //Array index | Bit range | Description 
        // 2          | 20        | SSE4.2 extensions
        if ((cpuInfo[2] & (1 << 20)) == 0)
        {
            throw RuntimeException(E_USER_ERROR, "Please recompile __ScopeCodeGenEngine__.dll without /DUSE_SSE4_2");
            return;
        }
#endif

        Configuration::Create(ET_Cosmos, GetCompilerSettings(), vertexExecutionInfo);
        SIZE_T x_inputBufSize, x_outputBufSize, x_inputVirtualMemoryLimit;
        int    x_inputBufCnt, x_outputBufCnt;
        
        MemoryManager::CalculateIOBufferSize(inputCnt, outputCnt, MemoryManager::x_vertexMemoryLimit, MemoryManager::x_vertexReserveMemory, x_inputBufSize, x_inputBufCnt, x_outputBufSize, x_outputBufCnt, x_inputVirtualMemoryLimit, false);

        const bool IsNativeOnlyVertex = false;
        unique_ptr<SStreamV3ExtractorType_SV1_Extract_Combine_GetSStream_0> extractor_0_ptr;
        SStreamV3ExtractorType_SV1_Extract_Combine_GetSStream_0 * extractor_0 = CreateExtractor_SV1_Extract_Combine_GetSStream_0(&extractor_0_ptr);
        ULONG extractor_0_count = 1;

        unique_ptr<SStreamV3ExtractorType_SV1_Extract_Combine_GetSStream_4> extractor_1_ptr;
        SStreamV3ExtractorType_SV1_Extract_Combine_GetSStream_4 * extractor_1 = CreateExtractor_SV1_Extract_Combine_GetSStream_4(&extractor_1_ptr);
        ULONG extractor_1_count = 1;

        unique_ptr<SStreamV3ExtractorType_SV1_Extract_Combine_GetSStream_8> extractor_2_ptr;
        SStreamV3ExtractorType_SV1_Extract_Combine_GetSStream_8 * extractor_2 = CreateExtractor_SV1_Extract_Combine_GetSStream_8(&extractor_2_ptr);
        ULONG extractor_2_count = 1;

        unique_ptr<SStreamV3ExtractorType_SV1_Extract_Combine_GetSStream_12> extractor_3_ptr;
        SStreamV3ExtractorType_SV1_Extract_Combine_GetSStream_12 * extractor_3 = CreateExtractor_SV1_Extract_Combine_GetSStream_12(&extractor_3_ptr);
        ULONG extractor_3_count = 1;

        unique_ptr<SStreamV3ExtractorType_SV1_Extract_Combine_GetSStream_16> extractor_4_ptr;
        SStreamV3ExtractorType_SV1_Extract_Combine_GetSStream_16 * extractor_4 = CreateExtractor_SV1_Extract_Combine_GetSStream_16(&extractor_4_ptr);
        ULONG extractor_4_count = 1;

        unique_ptr<SStreamV3ExtractorType_SV1_Extract_Combine_GetSStream_20> extractor_5_ptr;
        SStreamV3ExtractorType_SV1_Extract_Combine_GetSStream_20 * extractor_5 = CreateExtractor_SV1_Extract_Combine_GetSStream_20(&extractor_5_ptr);
        ULONG extractor_5_count = 1;

        unique_ptr<SStreamV3ExtractorType_SV1_Extract_Combine_GetSStream_24> extractor_6_ptr;
        SStreamV3ExtractorType_SV1_Extract_Combine_GetSStream_24 * extractor_6 = CreateExtractor_SV1_Extract_Combine_GetSStream_24(&extractor_6_ptr);
        ULONG extractor_6_count = 1;

        unique_ptr<SStreamV3ExtractorType_SV1_Extract_Combine_GetSStream_28> extractor_7_ptr;
        SStreamV3ExtractorType_SV1_Extract_Combine_GetSStream_28 * extractor_7 = CreateExtractor_SV1_Extract_Combine_GetSStream_28(&extractor_7_ptr);
        ULONG extractor_7_count = 1;

        // Define the type of the operator
        typedef FilterTransformer<SStreamV3ExtractorType_SV1_Extract_Combine_GetSStream_0, GetSStream_0_Data0, Process_1_Data0, UID_Process_1> FilterTransformerType_Process_1;
        // Construct operator and initialize it.
        unique_ptr<FilterTransformerType_Process_1> filterTransformer_Process_1_ptr (new FilterTransformerType_Process_1(extractor_0, UID_Process_1));
        FilterTransformerType_Process_1 * filterTransformer_Process_1 = filterTransformer_Process_1_ptr.get();
        ULONG filterTransformer_Process_1_count = 1;
        // Construct operator and initialize it.
        unique_ptr<OperatorDelegate<Process_1_Data0>> delegate_filterTransformer_Process_1_ptr (new OperatorDelegate<Process_1_Data0>(OperatorDelegate<Process_1_Data0>::FromOperator(filterTransformer_Process_1)));
        OperatorDelegate<Process_1_Data0> * delegate_filterTransformer_Process_1 = delegate_filterTransformer_Process_1_ptr.get();
        ULONG delegate_filterTransformer_Process_1_count = 1;
        // Define the type of the operator
        typedef ScopeProcessor<Process_1_Data0, Process_1_Data0> ProcessorType_Process_2;
        // Construct operator and initialize it.
        unique_ptr<ProcessorType_Process_2> processor_Process_2_ptr (new ProcessorType_Process_2(ScopeProcessorManagedFactory::Make<Process_1_Data0,Process_1_Data0,UID_Process_2>(delegate_filterTransformer_Process_1), delegate_filterTransformer_Process_1, UID_Process_2));
        ProcessorType_Process_2 * processor_Process_2 = processor_Process_2_ptr.get();
        ULONG processor_Process_2_count = 1;
        // Define the type of the operator
        typedef FilterTransformer<ProcessorType_Process_2, Process_1_Data0, Process_3_Data0, UID_Process_3> FilterTransformerType_Process_3;
        // Construct operator and initialize it.
        unique_ptr<FilterTransformerType_Process_3> filterTransformer_Process_3_ptr (new FilterTransformerType_Process_3(processor_Process_2, UID_Process_3));
        FilterTransformerType_Process_3 * filterTransformer_Process_3 = filterTransformer_Process_3_ptr.get();
        ULONG filterTransformer_Process_3_count = 1;
        // Define the type of the operator
        typedef FilterTransformer<SStreamV3ExtractorType_SV1_Extract_Combine_GetSStream_4, GetSStream_0_Data0, Process_1_Data0, UID_Process_5> FilterTransformerType_Process_5;
        // Construct operator and initialize it.
        unique_ptr<FilterTransformerType_Process_5> filterTransformer_Process_5_ptr (new FilterTransformerType_Process_5(extractor_1, UID_Process_5));
        FilterTransformerType_Process_5 * filterTransformer_Process_5 = filterTransformer_Process_5_ptr.get();
        ULONG filterTransformer_Process_5_count = 1;
        // Construct operator and initialize it.
        unique_ptr<OperatorDelegate<Process_1_Data0>> delegate_filterTransformer_Process_5_ptr (new OperatorDelegate<Process_1_Data0>(OperatorDelegate<Process_1_Data0>::FromOperator(filterTransformer_Process_5)));
        OperatorDelegate<Process_1_Data0> * delegate_filterTransformer_Process_5 = delegate_filterTransformer_Process_5_ptr.get();
        ULONG delegate_filterTransformer_Process_5_count = 1;
        // Define the type of the operator
        typedef ScopeProcessor<Process_1_Data0, Process_1_Data0> ProcessorType_Process_6;
        // Construct operator and initialize it.
        unique_ptr<ProcessorType_Process_6> processor_Process_6_ptr (new ProcessorType_Process_6(ScopeProcessorManagedFactory::Make<Process_1_Data0,Process_1_Data0,UID_Process_6>(delegate_filterTransformer_Process_5), delegate_filterTransformer_Process_5, UID_Process_6));
        ProcessorType_Process_6 * processor_Process_6 = processor_Process_6_ptr.get();
        ULONG processor_Process_6_count = 1;
        // Define the type of the operator
        typedef FilterTransformer<ProcessorType_Process_6, Process_1_Data0, Process_3_Data0, UID_Process_7> FilterTransformerType_Process_7;
        // Construct operator and initialize it.
        unique_ptr<FilterTransformerType_Process_7> filterTransformer_Process_7_ptr (new FilterTransformerType_Process_7(processor_Process_6, UID_Process_7));
        FilterTransformerType_Process_7 * filterTransformer_Process_7 = filterTransformer_Process_7_ptr.get();
        ULONG filterTransformer_Process_7_count = 1;
        // Define the type of the operator
        typedef FilterTransformer<SStreamV3ExtractorType_SV1_Extract_Combine_GetSStream_8, GetSStream_0_Data0, Process_1_Data0, UID_Process_9> FilterTransformerType_Process_9;
        // Construct operator and initialize it.
        unique_ptr<FilterTransformerType_Process_9> filterTransformer_Process_9_ptr (new FilterTransformerType_Process_9(extractor_2, UID_Process_9));
        FilterTransformerType_Process_9 * filterTransformer_Process_9 = filterTransformer_Process_9_ptr.get();
        ULONG filterTransformer_Process_9_count = 1;
        // Construct operator and initialize it.
        unique_ptr<OperatorDelegate<Process_1_Data0>> delegate_filterTransformer_Process_9_ptr (new OperatorDelegate<Process_1_Data0>(OperatorDelegate<Process_1_Data0>::FromOperator(filterTransformer_Process_9)));
        OperatorDelegate<Process_1_Data0> * delegate_filterTransformer_Process_9 = delegate_filterTransformer_Process_9_ptr.get();
        ULONG delegate_filterTransformer_Process_9_count = 1;
        // Define the type of the operator
        typedef ScopeProcessor<Process_1_Data0, Process_1_Data0> ProcessorType_Process_10;
        // Construct operator and initialize it.
        unique_ptr<ProcessorType_Process_10> processor_Process_10_ptr (new ProcessorType_Process_10(ScopeProcessorManagedFactory::Make<Process_1_Data0,Process_1_Data0,UID_Process_10>(delegate_filterTransformer_Process_9), delegate_filterTransformer_Process_9, UID_Process_10));
        ProcessorType_Process_10 * processor_Process_10 = processor_Process_10_ptr.get();
        ULONG processor_Process_10_count = 1;
        // Define the type of the operator
        typedef FilterTransformer<ProcessorType_Process_10, Process_1_Data0, Process_3_Data0, UID_Process_11> FilterTransformerType_Process_11;
        // Construct operator and initialize it.
        unique_ptr<FilterTransformerType_Process_11> filterTransformer_Process_11_ptr (new FilterTransformerType_Process_11(processor_Process_10, UID_Process_11));
        FilterTransformerType_Process_11 * filterTransformer_Process_11 = filterTransformer_Process_11_ptr.get();
        ULONG filterTransformer_Process_11_count = 1;
        // Define the type of the operator
        typedef FilterTransformer<SStreamV3ExtractorType_SV1_Extract_Combine_GetSStream_12, GetSStream_0_Data0, Process_1_Data0, UID_Process_13> FilterTransformerType_Process_13;
        // Construct operator and initialize it.
        unique_ptr<FilterTransformerType_Process_13> filterTransformer_Process_13_ptr (new FilterTransformerType_Process_13(extractor_3, UID_Process_13));
        FilterTransformerType_Process_13 * filterTransformer_Process_13 = filterTransformer_Process_13_ptr.get();
        ULONG filterTransformer_Process_13_count = 1;
        // Construct operator and initialize it.
        unique_ptr<OperatorDelegate<Process_1_Data0>> delegate_filterTransformer_Process_13_ptr (new OperatorDelegate<Process_1_Data0>(OperatorDelegate<Process_1_Data0>::FromOperator(filterTransformer_Process_13)));
        OperatorDelegate<Process_1_Data0> * delegate_filterTransformer_Process_13 = delegate_filterTransformer_Process_13_ptr.get();
        ULONG delegate_filterTransformer_Process_13_count = 1;
        // Define the type of the operator
        typedef ScopeProcessor<Process_1_Data0, Process_1_Data0> ProcessorType_Process_14;
        // Construct operator and initialize it.
        unique_ptr<ProcessorType_Process_14> processor_Process_14_ptr (new ProcessorType_Process_14(ScopeProcessorManagedFactory::Make<Process_1_Data0,Process_1_Data0,UID_Process_14>(delegate_filterTransformer_Process_13), delegate_filterTransformer_Process_13, UID_Process_14));
        ProcessorType_Process_14 * processor_Process_14 = processor_Process_14_ptr.get();
        ULONG processor_Process_14_count = 1;
        // Define the type of the operator
        typedef FilterTransformer<ProcessorType_Process_14, Process_1_Data0, Process_3_Data0, UID_Process_15> FilterTransformerType_Process_15;
        // Construct operator and initialize it.
        unique_ptr<FilterTransformerType_Process_15> filterTransformer_Process_15_ptr (new FilterTransformerType_Process_15(processor_Process_14, UID_Process_15));
        FilterTransformerType_Process_15 * filterTransformer_Process_15 = filterTransformer_Process_15_ptr.get();
        ULONG filterTransformer_Process_15_count = 1;
        // Define the type of the operator
        typedef FilterTransformer<SStreamV3ExtractorType_SV1_Extract_Combine_GetSStream_16, GetSStream_0_Data0, Process_1_Data0, UID_Process_17> FilterTransformerType_Process_17;
        // Construct operator and initialize it.
        unique_ptr<FilterTransformerType_Process_17> filterTransformer_Process_17_ptr (new FilterTransformerType_Process_17(extractor_4, UID_Process_17));
        FilterTransformerType_Process_17 * filterTransformer_Process_17 = filterTransformer_Process_17_ptr.get();
        ULONG filterTransformer_Process_17_count = 1;
        // Construct operator and initialize it.
        unique_ptr<OperatorDelegate<Process_1_Data0>> delegate_filterTransformer_Process_17_ptr (new OperatorDelegate<Process_1_Data0>(OperatorDelegate<Process_1_Data0>::FromOperator(filterTransformer_Process_17)));
        OperatorDelegate<Process_1_Data0> * delegate_filterTransformer_Process_17 = delegate_filterTransformer_Process_17_ptr.get();
        ULONG delegate_filterTransformer_Process_17_count = 1;
        // Define the type of the operator
        typedef ScopeProcessor<Process_1_Data0, Process_1_Data0> ProcessorType_Process_18;
        // Construct operator and initialize it.
        unique_ptr<ProcessorType_Process_18> processor_Process_18_ptr (new ProcessorType_Process_18(ScopeProcessorManagedFactory::Make<Process_1_Data0,Process_1_Data0,UID_Process_18>(delegate_filterTransformer_Process_17), delegate_filterTransformer_Process_17, UID_Process_18));
        ProcessorType_Process_18 * processor_Process_18 = processor_Process_18_ptr.get();
        ULONG processor_Process_18_count = 1;
        // Define the type of the operator
        typedef FilterTransformer<ProcessorType_Process_18, Process_1_Data0, Process_3_Data0, UID_Process_19> FilterTransformerType_Process_19;
        // Construct operator and initialize it.
        unique_ptr<FilterTransformerType_Process_19> filterTransformer_Process_19_ptr (new FilterTransformerType_Process_19(processor_Process_18, UID_Process_19));
        FilterTransformerType_Process_19 * filterTransformer_Process_19 = filterTransformer_Process_19_ptr.get();
        ULONG filterTransformer_Process_19_count = 1;
        // Define the type of the operator
        typedef FilterTransformer<SStreamV3ExtractorType_SV1_Extract_Combine_GetSStream_20, GetSStream_0_Data0, Process_1_Data0, UID_Process_21> FilterTransformerType_Process_21;
        // Construct operator and initialize it.
        unique_ptr<FilterTransformerType_Process_21> filterTransformer_Process_21_ptr (new FilterTransformerType_Process_21(extractor_5, UID_Process_21));
        FilterTransformerType_Process_21 * filterTransformer_Process_21 = filterTransformer_Process_21_ptr.get();
        ULONG filterTransformer_Process_21_count = 1;
        // Construct operator and initialize it.
        unique_ptr<OperatorDelegate<Process_1_Data0>> delegate_filterTransformer_Process_21_ptr (new OperatorDelegate<Process_1_Data0>(OperatorDelegate<Process_1_Data0>::FromOperator(filterTransformer_Process_21)));
        OperatorDelegate<Process_1_Data0> * delegate_filterTransformer_Process_21 = delegate_filterTransformer_Process_21_ptr.get();
        ULONG delegate_filterTransformer_Process_21_count = 1;
        // Define the type of the operator
        typedef ScopeProcessor<Process_1_Data0, Process_1_Data0> ProcessorType_Process_22;
        // Construct operator and initialize it.
        unique_ptr<ProcessorType_Process_22> processor_Process_22_ptr (new ProcessorType_Process_22(ScopeProcessorManagedFactory::Make<Process_1_Data0,Process_1_Data0,UID_Process_22>(delegate_filterTransformer_Process_21), delegate_filterTransformer_Process_21, UID_Process_22));
        ProcessorType_Process_22 * processor_Process_22 = processor_Process_22_ptr.get();
        ULONG processor_Process_22_count = 1;
        // Define the type of the operator
        typedef FilterTransformer<ProcessorType_Process_22, Process_1_Data0, Process_3_Data0, UID_Process_23> FilterTransformerType_Process_23;
        // Construct operator and initialize it.
        unique_ptr<FilterTransformerType_Process_23> filterTransformer_Process_23_ptr (new FilterTransformerType_Process_23(processor_Process_22, UID_Process_23));
        FilterTransformerType_Process_23 * filterTransformer_Process_23 = filterTransformer_Process_23_ptr.get();
        ULONG filterTransformer_Process_23_count = 1;
        // Define the type of the operator
        typedef FilterTransformer<SStreamV3ExtractorType_SV1_Extract_Combine_GetSStream_24, GetSStream_0_Data0, Process_1_Data0, UID_Process_25> FilterTransformerType_Process_25;
        // Construct operator and initialize it.
        unique_ptr<FilterTransformerType_Process_25> filterTransformer_Process_25_ptr (new FilterTransformerType_Process_25(extractor_6, UID_Process_25));
        FilterTransformerType_Process_25 * filterTransformer_Process_25 = filterTransformer_Process_25_ptr.get();
        ULONG filterTransformer_Process_25_count = 1;
        // Construct operator and initialize it.
        unique_ptr<OperatorDelegate<Process_1_Data0>> delegate_filterTransformer_Process_25_ptr (new OperatorDelegate<Process_1_Data0>(OperatorDelegate<Process_1_Data0>::FromOperator(filterTransformer_Process_25)));
        OperatorDelegate<Process_1_Data0> * delegate_filterTransformer_Process_25 = delegate_filterTransformer_Process_25_ptr.get();
        ULONG delegate_filterTransformer_Process_25_count = 1;
        // Define the type of the operator
        typedef ScopeProcessor<Process_1_Data0, Process_1_Data0> ProcessorType_Process_26;
        // Construct operator and initialize it.
        unique_ptr<ProcessorType_Process_26> processor_Process_26_ptr (new ProcessorType_Process_26(ScopeProcessorManagedFactory::Make<Process_1_Data0,Process_1_Data0,UID_Process_26>(delegate_filterTransformer_Process_25), delegate_filterTransformer_Process_25, UID_Process_26));
        ProcessorType_Process_26 * processor_Process_26 = processor_Process_26_ptr.get();
        ULONG processor_Process_26_count = 1;
        // Define the type of the operator
        typedef FilterTransformer<ProcessorType_Process_26, Process_1_Data0, Process_3_Data0, UID_Process_27> FilterTransformerType_Process_27;
        // Construct operator and initialize it.
        unique_ptr<FilterTransformerType_Process_27> filterTransformer_Process_27_ptr (new FilterTransformerType_Process_27(processor_Process_26, UID_Process_27));
        FilterTransformerType_Process_27 * filterTransformer_Process_27 = filterTransformer_Process_27_ptr.get();
        ULONG filterTransformer_Process_27_count = 1;
        // Define the type of the operator
        typedef FilterTransformer<SStreamV3ExtractorType_SV1_Extract_Combine_GetSStream_28, GetSStream_0_Data0, Process_1_Data0, UID_Process_29> FilterTransformerType_Process_29;
        // Construct operator and initialize it.
        unique_ptr<FilterTransformerType_Process_29> filterTransformer_Process_29_ptr (new FilterTransformerType_Process_29(extractor_7, UID_Process_29));
        FilterTransformerType_Process_29 * filterTransformer_Process_29 = filterTransformer_Process_29_ptr.get();
        ULONG filterTransformer_Process_29_count = 1;
        // Construct operator and initialize it.
        unique_ptr<OperatorDelegate<Process_1_Data0>> delegate_filterTransformer_Process_29_ptr (new OperatorDelegate<Process_1_Data0>(OperatorDelegate<Process_1_Data0>::FromOperator(filterTransformer_Process_29)));
        OperatorDelegate<Process_1_Data0> * delegate_filterTransformer_Process_29 = delegate_filterTransformer_Process_29_ptr.get();
        ULONG delegate_filterTransformer_Process_29_count = 1;
        // Define the type of the operator
        typedef ScopeProcessor<Process_1_Data0, Process_1_Data0> ProcessorType_Process_30;
        // Construct operator and initialize it.
        unique_ptr<ProcessorType_Process_30> processor_Process_30_ptr (new ProcessorType_Process_30(ScopeProcessorManagedFactory::Make<Process_1_Data0,Process_1_Data0,UID_Process_30>(delegate_filterTransformer_Process_29), delegate_filterTransformer_Process_29, UID_Process_30));
        ProcessorType_Process_30 * processor_Process_30 = processor_Process_30_ptr.get();
        ULONG processor_Process_30_count = 1;
        // Define the type of the operator
        typedef FilterTransformer<ProcessorType_Process_30, Process_1_Data0, Process_3_Data0, UID_Process_31> FilterTransformerType_Process_31;
        // Construct operator and initialize it.
        unique_ptr<FilterTransformerType_Process_31> filterTransformer_Process_31_ptr (new FilterTransformerType_Process_31(processor_Process_30, UID_Process_31));
        FilterTransformerType_Process_31 * filterTransformer_Process_31 = filterTransformer_Process_31_ptr.get();
        ULONG filterTransformer_Process_31_count = 1;
        // Construct combined operator and initialize it
        unique_ptr<OperatorDelegate<Process_3_Data0>> delegate_1AFBD7C71BF1A2A3_array[8];
        delegate_1AFBD7C71BF1A2A3_array[0].reset(new OperatorDelegate<Process_3_Data0>(filterTransformer_Process_3));
        delegate_1AFBD7C71BF1A2A3_array[1].reset(new OperatorDelegate<Process_3_Data0>(filterTransformer_Process_7));
        delegate_1AFBD7C71BF1A2A3_array[2].reset(new OperatorDelegate<Process_3_Data0>(filterTransformer_Process_11));
        delegate_1AFBD7C71BF1A2A3_array[3].reset(new OperatorDelegate<Process_3_Data0>(filterTransformer_Process_15));
        delegate_1AFBD7C71BF1A2A3_array[4].reset(new OperatorDelegate<Process_3_Data0>(filterTransformer_Process_19));
        delegate_1AFBD7C71BF1A2A3_array[5].reset(new OperatorDelegate<Process_3_Data0>(filterTransformer_Process_23));
        delegate_1AFBD7C71BF1A2A3_array[6].reset(new OperatorDelegate<Process_3_Data0>(filterTransformer_Process_27));
        delegate_1AFBD7C71BF1A2A3_array[7].reset(new OperatorDelegate<Process_3_Data0>(filterTransformer_Process_31));
        OperatorDelegate<Process_3_Data0> ** delegate_1AFBD7C71BF1A2A3 = (OperatorDelegate<Process_3_Data0> **)delegate_1AFBD7C71BF1A2A3_array;
        // Define the type of the operator
        typedef Merger<OperatorDelegate<Process_3_Data0>, Process_3_Data0, ScopeUnionAll<OperatorDelegate<Process_3_Data0>, Process_3_Data0>, UID_Aggregate_32> AggregateType_Aggregate_32;
        ULONG unionall_groupSize_Aggregate_32 = 8 > (ULONG)IOManager::x_readThrottlingLimit ? (ULONG)sqrt((float)8):8;
        ULONG unionall_groupNum_Aggregate_32 = (ULONG)(8 + unionall_groupSize_Aggregate_32 -1) / unionall_groupSize_Aggregate_32;

        // Allocate union all pointer array
        unique_ptr<unique_ptr<AggregateType_Aggregate_32>[]> unionall_Aggregate_32_array(new unique_ptr<AggregateType_Aggregate_32>[unionall_groupNum_Aggregate_32]);
        
        // Construct merger objects
        for (ULONG i = 0, operatorStartOffset = 0; i < unionall_groupNum_Aggregate_32; i++, operatorStartOffset += unionall_groupSize_Aggregate_32)
        {
            ULONG operatorNum = min(8 - operatorStartOffset, unionall_groupSize_Aggregate_32);

            unionall_Aggregate_32_array[i].reset(new AggregateType_Aggregate_32(delegate_1AFBD7C71BF1A2A3 + operatorStartOffset, operatorNum, UID_Aggregate_32));
        }

        // Construct a local typed variable for merger array      
        AggregateType_Aggregate_32 ** aggregate_Aggregate_32 = (AggregateType_Aggregate_32 **)unionall_Aggregate_32_array.get();
        ULONG aggregate_Aggregate_32_count = unionall_groupNum_Aggregate_32;
        // Merge streams N->1
        typedef ParallelUnionAll<AggregateType_Aggregate_32, Process_3_Data0, IsNativeOnlyVertex> UnionAllType_Aggregate_32_SV1_Extract_Combine_out0_connector;
        unique_ptr<UnionAllType_Aggregate_32_SV1_Extract_Combine_out0_connector> unionall_Aggregate_32_SV1_Extract_Combine_out0_connector_ptr(new UnionAllType_Aggregate_32_SV1_Extract_Combine_out0_connector(aggregate_Aggregate_32,aggregate_Aggregate_32_count,false,UID_ParallelUnionAll_Aggregate_32));
        UnionAllType_Aggregate_32_SV1_Extract_Combine_out0_connector * unionall_Aggregate_32_SV1_Extract_Combine_out0_connector = unionall_Aggregate_32_SV1_Extract_Combine_out0_connector_ptr.get();
        ULONG unionall_Aggregate_32_SV1_Extract_Combine_out0_connector_count = 1;
        // Define outputer type
        typedef Outputer<UnionAllType_Aggregate_32_SV1_Extract_Combine_out0_connector, Process_3_Data0, TextOutputPolicy<Process_3_Data0, UID_SV1_Extract_Combine_out0>, TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, true, false, false, false, Default, false, CharFormat_uint16>, CosmosOutput>, false> OutputerType1_SV1_Extract_Combine;
        // Construct operator and initialize it
        unique_ptr<OutputerType1_SV1_Extract_Combine> outputer_SV1_Extract_Combine_out0_ptr(new OutputerType1_SV1_Extract_Combine(unionall_Aggregate_32_SV1_Extract_Combine_out0_connector, outputs[0].outputFileName, false, x_outputBufSize, x_outputBufCnt, OutputStreamParameters(',', "\r\n", '\0', static_cast<const char*>(__nullptr), false, true, false, false, NULL, Default, false, CharFormat_uint16), UID_SV1_Extract_Combine_out0));
        OutputerType1_SV1_Extract_Combine * outputer_SV1_Extract_Combine_out0 = outputer_SV1_Extract_Combine_out0_ptr.get();
        try
        {
            // Init operator chain
            outputer_SV1_Extract_Combine_out0->Init();

            // Execute the whole vertex by calling the GetNextRow on top operator
            Process_3_Data0 row;
            outputer_SV1_Extract_Combine_out0->GetNextRow(row);

            // Close operator chain
            outputer_SV1_Extract_Combine_out0->Close();
        }
        catch (const ExceptionWithStack& ex)
        {
            if (vertexExecutionInfo->m_reportStatusFunc != NULL)
            {
                ErrorManager::GetGlobal()->SetError(std::current_exception(), "VertexExecute");
                vertexExecutionInfo->m_reportStatusFunc(vertexExecutionInfo->m_statusReportContext);
            }
            
            std::cout << "Caught exception: " << ex.what() << std::endl << ex.GetStack() << std::endl;
            throw;
        }


        // Write out execution stats
        MemoryManager::GetGlobal()->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
        outputer_SV1_Extract_Combine_out0->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
    }
}
#endif // defined(COMPILE_NATIVE)

#if defined(COMPILE_MANAGED)
template ScopeProcessorManaged<Process_1_Data0, Process_1_Data0> * ScopeEngine::ScopeProcessorManagedFactory::Make<Process_1_Data0, Process_1_Data0, UID_Process_2>(OperatorDelegate<Process_1_Data0>*);
template ScopeProcessorManaged<Process_1_Data0, Process_1_Data0> * ScopeEngine::ScopeProcessorManagedFactory::Make<Process_1_Data0, Process_1_Data0, UID_Process_6>(OperatorDelegate<Process_1_Data0>*);
template ScopeProcessorManaged<Process_1_Data0, Process_1_Data0> * ScopeEngine::ScopeProcessorManagedFactory::Make<Process_1_Data0, Process_1_Data0, UID_Process_10>(OperatorDelegate<Process_1_Data0>*);
template ScopeProcessorManaged<Process_1_Data0, Process_1_Data0> * ScopeEngine::ScopeProcessorManagedFactory::Make<Process_1_Data0, Process_1_Data0, UID_Process_14>(OperatorDelegate<Process_1_Data0>*);
template ScopeProcessorManaged<Process_1_Data0, Process_1_Data0> * ScopeEngine::ScopeProcessorManagedFactory::Make<Process_1_Data0, Process_1_Data0, UID_Process_18>(OperatorDelegate<Process_1_Data0>*);
template ScopeProcessorManaged<Process_1_Data0, Process_1_Data0> * ScopeEngine::ScopeProcessorManagedFactory::Make<Process_1_Data0, Process_1_Data0, UID_Process_22>(OperatorDelegate<Process_1_Data0>*);
template ScopeProcessorManaged<Process_1_Data0, Process_1_Data0> * ScopeEngine::ScopeProcessorManagedFactory::Make<Process_1_Data0, Process_1_Data0, UID_Process_26>(OperatorDelegate<Process_1_Data0>*);
template ScopeProcessorManaged<Process_1_Data0, Process_1_Data0> * ScopeEngine::ScopeProcessorManagedFactory::Make<Process_1_Data0, Process_1_Data0, UID_Process_30>(OperatorDelegate<Process_1_Data0>*);
#endif // defined(COMPILE_MANAGED)
#if defined(COMPILE_NATIVE)
#endif // defined(COMPILE_NATIVE)

#endif
#pragma endregion SV1_Extract_Combine
// Empty footer
