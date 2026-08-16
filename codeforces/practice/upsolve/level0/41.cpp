#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    long long a = 0, current, b = 1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        if (i <= 1)
        {
            cout << i << " ";
        }
        else
        {
            current = a + b;
            cout << current << " ";
            a = b; // current value needs to be calculated under circumstances
            b = current;
        }
    }
    return 0;
}