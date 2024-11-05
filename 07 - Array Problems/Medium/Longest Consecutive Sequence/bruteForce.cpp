#include <bits/stdc++.h>
using namespace std;

bool linearSearch(vector<int> &arr, int num)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            return true;
        }
    }
    return false;
}

int longestSequence(vector<int> &arr)
{
    int n = arr.size();
    int longest = 1;
    // pick a element and search for its
    // consecutive numbers:
    for (int i = 0; i < n; i++)
    {
        int cnt = 1;
        int x = arr[i];
        // search for consecutive numbers
        // using linear search:
        while (linearSearch(arr, x + 1) == true)
        {
            cnt++;
            x++;
        }
        longest = max(longest, cnt);
    }
    return longest;
}

// TC is nearly O(n^2)
// SC is O(1)

int main()
{
    vector<int> arr = {100, 200, 1, 2, 3, 4, 5};
    int ans = longestSequence(arr);
    cout << "The length of the longest consecutive sequence in the array is " << ans;
    return 0;
}