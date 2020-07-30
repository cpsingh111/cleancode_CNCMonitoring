bool Notify_StatusCode(int val);

class IStatusCode
{
private:
    int StatusCode;
    int StatusCode_AllOk= 0xFF;
    int StatusCode_NoData= 0x00;
    int StatusCode_ControlBoardNok =0x01;
    int StatusCode_ConfigdataNok = 0x02; 
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
};
