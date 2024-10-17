#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

int getPerimeter(int* length, int* width);  // Declaration of the functions
int getArea(int* length, int* width);       
TEST_CLASS(RectangleTests)
{
public:

    // Test for the getPerimeter function
    TEST_METHOD(TestGetPerimeter)
    {
        int length = 5;
        int width = 3;
        int expectedPerimeter = 16; // 2 * (5 + 3) = 16

        int actualPerimeter = getPerimeter(&length, &width);

        Assert::AreEqual(expectedPerimeter, actualPerimeter);
    }

    // Test for the getArea function
    TEST_METHOD(TestGetArea)
    {
        int length = 5;
        int width = 3;
        int expectedArea = 15; // 5 * 3 = 15

        int actualArea = getArea(&length, &width);

        Assert::AreEqual(expectedArea, actualArea);
    }
};
