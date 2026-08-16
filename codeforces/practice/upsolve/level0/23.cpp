#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string f1, s1;
    string f2, s2;

    cin >> f1 >> s1;

    cin >> f2 >> s2;

    if (s1 == s2)
    {
        cout << "ARE Brothers\n";
    }
    else
    {
        cout << "NOT\n";
    }

    return 0;
}