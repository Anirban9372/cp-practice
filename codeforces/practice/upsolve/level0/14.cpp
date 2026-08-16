#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c, sum = 0;
    cin >> a >> b >> c;
    sum = a + b + c - min({a, b, c});
    cout << sum;

    return 0;
}