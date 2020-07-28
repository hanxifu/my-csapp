#include <stdio.h>
#include <string.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len)
{
    size_t i;
    for (i = 0; i < len; i++)
        printf(" %.2x", start[i]);
    printf("\n");
}

void show_int(int x)
{
    show_bytes((byte_pointer)&x, sizeof(int));
}

void show_float(float x)
{
    show_bytes((byte_pointer)&x, sizeof(float));
}

void show_pointer(void *x)
{
    show_bytes((byte_pointer)&x, sizeof(void *));
}

void test(int val)
{
    int ival = val;
    float fval = (float)ival;
    int *pval = &ival;

    show_int(ival);
    show_float(fval);
    show_pointer(pval);
}

void test_2_5()
{
    int val = 0x87654321;
    byte_pointer pval = (byte_pointer)&val;

    show_bytes(pval, 1);
    show_bytes(pval, 2);
    show_bytes(pval, 3);
}

void test_2_6()
{
    int ival = 3510593;
    float fval = 3510593.0;

    show_int(ival);
    show_float(fval);
}

void test_2_7()
{
    const char *s = "abcdef";
    show_bytes((byte_pointer)s, strlen(s));
}

int main()
{
    test(12345);
    printf("-------\n");
    test_2_5();
    printf("-------\n");
    test_2_6();
    printf("-------\n");
    test_2_7();
}
