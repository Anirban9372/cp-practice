#include <stdio.h>

void solve()
{
    int n;
    scanf("%d", &n);

    int h[5];
    int max_h = 0;
    int min_h = 7; // Since h_i <= 6, 7 is a safe upper bound to find the minimum

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &h[i]);
        if (h[i] > max_h)
        {
            max_h = h[i];
        }
        if (h[i] < min_h)
        {
            min_h = h[i];
        }
    }

    // The formula derived: k = max - min + 1
    int ans = max_h - min_h + 1;
    printf("%d\n", ans);
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        solve();
    }
    return 0;
}