#include <stdint.h>

#define PIN_D0  P1

typedef union {
    struct __attribute__((Packed)) {
        unsigned bit0:1;
        unsigned bit1:1;
        unsigned bit2:1;
        unsigned bit3:1;
        unsigned bit4:1;
        unsigned bit5:1;
        unsigned bit6:1;
        unsigned bit7:1;
    };
    uint8_t all;
} BytetoBitstr;
