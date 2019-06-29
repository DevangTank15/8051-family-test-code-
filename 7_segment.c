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

#define LED_A (1 << 0)
#define LED_B (1 << 1)
#define LED_C (1 << 2)
#define LED_D (1 << 3)
#define LED_E (1 << 4)
#define LED_F (1 << 5)
#define LED_G (1 << 6)
#define LED_DOT (1 << 7)

#define DIGIT_0 LED_A|LED_B|LED_C|LED_D|LED_E|LED_F
#define DIGIT_1 LED_B|LED_C
#define DIGIT_2 LED_A|LED_B|LED_D|LED_E|LED_G
#define DIGIT_3 LED_A|LED_B|LED_C|LED_D|LED_G
#define DIGIT_4 LED_B|LED_C|LED_F|LED_G
#define DIGIT_5 LED_A|LED_C|LED_D|LED_F|LED_G
#define DIGIT_6 LED_A|LED_C|LED_D|LED_E|LED_F|LED_G
#define DIGIT_7 LED_A|LED_B|LED_C
#define DIGIT_8 LED_A|LED_B|LED_C|LED_D|LED_E|LED_F|LED_H
#define DIGIT_9 LED_A|LED_B|LED_C|LED_D|LED_E|LED_G

unsigned char Digit[10] = {DIGIT_0, DIGIT_1, DIGIT_2, DIGIT_3, DIGIT_4, DIGIT_5, DIGIT_6, DIGIT_7, DIGIT_8, DIGIT_9};

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
