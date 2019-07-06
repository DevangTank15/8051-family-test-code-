#ifndef MUL_SEV_DRIVER_H
#define MUL_SEV_DRIVER_H

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
