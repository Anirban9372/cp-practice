#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin >> n;

    long long k = 1;
    while (k * (k + 1) / 2 <= n)
    {
        k++;
    }
    cout << k - 1;

    return 0;
}