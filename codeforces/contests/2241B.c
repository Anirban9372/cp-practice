#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long x;
        scanf("%lld", &x);

        int d = 0;
        long long tmp = x;
        while (tmp > 0)
        {
            d++;
            tmp /= 10;
        }

        long long pow10 = 1;
        for (int i = 0; i < d; i++)
            pow10 *= 10;

        long long y = pow10 + 1;
        printf("%lld\n", y);
    }
    return 0;
}