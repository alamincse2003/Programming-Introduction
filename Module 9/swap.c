#include <stdio.h>

int main()
{
    int a = 5;
    int b = 8;
    int tmp = a;
    a = b;
    b = tmp;
    printf("%d\n%d\n", a, b);
    return 0;
}