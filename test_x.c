
#include "test.h"
#include <stdio.h>

void test_xX()
{
    int ret;
    printf("TEST xX\n");
    printf("=====================================================\n");
    printf("flag : X / Width : X / precision : X\n");
    PRT(%x, DI);

    printf("=====================================================\n");
    printf("flag : X / Width : X / precision : number\n");
    PRT(%.x, 0);
    PRT(%.x, DI);
    PRT(%.0x, DI);
    PRT(%.1x, DI);
    PRT(%.2x, DI);
    PRT(%.3x, DI);
    PRT(%.4x, DI);
    PRT(%.5x, DI);
    PRT(%.6x, DI);
    // PRT(%.-1d, DI);

    printf("=====================================================\n");
    printf("flag : X / Width : X / precision : wildcard\n");
    PRT_W(%.*x, 0, DI);
    PRT_W(%.*x, -1, DI);
    PRT_W(%.*x, -2, DI);
    PRT_W(%.*x, -3, DI);
    PRT_W(%.*x, -4, DI);
    PRT_W(%.*x, -5, DI);
    PRT_W(%.*x, -6, DI);

    printf("=====================================================\n");
    printf("flag : X / Width : number / precision : X\n");
    PRT(%1x, DI);
    PRT(%2x, DI);
    PRT(%3x, DI);
    PRT(%4x, DI);
    PRT(%5x, DI);
    PRT(%6x, DI);

    printf("=====================================================\n");
    printf("flag : X / Width : number / precision : number\n");
    PRT(%2.x, DI);
    PRT(%2.0x, DI);
    PRT(%2.3x, DI);
    PRT(%2.4x, DI);
    PRT(%3.2x, DI);
    PRT(%3.3x, DI);
    PRT(%3.4x, DI);
    PRT(%4.3x, DI);
    PRT(%4.4x, DI);
    PRT(%4.5x, DI);

    printf("=====================================================\n");
    printf("flag : X / Width : number / precision : wildcard\n");
    PRT_W(%2.*x, 0, DI);
    PRT_W(%2.*x, 3, DI);
    PRT_W(%2.*x, 4, DI);
    PRT_W(%2.*x, -1, DI);
    PRT_W(%2.*x, -2, DI);
    PRT_W(%2.*x, -3, DI);
    PRT_W(%2.*x, -4, DI);
    PRT_W(%3.*x, 2, DI);
    PRT_W(%3.*x, 3, DI);
    PRT_W(%3.*x, 4, DI);
    PRT_W(%3.*x, -4, DI);
    PRT_W(%4.*x, 0, DI);
    PRT_W(%4.*x, -1, DI);
    PRT_W(%4.*x, 4, DI);
    PRT_W(%4.*x, 5, DI);
    PRT_W(%4.*x, -5, DI);

    printf("=====================================================\n");
    printf("flag : X / Width : wildcard / precision : X\n");
    PRT_W(%*x, 0, DI);
    PRT_W(%*x, 1, DI);
    PRT_W(%*x, 2, DI);
    PRT_W(%*x, 3, DI);
    PRT_W(%*x, 4, DI);
    PRT_W(%*x, 5, DI);
    PRT_W(%*x, 6, DI);
    PRT_W(%*x, -1, DI);
    PRT_W(%*x, -2, DI);
    PRT_W(%*x, -3, DI);
    PRT_W(%*x, -4, DI);
    PRT_W(%*x, -5, DI);
    PRT_W(%*x, -6, DI);

    printf("=====================================================\n");
    printf("flag : X / Width : wildcard / precision : number\n");
    PRT_W(%*.x, 0, DI);
    PRT_W(%*.0x, 1, DI);
    PRT_W(%*.4x, 2, DI);
    PRT_W(%*.1x, 3, DI);
    PRT_W(%*.5x, 4, DI);
    PRT_W(%*.1x, 5, DI);
    PRT_W(%*.6x, 6, DI);
    PRT_W(%*.0x, -1, DI);
    PRT_W(%*.4x, -2, DI);
    PRT_W(%*.3x, -3, DI);
    PRT_W(%*.3x, -4, DI);
    PRT_W(%*.3x, 4, DI);
    PRT_W(%*.5x, 3, DI);

    printf("=====================================================\n");
    printf("flag : X / Width : wildcard / precision : wildcard\n");
    PRT_WW(%*.*x, 0, 0, DI);
    PRT_WW(%*.*x, 1, 0, DI);
    PRT_WW(%*.*x, 2, 4, DI);
    PRT_WW(%*.*x, 3, 1, DI);
    PRT_WW(%*.*x, 4, 5, DI);
    PRT_WW(%*.*x, 5, 1, DI);
    PRT_WW(%*.*x, 6, 6, DI);
    PRT_WW(%*.*x, -1, 0, DI);
    PRT_WW(%*.*x, -2, 4, DI);
    PRT_WW(%*.*x, -3, 3, DI);
    PRT_WW(%*.*x, -4, 3, DI);
    PRT_WW(%*.*x, 4, 3, DI);
    PRT_WW(%*.*x, 3, 5, DI);
    PRT_WW(%*.*x, 2, -4, DI);
    PRT_WW(%*.*x, 3, -1, DI);
    PRT_WW(%*.*x, 4, -5, DI);
    PRT_WW(%*.*x, 5, -1, DI);
    PRT_WW(%*.*x, 6, -6, DI);

    printf("=====================================================\n");
    printf("flag : 0 / Width : X / precision : X\n");
    PRT(%0x, DI);

    printf("=====================================================\n");
    printf("flag : 0 / Width : X / precision : number\n");
    PRT(%0.x, DI);
    PRT(%0.0x, DI);
    PRT(%0.1x, DI);
    PRT(%0.2x, DI);
    PRT(%0.3x, DI);
    PRT(%0.4x, DI);
    PRT(%0.5x, DI);
    PRT(%0.6x, DI);

    printf("=====================================================\n");
    printf("flag : 0 / Width : X / precision : wildcard\n");
    PRT_W(%0.*x, 0, DI);
    PRT_W(%0.*x, 1, DI);
    PRT_W(%0.*x, 2, DI);
    PRT_W(%0.*x, 3, DI);
    PRT_W(%0.*x, 4, DI);
    PRT_W(%0.*x, 5, DI);
    PRT_W(%0.*x, 6, DI);
    PRT_W(%0.*x, -1, DI);
    PRT_W(%0.*x, -2, DI);
    PRT_W(%0.*x, -3, DI);
    PRT_W(%0.*x, -4, DI);
    PRT_W(%0.*x, -5, DI);
    PRT_W(%0.*x, -6, DI);

    printf("=====================================================\n");
    printf("flag : 0 / Width : number / precision : X\n");
    PRT(%01x, DI);
    PRT(%02x, DI);
    PRT(%03x, DI);
    PRT(%04x, DI);
    PRT(%05x, DI);
    PRT(%06x, DI);

    printf("=====================================================\n");
    printf("flag : 0 / Width : number / precision : number\n");
    PRT(%02.x, DI);
    PRT(%02.0x, DI);
    PRT(%02.3x, DI);
    PRT(%02.4x, DI);
    PRT(%03.2x, DI);
    PRT(%03.3x, DI);
    PRT(%03.4x, DI);
    PRT(%04.3x, DI);
    PRT(%04.4x, DI);
    PRT(%04.5x, DI);

    printf("=====================================================\n");
    printf("flag : 0 / Width : number / precision : wildcard\n");
    PRT_W(%02.*x, 0, DI);
    PRT_W(%02.*x, 3, DI);
    PRT_W(%02.*x, 4, DI);
    PRT_W(%02.*x, -1, DI);
    PRT_W(%02.*x, -2, DI);
    PRT_W(%02.*x, -3, DI);
    PRT_W(%02.*x, -4, DI);
    PRT_W(%03.*x, 2, DI);
    PRT_W(%03.*x, 3, DI);
    PRT_W(%03.*x, 4, DI);
    PRT_W(%03.*x, -4, DI);
    PRT_W(%04.*x, 0, DI);
    PRT_W(%04.*x, -1, DI);
    PRT_W(%04.*x, 4, DI);
    PRT_W(%04.*x, 5, DI);
    PRT_W(%04.*x, -5, DI);

    printf("=====================================================\n");
    printf("flag : 0 / Width : wildcard / precision : X\n");
    PRT_W(%0*x, 0, DI);
    PRT_W(%0*x, 1, DI);
    PRT_W(%0*x, 2, DI);
    PRT_W(%0*x, 3, DI);
    PRT_W(%0*x, 4, DI);
    PRT_W(%0*x, 5, DI);
    PRT_W(%0*x, 6, DI);
    PRT_W(%0*x, -1, DI);
    PRT_W(%0*x, -2, DI);
    PRT_W(%0*x, -3, DI);
    PRT_W(%0*x, -4, DI);
    PRT_W(%0*x, -5, DI);
    PRT_W(%0*x, -6, DI);

    printf("=====================================================\n");
    printf("flag : 0 / Width : wildcard / precision : number\n");
    PRT_W(%0*.x, 0, DI);
    PRT_W(%0*.0x, 1, DI);
    PRT_W(%0*.4x, 2, DI);
    PRT_W(%0*.1x, 3, DI);
    PRT_W(%0*.5x, 4, DI);
    PRT_W(%0*.1x, 5, DI);
    PRT_W(%0*.6x, 6, DI);
    PRT_W(%0*.0x, -1, DI);
    PRT_W(%0*.4x, -2, DI);
    PRT_W(%0*.3x, -3, DI);
    PRT_W(%0*.3x, -4, DI);
    PRT_W(%0*.3x, 4, DI);
    PRT_W(%0*.5x, 3, DI);

    printf("=====================================================\n");
    printf("flag : 0 / Width : wildcard / precision : wildcard\n");
    PRT_WW(%0*.*x, 0, 0, DI);
    PRT_WW(%0*.*x, 1, 0, DI);
    PRT_WW(%0*.*x, 2, 4, DI);
    PRT_WW(%0*.*x, 3, 1, DI);
    PRT_WW(%0*.*x, 4, 5, DI);
    PRT_WW(%0*.*x, 5, 1, DI);
    PRT_WW(%0*.*x, 6, 6, DI);
    PRT_WW(%0*.*x, -1, 0, DI);
    PRT_WW(%0*.*x, -2, 4, DI);
    PRT_WW(%0*.*x, -3, 3, DI);
    PRT_WW(%0*.*x, -4, 3, DI);
    PRT_WW(%0*.*x, 4, 3, DI);
    PRT_WW(%0*.*x, 3, 5, DI);
    PRT_WW(%0*.*x, 2, -4, DI);
    PRT_WW(%0*.*x, 3, -1, DI);
    PRT_WW(%0*.*x, 4, -5, DI);
    PRT_WW(%0*.*x, 5, -1, DI);
    PRT_WW(%0*.*x, 6, -6, DI);
    PRT_WW(%0*.*x, -6, -6, DI);

    printf("=====================================================\n");
    printf("flag : - / Width : X / precision : X\n");
    PRT(%-x, DI);

    printf("=====================================================\n");
    printf("flag : - / Width : X / precision : number\n");
    PRT(%-.x, DI);
    PRT(%-.0x, DI);
    PRT(%-.1x, DI);
    PRT(%-.2x, DI);
    PRT(%-.3x, DI);
    PRT(%-.4x, DI);
    PRT(%-.5x, DI);
    PRT(%-.6x, DI);

    printf("=====================================================\n");
    printf("flag : - / Width : X / precision : wildcard\n");
    PRT_W(%-.*x, 0, DI);
    PRT_W(%-.*x, 1, DI);
    PRT_W(%-.*x, 2, DI);
    PRT_W(%-.*x, 3, DI);
    PRT_W(%-.*x, 4, DI);
    PRT_W(%-.*x, 5, DI);
    PRT_W(%-.*x, 6, DI);
    PRT_W(%-.*x, -1, DI);
    PRT_W(%-.*x, -2, DI);
    PRT_W(%-.*x, -3, DI);
    PRT_W(%-.*x, -4, DI);
    PRT_W(%-.*x, -5, DI);
    PRT_W(%-.*x, -6, DI);

    printf("=====================================================\n");
    printf("flag : - / Width : number / precision : X\n");
    // PRT(%-0x, DI);
    PRT(%-1x, DI);
    PRT(%-2x, DI);
    PRT(%-3x, DI);
    PRT(%-4x, DI);
    PRT(%-5x, DI);
    PRT(%-6x, DI);

    printf("=====================================================\n");
    printf("flag : - / Width : number / precision : number\n");
    PRT(%-2.x, DI);
    PRT(%-2.0x, DI);
    PRT(%-2.3x, DI);
    PRT(%-2.4x, DI);
    PRT(%-3.2x, DI);
    PRT(%-3.3x, DI);
    PRT(%-3.4x, DI);
    PRT(%-4.3x, DI);
    PRT(%-4.4x, DI);
    PRT(%-4.5x, DI);

    printf("=====================================================\n");
    printf("flag : - / Width : number / precision : wildcard\n");
    PRT_W(%-2.*x, 0, DI);
    PRT_W(%-2.*x, 3, DI);
    PRT_W(%-2.*x, 4, DI);
    PRT_W(%-2.*x, -1, DI);
    PRT_W(%-2.*x, -2, DI);
    PRT_W(%-2.*x, -3, DI);
    PRT_W(%-2.*x, -4, DI);
    PRT_W(%-3.*x, 2, DI);
    PRT_W(%-3.*x, 3, DI);
    PRT_W(%-3.*x, 4, DI);
    PRT_W(%-3.*x, -4, DI);
    PRT_W(%-4.*x, 0, DI);
    PRT_W(%-4.*x, -1, DI);
    PRT_W(%-4.*x, 4, DI);
    PRT_W(%-4.*x, 5, DI);
    PRT_W(%-4.*x, -5, DI);

    printf("=====================================================\n");
    printf("flag : - / Width : wildcard / precision : X\n");
    PRT_W(%-*x, 0, DI);
    PRT_W(%-*x, 1, DI);
    PRT_W(%-*x, 2, DI);
    PRT_W(%-*x, 3, DI);
    PRT_W(%-*x, 4, DI);
    PRT_W(%-*x, 5, DI);
    PRT_W(%-*x, 6, DI);
    PRT_W(%-*x, -1, DI);
    PRT_W(%-*x, -2, DI);
    PRT_W(%-*x, -3, DI);
    PRT_W(%-*x, -4, DI);
    PRT_W(%-*x, -5, DI);
    PRT_W(%-*x, -6, DI);

    printf("=====================================================\n");
    printf("flag : - / Width : wildcard / precision : number\n");
    PRT_W(%-*.x, 0, DI);
    PRT_W(%-*.0x, 1, DI);
    PRT_W(%-*.4x, 2, DI);
    PRT_W(%-*.1x, 3, DI);
    PRT_W(%-*.5x, 4, DI);
    PRT_W(%-*.1x, 5, DI);
    PRT_W(%-*.6x, 6, DI);
    PRT_W(%-*.0x, -1, DI);
    PRT_W(%-*.4x, -2, DI);
    PRT_W(%-*.3x, -3, DI);
    PRT_W(%-*.3x, -4, DI);
    PRT_W(%-*.3x, 4, DI);
    PRT_W(%-*.5x, 3, DI);

    printf("=====================================================\n");
    printf("flag : - / Width : wildcard / precision : wildcard\n");
    PRT_WW(%-*.*x, 0, 0, DI);
    PRT_WW(%-*.*x, 1, 0, DI);
    PRT_WW(%-*.*x, 2, 4, DI);
    PRT_WW(%-*.*x, 3, 1, DI);
    PRT_WW(%-*.*x, 4, 5, DI);
    PRT_WW(%-*.*x, 5, 1, DI);
    PRT_WW(%-*.*x, 6, 6, DI);
    PRT_WW(%-*.*x, -1, 0, DI);
    PRT_WW(%-*.*x, -2, 4, DI);
    PRT_WW(%-*.*x, -3, 3, DI);
    PRT_WW(%-*.*x, -4, 3, DI);
    PRT_WW(%-*.*x, 4, 3, DI);
    PRT_WW(%-*.*x, 3, 5, DI);
    PRT_WW(%-*.*x, 2, -4, DI);
    PRT_WW(%-*.*x, 3, -1, DI);
    PRT_WW(%-*.*x, 4, -5, DI);
    PRT_WW(%-*.*x, 5, -1, DI);
    PRT_WW(%-*.*x, 6, -6, DI);
    printf("=====================================================\n");
}