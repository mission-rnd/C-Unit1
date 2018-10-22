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
        
		[TestMethod, Timeout(1000)]
		void Test_andOfEachByte1()
		{
			Assert::AreEqual(0, andOfEachByte(0xA), L"andOfEachByte(0xA) failed", 1, 2);
		};

		[TestMethod, Timeout(1000)]
		void Test_andOfEachByte2()
		{
			Assert::AreEqual(0x20, andOfEachByte(0x60A2EF24), L"andOfEachByte(0x60A2EF24) failed", 1, 2);
		};

		[TestMethod, Timeout(1000)]
		void Test_andOfEachByte3()
		{
			Assert::AreEqual(0x10, andOfEachByte(0x577897D4), L"andOfEachByte(0x577897D4) failed", 1, 2);
		};

        [TestMethod, Timeout(1000)]
        void Test_andOfEachByte4()
        {
            Assert::AreEqual(0xFF, andOfEachByte(0xFFFFFFFF), L"andOfEachByte(0XFFFFFFFF) failed", 1, 2);
            
            Assert::AreEqual(0, andOfEachByte(0x00FFFFFF), L"andOfEachByte(0X00FFFFFF) failed", 1, 2);
            
            Assert::AreEqual(0x0F, andOfEachByte(0x0F0F0F0F), L"andOfEachByte(0x0F0F0F0F) failed", 1, 2);
            
            Assert::AreEqual(0x11, andOfEachByte(0x113377FF), L"andOfEachByte(0x11335577) failed", 1, 2);
            
            Assert::AreEqual(0x33, andOfEachByte(0x3377BBFF), L"andOfEachByte(0x335577FF) failed", 1, 2);
        };

		[TestMethod, Timeout(1000)]
		void Test_numberFromBits1()
		{
			int bits[32] = { 0, 1, 1, 0, 1, 1, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 1, 1, 0, 0, 1, 1, 1, 1, 0, 1, 1, 0, 1, 0 };
			Assert::AreEqual(1813328858, numberFromBits(bits), L"numberFromBits() failed", 1, 2);
		}

		[TestMethod, Timeout(1000)]
		void Test_numberFromBits2()
		{
			int bits[32] = { 0, 1, 1, 1, 0, 0, 0, 1, 1, 0, 1, 0, 0, 0, 0, 1, 1, 0, 1, 0, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 0 };
			Assert::AreEqual(1906421230, numberFromBits(bits), L"numberFromBits() failed", 1, 2);
		}

		[TestMethod, Timeout(1000)]
		void Test_numberFromBits3()
		{
			int bits[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
			Assert::AreEqual(0, numberFromBits(bits), L"numberFromBits() failed", 1, 2);
		}

		[TestMethod, Timeout(1000)]
		void Test_numberFromBits4()
		{
			int bits[32] = { 0, 0, 0, 1, 0, 1, 0, 1, 1, 1, 1, 0, 1, 1, 0, 0, 1, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 1, 1, 0, 1, 1 };
			Assert::AreEqual(367824795, numberFromBits(bits), L"numberFromBits() failed", 1, 2);
		}

        // helper function
		bool checkBits(int ans, int bits[32]){
			long a = 0;
			for (int i = 0; i < 32; i++)
				a = (a << 1) | bits[i];
			return a == ans;
		}

        //TODO: add negative numbers test
        
		[TestMethod, Timeout(1000)]
		void Test_bitsFromNumber1()
		{
			int bits[32];
			int n = 0;
			bitsFromNumber(n, bits);
			Assert::AreEqual(true, checkBits(n,bits), L"bitsFromNumber() failed", 1, 2);
		}

		[TestMethod, Timeout(1000)]
		void Test_bitsFromNumber2()
		{
			int bits[32];
			int n = 235;
			bitsFromNumber(n, bits);
			Assert::AreEqual(true, checkBits(n, bits), L"bitsFromNumber() failed", 1, 2);
		}

		[TestMethod, Timeout(1000)]
		void Test_bitsFromNumber3()
		{
			int bits[32];
			int n = 16384;
			bitsFromNumber(n, bits);
			Assert::AreEqual(true, checkBits(n, bits), L"bitsFromNumber() failed", 1, 2);
		}

		[TestMethod, Timeout(1000)]
		void Test_bitsFromNumber4()
		{
			int bits[32];
			int n = 2147483647;
			bitsFromNumber(n, bits);
			Assert::AreEqual(true, checkBits(n, bits), L"bitsFromNumber() failed", 1, 2);
		}

		[TestMethod, Timeout(1000)]
		void Test_numberOfOnesInBinary1()
		{
			int n = 0;
			Assert::AreEqual(0, numberOfOnesInBinary(n), L"numberOfOnesInBinary(" + n + L") failed",1,2);
		}

		[TestMethod, Timeout(1000)]
		void Test_numberOfOnesInBinary2()
		{
			int n = 15;
			Assert::AreEqual(4, numberOfOnesInBinary(n), L"numberOfOnesInBinary(" + n + L") failed", 1, 2);
		}

		[TestMethod, Timeout(1000)]
		void Test_numberOfOnesInBinary3()
		{
			int n = 840465220;
			Assert::AreEqual(13, numberOfOnesInBinary(n), L"numberOfOnesInBinary(" + n + L") failed", 1, 2);
		}

		[TestMethod, Timeout(1000)]
		void Test_numberOfOnesInBinary4()
		{
			int n = 966911870;
			Assert::AreEqual(19, numberOfOnesInBinary(n), L"numberOfOnesInBinary(" + n + L") failed", 1, 2);
		}

		[TestMethod, Timeout(1000)]
		void Test_isPalindromeInBase256Basic1()
		{
			int n = 5;
			Assert::AreEqual(1, isPalindromeInBase256(n), L"isPalindromeInBase256(" + n + L") failed", 1, 2);
		}

		[TestMethod, Timeout(1000)]
		void Test_isPalindromeInBase256Basic2()
		{
			int n = 255;
			Assert::AreEqual(1, isPalindromeInBase256(n), L"isPalindromeInBase256(" + n + L") failed", 1, 2);
		}

		[TestMethod, Timeout(1000)]
		void Test_isPalindromeInBase256Medium1()
		{
			int n = 1292503629;
			Assert::AreEqual(1, isPalindromeInBase256(n), L"isPalindromeInBase256(" + n + L") failed", 1, 2);
		}

		[TestMethod, Timeout(1000)]
		void Test_isPalindromeInBase256Medium2()
		{
			int n = 1292513628;
			Assert::AreEqual(0, isPalindromeInBase256(n), L"isPalindromeInBase256(" + n + L") failed", 1, 2);
		}
    };
}
