#ifndef ISTATUSCODE_H
#define ISTATUSCODE_H


#define StatusCode_AllOk 0xFF
#define StatusCode_NoData 0x00
#define StatusCode_ControlBoardNok 0x01
#define StatusCode_ConfigdataNok 0x02 
bool Notify_StatusCode(int val);


class IStatusCode
{
private:
    int StatusCode;

public:
    void Set_StatusCode( int val){
        StatusCode=val;
    }
    float Get_StatusCode(void){
        return StatusCode;
    }
    bool IsStatusCodeNOk(void){
        return(StatusCode<StatusCode_AllOk);
    }

    IStatusCode()
    {
        
    }
};
#endif
