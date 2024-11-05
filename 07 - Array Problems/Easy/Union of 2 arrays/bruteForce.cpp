#include <bits/stdc++.h>
using namespace std;

void Union(vector<int> arr1, vector<int> arr2, int n, int m)
{
    set<int> s;
    // inserting the elements in the set
    for (int i = 0; i < n; i++) // O(n1logn)
    {
        s.insert(arr1[i]);
    }
    for (int i = 0; i < m; i++) // O(n2logn)
    {
        s.insert(arr2[i]);
    }
    // inserting the unique elements in the union array
    vector<int> uArray;
    for (auto it : s)
    {
        uArray.push_back(it); // O(n1 + n2)
    }
    // print the final array
    for (int i = 0; i < uArray.size(); i++)
    {
        cout << uArray[i] << " ";
    }
}
// TC is O(n1logn) + O(n2logn) + O(n1 + n2)
int main()
{
    vector<int> arr1 = {1, 1, 2, 3, 3};
    vector<int> arr2 = {3, 4, 5, 6, 6, 7};
    int n = arr1.size();
    int m = arr2.size();
    Union(arr1, arr2, n, m); // SC is O(n1 + n2) + O(n1 + n2)
    return 0;
}