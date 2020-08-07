#include "IOperatingHour.hpp"

CNC_Status Notify_OperatingHour(float val)
{
    IOperatingHour temp;
    ICNC Obj;

    temp.Set_OperatingHour(val);
    Obj.Set_CNC_Parameter_flag(OperatingHourflag,temp.IsOperatingHourNok());
    return(Report_Diagnosis());
}
