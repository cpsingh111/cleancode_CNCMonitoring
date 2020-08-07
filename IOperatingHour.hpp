#ifndef IOPERATINGHOUR_H
#define IOPERATINGHOUR_H

#include "ICNC.hpp"

CNC_Status Notify_OperatingHour(float val);

class IOperatingHour:public ICNC
{
private:
    float OperatingHour;
    float OperatingHourmax= 360;//in minutes
public:
    void Set_OperatingHour( float val){
        OperatingHour=val;
    }
    float Get_OperatingHour(void){
        return OperatingHour;
    }
    bool IsOperatingHourNok(void){
        return(!Islessthan(OperatingHour,OperatingHourmax));
    }

    IOperatingHour(){
        OperatingHour =15;

    }
};

#endif
