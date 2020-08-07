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

class ICNC
{
private:
    
public:
    static bool CNC_Param_flag[Param_List_end];
    bool Get_CNC_Parameter_flag(CNC_Param_List param)
    {
        return CNC_Param_flag[param];
    }
    void Set_CNC_Parameter_flag(CNC_Param_List param, bool val){
        CNC_Param_flag[param]=val;
    }

    ICNC()
    {
       for(int i=0;i<Param_List_end;i++){
           CNC_Param_flag[i]= false;
       }
    }

};

#endif
