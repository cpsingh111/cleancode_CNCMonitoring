#include "IStatusCode.hpp"
#include <gtest/gtest.h>


TEST(Notify_StatusCode, ok) { 
    ASSERT_EQ(false, Notify_StatusCode(0xFF));
}

TEST(Notify_StatusCode, Nok) { 
    ASSERT_EQ(false, Notify_StatusCode(0x00));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
