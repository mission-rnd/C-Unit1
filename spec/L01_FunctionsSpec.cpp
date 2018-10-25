/*
 
 Note:
 You read the code in L01_Functions.cpp file and understand the behaviour.
 And replace the blanks with correct expected output in this file.
 
 */

#include "stdafx.h"

#include "../src/L01_Functions.cpp"
#include "TestHelperMethods.h"

using namespace System;
using namespace System::Text;
using namespace System::Collections::Generic;
using namespace Microsoft::VisualStudio::TestTools::UnitTesting;

namespace spec
{
	[TestClass]
	public ref class L01_FunctionsSpec
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
		void Test_numberOfPeople()
		{
			Assert::AreEqual(___, numberOfPeople(), L"numberOfPeople() failed", 1, 2);
		};

		[TestMethod]
		void Test_centimetersPerInch()
		{
			Assert::AreEqual(___, centimetersPerInch(), L"centimetersPerInch() failed", 1, 2);
		};
        
		[TestMethod]
		void Test_tenTimes()
		{
			int a = 100;
			Assert::AreEqual(___, tenTimes(a), L"tentimes(a) failed", 1, 2);
		};

		[TestMethod]
		void Test_tenTimesVector3()
		{
			int a[3] = {5, 6, 7};
			tenTimesVector3(a);
            int expectedA[] = ______;
			Assert::AreEqual(true, areEqualArrays(expectedA, a, 3), L"tenTimesVector3(a) failed", 1, 2);
        };

        [TestMethod]
        void Test_swap()
        {
            int a = 2;
            int b = 3;
            swap(a, b);
            Assert::AreEqual(___, a, L"swap(a, b) failed", 1, 2);
            Assert::AreEqual(___, b, L"swap(a, b) failed", 1, 2);
            
            // does this call work? what happens?
            swap(2, 4);
        };

        [TestMethod]
		void Test_numberOfPrimeFactorsSimple()
		{
			Assert::AreEqual(___, numberOfPrimeFactors(10), L"numberOfPrimeFactors(a) failed",1,2);
		};

        [TestMethod]
		void Test_numberOfPrimeFactorsMedium()
		{
			Assert::AreEqual(___, numberOfPrimeFactors(23532), L"numberOfPrimeFactors(a) failed", 1, 2);
		};

        [TestMethod]
		void Test_numberOfPrimeFactorsLarge()
		{
			Assert::AreEqual(___, numberOfPrimeFactors(45325420), L"numberOfPrimeFactors(a) failed", 1, 2);
		};
        
        [TestMethod]
		void Test_numberOfPrimeFactorsVector()
		{
			int a[] = { 907288, 978782, 381860, 721573, 56498, 182655 };
            int expectedA[] = ______;
			primeFactorsVector(a, sizeof(a) / sizeof(a[0]));
            Assert::AreEqual(true, areEqualArrays(a, expectedA, 6), L"primeFactorsVector() failed", 1, 2);
		};
 
        [TestMethod]
		void Test_numberToStringZero()
		{
			char ans[12];
			numberToString(0,ans);
			Assert::AreEqual(true,areEqualStrings(____, ans), L"numberToString() failed", 1, 2);
		}

        [TestMethod]
		void Test_numberToStringPositive()
		{
			char ans[12];
			numberToString(53, ans);
			Assert::AreEqual(true, areEqualStrings(____, ans), L"numberToString() failed", 1, 2);
		}

        [TestMethod]
		void Test_numberToStringNegative()
		{
			char ans[12];
			numberToString(-25, ans);
			Assert::AreEqual(true, areEqualStrings(____, ans), L"numberToString() failed", 1, 2);
		}

        [TestMethod]
		void Test_nTimesMysteryVectorN(){
			int n = 5;
			int vector[] = { 32433, 25563, 24313, 5674, 5 };
			nTimesMysteryVectorN(n, vector, sizeof(vector) / sizeof(vector[0]));
            int expectedVector[] = ______;
            Assert::AreEqual(true, areEqualArrays(vector, expectedVector, 5), L"nTimesMysteryVectorN() failed", 1, 2);
		}
        
        [TestMethod]
        void Test_sigmaNWithMystery()
        {
            Assert::AreEqual(___, sigmaNWithMystery(3), L"sigmaNWithMystery(3) failed", 1, 2);
            Assert::AreEqual(___, sigmaNWithMystery(5), L"sigmaNWithMystery(5) failed", 1, 2);
            Assert::AreEqual(___, sigmaNWithMystery(10), L"sigmaNWithMystery(10) failed", 1, 2);
            Assert::AreEqual(___, sigmaNWithMystery(0xFF), L"sigmaNWithMystery(0xFF) failed", 1, 2);
        };

		[TestMethod]
		void Test_tenTimesMysteryVectorN(){
			int vector[] = { 32433, 25563, 24313, 5674, 5 };
			tenTimesMysteryVectorN(vector, sizeof(vector) / sizeof(vector[0]));
            int expectedVector[] = ______;
            Assert::AreEqual(true, areEqualArrays(vector, expectedVector, 5), L"nTimesMysteryVectorN() failed", 1, 2);
        }
	};
}
