#include "ICNC.hpp"


CNC_Status Report_DIagnosis(){
    bool Environmentflag, MachineFlag;

    Environmentflag = OperatingTempflag||OperatingHourflag;
    MachineFlag = StartUpStatusflag||DimensionVariationflag;


    if(Environmentflag &&MachineFlag)
    {
        return(CNC_CheckMachine_Environment);
    }
    else if (Environmentflag)
    {
        return(CNC_CheckEnvironment);
    }
    else if (MachineFlag)
    {
        return(CNC_CheckMachine);
    }
    else
    {
        return(CNC_Ok);
    }    

}