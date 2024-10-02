#include "pch.h"
#include "CppUnitTest.h"
#include "../LB5.4/main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest54
{
	TEST_CLASS(UnitTest54)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double c;
			c = S0(10);
			Assert::AreEqual(c, 15.6973, 0.01);
		}

		TEST_METHOD(TestMethod2)
		{
			double q;
			q = S1(10, 10);
			Assert::AreEqual(q, 15.6973, 0.01);
		}

		TEST_METHOD(TestMethod3)
		{
			double w;
			w = S2(10, 22); 
		    Assert::AreEqual(w, 15.6973, 0.01);
		}

		TEST_METHOD(TestMethod4)
		{
			double e;
			e = S3(10, 10, 10);
			Assert::AreEqual(e, 25.6973, 0.001);
		}

		TEST_METHOD(TestMethod5)
		{
			double r;
			r = S4(10, 22, 10);
			Assert::AreEqual(r, 25.6973, 0.001);
		}
	};
}