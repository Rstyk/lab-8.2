#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 8.2/lab 8.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace laba82
{
	TEST_CLASS(laba82)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char str[] = "aaaa bb bccc dd bgtr";
			int result = Count(str);
			Assert::AreEqual(3, result);

		}
	};
}
