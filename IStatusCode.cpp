#include "IStatusCode.hpp"

bool Notify_StatusCode(int val)
{
    IStatusCode temp;

    temp.Set_StatusCode(val);
    return(temp.IsStatusCodeNOk());
}
