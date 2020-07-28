#include <stdio.h>

void inplace_swap(int *x, int *y)
{
    *y = *x ^ *y;
    *x = *x ^ *y;
    *y = *x ^ *y;
}

void reverse_array(int a[], int cnt)
{
    int first, last;
    for (first = 0, last = cnt - 1;
         first <= last;
         first++, last--)
        inplace_swap(&a[first], &a[last]);
}

void reverse_array_modified(int a[], int cnt)
{
    int first, last;
    for (first = 0, last = cnt - 1;
         first < last;
         first++, last--)
        inplace_swap(&a[first], &a[last]);
}

void print_array(int a[], int cnt)
{
    int i;
    for (i = 0; i < cnt - 1; i++)
        printf("%d, ", a[i]);
    printf("%d\n", a[i]);
}

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    reverse_array(a, 5);
    print_array(a, 5);

    printf("------\n");

    int b[5] = {1, 2, 3, 4, 5};
    reverse_array_modified(b, 5);
    print_array(b, 5);
}
