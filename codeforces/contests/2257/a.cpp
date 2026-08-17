#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    unordered_set<char> available_letters;
    for (int i = 0; i < n; i++)
    {
        string word;
        cin >> word;
        available_letters.insert(toupper(word[0]));
    }
    bool possible = true;
    for (int i = 0; i < m; i++)
    {
        string abb;
        cin >> abb;
        for (char c : abb)
        {
            if (available_letters.count(c) == 0)
            {
                possible = false;
            }
        }
    }
    if (possible)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t > 0)
    {
        solve();
        t--;
    }
    return 0;
}