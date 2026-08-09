#include <stdio.h>

#define MAXA 500005
#define MOD 1000000007

int spf[MAXA];
int sum_v[MAXA];
int seen_primes[MAXA];
int seen_count = 0;

// Precompute the Smallest Prime Factor (SPF) for all numbers up to MAXA
// This allows us to factorize any a_i extremely fast
void sieve()
{
    for (int i = 2; i < MAXA; i++)
    {
        spf[i] = i;
    }
    for (int i = 2; i * i < MAXA; i++)
    {
        if (spf[i] == i)
        {
            for (int j = i * i; j < MAXA; j += i)
            {
                if (spf[j] == j)
                {
                    spf[j] = i;
                }
            }
        }
    }
}

void solve()
{
    int n, dummy_x;
    if (scanf("%d %d", &n, &dummy_x) != 2)
        return;
    // dummy_x is always 1 in the easy version, so we just read and ignore it

    seen_count = 0;

    for (int i = 0; i < n; i++)
    {
        int a;
        scanf("%d", &a);

        // Fast prime factorization of 'a'
        while (a > 1)
        {
            int p = spf[a];
            int count = 0;

            // Count how many times prime 'p' divides 'a'
            while (a % p == 0)
            {
                count++;
                a /= p;
            }

            // If it's a newly seen prime for this test case, log it for resetting later
            if (sum_v[p] == 0)
            {
                seen_primes[seen_count++] = p;
            }

            // Accumulate the exponent count for this prime
            sum_v[p] += count;
        }
    }

    long long ans = 1;

    // Calculate the product of (1 + total sum of exponents) for each prime
    for (int i = 0; i < seen_count; i++)
    {
        int p = seen_primes[i];
        ans = (ans * (sum_v[p] + 1)) % MOD;

        // Clean up the frequency array for the next test case
        // We only reset the primes we actually touched to ensure O(1) reset cost
        sum_v[p] = 0;
    }

    printf("%lld\n", ans);
}

int main()
{
    // Precompute prime factors once at program start
    sieve();

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