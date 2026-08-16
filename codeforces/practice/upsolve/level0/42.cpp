#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while (t > 0)
    {
        int x, y, sum = 0;
        cin >> x >> y;
        for (int i = min({x, y}) + 1; i < max({x, y}); i++)
        {
            if (i % 2 != 0)
            {
                sum = sum + i;
            }
        }
        cout << sum << "\n";
        t--;
    }
    return 0;
}