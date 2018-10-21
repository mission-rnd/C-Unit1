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
		void Test_xorAB()
		{
			Assert::AreEqual(___, xorAB(10, 3), L"xorAB(10, 3) failed", 1, 2);
			Assert::AreEqual(___, xorAB(0, 13), L"xorAB(0, 13) failed", 1, 2);
			Assert::AreEqual(___, xorAB(5, 1), L"xorAB(5, 1) failed", 1, 2);
			Assert::AreEqual(___, xorAB(21, 17), L"xorAB(21, 17) failed", 1, 2);
		};

		[TestMethod]
		void Test_xorBA()
		{
			Assert::AreEqual(___, xorBA(3, 10), L"xorBA(3, 10) failed", 1, 2);
			Assert::AreEqual(___, xorBA(13, 0), L"xorBA(13, 0) failed", 1, 2);
			Assert::AreEqual(___, xorBA(1, -5), L"xorBA(1, -5) failed", 1, 2);
			Assert::AreEqual(___, xorBA(17, 21), L"xorBA(17, 21) failed", 1, 2);
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
		void Test_xorBB()
		{
			Assert::AreEqual(___, xorBB(3), L"xorBB(3) failed", 1, 2);
			Assert::AreEqual(___, xorBB(344), L"xorBB(344) failed", 1, 2);
			Assert::AreEqual(___, xorBB(-234), L"xorBB(-234) failed", 1, 2);
			Assert::AreEqual(___, xorBB(103), L"xorBB(103) failed", 1, 2);
		}

		[TestMethod]
		void Test_xorAZero()
		{
			Assert::AreEqual(___, xorAZero(3), L"xorAZero(3) failed", 1, 2);
			Assert::AreEqual(___, xorAZero(-234), L"xorAZero(-234) failed", 1, 2);
			Assert::AreEqual(___, xorAZero(103), L"xorAZero(103) failed", 1, 2);
		}

		[TestMethod]
		void Test_xorABA()
		{
			Assert::AreEqual(___, xorABA(3,5), L"xorABA(3,5) failed", 1, 2);
			Assert::AreEqual(___, xorABA(-234,19), L"xorABA(-234,19) failed", 1, 2);
			Assert::AreEqual(___, xorABA(103,41), L"xorABA(103,41) failed", 1, 2);
		}

		[TestMethod]
		void Test_xorAAB()
		{
			Assert::AreEqual(___, xorAAB(113, 45), L"xorABA(113,45) failed", 1, 2);
			Assert::AreEqual(___, xorAAB(-234, -19), L"xorABA(-234,-19) failed", 1, 2);
			Assert::AreEqual(___, xorAAB(10, -4), L"xorABA(10,-4) failed", 1, 2);
		}

		[TestMethod]
		void Test_turnOnNthBit()
		{
			Assert::AreEqual(___, turnOnNthBit(32343, 12), L"turnOnNthBit(32343, 12) failed", 1, 2);
			Assert::AreEqual(___, turnOnNthBit(-3534, -15), L"turnOnNthBit(-3534, -15) failed", 1, 2);
			Assert::AreEqual(___, turnOnNthBit(534556, 31), L"turnOnNthBit(534556, 31) failed", 1, 2);
			Assert::AreEqual(___, turnOnNthBit(24, 0), L"turnOnNthBit(24, 0) failed", 1, 2);
		}

		[TestMethod]
		void Test_xorNumbers()
		{
			int arr3[] = { 2, 3, 2 };
			int arrSame3[] = { 5, 5, 5 };
			int arr5[] = { 3, 21, 21, 3, 9 };
			Assert::AreEqual(___, xorNumbers(arr3, 3), L"xorNumbers({2, 3, 2}, 3) failed", 1, 2);
			Assert::AreEqual(___, xorNumbers(arr5, 5), L"xorNumbers({3, 21, 21, 3, 9}, 5) failed", 1, 2);
			Assert::AreEqual(___, xorNumbers(arrSame3, 3), L"xorNumbers({5, 5, 5}, 3) failed", 1, 2);
		};

		[TestMethod]
		void Test_twoPowerN()
		{
			Assert::AreEqual(___, twoPowerN(2), L"twoPowerN(2) failed", 1, 2);
			Assert::AreEqual(___, twoPowerN(3), L"twoPowerN(3) failed", 1, 2);
			Assert::AreEqual(___, twoPowerN(6), L"twoPowerN(6) failed", 1, 2);
			Assert::AreEqual(___, twoPowerN(0), L"twoPowerN(6) failed", 1, 2);
			Assert::AreEqual(___, twoPowerN(31), L"twoPowerN(31) failed", 1, 2);
		};

		[TestMethod]
		void Test_isOdd()
		{
			Assert::AreEqual(___, isOdd(2), L"isOdd(2) failed", 1, 2);
			Assert::AreEqual(___, isOdd(-4534), L"isOdd(-4534) failed", 1, 2);
			Assert::AreEqual(___, isOdd(2341), L"isOdd(2341) failed", 1, 2);
			Assert::AreEqual(___, isOdd(689), L"isOdd(689) failed", 1, 2);
		};

		[TestMethod]
		void Test_isEven()
		{
			Assert::AreEqual(___, isEven(-2), L"isOdd(-2) failed", 1, 2);
			Assert::AreEqual(___, isEven(4534), L"isOdd(4534) failed", 1, 2);
			Assert::AreEqual(___, isEven(2341), L"isOdd(2341) failed", 1, 2);
			Assert::AreEqual(___, isEven(-689), L"isOdd(-689) failed", 1, 2);
		};

		[TestMethod]
		void Test_leastSignificantByte()
		{
			Assert::AreEqual(___, leastSignificantByte(3453453), L"leastSignificantByte(3453453) failed", 1, 2);
			Assert::AreEqual(___, leastSignificantByte(2147483647), L"leastSignificantByte(2147483647) failed", 1, 2);
			Assert::AreEqual(___, leastSignificantByte(564434343), L"leastSignificantByte(564434343) failed", 1, 2);
			Assert::AreEqual(___, leastSignificantByte(0), L"leastSignificantByte(0) failed", 1, 2);
		};

		[TestMethod]
		void Test_mostSignificantByte()
		{
			Assert::AreEqual(___, mostSignificantByte(3453453), L"mostSignificantByte(3453453) failed", 1, 2);
			Assert::AreEqual(___, mostSignificantByte(2147483647), L"mostSignificantByte(2147483647) failed", 1, 2);
			Assert::AreEqual(___, mostSignificantByte(564434343), L"mostSignificantByte(564434343) failed", 1, 2);
			Assert::AreEqual(___, mostSignificantByte(0), L"mostSignificantByte(0) failed", 1, 2);
		};
	};
}
