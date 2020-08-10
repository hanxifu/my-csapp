#include <stdio.h>

int uadd_ok(unsigned x, unsigned y)
{
    unsigned sum = x + y;
    return sum >= x;
}

int main()
{
    printf("%u\n", uadd_ok(4294967295u, 4294967295u));
    printf("%u\n", uadd_ok(1u, 2u));
}
