#include "ICNC.hpp"
#include "IValidator.hpp"

bool CNC_Param_flag[Param_List_end];

CNC_Status Report_Diagnosis(){

    bool Environmentflag, MachineFlag;

    Environmentflag = Validate_Environment_Param();
    MachineFlag = Validate_Machine_Param();


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
