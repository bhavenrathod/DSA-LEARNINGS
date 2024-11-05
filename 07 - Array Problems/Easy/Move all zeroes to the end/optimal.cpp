#include <bits/stdc++.h>
using namespace std;

vector<int> moveZeroes(vector<int> arr, int n)
{
    int j = -1;
    // finding the 1st index where we have a 0
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            j = i;
            break;
        }
    }

    // check and swap
    for (int i = j + 1; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }

    return arr;
}

// TC is O(n) since we are traversing for the both loops in the same array
// SC is O(1) since no extra space is used

int main()
{
    vector<int> arr = {1, 0, 5, 0, 3, 4};
    int n = arr.size();
    vector<int> ans = moveZeroes(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}