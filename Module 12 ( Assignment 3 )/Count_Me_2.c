#include <stdio.h>

int main()
{
    char s[100000];
    scanf("%s", &s);

    int ctn_cons = 0;

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
        {
            ctn_cons++;
        }
    }

    printf("%d", ctn_cons);
    return 0;
}