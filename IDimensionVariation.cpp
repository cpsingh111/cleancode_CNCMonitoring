#include "IDimensionVariation.hpp"

CNC_Status Notify_DimensionVariation(float val)
{
    IDimensionVariation temp;
    ICNC Obj;

    temp.Set_DimensionVariation(val);
    Obj.DimensionVariationflag =temp.IsDimensionVariationNok();
    return(Report_Diagnosis());
}