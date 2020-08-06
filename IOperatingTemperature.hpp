#ifndef IOPERATINGTEMP_H
#define IOPERATINGTEMP_H

#include "ICNC.hpp"

CNC_Status Notify_OperatingTemperature(float val);

class IOperatingTemperature
{
private:
    float OperatingTemperature;
    float OperatingTemperaturemax= 35;// in degC
public:
    void Set_OperatingTemperature( float val){
        OperatingTemperature=val;
    }
    float Get_OperatingTemperature(void){
        return OperatingTemperature;
    }
    bool IsOperatingTemperatureNOk(void){
        return(!Islessthan(OperatingTemperature,OperatingTemperaturemax));
    }

    IOperatingTemperature()
    {
        OperatingTemperature =27;//Nominal Room Temp
    }
};

#endif