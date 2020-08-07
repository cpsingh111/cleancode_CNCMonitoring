#ifndef ISTATUSCODE_H
#define ISTATUSCODE_H

#include "ICNC.hpp"

#define StatusCode_AllOk 0xFF
#define StatusCode_NoData 0x00
#define StatusCode_ControlBoardNok 0x01
#define StatusCode_ConfigdataNok 0x02 

CNC_Status Notify_StatusCode(float val);

class IStatusCode: public ICNC
{
private:
    float StatusCode;

public:
    void Set_StatusCode( float val){
        StatusCode=val;
    }
    float Get_StatusCode(void){
        return StatusCode;
    }
    bool IsStatusCodeNOk(void){
        return(Islessthan(StatusCode,StatusCode_AllOk));
    }

    IStatusCode()
    {
        StatusCode=StatusCode_NoData;
    }
};


#endif
