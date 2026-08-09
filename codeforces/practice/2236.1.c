#include <stdio.h>
#include <string.h>

// Global arrays to easily handle the maximum constraint (n, k <= 200,000)
// Using global arrays prevents stack overflow and is standard practice in C competitive programming
char s[200005];
int counts[200005];

void solve()
{
    int n, k;
    scanf("%d %d", &n, &k);
    scanf("%s", s);

    // Clean up the counts array for the first k elements
    // We only need to reset up to k, not the whole 200,000 array
    for (int i = 0; i < k; i++)
    {
        counts[i] = 0;
    }

    // Tally the '1's based on their index modulo k
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            counts[i % k]++;
        }
    }

    // Check if all modulo chains have an even number of '1's
    int possible = 1;
    for (int i = 0; i < k; i++)
    {
        if (counts[i] % 2 != 0)
        {
            possible = 0;
            break;
        }
    }

    if (possible)
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
    // Read the number of test cases
    if (scanf("%d", &t) == 1)
    {
        while (t--)
        {
            solve();
        }
    }
    return 0;
}