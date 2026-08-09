#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a[7], max = -100;
        long long total = 0;
        for (int i = 0; i < 7; i++)
        {
            scanf("%d", &a[i]);
            if (a[i] > max)
            {
                max = a[i];
            }
            total = total + a[i];
        }
        printf("%lld\n", -total + 2 * max);
    }

    return 0;
}