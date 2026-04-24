#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        /* code */
        scanf("%d", &a[i]);
    }

    int posNumber = 0;
    int negNumber = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        /* code */
        if (a[i] > 0)
        {
            /* code */
            posNumber += a[i];
        }
        else if (a[i] < 0)
        {
            /* code */
            negNumber += a[i];
        }
    }
    printf("%d %d", posNumber, negNumber);

    return 0;
}