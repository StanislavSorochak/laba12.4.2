#include "pch.h"
#include "CppUnitTest.h"
#include "../laba12.4.2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Spusok* L = NULL;
			Spusok* L1 = NULL;
			Spusok* L2 = NULL;
			Spusok* T, * G;

			int x = 0, inf, N = 2, i = 0;
			T = L;
			inf = -3;
			Creata(L, T, inf, N, i);

			T = L;
			Process(L, L1, L2, T, G, i);

			T = L2;
			int l = T->inf;
			Assert::AreEqual(l, -3);
		}
	};
}

