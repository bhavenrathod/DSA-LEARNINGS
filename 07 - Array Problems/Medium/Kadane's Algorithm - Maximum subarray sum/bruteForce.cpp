#include <bits/stdc++.h>
using namespace std;

int maxSubarraySum(vector<int> arr, int n)
{
    int maxSum = INT_MIN; // maximum sum

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            // subarray = arr[i.....j]
            int sum = 0;
            // add all the elements of subarray:
            for (int k = i; k <= j; k++)
            {
                sum += arr[k];
            }

            maxSum = max(maxSum, sum);
        }
    }
    return maxSum;
}

// TC is O(n^3)
// SC is O(1)

int main()
{
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = arr.size();
    int ans = maxSubarraySum(arr, n);
    cout << "Maximum subarray sum is " << ans << endl;
    return 0;
}