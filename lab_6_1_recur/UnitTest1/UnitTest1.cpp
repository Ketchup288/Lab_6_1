#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_6_1_recur/lab_6_1_recur.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int const h = 10;
			int g[h] = { 52, 16, -15, 41, -1, 12, 22, 75, -23, 24 };
			int l = Sum(g, h, 0, 0);
			Assert::AreEqual(l, 116);
		}
	};
}
