#include "IStatusCode.hpp"

bool Notify_StatusCode(int val)
{
    IStatusCode temp;

    Set_StatusCode(val);
    return(IsStatusCodeNOk());
}