#include <bits/stdc++.h>
using namespace std;

void explainPair()
{
    pair<int, int> p = {1, 3};
    pair<int, pair<int, int>> q = {1, {3, 4}};
    cout << q.first << " " << q.second.first << " " << q.second.second << "\n";
    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    cout << arr[1].second << "\n";
}

void explainTuple()
{
    tuple<int, double, char> a = {2, 3.4, 'a'};
    cout << get<0>(a) << ", " << get<2>(a) << "\n";
    get<2>(a) = 'b';
    cout << get<2>(a) << "\n";
}

void explainVector()
{
    vector<int> v = {1, 2, 3};
    v.push_back(4);
    v.emplace_back(5);

    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(3, 4);

    vector<int>(10, 100);
    vector<int>(10);

    vector<int> v1(5, 20);
    vector<int> v2(v1);

    vector<int>::iterator it = v.begin();
    it++;
    cout << *(it) << " ";
    cout << v.back() << "\n";

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }

    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }

    for (auto it : v)
    {
        cout << it;
    }

    v.erase(v.begin() + 1);
    v.erase(v.begin() + 2, v.begin() + 4);

    vector<int> v3 = {10, 12, 13};
    v.insert(v.begin(), 20);
    v.insert(v.begin() + 1, 2, 15);
    v1 = {40, 41, 42};
    v1.pop_back();
    v2.swap(v1);
    v.clear();
    cout << v.empty() << "\n";
}
// list
void explainList()
{
    list<int> l = {1, 2, 3};
    l.push_back(4);
    l.push_front(0);
    l.pop_front();
    l.reverse();
    l.emplace_back(6);
    l.emplace_front(10);
    for (auto it : l)
    {
        cout << it << " ";
    }
    cout << "\n";
}
void explainDeque()
{
    deque<int> dq = {1, 2, 3, 4};
    cout << dq.front() << "\n";
    cout << dq.back() << "\n";
    for (auto it : dq)
    {
        cout << it << " ";
    }
    cout << "\n";
}
void explainStack()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.emplace(3);
    cout << s.top() << "\n";
    s.pop(); // deletes last in
    cout << s.top() << "\n";
    cout << s.empty() << "\n"; // is the stack empty or not
    stack<int> s1, s2;
    s1.swap(s2);
    cout << "\n";
}
void explainQueue()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.emplace(3);
    q.back() = +4;
    q.pop();
    cout << q.front(); // rest all functions are almost same
}

int main()
{
    explainPair();
    explainTuple();
    explainVector();
    explainList();
    explainDeque();
    explainStack();
    return 0;
}