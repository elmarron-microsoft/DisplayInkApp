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
UID_Process_4 = 9,
UID_Process_4_Data0 = 10,
UID_Process_5 = 11,
UID_SV1_Extract_out0 = 12,
UID_GetSStream_6 = 13,
UID_GetSStream_6_Data0 = 14,
UID_Process_7 = 15,
UID_Process_7_Data0 = 16,
UID_Process_8 = 17,
UID_Process_8_Data0 = 18,
UID_Process_9 = 19,
UID_Process_9_Data0 = 20,
UID_Process_10 = 21,
UID_Process_10_Data0 = 22,
UID_Process_11 = 23,
UID_SV2_Extract_out0 = 24,
UID_GetSStream_12 = 25,
UID_GetSStream_12_Data0 = 26,
UID_Process_13 = 27,
UID_Process_13_Data0 = 28,
UID_Process_14 = 29,
UID_Process_14_Data0 = 30,
UID_Process_15 = 31,
UID_Process_15_Data0 = 32,
UID_Process_16 = 33,
UID_Process_16_Data0 = 34,
UID_Process_17 = 35,
UID_SV3_Extract_out0 = 36,
UID_GetSStream_18 = 37,
UID_GetSStream_18_Data0 = 38,
UID_Process_19 = 39,
UID_Process_19_Data0 = 40,
UID_Process_20 = 41,
UID_Process_20_Data0 = 42,
UID_Process_21 = 43,
UID_Process_21_Data0 = 44,
UID_Process_22 = 45,
UID_Process_22_Data0 = 46,
UID_Process_23 = 47,
UID_SV4_Extract_out0 = 48,
UID_GetSStream_24 = 49,
UID_GetSStream_24_Data0 = 50,
UID_Process_25 = 51,
UID_Process_25_Data0 = 52,
UID_Process_26 = 53,
UID_Process_26_Data0 = 54,
UID_Process_27 = 55,
UID_Process_27_Data0 = 56,
UID_Process_28 = 57,
UID_Process_28_Data0 = 58,
UID_Process_29 = 59,
UID_SV5_Extract_out0 = 60,
UID_Aggregate_30 = 61,
UID_Aggregate_30_Data0 = 62,
UID_Process_31 = 63,
UID_Process_31_Data0 = 64,
UID_SV6_Combine_out0 = 65,
UID_Process_2_Prefix,
UID_Process_9_Prefix,
UID_Process_15_Prefix,
UID_Process_20_Prefix,
UID_Process_27_Prefix
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
        FString m_RecognizedText;
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
                std::string{ u8"RowGuid:Guid,InputLanguage:string,RecognizedText:string,InkIsf:string" },
                reinterpret_cast<const char*>(&row),
                os);

            return os;
        }
    };

    class Process_1_Data0
    {
    public:
        ScopeGuid m_RowGuid;
        FString m_RecognizedText;
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
                std::string{ u8"RowGuid:Guid,RecognizedText:string,InkIsf:string" },
                reinterpret_cast<const char*>(&row),
                os);

            return os;
        }
    };

    class Process_4_Data0
    {
    public:
        ScopeGuid m_RowGuid;
        FString m_RecognizedText;
        int m_RecoLength;
        FString m_InkIsf;
        double m_Weight;
        Process_4_Data0();
        Process_4_Data0(const Process_4_Data0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        Process_4_Data0(const Process_4_Data0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }

        friend std::ostream& operator<<(std::ostream& os, const Process_4_Data0& row)
        {

            ScopeEngine::OutputRowContent(
                std::string{ u8"RowGuid:Guid,RecognizedText:string,RecoLength:int,InkIsf:string,Weight:double" },
                reinterpret_cast<const char*>(&row),
                os);

            return os;
        }
    };

#if defined(COMPILE_MANAGED)
    template<>
    struct ManagedRow<Process_1_Data0>
    {
        typedef ___Scope_Generated_Classes___::Row_RowGuid_Guid_RecognizedText_String_InkIsf_String Row;

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
    template<>
    struct ManagedRow<Process_4_Data0>
    {
        typedef ___Scope_Generated_Classes___::Row_193825B98C8C2D67 Row;

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

    template class ManagedRowFactory<Process_4_Data0>;    

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

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class BinaryExtractPolicy<Process_4_Data0>
    {
    public:
        static bool Deserialize(BinaryInputStream * input, Process_4_Data0 & row)
        {
            try
            {
                char b = 0;
                input->Read(b);
                if (b==0)
                {
                    input->Read(row.m_RowGuid);
                    input->Read(row.m_RecognizedText);
                    input->Read(row.m_RecoLength);
                    input->Read(row.m_InkIsf);
                    input->Read(row.m_Weight);
                }
                else
                {
                    char ___masking___[1];
                    ___masking___[0] = b;
                    input->Read(row.m_RowGuid);
                    if ((___masking___[0] & 2 ) != 2)
                    {
                        input->Read(row.m_RecognizedText);
                    }
                    else
                    {
                        row.m_RecognizedText.SetNull();
                    }
                    input->Read(row.m_RecoLength);
                    if ((___masking___[0] & 4 ) != 4)
                    {
                        input->Read(row.m_InkIsf);
                    }
                    else
                    {
                        row.m_InkIsf.SetNull();
                    }
                    input->Read(row.m_Weight);
                }
            }
            catch (ScopeStreamException &) 
            {
                // we reach the end of file
                return false;
            }

            return true;
        }
    };
#endif // defined(COMPILE_NATIVE)

    template<> 
    class BinaryOutputPolicy<Process_4_Data0>
    {
    public:
    
        static void SerializeHeader(BinaryOutputStream * output)
        {
            SCOPE_ASSERT(!"BinaryOutputPolicy::SerializeHeader method should not be invoked.");
        }
        
        __declspec(noinline) static void Serialize(BinaryOutputStream * output, Process_4_Data0 & row)
        {
            SIZE_T rowStart =  output->GetOutputer().GetCurrentPosition();
            char b = 0;
            char ___masking___[1];
            ___masking___[0] = 1;
            bool hasNull = false;
            if (row.m_RecognizedText.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 2;
            }
            if (row.m_InkIsf.IsNull())
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
            output->Write(row.m_RowGuid);
            if (!row.m_RecognizedText.IsNull())
            {
                output->Write(row.m_RecognizedText);
            }
            output->Write(row.m_RecoLength);
            if (!row.m_InkIsf.IsNull())
            {
                output->Write(row.m_InkIsf);
            }
            output->Write(row.m_Weight);
            SIZE_T rowSize =  output->GetOutputer().GetCurrentPosition() - rowStart;
            auto rowLimit = ScopeEngine::Configuration::GetGlobal().GetMaxOnDiskRowSize();
            if (rowSize > rowLimit)
            {
                std::stringstream ss;
                ss << row << std::endl;
                throw RuntimeException(E_USER_ONDISKROW_TOO_BIG, {rowSize, rowLimit, ss.str()});
            }
        }
        static void Serialize(DummyOutputStream * output, const Process_4_Data0 & row)
        {
            SCOPE_ASSERT(false); 
        }
            static void SerializeKeyForSS(MemoryOutputStream* output, const Process_4_Data0 & row)
            {
                STRUCTURED_DATA_ASSERT(false); // there is no partition key in the schema
            }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class BinaryExtractPolicy<Process_1_Data0>
    {
    public:
        static bool Deserialize(BinaryInputStream * input, Process_1_Data0 & row)
        {
            try
            {
                char b = 0;
                input->Read(b);
                if (b==0)
                {
                    input->Read(row.m_RowGuid);
                    input->Read(row.m_RecognizedText);
                    input->Read(row.m_InkIsf);
                }
                else
                {
                    char ___masking___[1];
                    ___masking___[0] = b;
                    input->Read(row.m_RowGuid);
                    if ((___masking___[0] & 2 ) != 2)
                    {
                        input->Read(row.m_RecognizedText);
                    }
                    else
                    {
                        row.m_RecognizedText.SetNull();
                    }
                    if ((___masking___[0] & 4 ) != 4)
                    {
                        input->Read(row.m_InkIsf);
                    }
                    else
                    {
                        row.m_InkIsf.SetNull();
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
    };
#endif // defined(COMPILE_NATIVE)

    template<> 
    class BinaryOutputPolicy<Process_1_Data0>
    {
    public:
    
        static void SerializeHeader(BinaryOutputStream * output)
        {
            SCOPE_ASSERT(!"BinaryOutputPolicy::SerializeHeader method should not be invoked.");
        }
        
        __declspec(noinline) static void Serialize(BinaryOutputStream * output, Process_1_Data0 & row)
        {
            SIZE_T rowStart =  output->GetOutputer().GetCurrentPosition();
            char b = 0;
            char ___masking___[1];
            ___masking___[0] = 1;
            bool hasNull = false;
            if (row.m_RecognizedText.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 2;
            }
            if (row.m_InkIsf.IsNull())
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
            output->Write(row.m_RowGuid);
            if (!row.m_RecognizedText.IsNull())
            {
                output->Write(row.m_RecognizedText);
            }
            if (!row.m_InkIsf.IsNull())
            {
                output->Write(row.m_InkIsf);
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
        static void Serialize(DummyOutputStream * output, const Process_1_Data0 & row)
        {
            SCOPE_ASSERT(false); 
        }
            static void SerializeKeyForSS(MemoryOutputStream* output, const Process_1_Data0 & row)
            {
                STRUCTURED_DATA_ASSERT(false); // there is no partition key in the schema
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
    INLINE Process_1_Data0::Process_1_Data0(const Process_1_Data0 & c, IncrementalAllocator * alloc) :
            m_RowGuid(c.m_RowGuid),
            m_RecognizedText(c.m_RecognizedText, alloc),
            m_InkIsf(c.m_InkIsf, alloc)
    {
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE Process_4_Data0::Process_4_Data0()
    {
        m_RecoLength = 0;
        m_Weight = 0.0;
    }

#pragma endregion Schema Constructors
// SV1_EXTRACT SV2_EXTRACT SV3_EXTRACT SV4_EXTRACT SV5_EXTRACT 
#pragma region shared code 
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
            static string* spDataSchemaString = new string(std::string{ u8"<?xml version=\"1.0\"?>\r\n<Schema>\r\n  <Format>1</Format>\r\n  <Columns>\r\n    <Column>\r\n      <Name>RowGuid</Name>\r\n      <Type>Guid</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>isLabeled</Name>\r\n      <Type>bool</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>ModelHash</Name>\r\n      <Type>int</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>UserHash</Name>\r\n      <Type>int</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>DateId</Name>\r\n      <Type>int</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>CountryCode</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>InputLanguage</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>OsVer</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>Branch</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>OSUILocale</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>DeviceModel</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>OEMName</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>OEMModel</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>AppId</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>AppVer</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>CandidateText</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>CandidateIndex</Name>\r\n      <Type>ulong?</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>IsCandidateFromReco</Name>\r\n      <Type>bool?</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>RecognizedText</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>IsAppend</Name>\r\n      <Type>bool?</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>WritingRectLeft</Name>\r\n      <Type>double?</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>WritingRectTop</Name>\r\n      <Type>double?</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>WritingRectRight</Name>\r\n      <Type>double?</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>WritingRectBottom</Name>\r\n      <Type>double?</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>DrawingRectLeft</Name>\r\n      <Type>double?</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>DrawingRectTop</Name>\r\n      <Type>double?</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>DrawingRectRight</Name>\r\n      <Type>double?</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>DrawingRectBottom</Name>\r\n      <Type>double?</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>BoundingRectLeft</Name>\r\n      <Type>double?</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>BoundingRectTop</Name>\r\n      <Type>double?</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>BoundingRectRight</Name>\r\n      <Type>double?</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>BoundingRectBottom</Name>\r\n      <Type>double?</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>Midline</Name>\r\n      <Type>ulong?</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>Rows</Name>\r\n      <Type>ulong?</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>Column</Name>\r\n      <Type>long?</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>FontFace</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>FontSize</Name>\r\n      <Type>double?</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>PreContext</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>PreviousWordRects</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>Candidates</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>InputScope</Name>\r\n      <Type>ulong?</Type>\r\n    </Column>\r\n    <Column>\r\n      <Name>InkIsf</Name>\r\n      <Type>string</Type>\r\n    </Column>\r\n  </Columns>\r\n</Schema>" });
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
                0,
                8,
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
        static const UINT m_dataColumnSizesCnt = 42;

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
            STRUCTURED_DATA_ASSERT(iters[18].HasData(blockEnd));
            if (iters[18].IsNull())
            {
                row.m_RecognizedText.SetNull();
            }
            else
            {
                row.m_RecognizedText.CopyFromNotNull((FString::PointerType)iters[18].DataRaw(), (int)iters[18].Length(), alloc);
            }
            STRUCTURED_DATA_ASSERT(iters[41].HasData(blockEnd));
            if (iters[41].IsNull())
            {
                row.m_InkIsf.SetNull();
            }
            else
            {
                row.m_InkIsf.CopyFromNotNull((FString::PointerType)iters[41].DataRaw(), (int)iters[41].Length(), alloc);
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
            if (iters[18].IsNull())
            {
                iters[18].IncrementNull();
            }
            else
            {
                iters[18].IncrementVariable();
            }
            if (iters[41].IsNull())
            {
                iters[41].IncrementNull();
            }
            else
            {
                iters[41].IncrementVariable();
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
#pragma endregion shared code 
// SV1_EXTRACT SV2_EXTRACT SV3_EXTRACT SV4_EXTRACT SV5_EXTRACT 
#pragma region shared code 
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<Process_1_Data0,UID_Process_2>
    {
    public:
        struct KeyStruct
        {
            ScopeGuid m_RowGuid;

            KeyStruct(Process_1_Data0 & c) :
                m_RowGuid(c.m_RowGuid)
            {
            }

            KeyStruct(const Process_1_Data0 & c, IncrementalAllocator * alloc) :
                m_RowGuid(const_cast<Process_1_Data0&>(c).m_RowGuid)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_RowGuid(c.m_RowGuid)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_RowGuid(const_cast<KeyStruct&>(c).m_RowGuid)
            {
            }

            KeyStruct() :
                m_RowGuid()
            {
            }

            friend std::ostream& operator<<(std::ostream& os, const KeyStruct& row)
            {

                ScopeEngine::OutputRowContent(
                    std::string{ u8"RowGuid:Guid" },
                    reinterpret_cast<const char*>(&row),
                    os);

                return os;
            }
        };

        typedef KeyStruct KeyType;

        static int Compare(Process_1_Data0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_RowGuid, key.m_RowGuid)) != 0)
                return r;
            return r;
        }

        static int Compare(Process_1_Data0 * n1, Process_1_Data0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_RowGuid, (*n2).m_RowGuid)) != 0)
                return r;
            return r;
        }

        // Key function for MKQsort algorithm
        static __int64 Key(Process_1_Data0 * p, int depth)
        {

            return 0;
        }

        // End of Key function for MKQSort algorithm
        static bool EofKey(Process_1_Data0 * p, int depth)
        {
            return true;
        }
    };


#pragma endregion shared code 
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
#pragma region SV1_Extract
#if defined(COMPILE_SV1_EXTRACT) || defined(COMPILE_ALL_VERTICES)
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
        "InputLanguage == \"en-us\"",
        "RowGuid",
        "RecognizedText",
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
                if (input.m_InputLanguage == staticconstant_0)
                {

                    exceptionIndex++;
                    output.m_RowGuid = input.m_RowGuid;
                    exceptionIndex++;
                    output.m_RecognizedText = input.m_RecognizedText;
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

            #pragma warning(push)
            #pragma warning(disable: 4100) // 'alloc': unreferenced formal parameter
            static void InitializeStatics(IncrementalAllocator * alloc)
            {
            #pragma warning(pop)
                staticconstant_0 = FString("en-us", 5);
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


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<>
    class RowTransformPolicy<Process_1_Data0, Process_1_Data0, UID_Process_3>
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
    struct ManagedUDO<UID_Process_3>
    {
        typedef ScopeRuntime::Processor UDO;

        ManagedUDO(std::string * argv, int argc)
        {
            try
            {
                m_udo.reset(___Scope_Generated_Classes___::__OperatorFactory__::Create_Process_3());
                m_args.reset(gcnew Generic::List<String^>(ConvertArgsToArray(std::wstring{ L"-produce RowGuid,#_InputLanguage,#_RecognizedText,#_WritingRectRight,#_InkIsf -skipValidation" })));
            }
            catch (Exception ^ex)
            {
                ScopeEngineManaged::UserExceptionHelper::WrapUserException(___Scope_Generated_Classes___::__OperatorFactory__::Name_Process_3, "Constructor", ex);
                throw;
            }
            auto curRow = gcnew ___Scope_Generated_Classes___::Row_RowGuid_Guid_RecognizedText_String_InkIsf_String();
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
    class InteropToManagedRowPolicy<Process_1_Data0, UID_Process_3>
    {
    public:
        static void Marshal(Process_1_Data0& nativeRow, ScopeRuntime::Row^% managedRow, InteropAllocator * alloc)
        {
            alloc->CopyToManagedColumn(nativeRow.m_RowGuid, managedRow[0], 0);
            alloc->CopyToManagedColumn(nativeRow.m_RecognizedText, managedRow[1], 1);
            alloc->CopyToManagedColumn(nativeRow.m_InkIsf, managedRow[2], 2);
        }
    };
    template<>
    class InteropToNativeRowPolicy<Process_1_Data0, UID_Process_3>
    {
    public:
        static void Marshal(ScopeRuntime::Row^ managedRow, Process_1_Data0& nativeRow, IncrementalAllocator* alloc)
        {
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_RowGuid, managedRow[0]->Guid, alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_RecognizedText, managedRow[1]->Binary, alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_InkIsf, managedRow[2]->Binary, alloc);
        }
    };
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    static const char * StringTable_Process_4 [] =
    {
        "RowGuid",
        "RecognizedText",
        "RecognizedText.Length",
        "InkIsf",
        "1.0",
        "\"*** After Last Expression ***\"",
    };

    template<>
    class RowTransformPolicy<Process_1_Data0, Process_4_Data0, UID_Process_4>
    {
    public:

        static bool FilterTransformRow(Process_1_Data0 & input, Process_4_Data0 & output, IncrementalAllocator * alloc)
        {

            int exceptionIndex = 0;
            try
            {
                    output.m_RowGuid = input.m_RowGuid;
                    exceptionIndex++;
                    output.m_RecognizedText = input.m_RecognizedText;
                    exceptionIndex++;
                    output.m_RecoLength = input.m_RecognizedText.Length();
                    exceptionIndex++;
                    output.m_InkIsf = input.m_InkIsf;
                    exceptionIndex++;
                    output.m_Weight = 1.0;
                    exceptionIndex++;
                    return true;
                    }
                    catch(...)
                    {
                        std::throw_with_nested(RuntimeExpressionException(StringTable_Process_4[exceptionIndex]));
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
    class KeyComparePolicy<Process_4_Data0,UID_Process_5>
    {
    public:
        struct KeyStruct
        {
            ScopeGuid m_RowGuid;

            KeyStruct(Process_4_Data0 & c) :
                m_RowGuid(c.m_RowGuid)
            {
            }

            KeyStruct(const Process_4_Data0 & c, IncrementalAllocator * alloc) :
                m_RowGuid(const_cast<Process_4_Data0&>(c).m_RowGuid)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_RowGuid(c.m_RowGuid)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_RowGuid(const_cast<KeyStruct&>(c).m_RowGuid)
            {
            }

            KeyStruct() :
                m_RowGuid()
            {
            }

            friend std::ostream& operator<<(std::ostream& os, const KeyStruct& row)
            {

                ScopeEngine::OutputRowContent(
                    std::string{ u8"RowGuid:Guid" },
                    reinterpret_cast<const char*>(&row),
                    os);

                return os;
            }
        };

        typedef KeyStruct KeyType;

        static int Compare(Process_4_Data0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_RowGuid, key.m_RowGuid)) != 0)
                return r;
            return r;
        }

        static int Compare(Process_4_Data0 * n1, Process_4_Data0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_RowGuid, (*n2).m_RowGuid)) != 0)
                return r;
            return r;
        }

    };


// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<>
    class RowTransformPolicy<Process_4_Data0, Process_4_Data0, UID_Process_5>
    {
    public:

        static bool FilterTransformRow(Process_4_Data0 & input, Process_4_Data0 & output, IncrementalAllocator * alloc)
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
    struct ManagedUDO<UID_Process_5>
    {
        typedef ScopeRuntime::Reducer UDO;

        ManagedUDO(std::string * argv, int argc)
        {
            try
            {
                m_udo.reset(___Scope_Generated_Classes___::__OperatorFactory__::Create_Process_5());
                m_args.reset(gcnew Generic::List<String^>(ConvertArgsToArray(std::wstring{ L"20 -random 1514015319 -weightCol Weight" })));
            }
            catch (Exception ^ex)
            {
                ScopeEngineManaged::UserExceptionHelper::WrapUserException(___Scope_Generated_Classes___::__OperatorFactory__::Name_Process_5, "Constructor", ex);
                throw;
            }
            auto curRow = gcnew ___Scope_Generated_Classes___::Row_193825B98C8C2D67();
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
    class InteropToManagedRowPolicy<Process_4_Data0, UID_Process_5>
    {
    public:
        static void Marshal(Process_4_Data0& nativeRow, KeyComparePolicy<Process_4_Data0,UID_Process_5>::KeyType& nativeKey, ScopeRuntime::Row^% managedRow, InteropAllocator * alloc)
        {
            alloc->CopyToManagedColumn(nativeKey.m_RowGuid, managedRow[0], 0);
            alloc->CopyToManagedColumn(nativeRow.m_RecognizedText, managedRow[1], 1);
            alloc->CopyToManagedColumn(nativeRow.m_RecoLength, managedRow[2], 2);
            alloc->CopyToManagedColumn(nativeRow.m_InkIsf, managedRow[3], 3);
            alloc->CopyToManagedColumn(nativeRow.m_Weight, managedRow[4], 4);
        }
    };

    template<>
    class InteropToNativeRowPolicy<Process_4_Data0, UID_Process_5>
    {
    public:
        static void Marshal(ScopeRuntime::Row^ managedRow, Process_4_Data0& nativeRow, IncrementalAllocator* alloc)
        {
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_RowGuid, managedRow[0]->Guid, alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_RecognizedText, managedRow[1]->Binary, alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_RecoLength, managedRow[2]->Integer, alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_InkIsf, managedRow[3]->Binary, alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_Weight, managedRow[4]->Double, alloc);
        }
    };
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_NATIVE)
    typedef SStreamExtractorV4<GetSStream_0_Data0, SStreamV3ExtractPolicy<GetSStream_0_Data0, UID_GetSStream_0, NullSchema>, UID_GetSStream_0, NullSchema, false> SStreamV3ExtractorType_SV1_Extract_GetSStream_0;
    SStreamV3ExtractorType_SV1_Extract_GetSStream_0 * CreateExtractor_SV1_Extract_GetSStream_0(unique_ptr<SStreamV3ExtractorType_SV1_Extract_GetSStream_0> * extractor_ptr)
    {
        extractor_ptr->reset(new SStreamV3ExtractorType_SV1_Extract_GetSStream_0(0, "", UID_GetSStream_0));
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
    extern "C" __declspec(dllexport) void __stdcall SV1_Extract_execute(std::string * argv, int argc, InputFileInfo* inputs, int inputCnt, OutputFileInfo* outputs, int outputCnt, VertexExecutionInfo * vertexExecutionInfo)
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
        unique_ptr<SStreamV3ExtractorType_SV1_Extract_GetSStream_0> extractor_0_ptr;
        SStreamV3ExtractorType_SV1_Extract_GetSStream_0 * extractor_0 = CreateExtractor_SV1_Extract_GetSStream_0(&extractor_0_ptr);
        ULONG extractor_0_count = 1;

        // Define the type of the operator
        typedef FilterTransformer<SStreamV3ExtractorType_SV1_Extract_GetSStream_0, GetSStream_0_Data0, Process_1_Data0, UID_Process_1> FilterTransformerType_Process_1;
        // Construct operator and initialize it.
        unique_ptr<FilterTransformerType_Process_1> filterTransformer_Process_1_ptr (new FilterTransformerType_Process_1(extractor_0, UID_Process_1));
        FilterTransformerType_Process_1 * filterTransformer_Process_1 = filterTransformer_Process_1_ptr.get();
        ULONG filterTransformer_Process_1_count = 1;
        // Construct operator and initialize it.
        unique_ptr<OperatorDelegate<Process_1_Data0>> delegate_filterTransformer_Process_1_ptr (new OperatorDelegate<Process_1_Data0>(OperatorDelegate<Process_1_Data0>::FromOperator(filterTransformer_Process_1)));
        OperatorDelegate<Process_1_Data0> * delegate_filterTransformer_Process_1 = delegate_filterTransformer_Process_1_ptr.get();
        ULONG delegate_filterTransformer_Process_1_count = 1;
        // Define sorter type
        typedef Sorter<Process_1_Data0> SorterType_Process_2;
        // Construct operator and initialize it.
        unique_ptr<SorterType_Process_2> sorter_Process_2_ptr (new SorterType_Process_2(delegate_filterTransformer_Process_1, &StdSort<Process_1_Data0>::Sort<KeyComparePolicy<Process_1_Data0, UID_Process_2>, (sizeof(Process_1_Data0)<=CACHELINE_SIZE)>, ScopeLoserTreeDelegate<Process_1_Data0>::CreateDelegate<UID_Process_2>(), false, 2147483648 /*memoryQuota*/, UID_Process_2));
        SorterType_Process_2 * sorter_Process_2 = sorter_Process_2_ptr.get();
        ULONG sorter_Process_2_count = 1;
        // Construct operator and initialize it.
        unique_ptr<OperatorDelegate<Process_1_Data0>> delegate_sorter_Process_2_ptr (new OperatorDelegate<Process_1_Data0>(OperatorDelegate<Process_1_Data0>::FromOperator(sorter_Process_2)));
        OperatorDelegate<Process_1_Data0> * delegate_sorter_Process_2 = delegate_sorter_Process_2_ptr.get();
        ULONG delegate_sorter_Process_2_count = 1;
        // Define the type of the operator
        typedef ScopeProcessor<Process_1_Data0, Process_1_Data0> ProcessorType_Process_3;
        // Construct operator and initialize it.
        unique_ptr<ProcessorType_Process_3> processor_Process_3_ptr (new ProcessorType_Process_3(ScopeProcessorManagedFactory::Make<Process_1_Data0,Process_1_Data0,UID_Process_3>(delegate_sorter_Process_2), delegate_sorter_Process_2, UID_Process_3));
        ProcessorType_Process_3 * processor_Process_3 = processor_Process_3_ptr.get();
        ULONG processor_Process_3_count = 1;
        // Define the type of the operator
        typedef FilterTransformer<ProcessorType_Process_3, Process_1_Data0, Process_4_Data0, UID_Process_4> FilterTransformerType_Process_4;
        // Construct operator and initialize it.
        unique_ptr<FilterTransformerType_Process_4> filterTransformer_Process_4_ptr (new FilterTransformerType_Process_4(processor_Process_3, UID_Process_4));
        FilterTransformerType_Process_4 * filterTransformer_Process_4 = filterTransformer_Process_4_ptr.get();
        ULONG filterTransformer_Process_4_count = 1;
        // Construct operator and initialize it.
        unique_ptr<OperatorDelegate<Process_4_Data0>> delegate_filterTransformer_Process_4_ptr (new OperatorDelegate<Process_4_Data0>(OperatorDelegate<Process_4_Data0>::FromOperator(filterTransformer_Process_4)));
        OperatorDelegate<Process_4_Data0> * delegate_filterTransformer_Process_4 = delegate_filterTransformer_Process_4_ptr.get();
        ULONG delegate_filterTransformer_Process_4_count = 1;
        // Define the type of the operator
        typedef ScopeProcessor<Process_4_Data0, Process_4_Data0> ReducerType_Process_5;
        // Construct operator and initialize it.
        unique_ptr<ReducerType_Process_5> reducer_Process_5_ptr (new ReducerType_Process_5(ScopeReducerManagedFactory::Make<Process_4_Data0,Process_4_Data0,UID_Process_5>(delegate_filterTransformer_Process_4), delegate_filterTransformer_Process_4, UID_Process_5));
        ReducerType_Process_5 * reducer_Process_5 = reducer_Process_5_ptr.get();
        ULONG reducer_Process_5_count = 1;
        // Define outputer type
        typedef Outputer<ReducerType_Process_5, Process_4_Data0, BinaryOutputPolicy<Process_4_Data0>, BinaryOutputStream, false> OutputerType1_SV1_Extract;
        // Construct operator and initialize it
        unique_ptr<OutputerType1_SV1_Extract> outputer_SV1_Extract_out0_ptr(new OutputerType1_SV1_Extract(reducer_Process_5, outputs[0].outputFileName, false, x_outputBufSize, x_outputBufCnt, UID_SV1_Extract_out0));
        OutputerType1_SV1_Extract * outputer_SV1_Extract_out0 = outputer_SV1_Extract_out0_ptr.get();
        try
        {
            // Init operator chain
            outputer_SV1_Extract_out0->Init();

            // Execute the whole vertex by calling the GetNextRow on top operator
            Process_4_Data0 row;
            outputer_SV1_Extract_out0->GetNextRow(row);

            // Close operator chain
            outputer_SV1_Extract_out0->Close();
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
        outputer_SV1_Extract_out0->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
    }
}
#endif // defined(COMPILE_NATIVE)

#if defined(COMPILE_MANAGED)
template ScopeProcessorManaged<Process_1_Data0, Process_1_Data0> * ScopeEngine::ScopeProcessorManagedFactory::Make<Process_1_Data0, Process_1_Data0, UID_Process_3>(OperatorDelegate<Process_1_Data0>*);
template ScopeProcessorManaged<Process_4_Data0, Process_4_Data0> * ScopeEngine::ScopeReducerManagedFactory::Make<Process_4_Data0, Process_4_Data0, UID_Process_5>(OperatorDelegate<Process_4_Data0>*);
#endif // defined(COMPILE_MANAGED)
#if defined(COMPILE_NATIVE)
#endif // defined(COMPILE_NATIVE)

#endif
#pragma endregion SV1_Extract
#pragma region SV2_Extract
#if defined(COMPILE_SV2_EXTRACT) || defined(COMPILE_ALL_VERTICES)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_NATIVE)
    template<> 
    class RowComparePolicy<PartitionKeySchema_GetSStream_0, PartitionKeySchema_GetSStream_0, UID_GetSStream_6> 
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

    static const char * StringTable_Process_7 [] =
    {
        "InputLanguage == \"en-us\"",
        "RowGuid",
        "RecognizedText",
        "InkIsf",
        "\"*** After Last Expression ***\"",
    };

    template<>
    class RowTransformPolicy<GetSStream_0_Data0, Process_1_Data0, UID_Process_7>
    {
    public:

        static bool FilterTransformRow(GetSStream_0_Data0 & input, Process_1_Data0 & output, IncrementalAllocator * alloc)
        {

            int exceptionIndex = 0;
            try
            {
                if (input.m_InputLanguage == staticconstant_0)
                {

                    exceptionIndex++;
                    output.m_RowGuid = input.m_RowGuid;
                    exceptionIndex++;
                    output.m_RecognizedText = input.m_RecognizedText;
                    exceptionIndex++;
                    output.m_InkIsf = input.m_InkIsf;
                    exceptionIndex++;
                    return true;
                }
            
                return false;
                }
                catch(...)
                {
                    std::throw_with_nested(RuntimeExpressionException(StringTable_Process_7[exceptionIndex]));
                }
}
        static FString staticconstant_0;

            #pragma warning(push)
            #pragma warning(disable: 4100) // 'alloc': unreferenced formal parameter
            static void InitializeStatics(IncrementalAllocator * alloc)
            {
            #pragma warning(pop)
                staticconstant_0 = FString("en-us", 5);
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
    FString RowTransformPolicy<GetSStream_0_Data0, Process_1_Data0, UID_Process_7>::staticconstant_0;
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
    class RowTransformPolicy<Process_1_Data0, Process_1_Data0, UID_Process_8>
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
    struct ManagedUDO<UID_Process_8>
    {
        typedef ScopeRuntime::Processor UDO;

        ManagedUDO(std::string * argv, int argc)
        {
            try
            {
                m_udo.reset(___Scope_Generated_Classes___::__OperatorFactory__::Create_Process_8());
                m_args.reset(gcnew Generic::List<String^>(ConvertArgsToArray(std::wstring{ L"-produce RowGuid,#_InputLanguage,#_RecognizedText,#_WritingRectRight,#_InkIsf -skipValidation" })));
            }
            catch (Exception ^ex)
            {
                ScopeEngineManaged::UserExceptionHelper::WrapUserException(___Scope_Generated_Classes___::__OperatorFactory__::Name_Process_8, "Constructor", ex);
                throw;
            }
            auto curRow = gcnew ___Scope_Generated_Classes___::Row_RowGuid_Guid_RecognizedText_String_InkIsf_String();
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
    class InteropToManagedRowPolicy<Process_1_Data0, UID_Process_8>
    {
    public:
        static void Marshal(Process_1_Data0& nativeRow, ScopeRuntime::Row^% managedRow, InteropAllocator * alloc)
        {
            alloc->CopyToManagedColumn(nativeRow.m_RowGuid, managedRow[0], 0);
            alloc->CopyToManagedColumn(nativeRow.m_RecognizedText, managedRow[1], 1);
            alloc->CopyToManagedColumn(nativeRow.m_InkIsf, managedRow[2], 2);
        }
    };
    template<>
    class InteropToNativeRowPolicy<Process_1_Data0, UID_Process_8>
    {
    public:
        static void Marshal(ScopeRuntime::Row^ managedRow, Process_1_Data0& nativeRow, IncrementalAllocator* alloc)
        {
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_RowGuid, managedRow[0]->Guid, alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_RecognizedText, managedRow[1]->Binary, alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_InkIsf, managedRow[2]->Binary, alloc);
        }
    };
#endif // defined(COMPILE_MANAGED)
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

    static const char * StringTable_Process_10 [] =
    {
        "RowGuid",
        "RecognizedText",
        "RecognizedText.Length",
        "InkIsf",
        "1.0",
        "\"*** After Last Expression ***\"",
    };

    template<>
    class RowTransformPolicy<Process_1_Data0, Process_4_Data0, UID_Process_10>
    {
    public:

        static bool FilterTransformRow(Process_1_Data0 & input, Process_4_Data0 & output, IncrementalAllocator * alloc)
        {

            int exceptionIndex = 0;
            try
            {
                    output.m_RowGuid = input.m_RowGuid;
                    exceptionIndex++;
                    output.m_RecognizedText = input.m_RecognizedText;
                    exceptionIndex++;
                    output.m_RecoLength = input.m_RecognizedText.Length();
                    exceptionIndex++;
                    output.m_InkIsf = input.m_InkIsf;
                    exceptionIndex++;
                    output.m_Weight = 1.0;
                    exceptionIndex++;
                    return true;
                    }
                    catch(...)
                    {
                        std::throw_with_nested(RuntimeExpressionException(StringTable_Process_10[exceptionIndex]));
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
    class KeyComparePolicy<Process_4_Data0,UID_Process_11>
    {
    public:
        struct KeyStruct
        {
            ScopeGuid m_RowGuid;

            KeyStruct(Process_4_Data0 & c) :
                m_RowGuid(c.m_RowGuid)
            {
            }

            KeyStruct(const Process_4_Data0 & c, IncrementalAllocator * alloc) :
                m_RowGuid(const_cast<Process_4_Data0&>(c).m_RowGuid)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_RowGuid(c.m_RowGuid)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_RowGuid(const_cast<KeyStruct&>(c).m_RowGuid)
            {
            }

            KeyStruct() :
                m_RowGuid()
            {
            }

            friend std::ostream& operator<<(std::ostream& os, const KeyStruct& row)
            {

                ScopeEngine::OutputRowContent(
                    std::string{ u8"RowGuid:Guid" },
                    reinterpret_cast<const char*>(&row),
                    os);

                return os;
            }
        };

        typedef KeyStruct KeyType;

        static int Compare(Process_4_Data0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_RowGuid, key.m_RowGuid)) != 0)
                return r;
            return r;
        }

        static int Compare(Process_4_Data0 * n1, Process_4_Data0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_RowGuid, (*n2).m_RowGuid)) != 0)
                return r;
            return r;
        }

    };


// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<>
    class RowTransformPolicy<Process_4_Data0, Process_4_Data0, UID_Process_11>
    {
    public:

        static bool FilterTransformRow(Process_4_Data0 & input, Process_4_Data0 & output, IncrementalAllocator * alloc)
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
    struct ManagedUDO<UID_Process_11>
    {
        typedef ScopeRuntime::Reducer UDO;

        ManagedUDO(std::string * argv, int argc)
        {
            try
            {
                m_udo.reset(___Scope_Generated_Classes___::__OperatorFactory__::Create_Process_11());
                m_args.reset(gcnew Generic::List<String^>(ConvertArgsToArray(std::wstring{ L"20 -random 1514015319 -weightCol Weight" })));
            }
            catch (Exception ^ex)
            {
                ScopeEngineManaged::UserExceptionHelper::WrapUserException(___Scope_Generated_Classes___::__OperatorFactory__::Name_Process_11, "Constructor", ex);
                throw;
            }
            auto curRow = gcnew ___Scope_Generated_Classes___::Row_193825B98C8C2D67();
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
    class InteropToManagedRowPolicy<Process_4_Data0, UID_Process_11>
    {
    public:
        static void Marshal(Process_4_Data0& nativeRow, KeyComparePolicy<Process_4_Data0,UID_Process_11>::KeyType& nativeKey, ScopeRuntime::Row^% managedRow, InteropAllocator * alloc)
        {
            alloc->CopyToManagedColumn(nativeKey.m_RowGuid, managedRow[0], 0);
            alloc->CopyToManagedColumn(nativeRow.m_RecognizedText, managedRow[1], 1);
            alloc->CopyToManagedColumn(nativeRow.m_RecoLength, managedRow[2], 2);
            alloc->CopyToManagedColumn(nativeRow.m_InkIsf, managedRow[3], 3);
            alloc->CopyToManagedColumn(nativeRow.m_Weight, managedRow[4], 4);
        }
    };

    template<>
    class InteropToNativeRowPolicy<Process_4_Data0, UID_Process_11>
    {
    public:
        static void Marshal(ScopeRuntime::Row^ managedRow, Process_4_Data0& nativeRow, IncrementalAllocator* alloc)
        {
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_RowGuid, managedRow[0]->Guid, alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_RecognizedText, managedRow[1]->Binary, alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_RecoLength, managedRow[2]->Integer, alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_InkIsf, managedRow[3]->Binary, alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_Weight, managedRow[4]->Double, alloc);
        }
    };
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_NATIVE)
    typedef SStreamExtractorV4<GetSStream_0_Data0, SStreamV3ExtractPolicy<GetSStream_0_Data0, UID_GetSStream_0, NullSchema>, UID_GetSStream_0, NullSchema, false> SStreamV3ExtractorType_SV2_Extract_GetSStream_6;
    SStreamV3ExtractorType_SV2_Extract_GetSStream_6 * CreateExtractor_SV2_Extract_GetSStream_6(unique_ptr<SStreamV3ExtractorType_SV2_Extract_GetSStream_6> * extractor_ptr)
    {
        extractor_ptr->reset(new SStreamV3ExtractorType_SV2_Extract_GetSStream_6(6, "", UID_GetSStream_6));
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
    extern "C" __declspec(dllexport) void __stdcall SV2_Extract_execute(std::string * argv, int argc, InputFileInfo* inputs, int inputCnt, OutputFileInfo* outputs, int outputCnt, VertexExecutionInfo * vertexExecutionInfo)
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
        unique_ptr<SStreamV3ExtractorType_SV2_Extract_GetSStream_6> extractor_0_ptr;
        SStreamV3ExtractorType_SV2_Extract_GetSStream_6 * extractor_0 = CreateExtractor_SV2_Extract_GetSStream_6(&extractor_0_ptr);
        ULONG extractor_0_count = 1;

        // Define the type of the operator
        typedef FilterTransformer<SStreamV3ExtractorType_SV2_Extract_GetSStream_6, GetSStream_0_Data0, Process_1_Data0, UID_Process_7> FilterTransformerType_Process_7;
        // Construct operator and initialize it.
        unique_ptr<FilterTransformerType_Process_7> filterTransformer_Process_7_ptr (new FilterTransformerType_Process_7(extractor_0, UID_Process_7));
        FilterTransformerType_Process_7 * filterTransformer_Process_7 = filterTransformer_Process_7_ptr.get();
        ULONG filterTransformer_Process_7_count = 1;
        // Construct operator and initialize it.
        unique_ptr<OperatorDelegate<Process_1_Data0>> delegate_filterTransformer_Process_7_ptr (new OperatorDelegate<Process_1_Data0>(OperatorDelegate<Process_1_Data0>::FromOperator(filterTransformer_Process_7)));
        OperatorDelegate<Process_1_Data0> * delegate_filterTransformer_Process_7 = delegate_filterTransformer_Process_7_ptr.get();
        ULONG delegate_filterTransformer_Process_7_count = 1;
        // Define the type of the operator
        typedef ScopeProcessor<Process_1_Data0, Process_1_Data0> ProcessorType_Process_8;
        // Construct operator and initialize it.
        unique_ptr<ProcessorType_Process_8> processor_Process_8_ptr (new ProcessorType_Process_8(ScopeProcessorManagedFactory::Make<Process_1_Data0,Process_1_Data0,UID_Process_8>(delegate_filterTransformer_Process_7), delegate_filterTransformer_Process_7, UID_Process_8));
        ProcessorType_Process_8 * processor_Process_8 = processor_Process_8_ptr.get();
        ULONG processor_Process_8_count = 1;
        // Construct operator and initialize it.
        unique_ptr<OperatorDelegate<Process_1_Data0>> delegate_processor_Process_8_ptr (new OperatorDelegate<Process_1_Data0>(OperatorDelegate<Process_1_Data0>::FromOperator(processor_Process_8)));
        OperatorDelegate<Process_1_Data0> * delegate_processor_Process_8 = delegate_processor_Process_8_ptr.get();
        ULONG delegate_processor_Process_8_count = 1;
        // Define sorter type
        typedef Sorter<Process_1_Data0> SorterType_Process_9;
        // Construct operator and initialize it.
        unique_ptr<SorterType_Process_9> sorter_Process_9_ptr (new SorterType_Process_9(delegate_processor_Process_8, &StdSort<Process_1_Data0>::Sort<KeyComparePolicy<Process_1_Data0, UID_Process_2>, (sizeof(Process_1_Data0)<=CACHELINE_SIZE)>, ScopeLoserTreeDelegate<Process_1_Data0>::CreateDelegate<UID_Process_2>(), false, 2147483648 /*memoryQuota*/, UID_Process_9));
        SorterType_Process_9 * sorter_Process_9 = sorter_Process_9_ptr.get();
        ULONG sorter_Process_9_count = 1;
        // Define the type of the operator
        typedef FilterTransformer<SorterType_Process_9, Process_1_Data0, Process_4_Data0, UID_Process_10> FilterTransformerType_Process_10;
        // Construct operator and initialize it.
        unique_ptr<FilterTransformerType_Process_10> filterTransformer_Process_10_ptr (new FilterTransformerType_Process_10(sorter_Process_9, UID_Process_10));
        FilterTransformerType_Process_10 * filterTransformer_Process_10 = filterTransformer_Process_10_ptr.get();
        ULONG filterTransformer_Process_10_count = 1;
        // Construct operator and initialize it.
        unique_ptr<OperatorDelegate<Process_4_Data0>> delegate_filterTransformer_Process_10_ptr (new OperatorDelegate<Process_4_Data0>(OperatorDelegate<Process_4_Data0>::FromOperator(filterTransformer_Process_10)));
        OperatorDelegate<Process_4_Data0> * delegate_filterTransformer_Process_10 = delegate_filterTransformer_Process_10_ptr.get();
        ULONG delegate_filterTransformer_Process_10_count = 1;
        // Define the type of the operator
        typedef ScopeProcessor<Process_4_Data0, Process_4_Data0> ReducerType_Process_11;
        // Construct operator and initialize it.
        unique_ptr<ReducerType_Process_11> reducer_Process_11_ptr (new ReducerType_Process_11(ScopeReducerManagedFactory::Make<Process_4_Data0,Process_4_Data0,UID_Process_11>(delegate_filterTransformer_Process_10), delegate_filterTransformer_Process_10, UID_Process_11));
        ReducerType_Process_11 * reducer_Process_11 = reducer_Process_11_ptr.get();
        ULONG reducer_Process_11_count = 1;
        // Define outputer type
        typedef Outputer<ReducerType_Process_11, Process_4_Data0, BinaryOutputPolicy<Process_4_Data0>, BinaryOutputStream, false> OutputerType1_SV2_Extract;
        // Construct operator and initialize it
        unique_ptr<OutputerType1_SV2_Extract> outputer_SV2_Extract_out0_ptr(new OutputerType1_SV2_Extract(reducer_Process_11, outputs[0].outputFileName, false, x_outputBufSize, x_outputBufCnt, UID_SV2_Extract_out0));
        OutputerType1_SV2_Extract * outputer_SV2_Extract_out0 = outputer_SV2_Extract_out0_ptr.get();
        try
        {
            // Init operator chain
            outputer_SV2_Extract_out0->Init();

            // Execute the whole vertex by calling the GetNextRow on top operator
            Process_4_Data0 row;
            outputer_SV2_Extract_out0->GetNextRow(row);

            // Close operator chain
            outputer_SV2_Extract_out0->Close();
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
        outputer_SV2_Extract_out0->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
    }
}
#endif // defined(COMPILE_NATIVE)

#if defined(COMPILE_MANAGED)
template ScopeProcessorManaged<Process_1_Data0, Process_1_Data0> * ScopeEngine::ScopeProcessorManagedFactory::Make<Process_1_Data0, Process_1_Data0, UID_Process_8>(OperatorDelegate<Process_1_Data0>*);
template ScopeProcessorManaged<Process_4_Data0, Process_4_Data0> * ScopeEngine::ScopeReducerManagedFactory::Make<Process_4_Data0, Process_4_Data0, UID_Process_11>(OperatorDelegate<Process_4_Data0>*);
#endif // defined(COMPILE_MANAGED)
#if defined(COMPILE_NATIVE)
#endif // defined(COMPILE_NATIVE)

#endif
#pragma endregion SV2_Extract
#pragma region SV3_Extract
#if defined(COMPILE_SV3_EXTRACT) || defined(COMPILE_ALL_VERTICES)
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
        "InputLanguage == \"en-us\"",
        "RowGuid",
        "RecognizedText",
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
                if (input.m_InputLanguage == staticconstant_0)
                {

                    exceptionIndex++;
                    output.m_RowGuid = input.m_RowGuid;
                    exceptionIndex++;
                    output.m_RecognizedText = input.m_RecognizedText;
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

            #pragma warning(push)
            #pragma warning(disable: 4100) // 'alloc': unreferenced formal parameter
            static void InitializeStatics(IncrementalAllocator * alloc)
            {
            #pragma warning(pop)
                staticconstant_0 = FString("en-us", 5);
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
                m_args.reset(gcnew Generic::List<String^>(ConvertArgsToArray(std::wstring{ L"-produce RowGuid,#_InputLanguage,#_RecognizedText,#_WritingRectRight,#_InkIsf -skipValidation" })));
            }
            catch (Exception ^ex)
            {
                ScopeEngineManaged::UserExceptionHelper::WrapUserException(___Scope_Generated_Classes___::__OperatorFactory__::Name_Process_14, "Constructor", ex);
                throw;
            }
            auto curRow = gcnew ___Scope_Generated_Classes___::Row_RowGuid_Guid_RecognizedText_String_InkIsf_String();
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
            alloc->CopyToManagedColumn(nativeRow.m_RecognizedText, managedRow[1], 1);
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
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_RecognizedText, managedRow[1]->Binary, alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_InkIsf, managedRow[2]->Binary, alloc);
        }
    };
#endif // defined(COMPILE_MANAGED)
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

    static const char * StringTable_Process_16 [] =
    {
        "RowGuid",
        "RecognizedText",
        "RecognizedText.Length",
        "InkIsf",
        "1.0",
        "\"*** After Last Expression ***\"",
    };

    template<>
    class RowTransformPolicy<Process_1_Data0, Process_4_Data0, UID_Process_16>
    {
    public:

        static bool FilterTransformRow(Process_1_Data0 & input, Process_4_Data0 & output, IncrementalAllocator * alloc)
        {

            int exceptionIndex = 0;
            try
            {
                    output.m_RowGuid = input.m_RowGuid;
                    exceptionIndex++;
                    output.m_RecognizedText = input.m_RecognizedText;
                    exceptionIndex++;
                    output.m_RecoLength = input.m_RecognizedText.Length();
                    exceptionIndex++;
                    output.m_InkIsf = input.m_InkIsf;
                    exceptionIndex++;
                    output.m_Weight = 1.0;
                    exceptionIndex++;
                    return true;
                    }
                    catch(...)
                    {
                        std::throw_with_nested(RuntimeExpressionException(StringTable_Process_16[exceptionIndex]));
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
    class KeyComparePolicy<Process_4_Data0,UID_Process_17>
    {
    public:
        struct KeyStruct
        {
            ScopeGuid m_RowGuid;

            KeyStruct(Process_4_Data0 & c) :
                m_RowGuid(c.m_RowGuid)
            {
            }

            KeyStruct(const Process_4_Data0 & c, IncrementalAllocator * alloc) :
                m_RowGuid(const_cast<Process_4_Data0&>(c).m_RowGuid)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_RowGuid(c.m_RowGuid)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_RowGuid(const_cast<KeyStruct&>(c).m_RowGuid)
            {
            }

            KeyStruct() :
                m_RowGuid()
            {
            }

            friend std::ostream& operator<<(std::ostream& os, const KeyStruct& row)
            {

                ScopeEngine::OutputRowContent(
                    std::string{ u8"RowGuid:Guid" },
                    reinterpret_cast<const char*>(&row),
                    os);

                return os;
            }
        };

        typedef KeyStruct KeyType;

        static int Compare(Process_4_Data0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_RowGuid, key.m_RowGuid)) != 0)
                return r;
            return r;
        }

        static int Compare(Process_4_Data0 * n1, Process_4_Data0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_RowGuid, (*n2).m_RowGuid)) != 0)
                return r;
            return r;
        }

    };


// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<>
    class RowTransformPolicy<Process_4_Data0, Process_4_Data0, UID_Process_17>
    {
    public:

        static bool FilterTransformRow(Process_4_Data0 & input, Process_4_Data0 & output, IncrementalAllocator * alloc)
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
    struct ManagedUDO<UID_Process_17>
    {
        typedef ScopeRuntime::Reducer UDO;

        ManagedUDO(std::string * argv, int argc)
        {
            try
            {
                m_udo.reset(___Scope_Generated_Classes___::__OperatorFactory__::Create_Process_17());
                m_args.reset(gcnew Generic::List<String^>(ConvertArgsToArray(std::wstring{ L"20 -random 1514015319 -weightCol Weight" })));
            }
            catch (Exception ^ex)
            {
                ScopeEngineManaged::UserExceptionHelper::WrapUserException(___Scope_Generated_Classes___::__OperatorFactory__::Name_Process_17, "Constructor", ex);
                throw;
            }
            auto curRow = gcnew ___Scope_Generated_Classes___::Row_193825B98C8C2D67();
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
    class InteropToManagedRowPolicy<Process_4_Data0, UID_Process_17>
    {
    public:
        static void Marshal(Process_4_Data0& nativeRow, KeyComparePolicy<Process_4_Data0,UID_Process_17>::KeyType& nativeKey, ScopeRuntime::Row^% managedRow, InteropAllocator * alloc)
        {
            alloc->CopyToManagedColumn(nativeKey.m_RowGuid, managedRow[0], 0);
            alloc->CopyToManagedColumn(nativeRow.m_RecognizedText, managedRow[1], 1);
            alloc->CopyToManagedColumn(nativeRow.m_RecoLength, managedRow[2], 2);
            alloc->CopyToManagedColumn(nativeRow.m_InkIsf, managedRow[3], 3);
            alloc->CopyToManagedColumn(nativeRow.m_Weight, managedRow[4], 4);
        }
    };

    template<>
    class InteropToNativeRowPolicy<Process_4_Data0, UID_Process_17>
    {
    public:
        static void Marshal(ScopeRuntime::Row^ managedRow, Process_4_Data0& nativeRow, IncrementalAllocator* alloc)
        {
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_RowGuid, managedRow[0]->Guid, alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_RecognizedText, managedRow[1]->Binary, alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_RecoLength, managedRow[2]->Integer, alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_InkIsf, managedRow[3]->Binary, alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_Weight, managedRow[4]->Double, alloc);
        }
    };
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_NATIVE)
    typedef SStreamExtractorV4<GetSStream_0_Data0, SStreamV3ExtractPolicy<GetSStream_0_Data0, UID_GetSStream_0, NullSchema>, UID_GetSStream_0, NullSchema, false> SStreamV3ExtractorType_SV3_Extract_GetSStream_12;
    SStreamV3ExtractorType_SV3_Extract_GetSStream_12 * CreateExtractor_SV3_Extract_GetSStream_12(unique_ptr<SStreamV3ExtractorType_SV3_Extract_GetSStream_12> * extractor_ptr)
    {
        extractor_ptr->reset(new SStreamV3ExtractorType_SV3_Extract_GetSStream_12(12, "", UID_GetSStream_12));
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
    extern "C" __declspec(dllexport) void __stdcall SV3_Extract_execute(std::string * argv, int argc, InputFileInfo* inputs, int inputCnt, OutputFileInfo* outputs, int outputCnt, VertexExecutionInfo * vertexExecutionInfo)
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
        unique_ptr<SStreamV3ExtractorType_SV3_Extract_GetSStream_12> extractor_0_ptr;
        SStreamV3ExtractorType_SV3_Extract_GetSStream_12 * extractor_0 = CreateExtractor_SV3_Extract_GetSStream_12(&extractor_0_ptr);
        ULONG extractor_0_count = 1;

        // Define the type of the operator
        typedef FilterTransformer<SStreamV3ExtractorType_SV3_Extract_GetSStream_12, GetSStream_0_Data0, Process_1_Data0, UID_Process_13> FilterTransformerType_Process_13;
        // Construct operator and initialize it.
        unique_ptr<FilterTransformerType_Process_13> filterTransformer_Process_13_ptr (new FilterTransformerType_Process_13(extractor_0, UID_Process_13));
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
        // Construct operator and initialize it.
        unique_ptr<OperatorDelegate<Process_1_Data0>> delegate_processor_Process_14_ptr (new OperatorDelegate<Process_1_Data0>(OperatorDelegate<Process_1_Data0>::FromOperator(processor_Process_14)));
        OperatorDelegate<Process_1_Data0> * delegate_processor_Process_14 = delegate_processor_Process_14_ptr.get();
        ULONG delegate_processor_Process_14_count = 1;
        // Define sorter type
        typedef Sorter<Process_1_Data0> SorterType_Process_15;
        // Construct operator and initialize it.
        unique_ptr<SorterType_Process_15> sorter_Process_15_ptr (new SorterType_Process_15(delegate_processor_Process_14, &StdSort<Process_1_Data0>::Sort<KeyComparePolicy<Process_1_Data0, UID_Process_2>, (sizeof(Process_1_Data0)<=CACHELINE_SIZE)>, ScopeLoserTreeDelegate<Process_1_Data0>::CreateDelegate<UID_Process_2>(), false, 2147483648 /*memoryQuota*/, UID_Process_15));
        SorterType_Process_15 * sorter_Process_15 = sorter_Process_15_ptr.get();
        ULONG sorter_Process_15_count = 1;
        // Define the type of the operator
        typedef FilterTransformer<SorterType_Process_15, Process_1_Data0, Process_4_Data0, UID_Process_16> FilterTransformerType_Process_16;
        // Construct operator and initialize it.
        unique_ptr<FilterTransformerType_Process_16> filterTransformer_Process_16_ptr (new FilterTransformerType_Process_16(sorter_Process_15, UID_Process_16));
        FilterTransformerType_Process_16 * filterTransformer_Process_16 = filterTransformer_Process_16_ptr.get();
        ULONG filterTransformer_Process_16_count = 1;
        // Construct operator and initialize it.
        unique_ptr<OperatorDelegate<Process_4_Data0>> delegate_filterTransformer_Process_16_ptr (new OperatorDelegate<Process_4_Data0>(OperatorDelegate<Process_4_Data0>::FromOperator(filterTransformer_Process_16)));
        OperatorDelegate<Process_4_Data0> * delegate_filterTransformer_Process_16 = delegate_filterTransformer_Process_16_ptr.get();
        ULONG delegate_filterTransformer_Process_16_count = 1;
        // Define the type of the operator
        typedef ScopeProcessor<Process_4_Data0, Process_4_Data0> ReducerType_Process_17;
        // Construct operator and initialize it.
        unique_ptr<ReducerType_Process_17> reducer_Process_17_ptr (new ReducerType_Process_17(ScopeReducerManagedFactory::Make<Process_4_Data0,Process_4_Data0,UID_Process_17>(delegate_filterTransformer_Process_16), delegate_filterTransformer_Process_16, UID_Process_17));
        ReducerType_Process_17 * reducer_Process_17 = reducer_Process_17_ptr.get();
        ULONG reducer_Process_17_count = 1;
        // Define outputer type
        typedef Outputer<ReducerType_Process_17, Process_4_Data0, BinaryOutputPolicy<Process_4_Data0>, BinaryOutputStream, false> OutputerType1_SV3_Extract;
        // Construct operator and initialize it
        unique_ptr<OutputerType1_SV3_Extract> outputer_SV3_Extract_out0_ptr(new OutputerType1_SV3_Extract(reducer_Process_17, outputs[0].outputFileName, false, x_outputBufSize, x_outputBufCnt, UID_SV3_Extract_out0));
        OutputerType1_SV3_Extract * outputer_SV3_Extract_out0 = outputer_SV3_Extract_out0_ptr.get();
        try
        {
            // Init operator chain
            outputer_SV3_Extract_out0->Init();

            // Execute the whole vertex by calling the GetNextRow on top operator
            Process_4_Data0 row;
            outputer_SV3_Extract_out0->GetNextRow(row);

            // Close operator chain
            outputer_SV3_Extract_out0->Close();
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
        outputer_SV3_Extract_out0->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
    }
}
#endif // defined(COMPILE_NATIVE)

#if defined(COMPILE_MANAGED)
template ScopeProcessorManaged<Process_1_Data0, Process_1_Data0> * ScopeEngine::ScopeProcessorManagedFactory::Make<Process_1_Data0, Process_1_Data0, UID_Process_14>(OperatorDelegate<Process_1_Data0>*);
template ScopeProcessorManaged<Process_4_Data0, Process_4_Data0> * ScopeEngine::ScopeReducerManagedFactory::Make<Process_4_Data0, Process_4_Data0, UID_Process_17>(OperatorDelegate<Process_4_Data0>*);
#endif // defined(COMPILE_MANAGED)
#if defined(COMPILE_NATIVE)
#endif // defined(COMPILE_NATIVE)

#endif
#pragma endregion SV3_Extract
#pragma region SV4_Extract
#if defined(COMPILE_SV4_EXTRACT) || defined(COMPILE_ALL_VERTICES)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_NATIVE)
    template<> 
    class RowComparePolicy<PartitionKeySchema_GetSStream_0, PartitionKeySchema_GetSStream_0, UID_GetSStream_18> 
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

    static const char * StringTable_Process_19 [] =
    {
        "InputLanguage == \"en-us\"",
        "RowGuid",
        "RecognizedText",
        "InkIsf",
        "\"*** After Last Expression ***\"",
    };

    template<>
    class RowTransformPolicy<GetSStream_0_Data0, Process_1_Data0, UID_Process_19>
    {
    public:

        static bool FilterTransformRow(GetSStream_0_Data0 & input, Process_1_Data0 & output, IncrementalAllocator * alloc)
        {

            int exceptionIndex = 0;
            try
            {
                if (input.m_InputLanguage == staticconstant_0)
                {

                    exceptionIndex++;
                    output.m_RowGuid = input.m_RowGuid;
                    exceptionIndex++;
                    output.m_RecognizedText = input.m_RecognizedText;
                    exceptionIndex++;
                    output.m_InkIsf = input.m_InkIsf;
                    exceptionIndex++;
                    return true;
                }
            
                return false;
                }
                catch(...)
                {
                    std::throw_with_nested(RuntimeExpressionException(StringTable_Process_19[exceptionIndex]));
                }
}
        static FString staticconstant_0;

            #pragma warning(push)
            #pragma warning(disable: 4100) // 'alloc': unreferenced formal parameter
            static void InitializeStatics(IncrementalAllocator * alloc)
            {
            #pragma warning(pop)
                staticconstant_0 = FString("en-us", 5);
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
    FString RowTransformPolicy<GetSStream_0_Data0, Process_1_Data0, UID_Process_19>::staticconstant_0;
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


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<>
    class RowTransformPolicy<Process_1_Data0, Process_1_Data0, UID_Process_21>
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
    struct ManagedUDO<UID_Process_21>
    {
        typedef ScopeRuntime::Processor UDO;

        ManagedUDO(std::string * argv, int argc)
        {
            try
            {
                m_udo.reset(___Scope_Generated_Classes___::__OperatorFactory__::Create_Process_21());
                m_args.reset(gcnew Generic::List<String^>(ConvertArgsToArray(std::wstring{ L"-produce RowGuid,#_InputLanguage,#_RecognizedText,#_WritingRectRight,#_InkIsf -skipValidation" })));
            }
            catch (Exception ^ex)
            {
                ScopeEngineManaged::UserExceptionHelper::WrapUserException(___Scope_Generated_Classes___::__OperatorFactory__::Name_Process_21, "Constructor", ex);
                throw;
            }
            auto curRow = gcnew ___Scope_Generated_Classes___::Row_RowGuid_Guid_RecognizedText_String_InkIsf_String();
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
    class InteropToManagedRowPolicy<Process_1_Data0, UID_Process_21>
    {
    public:
        static void Marshal(Process_1_Data0& nativeRow, ScopeRuntime::Row^% managedRow, InteropAllocator * alloc)
        {
            alloc->CopyToManagedColumn(nativeRow.m_RowGuid, managedRow[0], 0);
            alloc->CopyToManagedColumn(nativeRow.m_RecognizedText, managedRow[1], 1);
            alloc->CopyToManagedColumn(nativeRow.m_InkIsf, managedRow[2], 2);
        }
    };
    template<>
    class InteropToNativeRowPolicy<Process_1_Data0, UID_Process_21>
    {
    public:
        static void Marshal(ScopeRuntime::Row^ managedRow, Process_1_Data0& nativeRow, IncrementalAllocator* alloc)
        {
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_RowGuid, managedRow[0]->Guid, alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_RecognizedText, managedRow[1]->Binary, alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_InkIsf, managedRow[2]->Binary, alloc);
        }
    };
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    static const char * StringTable_Process_22 [] =
    {
        "RowGuid",
        "RecognizedText",
        "RecognizedText.Length",
        "InkIsf",
        "1.0",
        "\"*** After Last Expression ***\"",
    };

    template<>
    class RowTransformPolicy<Process_1_Data0, Process_4_Data0, UID_Process_22>
    {
    public:

        static bool FilterTransformRow(Process_1_Data0 & input, Process_4_Data0 & output, IncrementalAllocator * alloc)
        {

            int exceptionIndex = 0;
            try
            {
                    output.m_RowGuid = input.m_RowGuid;
                    exceptionIndex++;
                    output.m_RecognizedText = input.m_RecognizedText;
                    exceptionIndex++;
                    output.m_RecoLength = input.m_RecognizedText.Length();
                    exceptionIndex++;
                    output.m_InkIsf = input.m_InkIsf;
                    exceptionIndex++;
                    output.m_Weight = 1.0;
                    exceptionIndex++;
                    return true;
                    }
                    catch(...)
                    {
                        std::throw_with_nested(RuntimeExpressionException(StringTable_Process_22[exceptionIndex]));
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
    class KeyComparePolicy<Process_4_Data0,UID_Process_23>
    {
    public:
        struct KeyStruct
        {
            ScopeGuid m_RowGuid;

            KeyStruct(Process_4_Data0 & c) :
                m_RowGuid(c.m_RowGuid)
            {
            }

            KeyStruct(const Process_4_Data0 & c, IncrementalAllocator * alloc) :
                m_RowGuid(const_cast<Process_4_Data0&>(c).m_RowGuid)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_RowGuid(c.m_RowGuid)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_RowGuid(const_cast<KeyStruct&>(c).m_RowGuid)
            {
            }

            KeyStruct() :
                m_RowGuid()
            {
            }

            friend std::ostream& operator<<(std::ostream& os, const KeyStruct& row)
            {

                ScopeEngine::OutputRowContent(
                    std::string{ u8"RowGuid:Guid" },
                    reinterpret_cast<const char*>(&row),
                    os);

                return os;
            }
        };

        typedef KeyStruct KeyType;

        static int Compare(Process_4_Data0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_RowGuid, key.m_RowGuid)) != 0)
                return r;
            return r;
        }

        static int Compare(Process_4_Data0 * n1, Process_4_Data0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_RowGuid, (*n2).m_RowGuid)) != 0)
                return r;
            return r;
        }

    };


// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<>
    class RowTransformPolicy<Process_4_Data0, Process_4_Data0, UID_Process_23>
    {
    public:

        static bool FilterTransformRow(Process_4_Data0 & input, Process_4_Data0 & output, IncrementalAllocator * alloc)
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
    struct ManagedUDO<UID_Process_23>
    {
        typedef ScopeRuntime::Reducer UDO;

        ManagedUDO(std::string * argv, int argc)
        {
            try
            {
                m_udo.reset(___Scope_Generated_Classes___::__OperatorFactory__::Create_Process_23());
                m_args.reset(gcnew Generic::List<String^>(ConvertArgsToArray(std::wstring{ L"20 -random 1514015319 -weightCol Weight" })));
            }
            catch (Exception ^ex)
            {
                ScopeEngineManaged::UserExceptionHelper::WrapUserException(___Scope_Generated_Classes___::__OperatorFactory__::Name_Process_23, "Constructor", ex);
                throw;
            }
            auto curRow = gcnew ___Scope_Generated_Classes___::Row_193825B98C8C2D67();
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
    class InteropToManagedRowPolicy<Process_4_Data0, UID_Process_23>
    {
    public:
        static void Marshal(Process_4_Data0& nativeRow, KeyComparePolicy<Process_4_Data0,UID_Process_23>::KeyType& nativeKey, ScopeRuntime::Row^% managedRow, InteropAllocator * alloc)
        {
            alloc->CopyToManagedColumn(nativeKey.m_RowGuid, managedRow[0], 0);
            alloc->CopyToManagedColumn(nativeRow.m_RecognizedText, managedRow[1], 1);
            alloc->CopyToManagedColumn(nativeRow.m_RecoLength, managedRow[2], 2);
            alloc->CopyToManagedColumn(nativeRow.m_InkIsf, managedRow[3], 3);
            alloc->CopyToManagedColumn(nativeRow.m_Weight, managedRow[4], 4);
        }
    };

    template<>
    class InteropToNativeRowPolicy<Process_4_Data0, UID_Process_23>
    {
    public:
        static void Marshal(ScopeRuntime::Row^ managedRow, Process_4_Data0& nativeRow, IncrementalAllocator* alloc)
        {
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_RowGuid, managedRow[0]->Guid, alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_RecognizedText, managedRow[1]->Binary, alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_RecoLength, managedRow[2]->Integer, alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_InkIsf, managedRow[3]->Binary, alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_Weight, managedRow[4]->Double, alloc);
        }
    };
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_NATIVE)
    typedef SStreamExtractorV4<GetSStream_0_Data0, SStreamV3ExtractPolicy<GetSStream_0_Data0, UID_GetSStream_0, NullSchema>, UID_GetSStream_0, NullSchema, false> SStreamV3ExtractorType_SV4_Extract_GetSStream_18;
    SStreamV3ExtractorType_SV4_Extract_GetSStream_18 * CreateExtractor_SV4_Extract_GetSStream_18(unique_ptr<SStreamV3ExtractorType_SV4_Extract_GetSStream_18> * extractor_ptr)
    {
        extractor_ptr->reset(new SStreamV3ExtractorType_SV4_Extract_GetSStream_18(18, "", UID_GetSStream_18));
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
    extern "C" __declspec(dllexport) void __stdcall SV4_Extract_execute(std::string * argv, int argc, InputFileInfo* inputs, int inputCnt, OutputFileInfo* outputs, int outputCnt, VertexExecutionInfo * vertexExecutionInfo)
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
        unique_ptr<SStreamV3ExtractorType_SV4_Extract_GetSStream_18> extractor_0_ptr;
        SStreamV3ExtractorType_SV4_Extract_GetSStream_18 * extractor_0 = CreateExtractor_SV4_Extract_GetSStream_18(&extractor_0_ptr);
        ULONG extractor_0_count = 1;

        // Define the type of the operator
        typedef FilterTransformer<SStreamV3ExtractorType_SV4_Extract_GetSStream_18, GetSStream_0_Data0, Process_1_Data0, UID_Process_19> FilterTransformerType_Process_19;
        // Construct operator and initialize it.
        unique_ptr<FilterTransformerType_Process_19> filterTransformer_Process_19_ptr (new FilterTransformerType_Process_19(extractor_0, UID_Process_19));
        FilterTransformerType_Process_19 * filterTransformer_Process_19 = filterTransformer_Process_19_ptr.get();
        ULONG filterTransformer_Process_19_count = 1;
        // Construct operator and initialize it.
        unique_ptr<OperatorDelegate<Process_1_Data0>> delegate_filterTransformer_Process_19_ptr (new OperatorDelegate<Process_1_Data0>(OperatorDelegate<Process_1_Data0>::FromOperator(filterTransformer_Process_19)));
        OperatorDelegate<Process_1_Data0> * delegate_filterTransformer_Process_19 = delegate_filterTransformer_Process_19_ptr.get();
        ULONG delegate_filterTransformer_Process_19_count = 1;
        // Define sorter type
        typedef Sorter<Process_1_Data0> SorterType_Process_20;
        // Construct operator and initialize it.
        unique_ptr<SorterType_Process_20> sorter_Process_20_ptr (new SorterType_Process_20(delegate_filterTransformer_Process_19, &StdSort<Process_1_Data0>::Sort<KeyComparePolicy<Process_1_Data0, UID_Process_2>, (sizeof(Process_1_Data0)<=CACHELINE_SIZE)>, ScopeLoserTreeDelegate<Process_1_Data0>::CreateDelegate<UID_Process_2>(), false, 2147483648 /*memoryQuota*/, UID_Process_20));
        SorterType_Process_20 * sorter_Process_20 = sorter_Process_20_ptr.get();
        ULONG sorter_Process_20_count = 1;
        // Construct operator and initialize it.
        unique_ptr<OperatorDelegate<Process_1_Data0>> delegate_sorter_Process_20_ptr (new OperatorDelegate<Process_1_Data0>(OperatorDelegate<Process_1_Data0>::FromOperator(sorter_Process_20)));
        OperatorDelegate<Process_1_Data0> * delegate_sorter_Process_20 = delegate_sorter_Process_20_ptr.get();
        ULONG delegate_sorter_Process_20_count = 1;
        // Define the type of the operator
        typedef ScopeProcessor<Process_1_Data0, Process_1_Data0> ProcessorType_Process_21;
        // Construct operator and initialize it.
        unique_ptr<ProcessorType_Process_21> processor_Process_21_ptr (new ProcessorType_Process_21(ScopeProcessorManagedFactory::Make<Process_1_Data0,Process_1_Data0,UID_Process_21>(delegate_sorter_Process_20), delegate_sorter_Process_20, UID_Process_21));
        ProcessorType_Process_21 * processor_Process_21 = processor_Process_21_ptr.get();
        ULONG processor_Process_21_count = 1;
        // Define the type of the operator
        typedef FilterTransformer<ProcessorType_Process_21, Process_1_Data0, Process_4_Data0, UID_Process_22> FilterTransformerType_Process_22;
        // Construct operator and initialize it.
        unique_ptr<FilterTransformerType_Process_22> filterTransformer_Process_22_ptr (new FilterTransformerType_Process_22(processor_Process_21, UID_Process_22));
        FilterTransformerType_Process_22 * filterTransformer_Process_22 = filterTransformer_Process_22_ptr.get();
        ULONG filterTransformer_Process_22_count = 1;
        // Construct operator and initialize it.
        unique_ptr<OperatorDelegate<Process_4_Data0>> delegate_filterTransformer_Process_22_ptr (new OperatorDelegate<Process_4_Data0>(OperatorDelegate<Process_4_Data0>::FromOperator(filterTransformer_Process_22)));
        OperatorDelegate<Process_4_Data0> * delegate_filterTransformer_Process_22 = delegate_filterTransformer_Process_22_ptr.get();
        ULONG delegate_filterTransformer_Process_22_count = 1;
        // Define the type of the operator
        typedef ScopeProcessor<Process_4_Data0, Process_4_Data0> ReducerType_Process_23;
        // Construct operator and initialize it.
        unique_ptr<ReducerType_Process_23> reducer_Process_23_ptr (new ReducerType_Process_23(ScopeReducerManagedFactory::Make<Process_4_Data0,Process_4_Data0,UID_Process_23>(delegate_filterTransformer_Process_22), delegate_filterTransformer_Process_22, UID_Process_23));
        ReducerType_Process_23 * reducer_Process_23 = reducer_Process_23_ptr.get();
        ULONG reducer_Process_23_count = 1;
        // Define outputer type
        typedef Outputer<ReducerType_Process_23, Process_4_Data0, BinaryOutputPolicy<Process_4_Data0>, BinaryOutputStream, false> OutputerType1_SV4_Extract;
        // Construct operator and initialize it
        unique_ptr<OutputerType1_SV4_Extract> outputer_SV4_Extract_out0_ptr(new OutputerType1_SV4_Extract(reducer_Process_23, outputs[0].outputFileName, false, x_outputBufSize, x_outputBufCnt, UID_SV4_Extract_out0));
        OutputerType1_SV4_Extract * outputer_SV4_Extract_out0 = outputer_SV4_Extract_out0_ptr.get();
        try
        {
            // Init operator chain
            outputer_SV4_Extract_out0->Init();

            // Execute the whole vertex by calling the GetNextRow on top operator
            Process_4_Data0 row;
            outputer_SV4_Extract_out0->GetNextRow(row);

            // Close operator chain
            outputer_SV4_Extract_out0->Close();
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
        outputer_SV4_Extract_out0->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
    }
}
#endif // defined(COMPILE_NATIVE)

#if defined(COMPILE_MANAGED)
template ScopeProcessorManaged<Process_1_Data0, Process_1_Data0> * ScopeEngine::ScopeProcessorManagedFactory::Make<Process_1_Data0, Process_1_Data0, UID_Process_21>(OperatorDelegate<Process_1_Data0>*);
template ScopeProcessorManaged<Process_4_Data0, Process_4_Data0> * ScopeEngine::ScopeReducerManagedFactory::Make<Process_4_Data0, Process_4_Data0, UID_Process_23>(OperatorDelegate<Process_4_Data0>*);
#endif // defined(COMPILE_MANAGED)
#if defined(COMPILE_NATIVE)
#endif // defined(COMPILE_NATIVE)

#endif
#pragma endregion SV4_Extract
#pragma region SV5_Extract
#if defined(COMPILE_SV5_EXTRACT) || defined(COMPILE_ALL_VERTICES)
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
        "InputLanguage == \"en-us\"",
        "RowGuid",
        "RecognizedText",
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
                if (input.m_InputLanguage == staticconstant_0)
                {

                    exceptionIndex++;
                    output.m_RowGuid = input.m_RowGuid;
                    exceptionIndex++;
                    output.m_RecognizedText = input.m_RecognizedText;
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

            #pragma warning(push)
            #pragma warning(disable: 4100) // 'alloc': unreferenced formal parameter
            static void InitializeStatics(IncrementalAllocator * alloc)
            {
            #pragma warning(pop)
                staticconstant_0 = FString("en-us", 5);
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
                m_args.reset(gcnew Generic::List<String^>(ConvertArgsToArray(std::wstring{ L"-produce RowGuid,#_InputLanguage,#_RecognizedText,#_WritingRectRight,#_InkIsf -skipValidation" })));
            }
            catch (Exception ^ex)
            {
                ScopeEngineManaged::UserExceptionHelper::WrapUserException(___Scope_Generated_Classes___::__OperatorFactory__::Name_Process_26, "Constructor", ex);
                throw;
            }
            auto curRow = gcnew ___Scope_Generated_Classes___::Row_RowGuid_Guid_RecognizedText_String_InkIsf_String();
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
            alloc->CopyToManagedColumn(nativeRow.m_RecognizedText, managedRow[1], 1);
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
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_RecognizedText, managedRow[1]->Binary, alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_InkIsf, managedRow[2]->Binary, alloc);
        }
    };
#endif // defined(COMPILE_MANAGED)
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

    static const char * StringTable_Process_28 [] =
    {
        "RowGuid",
        "RecognizedText",
        "RecognizedText.Length",
        "InkIsf",
        "1.0",
        "\"*** After Last Expression ***\"",
    };

    template<>
    class RowTransformPolicy<Process_1_Data0, Process_4_Data0, UID_Process_28>
    {
    public:

        static bool FilterTransformRow(Process_1_Data0 & input, Process_4_Data0 & output, IncrementalAllocator * alloc)
        {

            int exceptionIndex = 0;
            try
            {
                    output.m_RowGuid = input.m_RowGuid;
                    exceptionIndex++;
                    output.m_RecognizedText = input.m_RecognizedText;
                    exceptionIndex++;
                    output.m_RecoLength = input.m_RecognizedText.Length();
                    exceptionIndex++;
                    output.m_InkIsf = input.m_InkIsf;
                    exceptionIndex++;
                    output.m_Weight = 1.0;
                    exceptionIndex++;
                    return true;
                    }
                    catch(...)
                    {
                        std::throw_with_nested(RuntimeExpressionException(StringTable_Process_28[exceptionIndex]));
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
    class KeyComparePolicy<Process_4_Data0,UID_Process_29>
    {
    public:
        struct KeyStruct
        {
            ScopeGuid m_RowGuid;

            KeyStruct(Process_4_Data0 & c) :
                m_RowGuid(c.m_RowGuid)
            {
            }

            KeyStruct(const Process_4_Data0 & c, IncrementalAllocator * alloc) :
                m_RowGuid(const_cast<Process_4_Data0&>(c).m_RowGuid)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_RowGuid(c.m_RowGuid)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_RowGuid(const_cast<KeyStruct&>(c).m_RowGuid)
            {
            }

            KeyStruct() :
                m_RowGuid()
            {
            }

            friend std::ostream& operator<<(std::ostream& os, const KeyStruct& row)
            {

                ScopeEngine::OutputRowContent(
                    std::string{ u8"RowGuid:Guid" },
                    reinterpret_cast<const char*>(&row),
                    os);

                return os;
            }
        };

        typedef KeyStruct KeyType;

        static int Compare(Process_4_Data0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_RowGuid, key.m_RowGuid)) != 0)
                return r;
            return r;
        }

        static int Compare(Process_4_Data0 * n1, Process_4_Data0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_RowGuid, (*n2).m_RowGuid)) != 0)
                return r;
            return r;
        }

    };


// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<>
    class RowTransformPolicy<Process_4_Data0, Process_4_Data0, UID_Process_29>
    {
    public:

        static bool FilterTransformRow(Process_4_Data0 & input, Process_4_Data0 & output, IncrementalAllocator * alloc)
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
    struct ManagedUDO<UID_Process_29>
    {
        typedef ScopeRuntime::Reducer UDO;

        ManagedUDO(std::string * argv, int argc)
        {
            try
            {
                m_udo.reset(___Scope_Generated_Classes___::__OperatorFactory__::Create_Process_29());
                m_args.reset(gcnew Generic::List<String^>(ConvertArgsToArray(std::wstring{ L"20 -random 1514015319 -weightCol Weight" })));
            }
            catch (Exception ^ex)
            {
                ScopeEngineManaged::UserExceptionHelper::WrapUserException(___Scope_Generated_Classes___::__OperatorFactory__::Name_Process_29, "Constructor", ex);
                throw;
            }
            auto curRow = gcnew ___Scope_Generated_Classes___::Row_193825B98C8C2D67();
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
    class InteropToManagedRowPolicy<Process_4_Data0, UID_Process_29>
    {
    public:
        static void Marshal(Process_4_Data0& nativeRow, KeyComparePolicy<Process_4_Data0,UID_Process_29>::KeyType& nativeKey, ScopeRuntime::Row^% managedRow, InteropAllocator * alloc)
        {
            alloc->CopyToManagedColumn(nativeKey.m_RowGuid, managedRow[0], 0);
            alloc->CopyToManagedColumn(nativeRow.m_RecognizedText, managedRow[1], 1);
            alloc->CopyToManagedColumn(nativeRow.m_RecoLength, managedRow[2], 2);
            alloc->CopyToManagedColumn(nativeRow.m_InkIsf, managedRow[3], 3);
            alloc->CopyToManagedColumn(nativeRow.m_Weight, managedRow[4], 4);
        }
    };

    template<>
    class InteropToNativeRowPolicy<Process_4_Data0, UID_Process_29>
    {
    public:
        static void Marshal(ScopeRuntime::Row^ managedRow, Process_4_Data0& nativeRow, IncrementalAllocator* alloc)
        {
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_RowGuid, managedRow[0]->Guid, alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_RecognizedText, managedRow[1]->Binary, alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_RecoLength, managedRow[2]->Integer, alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_InkIsf, managedRow[3]->Binary, alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_Weight, managedRow[4]->Double, alloc);
        }
    };
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_NATIVE)
    typedef SStreamExtractorV4<GetSStream_0_Data0, SStreamV3ExtractPolicy<GetSStream_0_Data0, UID_GetSStream_0, NullSchema>, UID_GetSStream_0, NullSchema, false> SStreamV3ExtractorType_SV5_Extract_GetSStream_24;
    SStreamV3ExtractorType_SV5_Extract_GetSStream_24 * CreateExtractor_SV5_Extract_GetSStream_24(unique_ptr<SStreamV3ExtractorType_SV5_Extract_GetSStream_24> * extractor_ptr)
    {
        extractor_ptr->reset(new SStreamV3ExtractorType_SV5_Extract_GetSStream_24(24, "", UID_GetSStream_24));
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
    extern "C" __declspec(dllexport) void __stdcall SV5_Extract_execute(std::string * argv, int argc, InputFileInfo* inputs, int inputCnt, OutputFileInfo* outputs, int outputCnt, VertexExecutionInfo * vertexExecutionInfo)
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
        unique_ptr<SStreamV3ExtractorType_SV5_Extract_GetSStream_24> extractor_0_ptr;
        SStreamV3ExtractorType_SV5_Extract_GetSStream_24 * extractor_0 = CreateExtractor_SV5_Extract_GetSStream_24(&extractor_0_ptr);
        ULONG extractor_0_count = 1;

        // Define the type of the operator
        typedef FilterTransformer<SStreamV3ExtractorType_SV5_Extract_GetSStream_24, GetSStream_0_Data0, Process_1_Data0, UID_Process_25> FilterTransformerType_Process_25;
        // Construct operator and initialize it.
        unique_ptr<FilterTransformerType_Process_25> filterTransformer_Process_25_ptr (new FilterTransformerType_Process_25(extractor_0, UID_Process_25));
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
        // Construct operator and initialize it.
        unique_ptr<OperatorDelegate<Process_1_Data0>> delegate_processor_Process_26_ptr (new OperatorDelegate<Process_1_Data0>(OperatorDelegate<Process_1_Data0>::FromOperator(processor_Process_26)));
        OperatorDelegate<Process_1_Data0> * delegate_processor_Process_26 = delegate_processor_Process_26_ptr.get();
        ULONG delegate_processor_Process_26_count = 1;
        // Define sorter type
        typedef Sorter<Process_1_Data0> SorterType_Process_27;
        // Construct operator and initialize it.
        unique_ptr<SorterType_Process_27> sorter_Process_27_ptr (new SorterType_Process_27(delegate_processor_Process_26, &StdSort<Process_1_Data0>::Sort<KeyComparePolicy<Process_1_Data0, UID_Process_2>, (sizeof(Process_1_Data0)<=CACHELINE_SIZE)>, ScopeLoserTreeDelegate<Process_1_Data0>::CreateDelegate<UID_Process_2>(), false, 2147483648 /*memoryQuota*/, UID_Process_27));
        SorterType_Process_27 * sorter_Process_27 = sorter_Process_27_ptr.get();
        ULONG sorter_Process_27_count = 1;
        // Define the type of the operator
        typedef FilterTransformer<SorterType_Process_27, Process_1_Data0, Process_4_Data0, UID_Process_28> FilterTransformerType_Process_28;
        // Construct operator and initialize it.
        unique_ptr<FilterTransformerType_Process_28> filterTransformer_Process_28_ptr (new FilterTransformerType_Process_28(sorter_Process_27, UID_Process_28));
        FilterTransformerType_Process_28 * filterTransformer_Process_28 = filterTransformer_Process_28_ptr.get();
        ULONG filterTransformer_Process_28_count = 1;
        // Construct operator and initialize it.
        unique_ptr<OperatorDelegate<Process_4_Data0>> delegate_filterTransformer_Process_28_ptr (new OperatorDelegate<Process_4_Data0>(OperatorDelegate<Process_4_Data0>::FromOperator(filterTransformer_Process_28)));
        OperatorDelegate<Process_4_Data0> * delegate_filterTransformer_Process_28 = delegate_filterTransformer_Process_28_ptr.get();
        ULONG delegate_filterTransformer_Process_28_count = 1;
        // Define the type of the operator
        typedef ScopeProcessor<Process_4_Data0, Process_4_Data0> ReducerType_Process_29;
        // Construct operator and initialize it.
        unique_ptr<ReducerType_Process_29> reducer_Process_29_ptr (new ReducerType_Process_29(ScopeReducerManagedFactory::Make<Process_4_Data0,Process_4_Data0,UID_Process_29>(delegate_filterTransformer_Process_28), delegate_filterTransformer_Process_28, UID_Process_29));
        ReducerType_Process_29 * reducer_Process_29 = reducer_Process_29_ptr.get();
        ULONG reducer_Process_29_count = 1;
        // Define outputer type
        typedef Outputer<ReducerType_Process_29, Process_4_Data0, BinaryOutputPolicy<Process_4_Data0>, BinaryOutputStream, false> OutputerType1_SV5_Extract;
        // Construct operator and initialize it
        unique_ptr<OutputerType1_SV5_Extract> outputer_SV5_Extract_out0_ptr(new OutputerType1_SV5_Extract(reducer_Process_29, outputs[0].outputFileName, false, x_outputBufSize, x_outputBufCnt, UID_SV5_Extract_out0));
        OutputerType1_SV5_Extract * outputer_SV5_Extract_out0 = outputer_SV5_Extract_out0_ptr.get();
        try
        {
            // Init operator chain
            outputer_SV5_Extract_out0->Init();

            // Execute the whole vertex by calling the GetNextRow on top operator
            Process_4_Data0 row;
            outputer_SV5_Extract_out0->GetNextRow(row);

            // Close operator chain
            outputer_SV5_Extract_out0->Close();
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
        outputer_SV5_Extract_out0->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
    }
}
#endif // defined(COMPILE_NATIVE)

#if defined(COMPILE_MANAGED)
template ScopeProcessorManaged<Process_1_Data0, Process_1_Data0> * ScopeEngine::ScopeProcessorManagedFactory::Make<Process_1_Data0, Process_1_Data0, UID_Process_26>(OperatorDelegate<Process_1_Data0>*);
template ScopeProcessorManaged<Process_4_Data0, Process_4_Data0> * ScopeEngine::ScopeReducerManagedFactory::Make<Process_4_Data0, Process_4_Data0, UID_Process_29>(OperatorDelegate<Process_4_Data0>*);
#endif // defined(COMPILE_MANAGED)
#if defined(COMPILE_NATIVE)
#endif // defined(COMPILE_NATIVE)

#endif
#pragma endregion SV5_Extract
#pragma region SV6_Combine
#if defined(COMPILE_SV6_COMBINE) || defined(COMPILE_ALL_VERTICES)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<Process_4_Data0,UID_Aggregate_30>
    {
    public:
        struct KeyStruct
        {
            ScopeGuid m_RowGuid;

            KeyStruct(Process_4_Data0 & c) :
                m_RowGuid(c.m_RowGuid)
            {
            }

            KeyStruct(const Process_4_Data0 & c, IncrementalAllocator * alloc) :
                m_RowGuid(const_cast<Process_4_Data0&>(c).m_RowGuid)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_RowGuid(c.m_RowGuid)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_RowGuid(const_cast<KeyStruct&>(c).m_RowGuid)
            {
            }

            KeyStruct() :
                m_RowGuid()
            {
            }

            friend std::ostream& operator<<(std::ostream& os, const KeyStruct& row)
            {

                ScopeEngine::OutputRowContent(
                    std::string{ u8"RowGuid:Guid" },
                    reinterpret_cast<const char*>(&row),
                    os);

                return os;
            }
        };

        typedef KeyStruct KeyType;

        static int Compare(Process_4_Data0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_RowGuid, key.m_RowGuid)) != 0)
                return r;
            return r;
        }

        static int Compare(Process_4_Data0 * n1, Process_4_Data0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_RowGuid, (*n2).m_RowGuid)) != 0)
                return r;
            return r;
        }

    };


// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<Process_4_Data0,UID_Process_31>
    {
    public:
        struct KeyStruct
        {
            ScopeGuid m_RowGuid;

            KeyStruct(Process_4_Data0 & c) :
                m_RowGuid(c.m_RowGuid)
            {
            }

            KeyStruct(const Process_4_Data0 & c, IncrementalAllocator * alloc) :
                m_RowGuid(const_cast<Process_4_Data0&>(c).m_RowGuid)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_RowGuid(c.m_RowGuid)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_RowGuid(const_cast<KeyStruct&>(c).m_RowGuid)
            {
            }

            KeyStruct() :
                m_RowGuid()
            {
            }

            friend std::ostream& operator<<(std::ostream& os, const KeyStruct& row)
            {

                ScopeEngine::OutputRowContent(
                    std::string{ u8"RowGuid:Guid" },
                    reinterpret_cast<const char*>(&row),
                    os);

                return os;
            }
        };

        typedef KeyStruct KeyType;

        static int Compare(Process_4_Data0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_RowGuid, key.m_RowGuid)) != 0)
                return r;
            return r;
        }

        static int Compare(Process_4_Data0 * n1, Process_4_Data0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_RowGuid, (*n2).m_RowGuid)) != 0)
                return r;
            return r;
        }

    };


// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<>
    class RowTransformPolicy<Process_4_Data0, Process_4_Data0, UID_Process_31>
    {
    public:

        static bool FilterTransformRow(Process_4_Data0 & input, Process_4_Data0 & output, IncrementalAllocator * alloc)
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
    struct ManagedUDO<UID_Process_31>
    {
        typedef ScopeRuntime::Reducer UDO;

        ManagedUDO(std::string * argv, int argc)
        {
            try
            {
                m_udo.reset(___Scope_Generated_Classes___::__OperatorFactory__::Create_Process_31());
                m_args.reset(gcnew Generic::List<String^>(ConvertArgsToArray(std::wstring{ L"20 -random 1514015319 -weightCol Weight" })));
            }
            catch (Exception ^ex)
            {
                ScopeEngineManaged::UserExceptionHelper::WrapUserException(___Scope_Generated_Classes___::__OperatorFactory__::Name_Process_31, "Constructor", ex);
                throw;
            }
            auto curRow = gcnew ___Scope_Generated_Classes___::Row_193825B98C8C2D67();
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
    class InteropToManagedRowPolicy<Process_4_Data0, UID_Process_31>
    {
    public:
        static void Marshal(Process_4_Data0& nativeRow, KeyComparePolicy<Process_4_Data0,UID_Process_31>::KeyType& nativeKey, ScopeRuntime::Row^% managedRow, InteropAllocator * alloc)
        {
            alloc->CopyToManagedColumn(nativeKey.m_RowGuid, managedRow[0], 0);
            alloc->CopyToManagedColumn(nativeRow.m_RecognizedText, managedRow[1], 1);
            alloc->CopyToManagedColumn(nativeRow.m_RecoLength, managedRow[2], 2);
            alloc->CopyToManagedColumn(nativeRow.m_InkIsf, managedRow[3], 3);
            alloc->CopyToManagedColumn(nativeRow.m_Weight, managedRow[4], 4);
        }
    };

    template<>
    class InteropToNativeRowPolicy<Process_4_Data0, UID_Process_31>
    {
    public:
        static void Marshal(ScopeRuntime::Row^ managedRow, Process_4_Data0& nativeRow, IncrementalAllocator* alloc)
        {
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_RowGuid, managedRow[0]->Guid, alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_RecognizedText, managedRow[1]->Binary, alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_RecoLength, managedRow[2]->Integer, alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_InkIsf, managedRow[3]->Binary, alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_Weight, managedRow[4]->Double, alloc);
        }
    };
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    template<> 
    class TextOutputPolicy<Process_4_Data0, UID_SV6_Combine_out0>
    {
    public:

        static void Serialize(TextOutputStream<TextOutputStreamTraitsConst<'\t', '\0', false, true, false, false, false, Default, false, CharFormat_uint16>, CosmosOutput> * output, Process_4_Data0 & row)
        {
            output->Write<ScopeGuid,false>(row.m_RowGuid);
            output->WriteDelimiter();
            if (!row.m_RecognizedText.IsNull())
            {
                output->Write<FString,false>(row.m_RecognizedText);
            }
            output->WriteDelimiter();
            output->Write<int,false>(row.m_RecoLength);
            output->WriteDelimiter();
            if (!row.m_InkIsf.IsNull())
            {
                output->Write<FString,false>(row.m_InkIsf);
            }
            output->WriteDelimiter();
            output->Write<double,false>(row.m_Weight);
            output->WriteNewLine();
        }

        static void SerializeHeader(TextOutputStream<TextOutputStreamTraitsConst<'\t', '\0', false, true, false, false, false, Default, false, CharFormat_uint16>, CosmosOutput> * output)
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
namespace ScopeGeneratedClasses
{
    extern "C" __declspec(dllexport) void __stdcall SV6_Combine_execute(std::string * argv, int argc, InputFileInfo* inputs, int inputCnt, OutputFileInfo* outputs, int outputCnt, VertexExecutionInfo * vertexExecutionInfo)
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
        // Define extractor type and construct object
        typedef Extractor<Process_4_Data0, BinaryExtractPolicy<Process_4_Data0>, BinaryInputStream> ExtractorType1_SV6_Combine;        
        unique_ptr<ExtractorType1_SV6_Combine> extractor_0_ptr= make_unique<ExtractorType1_SV6_Combine>(inputs[0], false, x_inputBufSize, x_inputBufCnt, x_inputVirtualMemoryLimit, UID_SV1_Extract_out0);
        ExtractorType1_SV6_Combine * extractor_0 = extractor_0_ptr.get();
        ULONG extractor_0_count = 1;
        // Define extractor type and construct object
        typedef Extractor<Process_4_Data0, BinaryExtractPolicy<Process_4_Data0>, BinaryInputStream> ExtractorType2_SV6_Combine;        
        unique_ptr<ExtractorType2_SV6_Combine> extractor_1_ptr= make_unique<ExtractorType2_SV6_Combine>(inputs[1], false, x_inputBufSize, x_inputBufCnt, x_inputVirtualMemoryLimit, UID_SV2_Extract_out0);
        ExtractorType2_SV6_Combine * extractor_1 = extractor_1_ptr.get();
        ULONG extractor_1_count = 1;
        // Define extractor type and construct object
        typedef Extractor<Process_4_Data0, BinaryExtractPolicy<Process_4_Data0>, BinaryInputStream> ExtractorType3_SV6_Combine;        
        unique_ptr<ExtractorType3_SV6_Combine> extractor_2_ptr= make_unique<ExtractorType3_SV6_Combine>(inputs[2], false, x_inputBufSize, x_inputBufCnt, x_inputVirtualMemoryLimit, UID_SV3_Extract_out0);
        ExtractorType3_SV6_Combine * extractor_2 = extractor_2_ptr.get();
        ULONG extractor_2_count = 1;
        // Define extractor type and construct object
        typedef Extractor<Process_4_Data0, BinaryExtractPolicy<Process_4_Data0>, BinaryInputStream> ExtractorType4_SV6_Combine;        
        unique_ptr<ExtractorType4_SV6_Combine> extractor_3_ptr= make_unique<ExtractorType4_SV6_Combine>(inputs[3], false, x_inputBufSize, x_inputBufCnt, x_inputVirtualMemoryLimit, UID_SV4_Extract_out0);
        ExtractorType4_SV6_Combine * extractor_3 = extractor_3_ptr.get();
        ULONG extractor_3_count = 1;
        // Define extractor type and construct object
        typedef Extractor<Process_4_Data0, BinaryExtractPolicy<Process_4_Data0>, BinaryInputStream> ExtractorType5_SV6_Combine;        
        unique_ptr<ExtractorType5_SV6_Combine> extractor_4_ptr= make_unique<ExtractorType5_SV6_Combine>(inputs[4], false, x_inputBufSize, x_inputBufCnt, x_inputVirtualMemoryLimit, UID_SV5_Extract_out0);
        ExtractorType5_SV6_Combine * extractor_4 = extractor_4_ptr.get();
        ULONG extractor_4_count = 1;
        // Construct combined operator and initialize it
        unique_ptr<OperatorDelegate<Process_4_Data0>> delegate_6CE40C304A3C6FA5_array[5];
        delegate_6CE40C304A3C6FA5_array[0].reset(new OperatorDelegate<Process_4_Data0>(extractor_0));
        delegate_6CE40C304A3C6FA5_array[1].reset(new OperatorDelegate<Process_4_Data0>(extractor_1));
        delegate_6CE40C304A3C6FA5_array[2].reset(new OperatorDelegate<Process_4_Data0>(extractor_2));
        delegate_6CE40C304A3C6FA5_array[3].reset(new OperatorDelegate<Process_4_Data0>(extractor_3));
        delegate_6CE40C304A3C6FA5_array[4].reset(new OperatorDelegate<Process_4_Data0>(extractor_4));
        OperatorDelegate<Process_4_Data0> ** delegate_6CE40C304A3C6FA5 = (OperatorDelegate<Process_4_Data0> **)delegate_6CE40C304A3C6FA5_array;
        // Define the type of the operator
        typedef Merger<OperatorDelegate<Process_4_Data0>, Process_4_Data0, ScopeLoserTree<OperatorDelegate<Process_4_Data0>, Process_4_Data0, UID_Aggregate_30>, UID_Aggregate_30> AggregateType_Aggregate_30;
        // Construct operator object and initialize it
        unique_ptr<AggregateType_Aggregate_30> aggregate_Aggregate_30_ptr(new AggregateType_Aggregate_30(delegate_6CE40C304A3C6FA5 + 0, 5, UID_Aggregate_30));
        AggregateType_Aggregate_30 * aggregate_Aggregate_30 = aggregate_Aggregate_30_ptr.get();
        ULONG aggregate_Aggregate_30_count = 1; 
        // Construct operator and initialize it.
        unique_ptr<OperatorDelegate<Process_4_Data0>> delegate_aggregate_Aggregate_30_ptr (new OperatorDelegate<Process_4_Data0>(OperatorDelegate<Process_4_Data0>::FromOperator(aggregate_Aggregate_30)));
        OperatorDelegate<Process_4_Data0> * delegate_aggregate_Aggregate_30 = delegate_aggregate_Aggregate_30_ptr.get();
        ULONG delegate_aggregate_Aggregate_30_count = 1;
        // Define the type of the operator
        typedef ScopeProcessor<Process_4_Data0, Process_4_Data0> ReducerType_Process_31;
        // Construct operator and initialize it.
        unique_ptr<ReducerType_Process_31> reducer_Process_31_ptr (new ReducerType_Process_31(ScopeReducerManagedFactory::Make<Process_4_Data0,Process_4_Data0,UID_Process_31>(delegate_aggregate_Aggregate_30), delegate_aggregate_Aggregate_30, UID_Process_31));
        ReducerType_Process_31 * reducer_Process_31 = reducer_Process_31_ptr.get();
        ULONG reducer_Process_31_count = 1;
        // Define outputer type
        typedef Outputer<ReducerType_Process_31, Process_4_Data0, TextOutputPolicy<Process_4_Data0, UID_SV6_Combine_out0>, TextOutputStream<TextOutputStreamTraitsConst<'\t', '\0', false, true, false, false, false, Default, false, CharFormat_uint16>, CosmosOutput>, false> OutputerType6_SV6_Combine;
        // Construct operator and initialize it
        unique_ptr<OutputerType6_SV6_Combine> outputer_SV6_Combine_out0_ptr(new OutputerType6_SV6_Combine(reducer_Process_31, outputs[0].outputFileName, false, x_outputBufSize, x_outputBufCnt, OutputStreamParameters('\t', "\r\n", '\0', static_cast<const char*>(__nullptr), false, true, false, false, NULL, Default, false, CharFormat_uint16), UID_SV6_Combine_out0));
        OutputerType6_SV6_Combine * outputer_SV6_Combine_out0 = outputer_SV6_Combine_out0_ptr.get();
        try
        {
            // Init operator chain
            outputer_SV6_Combine_out0->Init();

            // Execute the whole vertex by calling the GetNextRow on top operator
            Process_4_Data0 row;
            outputer_SV6_Combine_out0->GetNextRow(row);

            // Close operator chain
            outputer_SV6_Combine_out0->Close();
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
        outputer_SV6_Combine_out0->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
    }
}
#endif // defined(COMPILE_NATIVE)

#if defined(COMPILE_MANAGED)
template ScopeProcessorManaged<Process_4_Data0, Process_4_Data0> * ScopeEngine::ScopeReducerManagedFactory::Make<Process_4_Data0, Process_4_Data0, UID_Process_31>(OperatorDelegate<Process_4_Data0>*);
#endif // defined(COMPILE_MANAGED)
#if defined(COMPILE_NATIVE)
#endif // defined(COMPILE_NATIVE)

#endif
#pragma endregion SV6_Combine
// Empty footer
