#include <stdio.h>
int main()
{
    int n;
    long long max_even = -1;
    long long max_odd = -1;

    scanf("%d", &n);
    long long a;
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a);

        if (a % 2 == 0)
        {
            if (a > max_even)
            {
                max_even = a;
            }
        }
        else
        {
            if (a > max_odd)
            {
                max_odd = a;
            }
        }
    }
    if (max_even == -1 || max_odd == -1)
    {
        printf("-1\n");
    }
    else
    {
        printf("%lld\n", max_even + max_odd);
    }
    return 0;
}
