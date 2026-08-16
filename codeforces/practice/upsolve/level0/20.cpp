#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin >> n;
    if (n % 5 != 0)
    {
        cout << "NO";
    }
    else
    {
        long long ans = n / 15;
        if (n % 15 != 0)
        {
            ans++;
        }
        cout << ans << "\n";
    }

    return 0;
}