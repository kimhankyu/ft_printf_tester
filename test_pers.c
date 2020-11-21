#include "test.h"
#include <stdio.h>


void test_pers()
{
    int ret;
    printf("TEST %%\n");
    printf("=====================================================\n");
    printf("flag : X / Width : X / precision : X\n");
    PRT_PER(%%);

    printf("=====================================================\n");
    printf("flag : X / Width : X / precision : number\n");
    PRT_PER(%.%);
    PRT_PER(%.1%);
    PRT_PER(%.2%);
    PRT_PER(%.3%);
    PRT_PER(%.4%);
    PRT_PER(%.5%);
    PRT_PER(%.6%);
    // PRT_PER(%.-1%);

    printf("=====================================================\n");
    printf("flag : X / Width : X / precision : wildcard\n");
    PRT_W_PER(%.*%, 0);
    PRT_W_PER(%.*%, 1);
    PRT_W_PER(%.*%, 2);
    PRT_W_PER(%.*%, 3);
    PRT_W_PER(%.*%, 4);
    PRT_W_PER(%.*%, 5);
    PRT_W_PER(%.*%, 6);
    PRT_W_PER(%.*%, -1);
    PRT_W_PER(%.*%, -2);
    PRT_W_PER(%.*%, -3);
    PRT_W_PER(%.*%, -4);
    PRT_W_PER(%.*%, -5);
    PRT_W_PER(%.*%, -6);

    printf("=====================================================\n");
    printf("flag : X / Width : number / precision : X\n");
    PRT_PER(%1%);
    PRT_PER(%2%);
    PRT_PER(%3%);
    PRT_PER(%4%);
    PRT_PER(%5%);
    PRT_PER(%6%);

    printf("=====================================================\n");
    printf("flag : X / Width : number / precision : number\n");
    PRT_PER(%1.%);
    PRT_PER(%1.0%);
    PRT_PER(%1.3%);
    PRT_PER(%1.4%);
	PRT_PER(%1.5%);
	PRT_PER(%1.6%);

	PRT_PER(%2.%);
    PRT_PER(%2.0%);
    PRT_PER(%2.1%);
    PRT_PER(%2.2%);
    PRT_PER(%2.3%);
    PRT_PER(%2.4%);
    PRT_PER(%2.5%);
    PRT_PER(%2.6%);

    PRT_PER(%3.2%);
    PRT_PER(%3.3%);
    PRT_PER(%3.4%);
	PRT_PER(%4.2%);
    PRT_PER(%4.3%);
    PRT_PER(%4.4%);
    PRT_PER(%4.5%);
	PRT_PER(%4.6%);

    printf("=====================================================\n");
    printf("flag : X / Width : number / precision : wildcard\n");
    PRT_W_PER(%2.*%, 0);
    PRT_W_PER(%2.*%, 3);
    PRT_W_PER(%2.*%, 4);
    PRT_W_PER(%2.*%, -1);
    PRT_W_PER(%2.*%, -2);
    PRT_W_PER(%2.*%, -3);
    PRT_W_PER(%2.*%, -4);
    PRT_W_PER(%3.*%, 2);
    PRT_W_PER(%3.*%, 3);
    PRT_W_PER(%3.*%, 4);
    PRT_W_PER(%3.*%, -4);
    PRT_W_PER(%4.*%, 0);
    PRT_W_PER(%4.*%, -1);
    PRT_W_PER(%4.*%, 4);
    PRT_W_PER(%4.*%, 5);
    PRT_W_PER(%4.*%, -5);

    printf("=====================================================\n");
    printf("flag : X / Width : wildcard / precision : X\n");
    PRT_W_PER(%*%, 0);
    PRT_W_PER(%*%, 1);
    PRT_W_PER(%*%, 2);
    PRT_W_PER(%*%, 3);
    PRT_W_PER(%*%, 4);
    PRT_W_PER(%*%, 5);
    PRT_W_PER(%*%, 6);
    PRT_W_PER(%*%, -1);
    PRT_W_PER(%*%, -2);
    PRT_W_PER(%*%, -3);
    PRT_W_PER(%*%, -4);
    PRT_W_PER(%*%, -5);
    PRT_W_PER(%*%, -6);

    printf("=====================================================\n");
    printf("flag : X / Width : wildcard / precision : number\n");
    PRT_W_PER(%*.%, 0);
    PRT_W_PER(%*.0%, 1);
    PRT_W_PER(%*.4%, 2);
    PRT_W_PER(%*.1%, 3);
    PRT_W_PER(%*.5%, 4);
    PRT_W_PER(%*.1%, 5);
    PRT_W_PER(%*.6%, 6);
    PRT_W_PER(%*.0%, -1);
    PRT_W_PER(%*.4%, -2);
    PRT_W_PER(%*.3%, -3);
    PRT_W_PER(%*.3%, -4);
    PRT_W_PER(%*.3%, 4);
    PRT_W_PER(%*.5%, 3);

    printf("=====================================================\n");
    printf("flag : X / Width : wildcard / precision : wildcard\n");
    PRT_WW_PER(%*.*%, 0, 0);
    PRT_WW_PER(%*.*%, 1, 0);
    PRT_WW_PER(%*.*%, 2, 4);
    PRT_WW_PER(%*.*%, 3, 1);
    PRT_WW_PER(%*.*%, 4, 5);
    PRT_WW_PER(%*.*%, 5, 1);
    PRT_WW_PER(%*.*%, 6, 6);
    PRT_WW_PER(%*.*%, -1, 0);
    PRT_WW_PER(%*.*%, -2, 4);
    PRT_WW_PER(%*.*%, -3, 3);
    PRT_WW_PER(%*.*%, -4, 3);
    PRT_WW_PER(%*.*%, 4, 3);
    PRT_WW_PER(%*.*%, 3, 5);
    PRT_WW_PER(%*.*%, 2, -4);
    PRT_WW_PER(%*.*%, 3, -1);
    PRT_WW_PER(%*.*%, 4, -5);
    PRT_WW_PER(%*.*%, 5, -1);
    PRT_WW_PER(%*.*%, 6, -6);
    PRT_WW_PER(%*.*%, -6, -6);

    printf("=====================================================\n");
    printf("flag : 0 / Width : X / precision : X\n");
    PRT_PER(%0%);

    printf("=====================================================\n");
    printf("flag : 0 / Width : X / precision : number\n");
    PRT_PER(%0.%);
    PRT_PER(%0.1%);
    PRT_PER(%0.2%);
    PRT_PER(%0.3%);
    PRT_PER(%0.4%);
    PRT_PER(%0.5%);
    PRT_PER(%0.6%);

    printf("=====================================================\n");
    printf("flag : 0 / Width : X / precision : wildcard\n");
    PRT_W_PER(%0.*%, 0);
    PRT_W_PER(%0.*%, 1);
    PRT_W_PER(%0.*%, 2);
    PRT_W_PER(%0.*%, 3);
    PRT_W_PER(%0.*%, 4);
    PRT_W_PER(%0.*%, 5);
    PRT_W_PER(%0.*%, 6);
    PRT_W_PER(%0.*%, -1);
    PRT_W_PER(%0.*%, -2);
    PRT_W_PER(%0.*%, -3);
    PRT_W_PER(%0.*%, -4);
    PRT_W_PER(%0.*%, -5);
    PRT_W_PER(%0.*%, -6);

    printf("=====================================================\n");
    printf("flag : 0 / Width : number / precision : X\n");
    PRT_PER(%01%);
    PRT_PER(%02%);
    PRT_PER(%03%);
    PRT_PER(%04%);
    PRT_PER(%05%);
    PRT_PER(%06%);

    printf("=====================================================\n");
    printf("flag : 0 / Width : number / precision : number\n");
    PRT_PER(%02.%);
    PRT_PER(%02.0%);
    PRT_PER(%02.3%);
    PRT_PER(%02.4%);
    PRT_PER(%03.2%);
    PRT_PER(%03.3%);
    PRT_PER(%03.4%);
    PRT_PER(%04.3%);
    PRT_PER(%04.4%);
    PRT_PER(%04.5%);

    printf("=====================================================\n");
    printf("flag : 0 / Width : number / precision : wildcard\n");
    PRT_W_PER(%02.*%, 0);
    PRT_W_PER(%02.*%, 3);
    PRT_W_PER(%02.*%, 4);
    PRT_W_PER(%02.*%, -1);
    PRT_W_PER(%02.*%, -2);
    PRT_W_PER(%02.*%, -3);
    PRT_W_PER(%02.*%, -4);
    PRT_W_PER(%03.*%, 2);
    PRT_W_PER(%03.*%, 3);
    PRT_W_PER(%03.*%, 4);
    PRT_W_PER(%03.*%, -4);
    PRT_W_PER(%04.*%, 0);
    PRT_W_PER(%04.*%, -1);
    PRT_W_PER(%04.*%, 4);
    PRT_W_PER(%04.*%, 5);
    PRT_W_PER(%04.*%, -5);

    printf("=====================================================\n");
    printf("flag : 0 / Width : wildcard / precision : X\n");
    PRT_W_PER(%0*%, 0);
    PRT_W_PER(%0*%, 1);
    PRT_W_PER(%0*%, 2);
    PRT_W_PER(%0*%, 3);
    PRT_W_PER(%0*%, 4);
    PRT_W_PER(%0*%, 5);
    PRT_W_PER(%0*%, 6);
    PRT_W_PER(%0*%, -1);
    PRT_W_PER(%0*%, -2);
    PRT_W_PER(%0*%, -3);
    PRT_W_PER(%0*%, -4);
    PRT_W_PER(%0*%, -5);
    PRT_W_PER(%0*%, -6);

    printf("=====================================================\n");
    printf("flag : 0 / Width : wildcard / precision : number\n");
    PRT_W_PER(%0*.%, 0);
    PRT_W_PER(%0*.0%, 1);
    PRT_W_PER(%0*.4%, 2);
    PRT_W_PER(%0*.1%, 3);
    PRT_W_PER(%0*.5%, 4);
    PRT_W_PER(%0*.1%, 5);
    PRT_W_PER(%0*.6%, 6);
    PRT_W_PER(%0*.0%, -1);
    PRT_W_PER(%0*.4%, -2);
    PRT_W_PER(%0*.3%, -3);
    PRT_W_PER(%0*.3%, -4);
    PRT_W_PER(%0*.3%, 4);
    PRT_W_PER(%0*.5%, 3);

    printf("=====================================================\n");
    printf("flag : 0 / Width : wildcard / precision : wildcard\n");
    PRT_WW_PER(%0*.*%, 0, 0);
    PRT_WW_PER(%0*.*%, 1, 0);
    PRT_WW_PER(%0*.*%, 2, 4);
    PRT_WW_PER(%0*.*%, 3, 1);
    PRT_WW_PER(%0*.*%, 4, 5);
    PRT_WW_PER(%0*.*%, 5, 1);
    PRT_WW_PER(%0*.*%, 6, 6);
    PRT_WW_PER(%0*.*%, -1, 0);
    PRT_WW_PER(%0*.*%, -2, 4);
    PRT_WW_PER(%0*.*%, -3, 3);
    PRT_WW_PER(%0*.*%, -4, 3);
    PRT_WW_PER(%0*.*%, 4, 3);
    PRT_WW_PER(%0*.*%, 3, 5);
    PRT_WW_PER(%0*.*%, 2, -4);
    PRT_WW_PER(%0*.*%, 3, -1);
    PRT_WW_PER(%0*.*%, 4, -5);
    PRT_WW_PER(%0*.*%, 5, -1);
    PRT_WW_PER(%0*.*%, 6, -6);

    printf("=====================================================\n");
    printf("flag : - / Width : X / precision : X\n");
    PRT_PER(%-%);

    printf("=====================================================\n");
    printf("flag : - / Width : X / precision : number\n");
    PRT_PER(%-.%);
    PRT_PER(%-.0%);
    PRT_PER(%-.1%);
    PRT_PER(%-.2%);
    PRT_PER(%-.3%);
    PRT_PER(%-.4%);
    PRT_PER(%-.5%);
    PRT_PER(%-.6%);

    printf("=====================================================\n");
    printf("flag : - / Width : X / precision : wildcard\n");
    PRT_W_PER(%-.*%, 0);
    PRT_W_PER(%-.*%, 1);
    PRT_W_PER(%-.*%, 2);
    PRT_W_PER(%-.*%, 3);
    PRT_W_PER(%-.*%, 4);
    PRT_W_PER(%-.*%, 5);
    PRT_W_PER(%-.*%, 6);
    PRT_W_PER(%-.*%, -1);
    PRT_W_PER(%-.*%, -2);
    PRT_W_PER(%-.*%, -3);
    PRT_W_PER(%-.*%, -4);
    PRT_W_PER(%-.*%, -5);
    PRT_W_PER(%-.*%, -6);

    printf("=====================================================\n");
    printf("flag : - / Width : number / precision : X\n");
    PRT_PER(%-0%);
    PRT_PER(%-1%);
    PRT_PER(%-2%);
    PRT_PER(%-3%);
    PRT_PER(%-4%);
    PRT_PER(%-5%);
    PRT_PER(%-6%);

    printf("=====================================================\n");
    printf("flag : - / Width : number / precision : number\n");
    PRT_PER(%-2.%);
    PRT_PER(%-2.0%);
    PRT_PER(%-2.3%);
    PRT_PER(%-2.4%);
    PRT_PER(%-3.2%);
    PRT_PER(%-3.3%);
    PRT_PER(%-3.4%);
    PRT_PER(%-4.3%);
    PRT_PER(%-4.4%);
    PRT_PER(%-4.5%);

    printf("=====================================================\n");
    printf("flag : - / Width : number / precision : wildcard\n");
    PRT_W_PER(%-2.*%, 0);
    PRT_W_PER(%-2.*%, 3);
    PRT_W_PER(%-2.*%, 4);
    PRT_W_PER(%-2.*%, -1);
    PRT_W_PER(%-2.*%, -2);
    PRT_W_PER(%-2.*%, -3);
    PRT_W_PER(%-2.*%, -4);
    PRT_W_PER(%-3.*%, 2);
    PRT_W_PER(%-3.*%, 3);
    PRT_W_PER(%-3.*%, 4);
    PRT_W_PER(%-3.*%, -4);
    PRT_W_PER(%-4.*%, 0);
    PRT_W_PER(%-4.*%, -1);
    PRT_W_PER(%-4.*%, 4);
    PRT_W_PER(%-4.*%, 5);
    PRT_W_PER(%-4.*%, -5);

    printf("=====================================================\n");
    printf("flag : - / Width : wildcard / precision : X\n");
    PRT_W_PER(%-*%, 0);
    PRT_W_PER(%-*%, 1);
    PRT_W_PER(%-*%, 2);
    PRT_W_PER(%-*%, 3);
    PRT_W_PER(%-*%, 4);
    PRT_W_PER(%-*%, 5);
    PRT_W_PER(%-*%, 6);
    PRT_W_PER(%-*%, -1);
    PRT_W_PER(%-*%, -2);
    PRT_W_PER(%-*%, -3);
    PRT_W_PER(%-*%, -4);
    PRT_W_PER(%-*%, -5);
    PRT_W_PER(%-*%, -6);

    printf("=====================================================\n");
    printf("flag : - / Width : wildcard / precision : number\n");
    PRT_W_PER(%-*.%, 0);
    PRT_W_PER(%-*.0%, 1);
    PRT_W_PER(%-*.4%, 2);
    PRT_W_PER(%-*.1%, 3);
    PRT_W_PER(%-*.5%, 4);
    PRT_W_PER(%-*.1%, 5);
    PRT_W_PER(%-*.6%, 6);
    PRT_W_PER(%-*.0%, -1);
    PRT_W_PER(%-*.4%, -2);
    PRT_W_PER(%-*.3%, -3);
    PRT_W_PER(%-*.3%, -4);
    PRT_W_PER(%-*.3%, 4);
    PRT_W_PER(%-*.5%, 3);

    printf("=====================================================\n");
    printf("flag : - / Width : wildcard / precision : wildcard\n");
    PRT_WW_PER(%-*.*%, 0, 0);
    PRT_WW_PER(%-*.*%, 1, 0);
    PRT_WW_PER(%-*.*%, 2, 4);
    PRT_WW_PER(%-*.*%, 3, 1);
    PRT_WW_PER(%-*.*%, 4, 5);
    PRT_WW_PER(%-*.*%, 5, 1);
    PRT_WW_PER(%-*.*%, 6, 6);
    PRT_WW_PER(%-*.*%, -1, 0);
    PRT_WW_PER(%-*.*%, -2, 4);
    PRT_WW_PER(%-*.*%, -3, 3);
    PRT_WW_PER(%-*.*%, -4, 3);
    PRT_WW_PER(%-*.*%, 4, 3);
    PRT_WW_PER(%-*.*%, 3, 5);
    PRT_WW_PER(%-*.*%, 2, -4);
    PRT_WW_PER(%-*.*%, 3, -1);
    PRT_WW_PER(%-*.*%, 4, -5);
    PRT_WW_PER(%-*.*%, 5, -1);
    PRT_WW_PER(%-*.*%, 6, -6);
    printf("=====================================================\n");
}