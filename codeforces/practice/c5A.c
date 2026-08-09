#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        long long absum = 0;
        long long abmin = LLONG_MAX;
        int neg = 0;

        for (int i = 0; i < n; i++)
        {
            long long x;
            scanf("%lld", &x);

            if (x < 0)
                neg++;

            long long ax = llabs(x);
            absum += ax;

            if (ax < abmin)
                abmin = ax;
        }

        if (neg % 2 == 0)
            printf("%lld\n", absum);
        else
            printf("%lld\n", absum - 2 * abmin);
    }

    return 0;
}