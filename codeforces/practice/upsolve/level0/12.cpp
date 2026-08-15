#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double x1, y1, r, x2, y2;
    cin >> x1 >> y1 >> r;
    cin >> x2 >> y2;
    if (((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)) <= r * r)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}