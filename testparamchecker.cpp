#include "IStatusCode.hpp"
#include "ICNC.hpp"
#include <gtest/gtest.h>
#include "IDimensionVariation.hpp"
#include "IOperatingHour.hpp"
#include "IOperatingTemperature.hpp"


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

TEST(StatusCode, ok) { 
    ASSERT_EQ(CNC_Ok, Notify_StatusCode(0xFF));
}

TEST(DimensionVariation, NOk) { 
    ASSERT_EQ(CNC_CheckMachine, Notify_DimensionVariation(0.06));
}

TEST(DimensionVariation, Ok) { 
    ASSERT_EQ(CNC_Ok, Notify_DimensionVariation(0.02));
}


TEST(OperatinHour, NOk) { 
    ASSERT_EQ(CNC_CheckEnvironment, Notify_OperatingHour(361));
}

TEST(OperatingHour, Ok) { 
    ASSERT_EQ(CNC_CheckMachine_Environment, Notify_OperatingHour(359));
}

TEST(OperatingTemp, NOK) { 
    ASSERT_EQ(CNC_CheckMachine_Environment, Notify_OperatingTemperature(36));
}


TEST(OperatingTemp, OK) { 
    ASSERT_EQ(CNC_CheckMachine_Environment, Notify_OperatingTemperature(34));
}

TEST(Combination_Dimension_OperatingTemp, NOK) { 
    ASSERT(Notify_DimensionVariation(0.06));
    ASSERT_EQ(CNC_CheckMachine_Environment, Notify_OperatingTemperature(36));
}




int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
