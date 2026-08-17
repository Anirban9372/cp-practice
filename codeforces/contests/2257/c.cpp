#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> p(n + 1);
    for (int i = 2; i <= n; i++)
    {
        cin >> p[i];
    }

    int m;
    cin >> m;

    vector<int> has_dam(n + 1, 0);
    for (int i = 0; i < m; i++)
    {
        int a;
        cin >> a;
        has_dam[a] = 1;
    }

    vector<int> cameras;

    for (int v = n; v >= 2; v--)
    {
        if (has_dam[v])
        {
            int parent = p[v];
            if (has_dam[parent])
            {
                cameras.push_back(v);
            }
            else
            {

                has_dam[parent] = 1;
            }
        }
    }

    cout << cameras.size();
    for (int u : cameras)
    {
        cout << " " << u;
    }
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}