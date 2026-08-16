#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin >> n;
    if (n < 0)
    {
        n = -n;
    }
    while (n >= 10)
    {
        n = (n / 10);
    }
    cout << n;
    return 0;
}