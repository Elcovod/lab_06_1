#include "pch.h"
#include "CppUnitTest.h"
#include "F:\Project\lab_06_1_rec\lab_06_1_rec\lab_06_1_rec.cpp" 

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest_RecursiveFunctions
{
    TEST_CLASS(RecursiveFunctionTests)
    {
    public:

        TEST_METHOD(Test_SumRecursive_CalculatesCorrectly)
        {
            const int SIZE = 5;
            int arr[SIZE] = { 10, 15, 20, 21, 25 };
            int actual_sum = Sum(arr, SIZE, 0, 0);
            int expected_sum = 55;
            Assert::AreEqual(expected_sum, actual_sum, L"Рекурсивна функція Sum обчислює суму невірно.");
        }

        TEST_METHOD(Test_CountRecursive_CalculatesCorrectly)
        {
            const int SIZE = 5;
            int arr[SIZE] = { 10, 15, 20, 21, 25 };
            int actual_count = Count(arr, SIZE, 0, 0);
            int expected_count = 3;
            Assert::AreEqual(expected_count, actual_count, L"Рекурсивна функція Count обчислює кількість невірно.");
        }
    };
}