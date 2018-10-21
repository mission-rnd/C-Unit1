#include "stdafx.h"

#include "../src/L01_Functions.cpp"

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
			Assert::AreEqual(___, a[0], L"tenTimesVector3(a) failed", 1, 2);
			Assert::AreEqual(___, a[1], L"tenTimesVector3(a) failed", 1, 2);
			Assert::AreEqual(___, a[2], L"tenTimesVector3(a) failed", 1, 2);
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

		[TestMethod, Timeout(1000)]
		void Test_numberOfPrimeFactorsSimple()
		{
			Assert::AreEqual(___, numberOfPrimeFactors(10), L"numberOfPrimeFactors(a) failed",1,2);
		};

		[TestMethod, Timeout(1000)]
		void Test_numberOfPrimeFactorsMedium()
		{
			Assert::AreEqual(___, numberOfPrimeFactors(23532), L"numberOfPrimeFactors(a) failed", 1, 2);
		};

		[TestMethod, Timeout(1000)]
		void Test_numberOfPrimeFactorsLarge()
		{
			Assert::AreEqual(___, numberOfPrimeFactors(45325420), L"numberOfPrimeFactors(a) failed", 1, 2);
		};

		[TestMethod, Timeout(1000)]
		void Test_numberOfPrimeFactorsVector()
		{
			int a[] = { 907288, 978782, 381860, 721573, 56498, 182655 };
			primeFactorsVector(a, sizeof(a) / sizeof(a[0]));
			Assert::AreEqual(___, a[0], L"primeFactorsVector() failed for 907288", 1, 2);
			Assert::AreEqual(___, a[1], L"primeFactorsVector() failed for 978782", 1, 2);
			Assert::AreEqual(___, a[2], L"primeFactorsVector() failed for 381860", 1, 2);
			Assert::AreEqual(___, a[3], L"primeFactorsVector() failed for 721573", 1, 2);
			Assert::AreEqual(___, a[4], L"primeFactorsVector() failed for 56498", 1, 2);
			Assert::AreEqual(___, a[5], L"primeFactorsVector() failed for 182655", 1, 2);
		};

		//do not modify this function.
		//returns true if strings a,b are same.
		bool isEqualStrings(char a[], char b[]){
            int i;
            for (i = 0; a[i] != '\0' && b[i] != '\0'; i++) {
                if (a[i] != b[i]) {
                    return false;
                }
            }
            if (a[i] == '\0' && b[i] == '\0') {
				return true;
            }
			
            return false;
		}

		[TestMethod] 
		[Timeout(1000)]
		void Test_numberToStringZero()
		{
			char ans[12];
			numberToString(0,ans);
			Assert::AreEqual(true,isEqualStrings(____, ans), L"numberToString() failed", 1, 2);
		}

		[TestMethod, Timeout(1000)]
		void Test_numberToStringPositive()
		{
			char ans[12];
			numberToString(53, ans);
			Assert::AreEqual(true, isEqualStrings(____, ans), L"numberToString() failed", 1, 2);
		}

		[TestMethod] 
		[Timeout(1000)]
		void Test_numberToStringNegative()
		{
			char ans[12];
			numberToString(-25, ans);
			Assert::AreEqual(true, isEqualStrings(____, ans), L"numberToString() failed", 1, 2);
		}

		[TestMethod, Timeout(1000)]
		void Test_nTimesMysteryVectorN(){
			int n = 5;
			int vector[] = { 32433, 25563, 24313, 5674, 5 };
			nTimesMysteryVectorN(n, vector, sizeof(vector) / sizeof(vector[0]));
			Assert::AreEqual(___, vector[0], L"nTimesMysteryVectorN() failed", 1, 2);
			Assert::AreEqual(___, vector[1], L"nTimesMysteryVectorN() failed", 1, 2);
			Assert::AreEqual(___, vector[2], L"nTimesMysteryVectorN() failed", 1, 2);
			Assert::AreEqual(___, vector[3], L"nTimesMysteryVectorN() failed", 1, 2);
			Assert::AreEqual(___, vector[4], L"nTimesMysteryVectorN() failed", 1, 2);
		}

		[TestMethod, Timeout(1000)]
		void Test_tenTimesMysteryVectorN(){
			int vector[] = { 32433, 25563, 24313, 5674, 5 };
			tenTimesMysteryVectorN(vector, sizeof(vector) / sizeof(vector[0]));
			Assert::AreEqual(___, vector[0], L"nTimesMysteryVectorN() failed", 1, 2);
			Assert::AreEqual(___, vector[1], L"nTimesMysteryVectorN() failed", 1, 2);
			Assert::AreEqual(___, vector[2], L"nTimesMysteryVectorN() failed", 1, 2);
			Assert::AreEqual(___, vector[3], L"nTimesMysteryVectorN() failed", 1, 2);
			Assert::AreEqual(___, vector[4], L"nTimesMysteryVectorN() failed", 1, 2);
		}
	};
}
