#include <stdio.h>
int main()
{
    long long n, a, d;
    scanf("%lld%lld%lld", &n, &a, &d);

    if (n % 2 == 0)
    {
        printf("%lld\n", (n / 2) * (-d));
    }
    else
    {
        long long x = -(n - 1) / 2 * d + a + (n - 1) * d;
        printf("%lld\n", x);
    }

    return 0;
}