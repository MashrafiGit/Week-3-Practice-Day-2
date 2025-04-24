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

    // int fre0 = 0, fre1 = 0, fre2 = 0, fre3 = 0, fre4 = 0, fre5 = 0, fre6 = 0;

    int fre[6] = {0};

    for (int i = 0; i < n; i++)
    {
        fre[a[i]];
    }

    printf("%d -> %d\n", 0, fre[0]);
    printf("%d -> %d\n", 1, fre[1]);
    printf("%d -> %d\n", 2, fre[2]);
    printf("%d -> %d\n", 3, fre[3]);
    printf("%d -> %d\n", 4, fre[4]);
    printf("%d -> %d\n", 5, fre[5]);
    printf("%d -> %d\n", 6, fre[6]);


    return 0;
}