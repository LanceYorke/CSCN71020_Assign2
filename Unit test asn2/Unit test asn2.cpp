#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int *length, int *width);
extern "C" int getArea(int *length, int *width);
extern "C" int setLength(int input, int *length);
extern "C" int setWidth(int input, int *width);

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
		TEST_METHOD(setlength_test1)
		{
			//This is testing the setLength function using an input of 20
			int result = 0;
			int x = 20;
			int y = 0;
			result = setLength(x, &y);
			Assert::AreEqual(20, result);
		}
		TEST_METHOD(setlength_test2)
		{
			//This is testing the setLength function using an input of -5
			int result = 0;
			int x = -5;
			int y = 0;
			result = setLength(x, &y);
			Assert::AreNotEqual(-5, result);
		}
		TEST_METHOD(setlength_test3)
		{
			//This is testing the setLength function using an input of 105
			int result = 0;
			int x = 105;
			int y = 0;
			result = setLength(x, &y);
			Assert::AreNotEqual(105, result);
		}
		TEST_METHOD(setwidth_test1)
		{
			//This is testing the setWidth function using an input of 20
			int result = 0;
			int x = 20;
			int y = 0;
			result = setWidth(x, &y);
			Assert::AreEqual(20, result);
		}
		TEST_METHOD(setwidth_test2)
		{
			//This is testing the setWidth function using an input of -5
			int result = 0;
			int x = -5;
			int y = 0;
			result = setWidth(x, &y);
			Assert::AreNotEqual(-5, result);
		}
		TEST_METHOD(setwidth_test3)
		{
			//This is testing the setWidth function using an input of 105
			int result = 0;
			int x = 105;
			int y = 0;
			result = setWidth(x, &y);
			Assert::AreNotEqual(105, result);
		}
	};
}
