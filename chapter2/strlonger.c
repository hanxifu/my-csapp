#include <stdio.h>
#include <string.h>

int strlonger(char *s, char *t)
{
    // Change to "strlen(s) > strlen(t)" to fix it
    return strlen(s) - strlen(t) > 0;
}

int main()
{
    char a[2] = {1, 2};
    char b[3] = {1, 2, 3};

    printf("%d\n", strlonger(a, b)); // bug here
    printf("%d\n", strlonger(b, a));
}
