#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for (int i = n; i >= 0; i--)
    {
        for (int j = 0; j <= n - i - 1; j++)
        {
            // print spaces first
            cout << " ";
        }
        // print stars next
        for (int k = 2 * i + 1; k > 0; k--)
        {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}