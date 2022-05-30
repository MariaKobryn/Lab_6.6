#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_6.6/Lab_6.6.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest66
{
	TEST_CLASS(UnitTest66)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Queue q;
			q.push(4);
			q.push(3);
			q.push(9);
			Assert::AreEqual(q.pop(), 4);
			Assert::AreEqual(q.pop(), 3);
			Assert::AreEqual(q.pop(), 9);
		}
	};
}
