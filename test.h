#define DI      123
#define C       'a'

#define PRT_PER(F)   printf("\"%s\"\t\t|", #F); \
                    ret = printf(#F); \
                    printf("|\tret : %d\n", ret);

#define PRT_W_PER(F, W)   printf("\"%s\"\t*:%2d\t\t|", #F, W); \
                    ret = printf(#F, W); \
                    printf("|\tret : %d\n", ret);

#define PRT_WW_PER(F, W1, W2)   printf("\"%s\"\t*:%2d *:%2d\t\t|", #F, W1, W2); \
                    ret = printf(#F, W1, W2); \
                    printf("|\tret : %d\n", ret);

#define PRT(F, A)   printf("\"%s\"\t\t|", #F); \
                    ret = printf(#F, A); \
                    printf("|\tret : %d\n", ret);

#define PRT_W(F, W, A)   printf("\"%s\"\t*:%2d\t\t|", #F, W); \
                    ret = printf(#F, W, A); \
                    printf("|\tret : %d\n", ret);

#define PRT_WW(F, W1, W2, A)   printf("\"%s\"\t*:%2d *:%2d\t\t|", #F, W1, W2); \
                    ret = printf(#F, W1, W2, A); \
                    printf("|\tret : %d\n", ret);

void test_c();
void test_s(char *str);
void test_p(void* p);
void test_di();
void test_u();
void test_xX();
void test_pers();
