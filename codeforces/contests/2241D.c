#include <stdio.h>

long long a[200005];
long long b[200005];

void solve()
{
    int n;
    if (scanf("%d", &n) != 1)
        return;

    for (int i = 1; i <= n; i++)
    {
        scanf("%lld", &a[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        scanf("%lld", &b[i]);
    }

    long long sum_odd = 0;
    long long sum_even = 0;
    int iswf = 1;

    long long prev_a = 0;
    long long prev_b = 0;

    for (int i = 1; i <= n; i++)
    {
        // Calculate the adjacent sums for current index
        long long A_i = a[i] + prev_a;
        long long B_i = b[i] + prev_b;

        // E_i is the difference we need to bridge
        long long E_i = B_i - A_i;

        if (i % 2 == 1)
        {
            sum_odd += E_i;
            // If the running prefix sum for odd indices drops below 0, it's impossible
            if (sum_odd < 0)
            {
                iswf = 0;
            }
        }
        else
        {
            sum_even += E_i;
            // If the running prefix sum for even indices drops below 0, it's impossible
            if (sum_even < 0)
            {
                iswf = 0;
            }
        }

        prev_a = a[i];
        prev_b = b[i];
    }

    if (iswf)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}

int main()
{
    int t;
    if (scanf("%d", &t) == 1)
    {
        while (t--)
        {
            solve();
        }
    }
    return 0;
}