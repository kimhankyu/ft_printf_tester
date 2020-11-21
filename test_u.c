
#include "test.h"
#include <stdio.h>

void test_u()
{
    int ret;
    printf("TEST u\n");
    printf("=====================================================\n");
    printf("flag : X / Width : X / precision : X\n");
    PRT(%u, DI);

    printf("=====================================================\n");
    printf("flag : X / Width : X / precision : number\n");
    PRT(%.u, 0u);
    PRT(%.u, DI);
    PRT(%.0u, DI);
    PRT(%.1u, DI);
    PRT(%.2u, DI);
    PRT(%.3u, DI);
    PRT(%.4u, DI);
    PRT(%.5u, DI);
    PRT(%.6u, DI);
    // PRT(%.-1u, U);

    printf("=====================================================\n");
    printf("flag : X / Width : X / precision : wildcard\n");
    PRT_W(%.*u, 0, DI);
    PRT_W(%.*u, -1, DI);
    PRT_W(%.*u, -2, DI);
    PRT_W(%.*u, -3, DI);
    PRT_W(%.*u, -4, DI);
    PRT_W(%.*u, -5, DI);
    PRT_W(%.*u, -6, DI);

    printf("=====================================================\n");
    printf("flag : X / Width : number / precision : X\n");
    PRT(%1u, DI);
    PRT(%2u, DI);
    PRT(%3u, DI);
    PRT(%4u, DI);
    PRT(%5u, DI);
    PRT(%6u, DI);

    printf("=====================================================\n");
    printf("flag : X / Width : number / precision : number\n");
    PRT(%2.u, DI);
    PRT(%2.0u, DI);
    PRT(%2.3u, DI);
    PRT(%2.4u, DI);
    PRT(%3.2u, DI);
    PRT(%3.3u, DI);
    PRT(%3.4u, DI);
    PRT(%4.3u, DI);
    PRT(%4.4u, DI);
    PRT(%4.5u, DI);

    printf("=====================================================\n");
    printf("flag : X / Width : number / precision : wildcard\n");
    PRT_W(%2.*u, 0, DI);
    PRT_W(%2.*u, 3, DI);
    PRT_W(%2.*u, 4, DI);
    PRT_W(%2.*u, -1, DI);
    PRT_W(%2.*u, -2, DI);
    PRT_W(%2.*u, -3, DI);
    PRT_W(%2.*u, -4, DI);
    PRT_W(%3.*u, 2, DI);
    PRT_W(%3.*u, 3, DI);
    PRT_W(%3.*u, 4, DI);
    PRT_W(%3.*u, -4, DI);
    PRT_W(%4.*u, 0, DI);
    PRT_W(%4.*u, -1, DI);
    PRT_W(%4.*u, 4, DI);
    PRT_W(%4.*u, 5, DI);
    PRT_W(%4.*u, -5, DI);

    printf("=====================================================\n");
    printf("flag : X / Width : wildcard / precision : X\n");
    PRT_W(%*u, 0, DI);
    PRT_W(%*u, 1, DI);
    PRT_W(%*u, 2, DI);
    PRT_W(%*u, 3, DI);
    PRT_W(%*u, 4, DI);
    PRT_W(%*u, 5, DI);
    PRT_W(%*u, 6, DI);
    PRT_W(%*u, -1, DI);
    PRT_W(%*u, -2, DI);
    PRT_W(%*u, -3, DI);
    PRT_W(%*u, -4, DI);
    PRT_W(%*u, -5, DI);
    PRT_W(%*u, -6, DI);

    printf("=====================================================\n");
    printf("flag : X / Width : wildcard / precision : number\n");
    PRT_W(%*.u, 0, DI);
    PRT_W(%*.0u, 1, DI);
    PRT_W(%*.4u, 2, DI);
    PRT_W(%*.1u, 3, DI);
    PRT_W(%*.5u, 4, DI);
    PRT_W(%*.1u, 5, DI);
    PRT_W(%*.6u, 6, DI);
    PRT_W(%*.0u, -1, DI);
    PRT_W(%*.4u, -2, DI);
    PRT_W(%*.3u, -3, DI);
    PRT_W(%*.3u, -4, DI);
    PRT_W(%*.3u, 4, DI);
    PRT_W(%*.5u, 3, DI);

    printf("=====================================================\n");
    printf("flag : X / Width : wildcard / precision : wildcard\n");
    PRT_WW(%*.*u, 0, 0, DI);
    PRT_WW(%*.*u, 1, 0, DI);
    PRT_WW(%*.*u, 2, 4, DI);
    PRT_WW(%*.*u, 3, 1, DI);
    PRT_WW(%*.*u, 4, 5, DI);
    PRT_WW(%*.*u, 5, 1, DI);
    PRT_WW(%*.*u, 6, 6, DI);
    PRT_WW(%*.*u, -1, 0, DI);
    PRT_WW(%*.*u, -2, 4, DI);
    PRT_WW(%*.*u, -3, 3, DI);
    PRT_WW(%*.*u, -4, 3, DI);
    PRT_WW(%*.*u, 4, 3, DI);
    PRT_WW(%*.*u, 3, 5, DI);
    PRT_WW(%*.*u, 2, -4, DI);
    PRT_WW(%*.*u, 3, -1, DI);
    PRT_WW(%*.*u, 4, -5, DI);
    PRT_WW(%*.*u, 5, -1, DI);
    PRT_WW(%*.*u, 6, -6, DI);

    printf("=====================================================\n");
    printf("flag : 0 / Width : X / precision : X\n");
    PRT(%0u, DI);

    printf("=====================================================\n");
    printf("flag : 0 / Width : X / precision : number\n");
    PRT(%0.u, DI);
    PRT(%0.0u, DI);
    PRT(%0.1u, DI);
    PRT(%0.2u, DI);
    PRT(%0.3u, DI);
    PRT(%0.4u, DI);
    PRT(%0.5u, DI);
    PRT(%0.6u, DI);

    printf("=====================================================\n");
    printf("flag : 0 / Width : X / precision : wildcard\n");
    PRT_W(%0.*u, 0, DI);
    PRT_W(%0.*u, 1, DI);
    PRT_W(%0.*u, 2, DI);
    PRT_W(%0.*u, 3, DI);
    PRT_W(%0.*u, 4, DI);
    PRT_W(%0.*u, 5, DI);
    PRT_W(%0.*u, 6, DI);
    PRT_W(%0.*u, -1, DI);
    PRT_W(%0.*u, -2, DI);
    PRT_W(%0.*u, -3, DI);
    PRT_W(%0.*u, -4, DI);
    PRT_W(%0.*u, -5, DI);
    PRT_W(%0.*u, -6, DI);

    printf("=====================================================\n");
    printf("flag : 0 / Width : number / precision : X\n");
    PRT(%01u, DI);
    PRT(%02u, DI);
    PRT(%03u, DI);
    PRT(%04u, DI);
    PRT(%05u, DI);
    PRT(%06u, DI);

    printf("=====================================================\n");
    printf("flag : 0 / Width : number / precision : number\n");
    PRT(%02.u, DI);
    PRT(%02.0u, DI);
    PRT(%02.3u, DI);
    PRT(%02.4u, DI);
    PRT(%03.2u, DI);
    PRT(%03.3u, DI);
    PRT(%03.4u, DI);
    PRT(%04.3u, DI);
    PRT(%04.4u, DI);
    PRT(%04.5u, DI);

    printf("=====================================================\n");
    printf("flag : 0 / Width : number / precision : wildcard\n");
    PRT_W(%02.*u, 0, DI);
    PRT_W(%02.*u, 3, DI);
    PRT_W(%02.*u, 4, DI);
    PRT_W(%02.*u, -1, DI);
    PRT_W(%02.*u, -2, DI);
    PRT_W(%02.*u, -3, DI);
    PRT_W(%02.*u, -4, DI);
    PRT_W(%03.*u, 2, DI);
    PRT_W(%03.*u, 3, DI);
    PRT_W(%03.*u, 4, DI);
    PRT_W(%03.*u, -4, DI);
    PRT_W(%04.*u, 0, DI);
    PRT_W(%04.*u, -1, DI);
    PRT_W(%04.*u, 4, DI);
    PRT_W(%04.*u, 5, DI);
    PRT_W(%04.*u, -5, DI);

    printf("=====================================================\n");
    printf("flag : 0 / Width : wildcard / precision : X\n");
    PRT_W(%0*u, 0, DI);
    PRT_W(%0*u, 1, DI);
    PRT_W(%0*u, 2, DI);
    PRT_W(%0*u, 3, DI);
    PRT_W(%0*u, 4, DI);
    PRT_W(%0*u, 5, DI);
    PRT_W(%0*u, 6, DI);
    PRT_W(%0*u, -1, DI);
    PRT_W(%0*u, -2, DI);
    PRT_W(%0*u, -3, DI);
    PRT_W(%0*u, -4, DI);
    PRT_W(%0*u, -5, DI);
    PRT_W(%0*u, -6, DI);

    printf("=====================================================\n");
    printf("flag : 0 / Width : wildcard / precision : number\n");
    PRT_W(%0*.u, 0, DI);
    PRT_W(%0*.0u, 1, DI);
    PRT_W(%0*.4u, 2, DI);
    PRT_W(%0*.1u, 3, DI);
    PRT_W(%0*.5u, 4, DI);
    PRT_W(%0*.1u, 5, DI);
    PRT_W(%0*.6u, 6, DI);
    PRT_W(%0*.0u, -1, DI);
    PRT_W(%0*.4u, -2, DI);
    PRT_W(%0*.3u, -3, DI);
    PRT_W(%0*.3u, -4, DI);
    PRT_W(%0*.3u, 4, DI);
    PRT_W(%0*.5u, 3, DI);

    printf("=====================================================\n");
    printf("flag : 0 / Width : wildcard / precision : wildcard\n");
    PRT_WW(%0*.*u, 0, 0, DI);
    PRT_WW(%0*.*u, 1, 0, DI);
    PRT_WW(%0*.*u, 2, 4, DI);
    PRT_WW(%0*.*u, 3, 1, DI);
    PRT_WW(%0*.*u, 4, 5, DI);
    PRT_WW(%0*.*u, 5, 1, DI);
    PRT_WW(%0*.*u, 6, 6, DI);
    PRT_WW(%0*.*u, -1, 0, DI);
    PRT_WW(%0*.*u, -2, 4, DI);
    PRT_WW(%0*.*u, -3, 3, DI);
    PRT_WW(%0*.*u, -4, 3, DI);
    PRT_WW(%0*.*u, 4, 3, DI);
    PRT_WW(%0*.*u, 3, 5, DI);
    PRT_WW(%0*.*u, 2, -4, DI);
    PRT_WW(%0*.*u, 3, -1, DI);
    PRT_WW(%0*.*u, 4, -5, DI);
    PRT_WW(%0*.*u, 5, -1, DI);
    PRT_WW(%0*.*u, 6, -6, DI);
    PRT_WW(%0*.*u, -6, -6, DI);

    printf("=====================================================\n");
    printf("flag : - / Width : X / precision : X\n");
    PRT(%-u, DI);

    printf("=====================================================\n");
    printf("flag : - / Width : X / precision : number\n");
    PRT(%-.u, DI);
    PRT(%-.0u, DI);
    PRT(%-.1u, DI);
    PRT(%-.2u, DI);
    PRT(%-.3u, DI);
    PRT(%-.4u, DI);
    PRT(%-.5u, DI);
    PRT(%-.6u, DI);

    printf("=====================================================\n");
    printf("flag : - / Width : X / precision : wildcard\n");
    PRT_W(%-.*u, 0, DI);
    PRT_W(%-.*u, 1, DI);
    PRT_W(%-.*u, 2, DI);
    PRT_W(%-.*u, 3, DI);
    PRT_W(%-.*u, 4, DI);
    PRT_W(%-.*u, 5, DI);
    PRT_W(%-.*u, 6, DI);
    PRT_W(%-.*u, -1, DI);
    PRT_W(%-.*u, -2, DI);
    PRT_W(%-.*u, -3, DI);
    PRT_W(%-.*u, -4, DI);
    PRT_W(%-.*u, -5, DI);
    PRT_W(%-.*u, -6, DI);

    printf("=====================================================\n");
    printf("flag : - / Width : number / precision : X\n");
    // PRT(%-0u, DI);
    PRT(%-1u, DI);
    PRT(%-2u, DI);
    PRT(%-3u, DI);
    PRT(%-4u, DI);
    PRT(%-5u, DI);
    PRT(%-6u, DI);

    printf("=====================================================\n");
    printf("flag : - / Width : number / precision : number\n");
    PRT(%-2.u, DI);
    PRT(%-2.0u, DI);
    PRT(%-2.3u, DI);
    PRT(%-2.4u, DI);
    PRT(%-3.2u, DI);
    PRT(%-3.3u, DI);
    PRT(%-3.4u, DI);
    PRT(%-4.3u, DI);
    PRT(%-4.4u, DI);
    PRT(%-4.5u, DI);

    printf("=====================================================\n");
    printf("flag : - / Width : number / precision : wildcard\n");
    PRT_W(%-2.*u, 0, DI);
    PRT_W(%-2.*u, 3, DI);
    PRT_W(%-2.*u, 4, DI);
    PRT_W(%-2.*u, -1, DI);
    PRT_W(%-2.*u, -2, DI);
    PRT_W(%-2.*u, -3, DI);
    PRT_W(%-2.*u, -4, DI);
    PRT_W(%-3.*u, 2, DI);
    PRT_W(%-3.*u, 3, DI);
    PRT_W(%-3.*u, 4, DI);
    PRT_W(%-3.*u, -4, DI);
    PRT_W(%-4.*u, 0, DI);
    PRT_W(%-4.*u, -1, DI);
    PRT_W(%-4.*u, 4, DI);
    PRT_W(%-4.*u, 5, DI);
    PRT_W(%-4.*u, -5, DI);

    printf("=====================================================\n");
    printf("flag : - / Width : wildcard / precision : X\n");
    PRT_W(%-*u, 0, DI);
    PRT_W(%-*u, 1, DI);
    PRT_W(%-*u, 2, DI);
    PRT_W(%-*u, 3, DI);
    PRT_W(%-*u, 4, DI);
    PRT_W(%-*u, 5, DI);
    PRT_W(%-*u, 6, DI);
    PRT_W(%-*u, -1, DI);
    PRT_W(%-*u, -2, DI);
    PRT_W(%-*u, -3, DI);
    PRT_W(%-*u, -4, DI);
    PRT_W(%-*u, -5, DI);
    PRT_W(%-*u, -6, DI);

    printf("=====================================================\n");
    printf("flag : - / Width : wildcard / precision : number\n");
    PRT_W(%-*.u, 0, DI);
    PRT_W(%-*.0u, 1, DI);
    PRT_W(%-*.4u, 2, DI);
    PRT_W(%-*.1u, 3, DI);
    PRT_W(%-*.5u, 4, DI);
    PRT_W(%-*.1u, 5, DI);
    PRT_W(%-*.6u, 6, DI);
    PRT_W(%-*.0u, -1, DI);
    PRT_W(%-*.4u, -2, DI);
    PRT_W(%-*.3u, -3, DI);
    PRT_W(%-*.3u, -4, DI);
    PRT_W(%-*.3u, 4, DI);
    PRT_W(%-*.5u, 3, DI);

    printf("=====================================================\n");
    printf("flag : - / Width : wildcard / precision : wildcard\n");
    PRT_WW(%-*.*u, 0, 0, DI);
    PRT_WW(%-*.*u, 1, 0, DI);
    PRT_WW(%-*.*u, 2, 4, DI);
    PRT_WW(%-*.*u, 3, 1, DI);
    PRT_WW(%-*.*u, 4, 5, DI);
    PRT_WW(%-*.*u, 5, 1, DI);
    PRT_WW(%-*.*u, 6, 6, DI);
    PRT_WW(%-*.*u, -1, 0, DI);
    PRT_WW(%-*.*u, -2, 4, DI);
    PRT_WW(%-*.*u, -3, 3, DI);
    PRT_WW(%-*.*u, -4, 3, DI);
    PRT_WW(%-*.*u, 4, 3, DI);
    PRT_WW(%-*.*u, 3, 5, DI);
    PRT_WW(%-*.*u, 2, -4, DI);
    PRT_WW(%-*.*u, 3, -1, DI);
    PRT_WW(%-*.*u, 4, -5, DI);
    PRT_WW(%-*.*u, 5, -1, DI);
    PRT_WW(%-*.*u, 6, -6, DI);
    printf("=====================================================\n");
}
