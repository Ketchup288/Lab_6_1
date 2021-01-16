#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_6_1_iter/Lab_6_1_iter.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int const h = 16;
			int e[h] = { 25, 32, 54, 35, 64, 29, 74, 21, 55, -20, -1, 25, 30, -24, 12, 45 };
			int w = SumArguments(e, h); // Тест функції, яка обчислює кількість чисел  масиві, які є більші нуля і непарні
			Assert::AreEqual(w, 7);
		}
	};
}
