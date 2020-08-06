#include "ICNC.hpp"


CNC_Status Report_Diagnosis(){

    ICNC Obj;
    bool Environmentflag, MachineFlag;

    Environmentflag = Obj.OperatingTempflag||Obj.OperatingHourflag;
    MachineFlag = Obj.StartUpStatusflag||Obj.DimensionVariationflag;


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
