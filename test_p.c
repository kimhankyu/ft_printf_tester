
#include "test.h"
#include <stdio.h>

void test_p(void* p)
{
    int ret;
    printf("TEST xX\n");
    printf("=====================================================\n");
    printf("flag : X / Width : X / precision : X\n");
    PRT(%p, p);

    printf("=====================================================\n");
    printf("flag : X / Width : X / precision : number\n");
    PRT(%.p, p);
    // PRT(%.0p, p);
    // PRT(%.1p, p);
    // PRT(%.2p, p);
    // PRT(%.3p, p);
    // PRT(%.4p, p);
    // PRT(%.5p, p);
    // PRT(%.6p, p);
    // PRT(%.-1p, p);

    printf("=====================================================\n");
    printf("flag : X / Width : X / precision : wildcard\n");
	printf("undefined behavier\n");
    // PRT_W(%.*p, 0, p);
    // PRT_W(%.*p, -1, p);
    // PRT_W(%.*p, -2, p);
    // PRT_W(%.*p, -3, p);
    // PRT_W(%.*p, -4, p);
    // PRT_W(%.*p, -5, p);
    // PRT_W(%.*p, -6, p);

    printf("=====================================================\n");
    printf("flag : X / Width : number / precision : X\n");
    PRT(%1p, p);
    PRT(%2p, p);
    PRT(%3p, p);
    PRT(%4p, p);
    PRT(%5p, p);
    PRT(%6p, p);

    printf("=====================================================\n");
    printf("flag : X / Width : number / precision : number\n");
    PRT(%2.p, p);
    // PRT(%2.0p, p);
    // PRT(%2.3p, p);
    // PRT(%2.4p, p);
    // PRT(%3.2p, p);
    // PRT(%3.3p, p);
    // PRT(%3.4p, p);
    // PRT(%4.3p, p);
    // PRT(%4.4p, p);
    // PRT(%4.5p, p);

    printf("=====================================================\n");
    printf("flag : X / Width : number / precision : wildcard\n");
	printf("undefined behavier\n");
    // PRT_W(%2.*p, 0, p);
    // PRT_W(%2.*p, 3, p);
    // PRT_W(%2.*p, 4, p);
    // PRT_W(%2.*p, -1, p);
    // PRT_W(%2.*p, -2, p);
    // PRT_W(%2.*p, -3, p);
    // PRT_W(%2.*p, -4, p);
    // PRT_W(%3.*p, 2, p);
    // PRT_W(%3.*p, 3, p);
    // PRT_W(%3.*p, 4, p);
    // PRT_W(%3.*p, -4, p);
    // PRT_W(%4.*p, 0, p);
    // PRT_W(%4.*p, -1, p);
    // PRT_W(%4.*p, 4, p);
    // PRT_W(%4.*p, 5, p);
    // PRT_W(%4.*p, -5, p);

    printf("=====================================================\n");
    printf("flag : X / Width : wildcard / precision : X\n");
    PRT_W(%*p, 0, p);
    PRT_W(%*p, 1, p);
    PRT_W(%*p, 2, p);
    PRT_W(%*p, 3, p);
    PRT_W(%*p, 4, p);
    PRT_W(%*p, 5, p);
    PRT_W(%*p, 20, p);
    PRT_W(%*p, -1, p);
    PRT_W(%*p, -2, p);
    PRT_W(%*p, -3, p);
    PRT_W(%*p, -4, p);
    PRT_W(%*p, -5, p);
    PRT_W(%*p, -20, p);

    printf("=====================================================\n");
    printf("flag : X / Width : wildcard / precision : number\n");
    PRT_W(%*.p, 0, p);
    // PRT_W(%*.0p, 1, p);
    // PRT_W(%*.4p, 2, p);
    // PRT_W(%*.1p, 3, p);
    // PRT_W(%*.5p, 4, p);
    // PRT_W(%*.1p, 5, p);
    // PRT_W(%*.6p, 6, p);
    // PRT_W(%*.0p, -1, p);
    // PRT_W(%*.4p, -2, p);
    // PRT_W(%*.3p, -3, p);
    // PRT_W(%*.3p, -4, p);
    // PRT_W(%*.3p, 4, p);
    // PRT_W(%*.5p, 3, p);

    printf("=====================================================\n");
    printf("flag : X / Width : wildcard / precision : wildcard\n");
    // PRT_WW(%*.s*p, 0, 0, p);
    // PRT_WW(%*.*p, 1, 0, p);
    // PRT_WW(%*.*p, 2, 4, p);
    // PRT_WW(%*.*p, 3, 1, p);
    // PRT_WW(%*.*p, 4, 5, p);
    // PRT_WW(%*.*p, 5, 1, p);
    // PRT_WW(%*.*p, 6, 6, p);
    // PRT_WW(%*.*p, -1, 0, p);
    // PRT_WW(%*.*p, -2, 4, p);
    // PRT_WW(%*.*p, -3, 3, p);
    // PRT_WW(%*.*p, -4, 3, p);
    // PRT_WW(%*.*p, 4, 3, p);
    // PRT_WW(%*.*p, 3, 5, p);
    // PRT_WW(%*.*p, 2, -4, p);
    // PRT_WW(%*.*p, 3, -1, p);
    // PRT_WW(%*.*p, 4, -5, p);
    // PRT_WW(%*.*p, 5, -1, p);
    // PRT_WW(%*.*p, 6, -6, p);

    printf("=====================================================\n");
    printf("flag : 0 / Width : X / precision : X\n");
	printf("undefined behavier\n");
    // PRT(%0p, p);

    printf("=====================================================\n");
    printf("flag : 0 / Width : X / precision : number\n");
	printf("undefined behavier\n");
    // PRT(%0.p, p);
    // PRT(%0.0p, p);
    // PRT(%0.1p, p);
    // PRT(%0.2p, p);
    // PRT(%0.3p, p);
    // PRT(%0.4p, p);
    // PRT(%0.5p, p);
    // PRT(%0.6p, p);

    printf("=====================================================\n");
    printf("flag : 0 / Width : X / precision : wildcard\n");
	printf("undefined behavier\n");
    // PRT_W(%0.*p, 0, p);
    // PRT_W(%0.*p, 1, p);
    // PRT_W(%0.*p, 2, p);
    // PRT_W(%0.*p, 3, p);
    // PRT_W(%0.*p, 4, p);
    // PRT_W(%0.*p, 5, p);
    // PRT_W(%0.*p, 6, p);
    // PRT_W(%0.*p, -1, p);
    // PRT_W(%0.*p, -2, p);
    // PRT_W(%0.*p, -3, p);
    // PRT_W(%0.*p, -4, p);
    // PRT_W(%0.*p, -5, p);
    // PRT_W(%0.*p, -6, p);

    printf("=====================================================\n");
    printf("flag : 0 / Width : number / precision : X\n");
	printf("undefined behavier\n");
	// PRT(%01p, p);
    // PRT(%02p, p);
    // PRT(%03p, p);
    // PRT(%04p, p);
    // PRT(%05p, p);
    // PRT(%06p, p);

    printf("=====================================================\n");
    printf("flag : 0 / Width : number / precision : number\n");
	printf("undefined behavier\n");
	// PRT(%02.p, p);
    // PRT(%02.0p, p);
    // PRT(%02.3p, p);
    // PRT(%02.4p, p);
    // PRT(%03.2p, p);
    // PRT(%03.3p, p);
    // PRT(%03.4p, p);
    // PRT(%04.3p, p);
    // PRT(%04.4p, p);
    // PRT(%04.5p, p);

    printf("=====================================================\n");
    printf("flag : 0 / Width : number / precision : wildcard\n");
	printf("undefined behavier\n");
	// PRT_W(%02.*p, 0, p);
    // PRT_W(%02.*p, 3, p);
    // PRT_W(%02.*p, 4, p);
    // PRT_W(%02.*p, -1, p);
    // PRT_W(%02.*p, -2, p);
    // PRT_W(%02.*p, -3, p);
    // PRT_W(%02.*p, -4, p);
    // PRT_W(%03.*p, 2, p);
    // PRT_W(%03.*p, 3, p);
    // PRT_W(%03.*p, 4, p);
    // PRT_W(%03.*p, -4, p);
    // PRT_W(%04.*p, 0, p);
    // PRT_W(%04.*p, -1, p);
    // PRT_W(%04.*p, 4, p);
    // PRT_W(%04.*p, 5, p);
    // PRT_W(%04.*p, -5, p);

    printf("=====================================================\n");
    printf("flag : 0 / Width : wildcard / precision : X\n");
	printf("undefined behavier\n");
	// PRT_W(%0*p, 0, p);
    // PRT_W(%0*p, 1, p);
    // PRT_W(%0*p, 2, p);
    // PRT_W(%0*p, 3, p);
    // PRT_W(%0*p, 4, p);
    // PRT_W(%0*p, 5, p);
    // PRT_W(%0*p, 6, p);
    // PRT_W(%0*p, -1, p);
    // PRT_W(%0*p, -2, p);
    // PRT_W(%0*p, -3, p);
    // PRT_W(%0*p, -4, p);
    // PRT_W(%0*p, -5, p);
    // PRT_W(%0*p, -6, p);

    printf("=====================================================\n");
    printf("flag : 0 / Width : wildcard / precision : number\n");
    printf("undefined behavier\n");
	// PRT_W(%0*.p, 0, p);
    // PRT_W(%0*.0p, 1, p);
    // PRT_W(%0*.4p, 2, p);
    // PRT_W(%0*.1p, 3, p);
    // PRT_W(%0*.5p, 4, p);
    // PRT_W(%0*.1p, 5, p);
    // PRT_W(%0*.6p, 6, p);
    // PRT_W(%0*.0p, -1, p);
    // PRT_W(%0*.4p, -2, p);
    // PRT_W(%0*.3p, -3, p);
    // PRT_W(%0*.3p, -4, p);
    // PRT_W(%0*.3p, 4, p);
    // PRT_W(%0*.5p, 3, p);

    printf("=====================================================\n");
    printf("flag : 0 / Width : wildcard / precision : wildcard\n");
    printf("undefined behavier\n");
	// PRT_WW(%0*.*p, 0, 0, p);
    // PRT_WW(%0*.*p, 1, 0, p);
    // PRT_WW(%0*.*p, 2, 4, p);
    // PRT_WW(%0*.*p, 3, 1, p);
    // PRT_WW(%0*.*p, 4, 5, p);
    // PRT_WW(%0*.*p, 5, 1, p);
    // PRT_WW(%0*.*p, 6, 6, p);
    // PRT_WW(%0*.*p, -1, 0, p);
    // PRT_WW(%0*.*p, -2, 4, p);
    // PRT_WW(%0*.*p, -3, 3, p);
    // PRT_WW(%0*.*p, -4, 3, p);
    // PRT_WW(%0*.*p, 4, 3, p);
    // PRT_WW(%0*.*p, 3, 5, p);
    // PRT_WW(%0*.*p, 2, -4, p);
    // PRT_WW(%0*.*p, 3, -1, p);
    // PRT_WW(%0*.*p, 4, -5, p);
    // PRT_WW(%0*.*p, 5, -1, p);
    // PRT_WW(%0*.*p, 6, -6, p);
    // PRT_WW(%0*.*p, -6, -6, p);

    printf("=====================================================\n");
    printf("flag : - / Width : X / precision : X\n");
    PRT(%-p, p);

    printf("=====================================================\n");
    printf("flag : - / Width : X / precision : number\n");
    PRT(%-.p, p);
    // PRT(%-.0p, p);
    // PRT(%-.1p, p);
    // PRT(%-.2p, p);
    // PRT(%-.3p, p);
    // PRT(%-.4p, p);
    // PRT(%-.5p, p);
    // PRT(%-.6p, p);

    printf("=====================================================\n");
    printf("flag : - / Width : X / precision : wildcard\n");
    printf("undefined behavier\n");
	// PRT_W(%-.*p, 0, p);
    // PRT_W(%-.*p, 1, p);
    // PRT_W(%-.*p, 2, p);
    // PRT_W(%-.*p, 3, p);
    // PRT_W(%-.*p, 4, p);
    // PRT_W(%-.*p, 5, p);
    // PRT_W(%-.*p, 6, p);
    // PRT_W(%-.*p, -1, p);
    // PRT_W(%-.*p, -2, p);
    // PRT_W(%-.*p, -3, p);
    // PRT_W(%-.*p, -4, p);
    // PRT_W(%-.*p, -5, p);
    // PRT_W(%-.*p, -6, p);

    printf("=====================================================\n");
    printf("flag : - / Width : number / precision : X\n");
    // PRT(%-0p, p);
    PRT(%-1p, p);
    PRT(%-2p, p);
    PRT(%-3p, p);
    PRT(%-4p, p);
    PRT(%-5p, p);
    PRT(%-6p, p);

    printf("=====================================================\n");
    printf("flag : - / Width : number / precision : number\n");
    PRT(%-2.p, p);
    // PRT(%-2.0p, p);
    // PRT(%-2.3p, p);
    // PRT(%-2.4p, p);
    // PRT(%-3.2p, p);
    // PRT(%-3.3p, p);
    // PRT(%-3.4p, p);
    // PRT(%-4.3p, p);
    // PRT(%-4.4p, p);
    // PRT(%-4.5p, p);

    printf("=====================================================\n");
    printf("flag : - / Width : number / precision : wildcard\n");
    printf("undefined behavier\n");
	// PRT_W(%-2.*p, 0, p);
    // PRT_W(%-2.*p, 3, p);
    // PRT_W(%-2.*p, 4, p);
    // PRT_W(%-2.*p, -1, p);
    // PRT_W(%-2.*p, -2, p);
    // PRT_W(%-2.*p, -3, p);
    // PRT_W(%-2.*p, -4, p);
    // PRT_W(%-3.*p, 2, p);
    // PRT_W(%-3.*p, 3, p);
    // PRT_W(%-3.*p, 4, p);
    // PRT_W(%-3.*p, -4, p);
    // PRT_W(%-4.*p, 0, p);
    // PRT_W(%-4.*p, -1, p);
    // PRT_W(%-4.*p, 4, p);
    // PRT_W(%-4.*p, 5, p);
    // PRT_W(%-4.*p, -5, p);

    printf("=====================================================\n");
    printf("flag : - / Width : wildcard / precision : X\n");
    PRT_W(%-*p, 0, p);
    PRT_W(%-*p, 1, p);
    PRT_W(%-*p, 2, p);
    PRT_W(%-*p, 3, p);
    PRT_W(%-*p, 4, p);
    PRT_W(%-*p, 5, p);
    PRT_W(%-*p, 6, p);
    PRT_W(%-*p, -1, p);
    PRT_W(%-*p, -2, p);
    PRT_W(%-*p, -3, p);
    PRT_W(%-*p, -4, p);
    PRT_W(%-*p, -5, p);
    PRT_W(%-*p, -6, p);

    printf("=====================================================\n");
    printf("flag : - / Width : wildcard / precision : number\n");
    PRT_W(%-*.p, 0, p);
    // PRT_W(%-*.0p, 1, p);
    // PRT_W(%-*.4p, 2, p);
    // PRT_W(%-*.1p, 3, p);
    // PRT_W(%-*.5p, 4, p);
    // PRT_W(%-*.1p, 5, p);
    // PRT_W(%-*.6p, 6, p);
    // PRT_W(%-*.0p, -1, p);
    // PRT_W(%-*.4p, -2, p);
    // PRT_W(%-*.3p, -3, p);
    // PRT_W(%-*.3p, -4, p);
    // PRT_W(%-*.3p, 4, p);
    // PRT_W(%-*.5p, 3, p);

    printf("=====================================================\n");
    printf("flag : - / Width : wildcard / precision : wildcard\n");
	printf("undefined behavier\n");
    // PRT_WW(%-*.*p, 0, 0, p);
    // PRT_WW(%-*.*p, 1, 0, p);
    // PRT_WW(%-*.*p, 2, 4, p);
    // PRT_WW(%-*.*p, 3, 1, p);
    // PRT_WW(%-*.*p, 4, 5, p);
    // PRT_WW(%-*.*p, 5, 1, p);
    // PRT_WW(%-*.*p, 6, 6, p);
    // PRT_WW(%-*.*p, -1, 0, p);
    // PRT_WW(%-*.*p, -2, 4, p);
    // PRT_WW(%-*.*p, -3, 3, p);
    // PRT_WW(%-*.*p, -4, 3, p);
    // PRT_WW(%-*.*p, 4, 3, p);
    // PRT_WW(%-*.*p, 3, 5, p);
    // PRT_WW(%-*.*p, 2, -4, p);
    // PRT_WW(%-*.*p, 3, -1, p);
    // PRT_WW(%-*.*p, 4, -5, p);
    // PRT_WW(%-*.*p, 5, -1, p);
    // PRT_WW(%-*.*p, 6, -6, p);
    printf("=====================================================\n");
}
