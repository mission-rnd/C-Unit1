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
	};
}
