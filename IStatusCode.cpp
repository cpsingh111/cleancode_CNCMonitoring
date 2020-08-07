#include "IStatusCode.hpp"

CNC_Status Notify_StatusCode(float val)
{
    IStatusCode temp;
    ICNC Obj;

    temp.Set_StatusCode(val);
    Obj.Set_CNC_Parameter_flag(StartUpStatusflag,temp.IsStatusCodeNOk());
    return(Report_Diagnosis());
}
