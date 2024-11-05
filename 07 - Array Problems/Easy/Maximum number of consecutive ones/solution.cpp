#include <bits/stdc++.h>
using namespace std;

int findOnes(vector<int> &nums, int n)
{
    int maxSum = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 1)
        {
            count++;
        }
        else
            count = 0;
        maxSum = max(count, maxSum);
    }
    return maxSum;
}

// TC is O(n)
// SC is O(1)

int main()
{
    vector<int> nums = {1, 1, 0, 1, 1, 1, 1};
    int n = nums.size();
    int ans = findOnes(nums, n);
    cout << ans;
    return 0;
}