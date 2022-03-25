#include "pch.h"
#include "CppUnitTest.h"
#include "../CPlusPlusUnitTesting/CPlusPlusUnitTesting.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace TestingName;

namespace CPlusPlusUnitTestingTest
{
	TEST_CLASS(CPlusPlusUnitTestingTest)
	{
	public:
		SampleTesting st;

		TEST_METHOD(TestMethod1)
		{
			Assert::IsTrue(st.add(1,2) < 0);
		}

		TEST_METHOD(TestMethod2)
		{
			Assert::IsTrue(st.add(1,2) > 0);
		}
	};
}
