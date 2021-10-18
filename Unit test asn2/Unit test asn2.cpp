#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int *length, int *width);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Unittestasn2
{
	TEST_CLASS(Unittestasn2)
	{
	public:
		
		TEST_METHOD(perimeter_test)
		{
			//This is testing the perimeter function
			int result = 0;
			int x = 5;
			int y = 3;
			result = getPerimeter(&x, &y);
			Assert::AreEqual(16, result);
		}
	};
}
