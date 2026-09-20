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
    q.back() = +4; // increase the last value by 4
    q.pop();
    cout << q.front() << "\n"; // rest all functions are almost same
}
void explainPriorityQueue()
{
    // for max heap
    priority_queue<int> pq;
    pq.push(4);
    pq.push(6);
    pq.push(10);
    pq.emplace(12);
    pq.pop();
    cout << pq.top() << "\n"; // should give out 10
    // for min heap
    priority_queue<int, vector<int>, greater<int>> p;
    p.push(3);
    p.push(5);
    p.push(10);
    p.push(4);
    p.pop();                 // remove min element 3
    cout << p.top() << "\n"; // should give out 4
}
void explainSet()
{
    set<int> s = {3, 1, 4, 1}; // Stores as {1, 3, 4}

    s.insert(5); // Adds 5: {1, 3, 4, 5}
    s.erase(3);  // Removes 3: {1, 4, 5} // takes logarithmic time

    // 1. Iterating through a set
    for (auto it = s.begin(); it != s.end(); ++it)
    {
        cout << *it << " ";
    }
    // 2. Finding elements
    if (s.find(4) != s.end())
    {
        // 4 exists
    }
    // count() also works: returns 1 if exists, 0 otherwise
    if (s.count(5))
    {
        // 5 exists
    }
    auto it = s.find(4);
    s.erase(it);                 // Erase by iterator and it takes constant time.
    auto it1 = s.lower_bound(3); // Returns an iterator to the first element >= 3
    auto it2 = s.upper_bound(3); // Returns an iterator to the first element > 3
}
void explainMultiSet()
{
    multiset<int> ms = {3, 1, 4, 1}; // Stores as {1, 1, 3, 4}

    ms.insert(5); // Adds 5: {1, 1, 3, 4, 5}
    ms.erase(1);  // Removes all occurrences of 1: {3, 4, 5} // takes logarithmic time

    // To remove a single occurrence of an element
    auto it = ms.find(4);
    if (it != ms.end())
    {
        ms.erase(it); // Erase by iterator and it takes constant time.
    }
    // remove for a range
    ms.erase(ms.find(3), ms.find(3 + 2)); // Removes all occurrences of 3: {4, 5} // takes logarithmic time

    // Iterating through a multiset
    for (auto it = ms.begin(); it != ms.end(); ++it)
    {
        cout << *it << " ";
    }
}
void explainUnorderedSet()
{
    unordered_set<int> uset = {5, 1, 9};
    // Order in memory is random
    // it does not have an upperbound or lowerbound and
    // only thing is that it has unique elements and it is faster than set

    // Element is placed into a "bucket" computed from its hash value.
    // It does NOT go to the 'end' or 'front' like in a vector or list.
    uset.insert(4);
}
void explainMap()
{
    map<string, int> m;
    m["apple"] = 5;
    m.insert({"banana", 3});
    // 1. Iterating through a map using iterators
    for (auto it = m.begin(); it != m.end(); ++it)
    {
        // it->first is the key, it->second is the value
        cout << it->first << " : " << it->second << "\n";
    }

    // Modern, easier approach for iteration
    for (auto p : m)
    {
        cout << p.first << " : " << p.second << "\n";
    }
    // 2. Finding keys
    if (m.find("apple") != m.end())
    {
        cout << "Found apple!";
    }

    m.erase("banana"); // Removes by key
}

int main()
{
    explainPair();
    explainTuple();
    explainVector();
    explainList();
    explainDeque();
    explainStack();
    explainQueue();
    explainPriorityQueue();
    explainSet();
    explainMultiSet();
    explainUnorderedSet();
    explainMap();
    return 0;
}