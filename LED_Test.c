#include "reg51.h"

//please connect almost 330 ohm - 1kiloohm pull up resister on port pin.
        
int main(void)
{
    P0 = 0x00; //Turn off all LED at startup
    while(1)
    {
        for(P0 = 0x01; P0 != 0x00 ; P0 = P0 << 1)//Toggle led on Port0 sequentially.
        {
            Delay(500);
        }
    }
    return 0;
}

void Delay(unsigned int ivalue)
{
    unsigned int i,j
    for(i = 0; i < ivalue; i++)
        for(j = 0; j < 1150; j++);
}
