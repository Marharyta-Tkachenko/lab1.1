#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Student\ Tkachenko.Marharyta.IK11\Lab1.1\Lab1.1\Product.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Product p;
			p.Init(30, 4);
			double result = p.Power();
			Assert::AreEqual(result, 1200.0);
		}
	};
}
