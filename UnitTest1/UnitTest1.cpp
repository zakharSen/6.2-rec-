#include "pch.h"
#include "CppUnitTest.h"
#include "../6.2(rec)/Source.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int arr[] = {1,0,4};
			sortDescending(arr, 3, 0);
			Assert::AreEqual(arr[0], 4);
		}
	};
}
