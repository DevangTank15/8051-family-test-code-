#ifndef MUL_SEV_DRIVER_H
#define MUL_SEV_DRIVER_H

#define LED_A 
#define LED_B
#define LED_C
#define LED_D
#deifne LED_E
#define LED_F
#define LED_G
#define LED_DOT

#define SEG_1
#define SEG_2
#define SEG_3
#define SEG_4

#define DIGIT_0 (LED_A|LED_B|LED_C|LED_D|LED_E|LED_E)
#define DIGIT_1 (LED_B|LED_C)
#define DIGIT_2 (LED_A|LED_B|LED_D|LED_E|LED_G)
#define DIGIT_3 (LED_A|LED_B|LED_C|LED_D|LED_G)
#define DIGIT_4 (LED_B|LED_C|LED_F|LED_G)
#define DIGIT_5 (LED_A|LED_C|LED_D|LED_F|LED_G)
#define DIGIT_6 (LED_A|LED_C|LED_D|LED_E|LED_F|LED_G)
#define DIGIT_7 (LED_A|LED_B|LED_C)
#define DIGIT_8 (LED_A|LED_B|LED_C|LED_D|LED_E|LED_F|LED_G)
#define DIGIT_9 (LED_A|LED_B|LED_C|LED_E|LED_G)

unsigned char Digit[10] = {DIGIT_0, DIGIT_1, DIGIT_2, DIGIT_3, DIGIT_4, DIGIT_5, DIGIT_6, DIGIT_7, DIGIT_8, DIGIT_9};

extern sbit Led_A
extern sbit Led_B
extern sbit Led_C
extern sbit Led_D
extern sbit Led_E
extern sbit Led_F
extern sbit Led_G
extern sbit Led_Dot

extern sbit Seg_1
extern sbit Seg_2
extern sbit Seg_3
extern sbit Seg_4

extern sfr segport;
extern sfr dataport;

void SegPort(unsigned char dat);
void adjustbrightness(unsigned char brightness);
void rotating_display(char* str);
void use_timer(void);

#endif    //MUL_SEV_DRIVER_H_
