#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int *length, int *width);
extern "C" int getArea(int* length, int* width);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Unittestasn2
{
	TEST_CLASS(Unittestasn2)
	{
	public:
		
		TEST_METHOD(perimeter_test)
		{
			//This is testing the getPerimeter function using 5 + 5 + 3 + 3 = 16
			int result = 0;
			int x = 5;
			int y = 3;
			result = getPerimeter(&x, &y);
			Assert::AreEqual(16, result);
		}
		TEST_METHOD(area_test)
		{
			//This is testing the getArea function using 5 * 3 = 15
			int result = 0;
			int x = 5;
			int y = 3;
			result = getArea(&x, &y);
			Assert::AreEqual(15, result);
		}
		TEST_METHOD(test3)
		{

		}
		TEST_METHOD(test4)
		{

		}
		TEST_METHOD(test5)
		{

		}
		TEST_METHOD(test6)
		{

		}
		TEST_METHOD(test7)
		{

		}
		TEST_METHOD(test8)
		{

		}
	};
}
