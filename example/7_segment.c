#define "reg51.h"

//#define COMMON_ANODE
#define COMMON_CATHOD

sbit led_a = P2^0;
sbit led_b = P2^1;
sbit led_c = P2^2;
sbit led_d = P2^3;
sbit led_e = P2^4;
sbit led_f = P2^5;
sbit led_g = P2^6;
sbit led_dot = P2^7;

int main(void)
{
  unsigned char temp = 0;
  while(1)
  {
#ifdef COMMON_CATHOD
    P2 = Digit[temp];
#else
    P2 = ~(Digit[temp]);
#endif
    if(temp > 10)(temp = 0);
  }
}
