#include "IStatusCode.hpp"
#include "ICNC.hpp"
#include <gtest/gtest.h>
#include "IDimensionVariation.hpp"


TEST(StatusCode, ok) { 
    ASSERT_EQ(CNC_Ok, Notify_StatusCode(0xFF));
}

TEST(StatusCode, Empty) { 
    ASSERT_EQ(CNC_CheckMachine, Notify_StatusCode(0x00));
}


TEST(StatusCode, ControllerBoard) { 
    ASSERT_EQ(CNC_CheckMachine, Notify_StatusCode(0x01));
}


TEST(StatusCode, Config_data) { 
    ASSERT_EQ(CNC_CheckMachine, Notify_StatusCode(0x02));
}

TEST(StatusCode, Undefined) { 
    ASSERT_EQ(CNC_CheckMachine, Notify_StatusCode(0x03));
}

TEST(DImensionVariation, Ok) { 
    ASSERT_EQ(CNC_Ok, Notify_DimensionVariation(0.02));
}

TEST(DImensionVariation, NOk) { 
    ASSERT_EQ(CNC_CheckMachine, Notify_DimensionVariation(0.06));
}



int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
