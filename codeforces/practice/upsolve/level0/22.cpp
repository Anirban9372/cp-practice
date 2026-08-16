#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n, temp = 0, sum = 0;
    cin >> n;
    while (n > 0)
    {
        temp = n % 10;
        n = n / 10;
        if (temp % 2 != 0)
        {
            sum = sum + temp;
        }
    }
    cout << sum;
    return 0;
}