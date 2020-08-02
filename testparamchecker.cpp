#include "IStatusCode.hpp"
#include <gtest/gtest.h>


TEST(StatusCode, ok) { 
    ASSERT_EQ(false, Notify_StatusCode(0xFF));
}

TEST(StatusCode, Empty) { 
    ASSERT_EQ(true, Notify_StatusCode(0x00));
}


TEST(StatusCode, ControllerBoard) { 
    ASSERT_EQ(true, Notify_StatusCode(0x01));
}


TEST(StatusCode, Config data) { 
    ASSERT_EQ(true, Notify_StatusCode(0x02));
}

TEST(StatusCode, Undefined) { 
    ASSERT_EQ(true, Notify_StatusCode(0x02));
}


int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
