#include "IOperatingTemperature.hpp"


CNC_Status Notify_OperatingTemperature(float val)
{
    IOperatingTemperature temp;
    ICNC Obj;

    temp.Set_OperatingTemperature(val);
    Obj.OperatingTempflag =temp.IsOperatingTemperatureNOk();
    return(Report_Diagnosis());

}