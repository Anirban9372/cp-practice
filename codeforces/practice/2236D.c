#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int a[200005];
int V[200005];
int F[200005];
bool dp[200005];

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

void solve()
{
    int n, k;
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Step 1: Sort the array
    qsort(a, n, sizeof(int), compare);

    // Step 2: Compress into distinct values (V) and frequencies (F)
    int M = 0;
    V[0] = a[0];
    F[0] = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] == a[i - 1])
        {
            F[M]++;
        }
        else
        {
            M++;
            V[M] = a[i];
            F[M] = 1;
        }
    }
    M++; // Total number of distinct elements

    int zeros_in_window = 0;
    int right = M - 1;

    // Step 3: DP from largest value down to smallest
    for (int i = M - 1; i >= 0; i--)
    {

        // Shrink the window so it only includes valid jumps (V[j] <= V[i] + k)
        while (right > i && V[right] > V[i] + k)
        {
            if (!dp[right])
            {
                zeros_in_window--;
            }
            right--;
        }

        // If there is at least one jump to a LOSING state (!dp), we can win by jumping
        bool can_jump_win = (zeros_in_window > 0);

        if (can_jump_win)
        {
            dp[i] = true;
        }
        else
        {
            // If we can't win by jumping, we win ONLY if the frequency is even
            dp[i] = (F[i] % 2 == 0);
        }

        // Add the current state to the window for the smaller elements to look at
        if (!dp[i])
        {
            zeros_in_window++;
        }
    }

    // Step 4: Arseniy can guarantee Egor wins if ANY starting state is a WINNING state
    bool possible = false;
    for (int i = 0; i < M; i++)
    {
        if (dp[i])
        {
            possible = true;
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
    if (scanf("%d", &t) == 1)
    {
        while (t--)
        {
            solve();
        }
    }
    return 0;
}