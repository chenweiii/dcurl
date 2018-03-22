#ifndef POW_AVX_H_
#define POW_AVX_H_

#include "trinary.h"
#include <stdint.h>

typedef struct _pwork_struct Pwork_struct;

struct _pwork_struct {
    int8_t *mid;
    int mwm;
    int8_t *nonce;
    int n;
    int index;
    long long int ret;
};

int8_t *PowAVX(int8_t *trytes, int mwm, int index);
int pow_avx_init(int num_task);
void pow_avx_destroy();

#ifdef _MSC_VER
#include <intrin.h>
#else
#include <x86intrin.h>
#endif

#define HASH_LENGTH 243              //trits
#define STATE_LENGTH 3 * HASH_LENGTH //trits
#define NONCE_LENGTH 81
#define TX_LENGTH 2673               //trytes
#define INCR_START HASH_LENGTH - NONCE_LENGTH + 4 + 27

#ifdef __AVX2__
#define HBITS 0xFFFFFFFFFFFFFFFFuLL
#define LBITS 0x0000000000000000uLL
#define LOW00  0xDB6DB6DB6DB6DB6DuLL //0b1101101101101101101101101101101101101101101101101101101101101101
#define HIGH00 0xB6DB6DB6DB6DB6DBuLL //0b1011011011011011011011011011011011011011011011011011011011011011
#define LOW10  0xF1F8FC7E3F1F8FC7uLL //0b1111000111111000111111000111111000111111000111111000111111000111
#define HIGH10 0x8FC7E3F1F8FC7E3FuLL //0b1000111111000111111000111111000111111000111111000111111000111111
#define LOW20  0x7FFFE00FFFFC01FFuLL //0b0111111111111111111000000000111111111111111111000000000111111111
#define HIGH20 0xFFC01FFFF803FFFFuLL //0b1111111111000000000111111111111111111000000000111111111111111111
#define LOW30  0xFFC0000007FFFFFFuLL //0b1111111111000000000000000000000000000111111111111111111111111111
#define HIGH30 0x003FFFFFFFFFFFFFuLL //0b0000000000111111111111111111111111111111111111111111111111111111
#define LOW40  0xFFFFFFFFFFFFFFFFuLL //0b1111111111111111111111111111111111111111111111111111111111111111
#define HIGH40 0xFFFFFFFFFFFFFFFFuLL //0b1111111111111111111111111111111111111111111111111111111111111111
#define LOW50  0xFFFFFFFFFFFFFFFFuLL //0b1111111111111111111111111111111111111111111111111111111111111111
#define HIGH50 0xFFFFFFFFFFFFFFFFuLL //0b1111111111111111111111111111111111111111111111111111111111111111
#define LOW01  0x6DB6DB6DB6DB6DB6uLL //0b0110110110110110110110110110110110110110110110110110110110110110
#define HIGH01 0xDB6DB6DB6DB6DB6DuLL //0b1101101101101101101101101101101101101101101101101101101101101101
#define LOW11  0xF8FC7E3F1F8FC7E3uLL //0b1111100011111100011111100011111100011111100011111100011111100011
#define HIGH11 0xC7E3F1F8FC7E3F1FuLL //0b1100011111100011111100011111100011111100011111100011111100011111
#define LOW21  0xC01FFFF803FFFF00uLL //0b1100000000011111111111111111100000000011111111111111111100000000
#define HIGH21 0x3FFFF007FFFE00FFuLL //0b0011111111111111111100000000011111111111111111100000000011111111
#define LOW31  0x00000FFFFFFFFFFFuLL //0b0000000000000000000011111111111111111111111111111111111111111111
#define HIGH31 0xFFFFFFFFFFFE0000uLL //0b1111111111111111111111111111111111111111111111100000000000000000
#define LOW41  0x000000000001FFFFuLL //0b0000000000000000000000000000000000000000000000011111111111111111
#define HIGH41 0xFFFFFFFFFFFFFFFFuLL //0b1111111111111111111111111111111111111111111111111111111111111111
#define LOW51  0xFFFFFFFFFFFFFFFFuLL //0b1111111111111111111111111111111111111111111111111111111111111111
#define HIGH51 0xFFFFFFFFFFFFFFFFuLL //0b1111111111111111111111111111111111111111111111111111111111111111
#define LOW02  0xB6DB6DB6DB6DB6DBuLL //0b1011011011011011011011011011011011011011011011011011011011011011
#define HIGH02 0x6DB6DB6DB6DB6DB6uLL //0b0110110110110110110110110110110110110110110110110110110110110110
#define LOW12  0xFC7E3F1F8FC7E3F1uLL //0b1111110001111110001111110001111110001111110001111110001111110001
#define HIGH12 0xE3F1F8FC7E3F1F8FuLL //0b1110001111110001111110001111110001111110001111110001111110001111
#define LOW22  0xFFF007FFFE00FFFFuLL //0b1111111111110000000001111111111111111110000000001111111111111111
#define HIGH22 0xE00FFFFC01FFFF80uLL //0b1110000000001111111111111111110000000001111111111111111110000000
#define LOW32  0x1FFFFFFFFFFFFF80uLL //0b0001111111111111111111111111111111111111111111111111111110000000
#define HIGH32 0xFFFFFFFC0000007FuLL //0b1111111111111111111111111111110000000000000000000000000001111111
#define LOW42  0xFFFFFFFC00000000uLL //0b1111111111111111111111111111110000000000000000000000000000000000
#define HIGH42 0x00000003FFFFFFFFuLL //0b0000000000000000000000000000001111111111111111111111111111111111
#define LOW52  0xFFFFFFFFFFFFFFFFuLL //0b1111111111111111111111111111111111111111111111111111111111111111
#define HIGH52 0xFFFFFFFFFFFFFFFFuLL //0b1111111111111111111111111111111111111111111111111111111111111111
#define LOW03  0xDB6DB6DB6DB6DB6DuLL //0b1101101101101101101101101101101101101101101101101101101101101101
#define HIGH03 0xB6DB6DB6DB6DB6DBuLL //0b1011011011011011011011011011011011011011011011011011011011011011
#define LOW13  0x7E3F1F8FC7E3F1F8uLL //0b0111111000111111000111111000111111000111111000111111000111111000
#define HIGH13 0xF1F8FC7E3F1F8FC7uLL //0b1111000111111000111111000111111000111111000111111000111111000111
#define LOW23  0x0FFFFC01FFFF803FuLL //0b0000111111111111111111000000000111111111111111111000000000111111
#define HIGH23 0xFFF803FFFF007FFFuLL //0b1111111111111000000000111111111111111111000000000111111111111111
#define LOW33  0xFFFFFFFFFF000000uLL //0b1111111111111111111111111111111111111111000000000000000000000000
#define HIGH33 0xFFF8000000FFFFFFuLL //0b1111111111111000000000000000000000000000111111111111111111111111
#define LOW43  0xFFFFFFFFFFFFFFFFuLL //0b1111111111111111111111111111111111111111111111111111111111111111
#define HIGH43 0xFFF8000000000000uLL //0b1111111111111000000000000000000000000000000000000000000000000000
#define LOW53  0x0007FFFFFFFFFFFFuLL //0b0000000000000111111111111111111111111111111111111111111111111111
#define HIGH53 0xFFFFFFFFFFFFFFFFuLL //0b1111111111111111111111111111111111111111111111111111111111111111
#else
typedef union {double d; unsigned long long l;} dl;
#define HBITS ( ( (dl) 0xFFFFFFFFFFFFFFFFuLL ).d )
#define LBITS ( ( (dl) 0x0000000000000000uLL ).d )
#define LOW00  ( ( (dl)0xDB6DB6DB6DB6DB6DuLL ).d ) //0b1101101101101101101101101101101101101101101101101101101101101101
#define HIGH00 ( ( (dl)0xB6DB6DB6DB6DB6DBuLL ).d ) //0b1011011011011011011011011011011011011011011011011011011011011011
#define LOW10  ( ( (dl)0xF1F8FC7E3F1F8FC7uLL ).d ) //0b1111000111111000111111000111111000111111000111111000111111000111
#define HIGH10 ( ( (dl)0x8FC7E3F1F8FC7E3FuLL ).d ) //0b1000111111000111111000111111000111111000111111000111111000111111
#define LOW20  ( ( (dl)0x7FFFE00FFFFC01FFuLL ).d ) //0b0111111111111111111000000000111111111111111111000000000111111111
#define HIGH20 ( ( (dl)0xFFC01FFFF803FFFFuLL ).d ) //0b1111111111000000000111111111111111111000000000111111111111111111
#define LOW30  ( ( (dl)0xFFC0000007FFFFFFuLL ).d ) //0b1111111111000000000000000000000000000111111111111111111111111111
#define HIGH30 ( ( (dl)0x003FFFFFFFFFFFFFuLL ).d ) //0b0000000000111111111111111111111111111111111111111111111111111111
#define LOW40  ( ( (dl)0xFFFFFFFFFFFFFFFFuLL ).d ) //0b1111111111111111111111111111111111111111111111111111111111111111
#define HIGH40 ( ( (dl)0xFFFFFFFFFFFFFFFFuLL ).d ) //0b1111111111111111111111111111111111111111111111111111111111111111
#define LOW50  ( ( (dl)0xFFFFFFFFFFFFFFFFuLL ).d ) //0b1111111111111111111111111111111111111111111111111111111111111111
#define HIGH50 ( ( (dl)0xFFFFFFFFFFFFFFFFuLL ).d ) //0b1111111111111111111111111111111111111111111111111111111111111111
#define LOW01  ( ( (dl)0x6DB6DB6DB6DB6DB6uLL ).d ) //0b0110110110110110110110110110110110110110110110110110110110110110
#define HIGH01 ( ( (dl)0xDB6DB6DB6DB6DB6DuLL ).d ) //0b1101101101101101101101101101101101101101101101101101101101101101
#define LOW11  ( ( (dl)0xF8FC7E3F1F8FC7E3uLL ).d ) //0b1111100011111100011111100011111100011111100011111100011111100011
#define HIGH11 ( ( (dl)0xC7E3F1F8FC7E3F1FuLL ).d ) //0b1100011111100011111100011111100011111100011111100011111100011111
#define LOW21  ( ( (dl)0xC01FFFF803FFFF00uLL ).d ) //0b1100000000011111111111111111100000000011111111111111111100000000
#define HIGH21 ( ( (dl)0x3FFFF007FFFE00FFuLL ).d ) //0b0011111111111111111100000000011111111111111111100000000011111111
#define LOW31  ( ( (dl)0x00000FFFFFFFFFFFuLL ).d ) //0b0000000000000000000011111111111111111111111111111111111111111111
#define HIGH31 ( ( (dl)0xFFFFFFFFFFFE0000uLL ).d ) //0b1111111111111111111111111111111111111111111111100000000000000000
#define LOW41  ( ( (dl)0x000000000001FFFFuLL ).d ) //0b0000000000000000000000000000000000000000000000011111111111111111
#define HIGH41 ( ( (dl)0xFFFFFFFFFFFFFFFFuLL ).d ) //0b1111111111111111111111111111111111111111111111111111111111111111
#define LOW51  ( ( (dl)0xFFFFFFFFFFFFFFFFuLL ).d ) //0b1111111111111111111111111111111111111111111111111111111111111111
#define HIGH51 ( ( (dl)0xFFFFFFFFFFFFFFFFuLL ).d ) //0b1111111111111111111111111111111111111111111111111111111111111111
#define LOW02  ( ( (dl)0xB6DB6DB6DB6DB6DBuLL ).d ) //0b1011011011011011011011011011011011011011011011011011011011011011
#define HIGH02 ( ( (dl)0x6DB6DB6DB6DB6DB6uLL ).d ) //0b0110110110110110110110110110110110110110110110110110110110110110
#define LOW12  ( ( (dl)0xFC7E3F1F8FC7E3F1uLL ).d ) //0b1111110001111110001111110001111110001111110001111110001111110001
#define HIGH12 ( ( (dl)0xE3F1F8FC7E3F1F8FuLL ).d ) //0b1110001111110001111110001111110001111110001111110001111110001111
#define LOW22  ( ( (dl)0xFFF007FFFE00FFFFuLL ).d ) //0b1111111111110000000001111111111111111110000000001111111111111111
#define HIGH22 ( ( (dl)0xE00FFFFC01FFFF80uLL ).d ) //0b1110000000001111111111111111110000000001111111111111111110000000
#define LOW32  ( ( (dl)0x1FFFFFFFFFFFFF80uLL ).d ) //0b0001111111111111111111111111111111111111111111111111111110000000
#define HIGH32 ( ( (dl)0xFFFFFFFC0000007FuLL ).d ) //0b1111111111111111111111111111110000000000000000000000000001111111
#define LOW42  ( ( (dl)0xFFFFFFFC00000000uLL ).d ) //0b1111111111111111111111111111110000000000000000000000000000000000
#define HIGH42 ( ( (dl)0x00000003FFFFFFFFuLL ).d ) //0b0000000000000000000000000000001111111111111111111111111111111111
#define LOW52  ( ( (dl)0xFFFFFFFFFFFFFFFFuLL ).d ) //0b1111111111111111111111111111111111111111111111111111111111111111
#define HIGH52 ( ( (dl)0xFFFFFFFFFFFFFFFFuLL ).d ) //0b1111111111111111111111111111111111111111111111111111111111111111
#define LOW03  ( ( (dl)0xDB6DB6DB6DB6DB6DuLL ).d ) //0b1101101101101101101101101101101101101101101101101101101101101101
#define HIGH03 ( ( (dl)0xB6DB6DB6DB6DB6DBuLL ).d ) //0b1011011011011011011011011011011011011011011011011011011011011011
#define LOW13  ( ( (dl)0x7E3F1F8FC7E3F1F8uLL ).d ) //0b0111111000111111000111111000111111000111111000111111000111111000
#define HIGH13 ( ( (dl)0xF1F8FC7E3F1F8FC7uLL ).d ) //0b1111000111111000111111000111111000111111000111111000111111000111
#define LOW23  ( ( (dl)0x0FFFFC01FFFF803FuLL ).d ) //0b0000111111111111111111000000000111111111111111111000000000111111
#define HIGH23 ( ( (dl)0xFFF803FFFF007FFFuLL ).d ) //0b1111111111111000000000111111111111111111000000000111111111111111
#define LOW33  ( ( (dl)0xFFFFFFFFFF000000uLL ).d ) //0b1111111111111111111111111111111111111111000000000000000000000000
#define HIGH33 ( ( (dl)0xFFF8000000FFFFFFuLL ).d ) //0b1111111111111000000000000000000000000000111111111111111111111111
#define LOW43  ( ( (dl)0xFFFFFFFFFFFFFFFFuLL ).d ) //0b1111111111111111111111111111111111111111111111111111111111111111
#define HIGH43 ( ( (dl)0xFFF8000000000000uLL ).d ) //0b1111111111111000000000000000000000000000000000000000000000000000
#define LOW53  ( ( (dl)0x0007FFFFFFFFFFFFuLL ).d ) //0b0000000000000111111111111111111111111111111111111111111111111111
#define HIGH53 ( ( (dl)0xFFFFFFFFFFFFFFFFuLL ).d ) //0b1111111111111111111111111111111111111111111111111111111111111111
#endif
#endif
