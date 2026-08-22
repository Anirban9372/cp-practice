#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    string a, b;
    cin >> n >> a >> b;

    int oddA = 0, oddB = 0;
    for (int i = 0; i < n; i += 2)
    {
        oddA += a[i] == '1';
        oddB += b[i] == '1';
    }

    int evenA = 0, evenB = 0;
    for (int i = 1; i < n; i += 2)
    {
        evenA += a[i] == '1';
        evenB += b[i] == '1';
    }

    cout << (oddA == oddB && evenA == evenB ? "YES\n" : "NO\n");
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();
}
