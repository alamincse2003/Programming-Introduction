#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        char s[10000];
        scanf("%s", &s);
        int count_capital = 0;
        int count_small = 0;
        int count_digit = 0;

        for (int i = 0; s[i] != '\0'; i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                count_capital++;
            }
            else if (s[i] >= 'a' && s[i] <= 'z')
            {
                count_small++;
            }
            else if (s[i] >= '0' && s[i] <= '9')
            {
                count_digit++;
            }
        }
        printf("%d %d %d \n", count_capital, count_small, count_digit);
    }

    return 0;
}