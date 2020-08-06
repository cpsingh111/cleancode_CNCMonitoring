#ifndef ICNC_H
#define ICNC_H

#define Islessthan(arg, limit) (arg<limit)

typedef enum
{
    CNC_Ok,
    CNC_CheckMachine,
    CNC_CheckEnvironment,
    CNC_CheckMachine_Environment
}CNC_Status;

CNC_Status Report_Diagnosis();

class ICNC
{
private:
    CNC_Status CNC_LED;
public:
    static bool StartUpStatusflag;
    static bool OperatingTempflag;
    static bool DimensionVariationflag;
    static bool OperatingHourflag;

    ICNC()
    {
       CNC_LED = CNC_Ok;
       StartUpStatusflag=false;
       OperatingTempflag=false;
       OperatingHourflag=false;
       DimensionVariationflag=false;
    }

};

#endif
