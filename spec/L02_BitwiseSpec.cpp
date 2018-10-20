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
		void Test_twoPowerN()
		{
			Assert::AreEqual(___, twoPowerN(2), L"twoPowerN(2) failed", 1, 2);
			Assert::AreEqual(___, twoPowerN(3), L"twoPowerN(3) failed", 1, 2);
			Assert::AreEqual(___, twoPowerN(6), L"twoPowerN(6) failed", 1, 2);
		};
	};
}
