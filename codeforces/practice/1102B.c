#include <stdio.h>

int main()
{
    long long t;
    int rem = 0;
    scanf("%lld", &t);
    while (t--)
    {
        long long n;
        scanf("%lld", &n);
        long long a = 0;
        long long b;
        rem = n % 12;
        if (rem < 10)
        {
            a = rem;
        }
        else if (rem == 10)
        {
            a = 22;
        }
        else
        {
            a = 11;
        }
        if (n >= a)
        {
            printf("%lld% lld\n", a, n - a);
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}
