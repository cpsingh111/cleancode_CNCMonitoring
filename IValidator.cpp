#include "IValidator.hpp"

bool Validate_Environment_Param()
{
    ICNC Obj;
 
    return(Obj.Get_CNC_Parameter_flag(OperatingHourflag)||Obj.Get_CNC_Parameter_flag(OperatingTempflag));

}

bool Validate_Machine_Param()
{
    ICNC Obj;
 
    return(Obj.Get_CNC_Parameter_flag(StartUpStatusflag)||Obj.Get_CNC_Parameter_flag(DimensionVariationflag));

}
