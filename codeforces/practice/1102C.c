#include <stdio.h>

long long h[3005];
long long Mcw[3005];
long long Mccw[3005];

void solve()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &h[i]);
    }

    // Try making each vessel 'i' the empty one (w_i = 0)
    for (int i = 0; i < n; i++)
    {

        // 1. Calculate Clockwise (CW) maximum partitions from i
        Mcw[i] = 0;
        long long current_max_cw = 0;
        for (int step = 1; step < n; step++)
        {
            int prev = (i + step - 1) % n;
            int curr = (i + step) % n;

            // The partition between prev and curr is h[prev]
            if (step == 1 || h[prev] > current_max_cw)
            {
                current_max_cw = h[prev];
            }
            Mcw[curr] = current_max_cw;
        }

        // 2. Calculate Counter-Clockwise (CCW) maximum partitions from i
        Mccw[i] = 0;
        long long current_max_ccw = 0;
        for (int step = 1; step < n; step++)
        {
            // Adding 'n' before modulo ensures we don't get negative values
            int curr = (i - step + n) % n;

            // In CCW, moving from curr+1 down to curr crosses partition h[curr]
            int part = curr;

            if (step == 1 || h[part] > current_max_ccw)
            {
                current_max_ccw = h[part];
            }
            Mccw[curr] = current_max_ccw;
        }

        // 3. Sum the water volumes for all vessels
        long long total_water = 0;
        for (int j = 0; j < n; j++)
        {
            if (j == i)
                continue; // Vessel i is empty

            // The water level is bottlenecked by the minimum of the two path maximums
            long long w = (Mcw[j] < Mccw[j]) ? Mcw[j] : Mccw[j];
            total_water += w;
        }

        // Output the result for when vessel 'i' is empty
        printf("%lld%c", total_water, (i == n - 1) ? '\n' : ' ');
    }
}

int main()
{
    // Fast I/O for C
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