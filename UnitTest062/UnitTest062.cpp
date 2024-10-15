#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_06.2.cpp"  // Змінено назву на ітераційну версію

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest062)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            const int SIZE = 20;
            int arr[SIZE]{};
            int MIN = -29;
            int MAX = 30;

            create(arr, SIZE, MIN, MAX);  // Ітераційна версія create
            Assert::AreEqual(-27, findMin(arr, SIZE), 0.0001);  // Ітераційна версія findMin
        }

        TEST_METHOD(TestMethod2)
        {
            const int SIZE = 20;
            int arr[SIZE]{};
            int MIN = -29;
            int MAX = 30;

            create(arr, SIZE, MIN, MAX);  // Ітераційна версія create
            Assert::AreEqual(26, findMax(arr, SIZE), 0.0001);  // Ітераційна версія findMax
        }
    };
}
