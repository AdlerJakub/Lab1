#include "stdafx.h"
#include "CppUnitTest.h"
#include "CMath.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Lab1Test1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(dodawanie)
		{
			CMath tester;
			int x = 1, y = 2;
			int oczekiwana = 3;
			tester.Add(x, y);
			int wynik = tester.GetValue();
			Assert::AreEqual(oczekiwana, wynik);
		}
		TEST_METHOD(dodawanieujemnych)
		{
			CMath tester;
			int x = -1, y = -2;
			int oczekiwana = -3;
			tester.Add(x, y);
			int wynik = tester.GetValue();
			Assert::AreEqual(oczekiwana, wynik);
		}
		TEST_METHOD(odejmowanie)
		{
			CMath tester;
			int x = -1, y = -2;
			int oczekiwana = 1;
			tester.Sub(x, y);
			int wynik = tester.GetValue();
			Assert::AreEqual(oczekiwana, wynik);
		}
		TEST_METHOD(mno¿enie)
		{
			CMath tester;
			int x = -1, y = -2;
			int oczekiwana = 2;
			tester.Mul(x, y);
			int wynik = tester.GetValue();
			Assert::AreEqual(oczekiwana, wynik);
		}
		TEST_METHOD(dzielenieprzezzero)
		{
			CMath tester;
			int x = 10, y = 0;
			result_en oczekiwana = res_error;
			result_en wynik = tester.Div(x, y);
			Assert::IsTrue(oczekiwana == wynik); 
		}
		TEST_METHOD(dzielenie)
		{
			CMath tester;
			int x = 10, y = 2;
			int oczekiwana = 5;
			tester.Div(x, y);
			int wynik = tester.GetValue();
			Assert::AreEqual(oczekiwana, wynik);
		}
		TEST_METHOD(funkcjakwadratowa1)
		{
			CMath tester;
			int a=1, b=2, c = 3;
			double x1, x2;
			result_en wynik= tester.SquareFunc(a, b, c, x1, x2);
			result_en oczekiwana = res_error;
			Assert::IsTrue(oczekiwana == wynik);
		}
		TEST_METHOD(funkcjakwadratowa2)
		{
			CMath tester;
			int a = 1, b = 2, c = 1;
			double x1, x2;
			result_en wynik = tester.SquareFunc(a, b, c, x1, x2);
			result_en oczekiwana = res_one;
			Assert::IsTrue(oczekiwana == wynik);
		}
		TEST_METHOD(funkcjakwadratowa3)
		{
			CMath tester;
			int a = 1, b = 3, c = 1;
			double x1, x2;
			result_en wynik = tester.SquareFunc(a, b, c, x1, x2);
			result_en oczekiwana = res_ok;
			Assert::IsTrue(oczekiwana == wynik);
		}

	};
}