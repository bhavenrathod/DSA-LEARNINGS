#include <bits/stdc++.h>
using namespace std;

vector<int> findIntersection(vector<int> arr1, vector<int> arr2, int n, int m)
{
    vector<int> ans;
    int i = 0;
    int j = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
            i++;
        else if (arr2[j] < arr1[i])
        {
            j++;
        }
        else
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    return ans;
}

// TC is O(n + m)
// SC is O(1)

int main()
{
    vector<int> arr1 = {1, 1, 1, 2, 3, 3};
    vector<int> arr2 = {2, 2, 3, 3, 4, 5};
    int n = arr1.size();
    int m = arr2.size();
    vector<int> array = findIntersection(arr1, arr2, n, m);
    for (auto i : array)
    {
        cout << i << " ";
    }
    return 0;
}