#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l;

    // to add element int the list from end
    l.push_back(1);
    l.emplace_back(2);
    l.emplace_back(3);
    l.emplace_back(4);
    l.emplace_back(5);
    cout << "The elements of list are ";
    for (auto it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }

    // to add elements from the front of the list
    l.push_front(0);
    l.emplace_front(-1);
    cout << endl
         << "The elements of updated list are ";
    for (auto it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }
    // other functions of list are same as vectors

    return 0;
}