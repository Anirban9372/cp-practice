#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    while (cin >> m >> n)
    {
        int sum = 0;
        if (n <= 0 || m <= 0)
        {
            break;
        }
        for (int i = min({m, n}); i <= max({m, n}); i++)
        {
            sum = sum + i;
            cout << i << " ";
        }
        cout << "sum" << " " << "=" << sum << "\n";
    }

    return 0;
}