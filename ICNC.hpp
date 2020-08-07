#ifndef ICNC_H
#define ICNC_H

#define Islessthan(arg, limit) (arg<limit)

typedef enum
{
    CNC_Ok,
    CNC_CheckMachine,
    CNC_CheckEnvironment,
    CNC_CheckMachine_Environment
}CNC_Status;

typedef enum 
{
    StartUpStatusflag,
    OperatingTempflag,
    DimensionVariationflag,
    OperatingHourflag,
    Param_List_end
}CNC_Param_List;

CNC_Status Report_Diagnosis();
bool CNC_Param_flag[Param_List_end];

class ICNC
{
private:
public:
    bool Get_CNC_Parameter_flag(CNC_Param_List param)
    {
        return CNC_Param_flag[param];
    }
    void Set_CNC_Parameter_flag(CNC_Param_List param, bool val){
        CNC_Param_flag[param]=val;
    }

    ICNC()
    {
      
    }

};

#endif
