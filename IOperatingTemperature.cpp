#include "IOperatingTemperature.hpp"

bool ICNC::CNC_Param_flag[Param_List_end];

CNC_Status Notify_OperatingTemperature(float val)
{
    IOperatingTemperature temp;
    ICNC Obj;

    temp.Set_OperatingTemperature(val);
    Obj.Set_CNC_Parameter_flag(OperatingTempflag,temp.IsOperatingTemperatureNOk());
    return(Report_Diagnosis());

}
