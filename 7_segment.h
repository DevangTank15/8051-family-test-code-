extern sbit led_a;
extern sbit led_b;
extern sbit led_c;
extern sbit led_d;
extern sbit led_e;
extern sbit led_f;
extern sbit led_g;
extern sbit led_dot;

#define LED_A       (1 << 0)
#define LED_B       (1 << 1)
#define LED_C       (1 << 2)
#define LED_D       (1 << 3)
#define LED_E       (1 << 4)
#define LED_F       (1 << 5)
#define LED_G       (1 << 6)
#define LED_DOT     (1 << 7)

#ifdef COMMON_CATHOD
#define TURN_ON_DOT(SEG_DATA)   (SEG_DATA | LED_DOT)
#else
#define TURN_ON_DOT(SEG_DATA)   (SEG_DATA | (~LED_DOT))
#endif

#define DIGIT_0     (LED_A | LED_B | LED_C | LED_D | LED_E | LED_F)
#define DIGIT_1     (LED_B | LED_C)
#define DIGIT_2     (LED_A | LED_B | LED_D | LED_E | LED_G)
#define DIGIT_3     (LED_A | LED_B | LED_C | LED_D | LED_G)
#define DIGIT_4     (LED_B | LED_C | LED_F | LED_G)
#define DIGIT_5     (LED_A | LED_C | LED_D | LED_F | LED_G)
#define DIGIT_6     (LED_A | LED_C | LED_D | LED_E | LED_F | LED_G)
#define DIGIT_7     (LED_A | LED_B | LED_C)
#define DIGIT_8     (LED_A | LED_B | LED_C | LED_D | LED_E | LED_F | LED_G)
#define DIGIT_9     (LED_A | LED_B | LED_C | LED_D | LED_E | LED_G)

unsigned char Digit[10] = {DIGIT_0, DIGIT_1, DIGIT_2, DIGIT_3, DIGIT_4, DIGIT_5, DIGIT_6, DIGIT_7, DIGIT_8, DIGIT_9};

void WriteSegport(unsigned char segdata){
    led_a = ((segdata & LED_A) > 0) ? 1 : 0;
    led_a = ((segdata & LED_B) > 0) ? 1 : 0;
    led_a = ((segdata & LED_C) > 0) ? 1 : 0;
    led_a = ((segdata & LED_D) > 0) ? 1 : 0;
    led_a = ((segdata & LED_E) > 0) ? 1 : 0;
    led_a = ((segdata & LED_F) > 0) ? 1 : 0;
    led_a = ((segdata & LED_G) > 0) ? 1 : 0;
    led_dot = ((segdata & LED_DOT) > 0) ? 1 : 0;
}