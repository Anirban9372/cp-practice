#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k, s, x, y, z, count = 0;
    cin >> k >> s;
    for (x = 0; x <= k; x++)
    {
        for (y = 0; y <= k; y++)
        {
            z = s - x - y;
            if (z >= 0 && z <= k)
            {
                count++;
            }
        }
    }
    cout << count;
    return 0;
}