#include "IDimensionVariation.hpp"

bool ICNC::CNC_Param_flag[Param_List_end];

CNC_Status Notify_DimensionVariation(float val)
{
    IDimensionVariation temp;
    ICNC Obj;

    temp.Set_DimensionVariation(val);
    Obj.Set_CNC_Parameter_flag(DimensionVariationflag,temp.IsDimensionVariationNok());
    return(Report_Diagnosis());
}
