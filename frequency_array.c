#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int fre0 = 0, fre1 = 0, fre2 = 0, fre3 = 0, fre4 = 0, fre5 = 0, fre6 = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            fre0++;
        }
        else if (a[i] == 1)
        {
            fre1++;
        }
        else if (a[i] == 2)
        {
            fre2++;
        }
        else if (a[i] == 3)
        {
            fre3++;
        }
        else if (a[i] == 4)
        {
            fre4++;
        }
        else if (a[i] == 5)
        {
            fre5++;
        }
        else if (a[i] == 6)
        {
            fre6++;
        }
        }

    printf("%d -> %d\n", 0, fre0);
    printf("%d -> %d\n", 1, fre1);
    printf("%d -> %d\n", 2, fre2);
    printf("%d -> %d\n", 3, fre3);
    printf("%d -> %d\n", 4, fre4);
    printf("%d -> %d\n", 5, fre5);
    printf("%d -> %d\n", 6, fre6);

    return 0;
}