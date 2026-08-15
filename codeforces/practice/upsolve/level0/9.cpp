
#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x;
    cin >> x;
    if (x % 5 == 0)
    {
        cout << x / 5;
    }
    else
    {
        cout << (x / 5) + 1;
    }
    return 0;
}