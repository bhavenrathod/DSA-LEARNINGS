#include <bits/stdc++.h>
using namespace std;

void Union(vector<int> arr1, vector<int> arr2, int n, int m)
{
    vector<int> v;
    int i = 0;
    int j = 0;

    while (i < n && j < m) // It should traverse in the array itself
    {
        if (arr1[i] <= arr2[j])
        {
            if (v.size() == 0 || v.back() != arr1[i]) /*checks for same element*/
            {
                v.push_back(arr1[i]);
            }
            i++;
        }
        else
        {
            if (v.size() == 0 || v.back() != arr2[j])
            {
                v.push_back(arr2[j]);
            }
            j++;
        }
    }

    // If no elements are left in the 2nd array
    while (i < n)
    {
        if (arr1[i] <= arr2[j])
        {
            if (v.size() == 0 || v.back() != arr1[i])
            {
                v.push_back(arr1[i]);
            }
            i++;
        }
    }

    // If no elements are left in the 1nd array
    while (j < m)
    {

        if (v.size() == 0 || v.back() != arr2[j])
        {
            v.push_back(arr2[j]);
        }
        j++;
    }

    // Print the final array
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

// TC is O(n + m)
// SC is o(1) is the space to store the array is not considered
// SC is o(n + m) is the space to store the array is considered

int main()
{
    vector<int> arr1 = {1, 1, 2, 3, 3, 8};
    vector<int> arr2 = {3, 4, 5, 6, 6, 7};
    int n = arr1.size();
    int m = arr2.size();
    Union(arr1, arr2, n, m);

    return 0;
}