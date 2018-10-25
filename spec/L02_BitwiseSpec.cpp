/*
 
 Note:
 You read the code in L02_Bitwise.cpp file and understand the behaviour.
 And replace the blanks with correct expected output in this file.
 
 */

#include "stdafx.h"

#include "../src/L02_Bitwise.cpp"

using namespace System;
using namespace System::Text;
using namespace System::Collections::Generic;
using namespace Microsoft::VisualStudio::TestTools::UnitTesting;

namespace spec
{
	[TestClass]
	public ref class L02_BitwiseSpec
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
		void Test_xorCommutativity()
		{
            Assert::AreEqual(___, xorAB(10, 3), L"xorAB(10, 3) failed", 1, 2);
            Assert::AreEqual(___, xorBA(10, 3), L"xorBA(10, 3) failed", 1, 2);
            
			Assert::AreEqual(___, xorAB(0, 13), L"xorAB(0, 13) failed", 1, 2);
            Assert::AreEqual(___, xorBA(0, 13), L"xorBA(0, 13) failed", 1, 2);
            
			Assert::AreEqual(___, xorAB(5, 1), L"xorAB(5, 1) failed", 1, 2);
            Assert::AreEqual(___, xorBA(5, 1), L"xorBA(5, 1) failed", 1, 2);
            
			Assert::AreEqual(___, xorAB(21, 17), L"xorAB(21, 17) failed", 1, 2);
            Assert::AreEqual(___, xorBA(21, 17), L"xorBA(21, 17) failed", 1, 2);
		};

		[TestMethod]
		void Test_xorAA()
		{
			Assert::AreEqual(___, xorAA(-3), L"xorAA(-3) failed", 1, 2);
			Assert::AreEqual(___, xorAA(3434), L"xorAA(3434) failed", 1, 2);
			Assert::AreEqual(___, xorAA(234), L"xorAA(234) failed", 1, 2);
			Assert::AreEqual(___, xorAA(13), L"xorAA(13) failed", 1, 2);
		}

		[TestMethod]
		void Test_xorAZero()
		{
			Assert::AreEqual(___, xorAZero(3), L"xorAZero(3) failed", 1, 2);
			Assert::AreEqual(___, xorAZero(-234), L"xorAZero(-234) failed", 1, 2);
			Assert::AreEqual(___, xorAZero(103), L"xorAZero(103) failed", 1, 2);
		}

		[TestMethod]
		void Test_xorAssociativity()
		{
			Assert::AreEqual(___, xorABA(3,5), L"xorABA(3,5) failed", 1, 2);
            Assert::AreEqual(___, xorAAB(3,5), L"xorAAB(3,5) failed", 1, 2);
            
			Assert::AreEqual(___, xorABA(-234,19), L"xorABA(-234,19) failed", 1, 2);
            Assert::AreEqual(___, xorAAB(-234,19), L"xorAAB(-234,19) failed", 1, 2);
            
			Assert::AreEqual(___, xorABA(103,41), L"xorABA(103,41) failed", 1, 2);
            Assert::AreEqual(___, xorAAB(103,41), L"xorAAB(103,41) failed", 1, 2);
		}

        [TestMethod]
		void Test_xorNumbers()
		{
			int arr3[] = { 2, 3, 2 };
			int arrSame3[] = { 5, 5, 5 };
			int arr5[] = { 3, 21, 21, 3, 9 };
			Assert::AreEqual(___, xorNumbers(arr3, 3), L"xorNumbers() failed", 1, 2);
			Assert::AreEqual(___, xorNumbers(arr5, 5), L"xorNumbers() failed", 1, 2);
			Assert::AreEqual(___, xorNumbers(arrSame3, 3), L"xorNumbers() failed", 1, 2);
		};
        
        [TestMethod]
        void Test_turnOnNthBit()
        {
            //
            // Note:
            // replace the blanks (___) with hexadecimal numbers.
            //
            Assert::AreEqual(___, turnOnNthBit(0x88, 0), L"turnOnNthBit(0x88, 0) failed", 1, 2);
            Assert::AreEqual(___, turnOnNthBit(0x88, 1), L"turnOnNthBit(0x88, 1) failed", 1, 2);
            Assert::AreEqual(___, turnOnNthBit(0x88, 2), L"turnOnNthBit(0x88, 2) failed", 1, 2);
            Assert::AreEqual(___, turnOnNthBit(0x88, 3), L"turnOnNthBit(0x88, 3) failed", 1, 2);
            Assert::AreEqual(___, turnOnNthBit(0x88, 4), L"turnOnNthBit(0x88, 4) failed", 1, 2);
            
            Assert::AreEqual(___, turnOnNthBit(0x7ABBCCDD, 27), L"turnOnNthBit(0x7ABBCCDD, 27) failed", 1, 2);
            Assert::AreEqual(___, turnOnNthBit(0x7ABBCCDD, 24), L"turnOnNthBit(0x7ABBCCDD, 24) failed", 1, 2);
            Assert::AreEqual(___, turnOnNthBit(0x7ABBCCDD, 13), L"turnOnNthBit(0x7ABBCCDD, 13) failed", 1, 2);
        }

		[TestMethod]
		void Test_twoPowerN()
		{
            //
            // Note:
            // replace the blanks (___) with integer numbers.
            //
			Assert::AreEqual(___, twoPowerN(2), L"twoPowerN(2) failed", 1, 2);
			Assert::AreEqual(___, twoPowerN(3), L"twoPowerN(3) failed", 1, 2);
			Assert::AreEqual(___, twoPowerN(6), L"twoPowerN(6) failed", 1, 2);
			Assert::AreEqual(___, twoPowerN(0), L"twoPowerN(6) failed", 1, 2);
		};

		[TestMethod]
		void Test_isOdd()
		{
			Assert::AreEqual(___, isOdd(2), L"isOdd(2) failed", 1, 2);
			Assert::AreEqual(___, isOdd(4534), L"isOdd(4534) failed", 1, 2);
			Assert::AreEqual(___, isOdd(2341), L"isOdd(2341) failed", 1, 2);
			Assert::AreEqual(___, isOdd(689), L"isOdd(689) failed", 1, 2);
		};

		[TestMethod]
		void Test_isEven()
		{
			Assert::AreEqual(___, isEven(2), L"isOdd(2) failed", 1, 2);
			Assert::AreEqual(___, isEven(4534), L"isOdd(4534) failed", 1, 2);
			Assert::AreEqual(___, isEven(2341), L"isOdd(2341) failed", 1, 2);
			Assert::AreEqual(___, isEven(689), L"isOdd(689) failed", 1, 2);
		};

		[TestMethod]
		void Test_SignificantBytes()
		{
            //
            // Note:
            // replace the blanks (___) with hexadecimal numbers.
            //
			Assert::AreEqual(___, leastSignificantByte(0x7ABBCCDD), L"leastSignificantByte(0x7ABBCCDD) failed", 1, 2);
            Assert::AreEqual(___, mostSignificantByte(0x7ABBCCDD), L"mostSignificantByte(0x7ABBCCDD) failed", 1, 2);
         
            
            Assert::AreEqual(___, leastSignificantByte(0x7FAADDCC), L"leastSignificantByte(0x7FAADDCC) failed", 1, 2);
            Assert::AreEqual(___, mostSignificantByte(0x7FAADDCC), L"mostSignificantByte(0x7FAADDCC) failed", 1, 2);

            Assert::AreEqual(___, leastSignificantByte(0x70AADDC0), L"leastSignificantByte(0x70AADDC0) failed", 1, 2);
            Assert::AreEqual(___, mostSignificantByte(0x70AADDC0), L"mostSignificantByte(0x70AADDC0) failed", 1, 2);
            
            Assert::AreEqual(___, leastSignificantByte(0), L"leastSignificantByte(0) failed", 1, 2);
            Assert::AreEqual(___, mostSignificantByte(0), L"mostSignificantByte(0) failed", 1, 2);
		};
        
        [TestMethod]
        void Test_reverseOfNumberByByte()
        {
            //
            // Note:
            // replace the blanks (___) with hexadecimal numbers.
            //
            Assert::AreEqual(___, reverseOfNumberByByte(0x7ABBCC7D), L"reverseOfNumberByByte(0x7ABBCC7D) failed", 1, 2);
            Assert::AreEqual(___, reverseOfNumberByByte(0x12345678), L"reverseOfNumberByByte(0x12345678) failed", 1, 2);
            
            Assert::AreEqual(___, reverseOfNumberByByte(0xFF00), L"reverseOfNumberByByte(0xFF00) failed", 1, 2);
            Assert::AreEqual(___, reverseOfNumberByByte(0xAA0000), L"reverseOfNumberByByte(0xAA0000) failed", 1, 2);
            Assert::AreEqual(___, reverseOfNumberByByte(0xABCD0000), L"reverseOfNumberByByte(0xABCD0000) failed", 1, 2);
            
            Assert::AreEqual(___, reverseOfNumberByByte(0), L"reverseOfNumberByByte(0) failed", 1, 2);
        };
	};
}
