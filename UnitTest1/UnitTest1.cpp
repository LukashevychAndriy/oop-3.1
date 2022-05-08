#include "pch.h"
#include "CppUnitTest.h"
#include "../oop-3.1/Number.h"
#include "../oop-3.1/Number.cpp"
#include "../oop-3.1/Real.h"
#include "../oop-3.1/Real.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Real a(2), b(3);

			Real res = a * b;

			float shouldBe = 6;

			Assert::AreEqual(res.getNumber(), shouldBe);
		}
	};
}
