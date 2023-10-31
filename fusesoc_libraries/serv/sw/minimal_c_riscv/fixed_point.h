#include "stdint.h"


//fixed point float(point) 8.8
/**
 * range: -127 - 126
 * granuality: 0.00390625
*/

#define K (1 << (8 - 1))

const int16_t BASE = (1<<8)|31;//ca. 20th root of 10

int16_t sat(int32_t a){
    if(a > 0x7FFF) return 0x7FFF;
    else if(a < -0x8000) return -0x8000;

    return (int16_t)a;

}

int16_t point_mul(int16_t a, int16_t b){
    int16_t result = 0;
    int32_t temp = 0;

    temp = (int32_t)a * (int32_t)b;//multiply numbers

    temp += K;//round up the  number

    result = sat(temp>>8);

    return result;
    
}

int16_t pow_point(int16_t a, int b){
    if(b==0) return 0;
    if(b<0) b *= -1;
    int16_t base = a;

    while (b>1)
    {
        b--;
        a = point_mul(base,a);
    }
    
    return a;
}