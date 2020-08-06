#include "IStatusCode.hpp"

CNC_Status Notify_StatusCode(int val)
{
    IStatusCode temp;
    ICNC Obj;

    temp.Set_StatusCode(val);
    Obj.StartUpStatusflag =temp.IsStatusCodeNOk();
    return(Report_Diagnosis());
}
