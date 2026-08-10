#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    /* int x;

     int count = 0, sum = 0;
     while (cin >> x)
     {
         sum = sum + x;
         count++;
     }
     cout << sum << "\n"
          << count;*/

    long long x = 1;
    int n, m;

    cin >> n >> m;

    if (m == 0)
    {
        cout << "Error\n";
        return 1;
    }
    for (int i = 2; i <= n; i++) // we are doing modulus of factorial by doing modulus before the total multiplication
                                 // and then we will take the modulus of the total products of the moduluses created\
                                 // at last by formula.
    {
        x = (x * i) % m;
        if (x == 0)
        {
            break;
        }
    }
    cout << x % m << "\n";

    // now if negative number appears then mod will fail and we need to add m
    int y = -17;
    y = y % m;
    if (y < 0)
    {
        y = y + m;
    }
    cout << y << endl;

    return 0;
}