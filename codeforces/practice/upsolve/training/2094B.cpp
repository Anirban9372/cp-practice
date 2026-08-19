#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, m, l, r;
    cin >> n >> m >> l >> r;
    int l_prime = max(l, -m);
    int r_prime = l_prime + m;
    cout << l_prime << " " << r_prime << "\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
