#include <bits/stdc++.h>
using namespace std;

int main()
{
    // single or normal pairs
    pair<int, int> pair1 = {22, 66};
    cout << pair1.first << " " << pair1.second << endl;

    // nested pairs
    pair<int, pair<int, int>> pair2 = {10, {20, 90}};
    cout << pair2.first << " " << pair2.second.first << " " << pair2.second.second << endl;

    // array of pairs
    pair<int, int> array[] = {{1, 2}, {3, 4}, {5, 6}};
    cout << array[2].first << " " << array[1].first << endl;

    return 0;
}