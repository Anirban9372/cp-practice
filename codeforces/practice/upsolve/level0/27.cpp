#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;

    while (n >= 10)
    {
        n = n / 10;
    }
    if (n % 2 == 0)
    {
        cout << "EVEN";
    }
    else
    {
        cout << "ODD";
    }

    return 0;
}