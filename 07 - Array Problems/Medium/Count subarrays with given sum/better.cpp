#include <bits/stdc++.h>
using namespace std;

int subArrays(vector<int> &arr, int num)
{
    int n = arr.size(); // size of the given array.
    int cnt = 0;        // Number of subarrays:

    for (int i = 0; i < n; i++)
    { // starting index i
        int sum = 0;
        for (int j = i; j < n; j++)
        { // ending index j
            // calculate the sum of subarray [i...j]
            // sum of [i..j-1] + arr[j]
            sum += arr[j];

            // Increase the count if sum == k:
            if (sum == num)
                cnt++;
        }
    }
    return cnt;
}

// TC is ~ O(n^2)
// SC is O(1)

int main()
{
    vector<int> arr = {1, 2, 3, -3, 1, 1, 1, 4, 2, -3};
    int num = 3;
    int ans = subArrays(arr, num);
    cout << ans;

    return 0;
}