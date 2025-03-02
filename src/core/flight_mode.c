#include <flight_mode.h>


bool mode_needs_mocap(flight_mode_t mode){
    //if(mode == AUTONOMOUS || mode == LOITER || mode == LOITER_RSP || mode == ALT_HOLD)
    if(mode == AUTONOMOUS || mode == LOITER || mode == LOITER_RSP)
    {
        return true;
    }

    return false;
}
