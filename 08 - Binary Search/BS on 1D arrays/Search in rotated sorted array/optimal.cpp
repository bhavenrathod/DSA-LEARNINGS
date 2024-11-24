#include <bits/stdc++.h>
using namespace std;

int findIndex(vector<int> &arr, int n, int target)
{
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == target)
            return mid;

        if (arr[low] <= arr[mid])
        {
            if (arr[low] <= target && target <= arr[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else
        {
            if (arr[mid] <= target && target <= arr[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {7, 8, 9, 1, 2, 3, 4, 5};
    int n = arr.size();
    int target = 1;
    int ans = findIndex(arr, n, target);

    if (ans == -1)
    {
        cout << "The element is not present";
    }
    else
    {
        cout << "The element is found at index " << ans;
    }
    return 0;
}