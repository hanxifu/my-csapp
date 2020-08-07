#include <stdio.h>

float bug_sum_elements(float a[], unsigned length)
{
    int i;
    float result = 0;

    // change to "i < length" to fix it
    for (i = 0; i <= length - 1 ; i++) {
        result += a[i];
    }
    return result;
}


int main()
{
    float a[4] = {1, 2, 3, 4};

    // returns Segmentation fault (core dumped)
    printf("%f", bug_sum_elements(a, 0));
}
