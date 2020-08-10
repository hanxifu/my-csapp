#include <limits.h>

int tadd_ok(int x, int y)
{
    int sum = x + y;
    int neg_overflow = x < 0 && y < 0 && sum >= 0;
    int pos_overflow = x >= 0 && y >= 0 && sum < 0;
    return !neg_overflow && !pos_overflow;
}

int tadd_ok_buggy(int x, int y)
{
    int sum = x + y;
    return (sum - x == y) && (sum - y == x); // Always True
}

int tsub_ok_buggy(int x, int y)
{
    return tadd_ok(x, -y); // overflow when INT_MIN. INT_MIN = -INT_MAX - 1
}

int tsub_ok(int x, int y)
{
    if (y == INT_MIN) {
        return !(x >= 0);
    } else {
        return tadd_ok(x, -y);
    }
}
