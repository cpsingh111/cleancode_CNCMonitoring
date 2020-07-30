#include "paramchecker.h"
#include <gtest/gtest.h>

float bpm[3]={60,90,50}; 
float spo2[3]={100,40,50};
float Resprate[3]={100,90,70};
float vital[3]={100,90,50};

TEST(VitalsTest, BPM) { 
    ASSERT_EQ(false, vitalsAreOk(bpm, 3));
}
 
TEST(VitalsTest, SPO2) {
    ASSERT_EQ(false, vitalsAreOk(spo2, 3));
}
 
 
TEST(VitalsTest, RespRate) {
    ASSERT_EQ(false, vitalsAreOk(Resprate,3));
}

TEST(VitalsTest, Pass) {
    ASSERT_EQ(true, vitalsAreOk(vital, 3));
}
 
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
