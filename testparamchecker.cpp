#include "IStatusCode.hpp"
#include <gtest/gtest.h>


TEST(StatusCode, ok) { 
    ASSERT_EQ(false, Notify_StatusCode(0xFF));
}

TEST(StatusCode, Nok) { 
    ASSERT_EQ(false, Notify_StatusCode(0x00));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
