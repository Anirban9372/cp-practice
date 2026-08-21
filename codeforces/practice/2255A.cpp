#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int len = 2 * n;

    // If k>=1: every "10" boundary in the circular string simultaneously swaps to "01"
    // k irrelevant beyond >=1 (editorial insight)
    if (k >= 1)
    {
        string t = s;
        for (int i = 0; i < len; i++)
        {
            int nxt = (i + 1) % len;
            if (s[i] == '1' && s[nxt] == '0')
            {
                t[i] = '0';
                t[nxt] = '1';
            }
        }
        s = t;
    }

    int red = 0, blue = 0;
    for (int i = 0; i < len; i++)
    {
        if (s[i] == '1')
        {
            if ((i + 1) % 2 == 0)
                red++; // even 1-indexed = Blue member → Red scores
            else
                blue++; // odd 1-indexed = Red member → Blue scores
        }
    }
    cout << red << " " << blue << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--)
        solve();
}