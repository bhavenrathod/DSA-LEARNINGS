#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> &nums, int size)
{
    int count = 0;
    for (int i = 1; i < size; i++)
    {
        if (nums[i] < nums[i - 1])
            count++;
    }
    if (nums[size - 1] > nums[0])
        count++;
    return count <= 1;
}

int main()
{
    vector<int> nums = {5, 6, 7, 4};
    int size = nums.size();
    cout << check(nums, size);
    return 0;
}