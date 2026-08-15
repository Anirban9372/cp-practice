#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n, x = 0, i = 1;
    cin >> n;

    long long k = sqrtl(2 * n);

    // check k-1, k, k+1 and pick the best valid one
    while (k * (k + 1) / 2 > n)
        k--;
    while ((k + 1) * (k + 2) / 2 <= n)
        k++;

    cout << k;

    return 0;
}