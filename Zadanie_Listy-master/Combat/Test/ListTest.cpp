#include "List.hpp"
#include <gtest/gtest.h>

using namespace ::testing;

TEST(ListTest, ItShouldWork)
{
    List<float> testList;

    testList.pushBack(4.78);
    testList.pushBack(34.5);
    testList.pushBack(1.23);
    testList.pushBack(4.08);
    testList.pushBack(3.85);
    testList.pushBack(1.13);
    testList.size();
    ASSERT_EQ(testList.size(), 6);
}
