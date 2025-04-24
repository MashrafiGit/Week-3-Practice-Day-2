#include <stdio.h>
int main()
{
    static char s[10000001];
    scanf("%s", s);
    // printf("%s", s);

    int length = strlen(s);

    int x[27] = {0};

    for (int i = 0; i < length; i++)
    {
        int val = s[i] - '`';
        x[val]++;
    }

    for (int i = 1; i < 27; i++)
    {
        if (x[i] != 0)
        {
            printf("%c : %d\n", i + '`', x[i]);
        }
    }

    return 0;
}