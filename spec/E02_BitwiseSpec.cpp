#include "stdafx.h"

#include "../src/E02_Bitwise.cpp"

using namespace System;
using namespace System::Text;
using namespace System::Collections::Generic;
using namespace Microsoft::VisualStudio::TestTools::UnitTesting;

namespace spec
{
    [TestClass]
    public ref class E02_BitwiseSpec
    {
    private:
        TestContext^ testContextInstance;
        
    public:
        /// <summary>
        ///Gets or sets the test context which provides
        ///information about and functionality for the current test run.
        ///</summary>
        property Microsoft::VisualStudio::TestTools::UnitTesting::TestContext^ TestContext
        {
            Microsoft::VisualStudio::TestTools::UnitTesting::TestContext^ get()
            {
                return testContextInstance;
            }
            System::Void set(Microsoft::VisualStudio::TestTools::UnitTesting::TestContext^ value)
            {
                testContextInstance = value;
            }
        };
        
        [TestMethod]
        void Test_andOfEachByte()
        {
            Assert::AreEqual(0xFF, andOfEachByte(0xFFFFFFFF), L"andOfEachByte(0XFFFFFFFF) failed", 1, 2);
            
            Assert::AreEqual(0, andOfEachByte(0x00FFFFFF), L"andOfEachByte(0X00FFFFFF) failed", 1, 2);
            
            Assert::AreEqual(0x0F, andOfEachByte(0x0F0F0F0F), L"andOfEachByte(0x0F0F0F0F) failed", 1, 2);
            
            Assert::AreEqual(0x11, andOfEachByte(0x113377FF), L"andOfEachByte(0x11335577) failed", 1, 2);
            
            Assert::AreEqual(0x33, andOfEachByte(0x3377BBFF), L"andOfEachByte(0x335577FF) failed", 1, 2);
        };
    };
}
