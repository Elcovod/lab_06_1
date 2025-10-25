#include "pch.h"
#include "CppUnitTest.h"
#include "F:\Project\lab_06_1_it\lab_06_1_it\lab_06_1_it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest_ArrayFunctions
{
    TEST_CLASS(ArrayFunctionTests)
    {
    public:

        TEST_METHOD(Test_SumFunction_CalculatesCorrectly)
        {
            const int SIZE = 5;
            int arr[SIZE] = { 10, 15, 20, 21, 25 };

            int actual_sum = sum(arr, SIZE);

            int expected_sum = 55;

            Assert::AreEqual(expected_sum, actual_sum, L"Сума елементів обчислена невірно.");
        }

        TEST_METHOD(Test_ReplaceElements_Function)
        {
            const int SIZE = 5;
            int arr[SIZE] = { 10, 15, 20, 21, 25 };
            int expected_arr[SIZE] = { 0, 15, 0, 21, 0 };

            replaceElements(arr, SIZE);

            for (int i = 0; i < SIZE; ++i) {
                Assert::AreEqual(expected_arr[i], arr[i], L"Елемент замінено невірно.");
            }
        }
    };
}