
#include <bits/stdc++.h>
using namespace std;

int maxSubarraySum(vector<int> &arr, int n)
{
    int maxi = INT_MIN; // maximum sum

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            // current subarray = arr[i.....j]

            // add the current element arr[j]
            //  to the sum i.e. sum of arr[i...j-1]
            sum += arr[j];

            maxi = max(maxi, sum); // getting the maximum
        }
    }

    return maxi;
}

// TC is O(n^2)
// SC is O(1)

int main()
{
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = arr.size();
    int maxSum = maxSubarraySum(arr, n);
    cout << "The maximum subarray sum is: " << maxSum << endl;
    return 0;
}
