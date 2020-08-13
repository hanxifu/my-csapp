#include <stdint.h>

int tmult_ok_1(int x, int y)
{
    int p = x * y;
    return !x || p / x == y;
}

int tmult_ok_with_64(int x, int y)
{
    int64_t p = (int64_t)x * y;
    return p == (int)p;
}
