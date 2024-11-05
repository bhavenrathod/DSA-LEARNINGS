#include <bits/stdc++.h>
using namespace std;

int subArrays(vector<int> &arr, int num)
{
    int n = arr.size(); // size of the given array.
    map<int, int> mp;
    int preSum = 0, cnt = 0;

    mp[0] = 1; // Setting 0 in the map.
    for (int i = 0; i < n; i++)
    {
        // add current element to prefix Sum:
        preSum += arr[i];

        // Calculate x-k:
        int remove = preSum - num;

        // Add the number of subarrays to be removed:
        cnt += mp[remove];

        // Update the count of prefix sum
        // in the map.
        mp[preSum] += 1;
    }
    return cnt;
}

// TC is O(n)
// SC is O(1)

int main()
{
    vector<int> arr = {1, 2, 3, -3, 1, 1, 1, 4, 2, -3};
    int num = 3;
    int ans = subArrays(arr, num);
    cout << ans;
    return 0;
}