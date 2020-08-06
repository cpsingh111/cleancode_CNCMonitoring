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

class ICNC
{
private:
    CNC_Status CNC_LED;
public:
    bool StartUpStatusflag;
    bool OperatingTempflag;
    bool DimensionVariationflag;
    bool OperatingHourflag;

    ICNC()
    {
       CNC_LED = CNC_Ok;
    }

     CNC_Status Report_Diagnosis();

};

#endif