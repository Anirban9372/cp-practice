#include <stdio.h>
#include <stdlib.h>

void solve()
{
    long long a, b, x;
    scanf("%lld %lld %lld", &a, &b, &x);

    // Arrays to store the sequence of values when successively dividing by x
    long long sa[40];
    long long sb[40];
    int lenA = 0;
    int lenB = 0;

    // Generate division sequence for 'a'
    long long tempA = a;
    sa[lenA++] = tempA;
    while (tempA > 0)
    {
        tempA /= x;
        sa[lenA++] = tempA;
    }

    // Generate division sequence for 'b'
    long long tempB = b;
    sb[lenB++] = tempB;
    while (tempB > 0)
    {
        tempB /= x;
        sb[lenB++] = tempB;
    }

    long long min_cost = -1;

    // Compare all pairs of division states
    for (int i = 0; i < lenA; i++)
    {
        for (int j = 0; j < lenB; j++)
        {

            // Calculate absolute difference (the number of +1s needed)
            long long diff = sa[i] - sb[j];
            if (diff < 0)
            {
                diff = -diff;
            }

            // Total operations = divisions on a + divisions on b + additions
            long long cost = i + j + diff;

            // Track the minimum cost found
            if (min_cost == -1 || cost < min_cost)
            {
                min_cost = cost;
            }
        }
    }

    printf("%lld\n", min_cost);
}

int main()
{
    int t;
    // Fast I/O for testcases
    if (scanf("%d", &t) == 1)
    {
        while (t--)
        {
            solve();
        }
    }
    return 0;
}