#include <bits/stdc++.h>
using namespace std;
// Utilities
void explainPair()
{
    pair<int, int> p = {1, 3};
    // cout << p.first << " " << p.second;
    pair<int, pair<int, int>> q = {1, {3, 4}};
    cout << q.first << " " << q.second.first << " " << q.second.second << "\n";
    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    cout << arr[1].second << "\n"; // array can be also stored as a pair type
}
void explainTuple()
{
    tuple<int, double, char> a = {2, 3.4, 'a'};
    cout << get<0>(a) << ", " << get<2>(a) << "\n";
    get<2>(a) = 'b';
    cout << get<2>(a) << "\n";
}

// Containers
void explainVector()
{
    vector<int> v = {1, 2, 3};
    v.push_back(4);
    v.emplace_back(5);
    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(3, 4); // it automaticaaly thinks that the input is a pair so it puts on the curly braces by its own
    vector<int>(10, 100);   // creates 10 value of 100 as an array elements.
    vector<int>(10);        // stores 10 garbage value or 10 0's
    vector<int> v1(5, 20);
    vector<int> v2(v1); // whole v1 gets copied into v2
    // iterators
    vector<int>::iterator it = v.begin(); // it stores the memory address
    it++;
    cout << *(it) << " "; // it'll print the value at adress of the second array element:2
}
int main()
{
    explainPair();
    explainTuple();
    explainVector();
    return 0;
}