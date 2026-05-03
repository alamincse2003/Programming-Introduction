#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {

        int m1;
        int m2;
        int d;
        scanf("%d %d %d", &m1, &m2, &d);
        int old_days = d;
        int total_work = m1 * d;
        int new_farmers = m1 + m2;
        int new_days = total_work / new_farmers;
        int few_days = old_days - new_days;
        printf("%d\n", few_days);
    }

    return 0;
}