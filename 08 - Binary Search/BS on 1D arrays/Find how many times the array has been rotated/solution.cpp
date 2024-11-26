#include <bits/stdc++.h>
using namespace std;

int find(vector<int> &arr)
{
    int low = 0;
    int high = arr.size() - 1;
    int index = -1;
    int ans = INT_MAX;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        // whole search space is sorted
        if (arr[low] <= arr[high])
        {
            if (arr[low] < ans)
            {
                index = low;
                ans = arr[low];
            }
            break;
        }

        // left half
        if (arr[low] <= arr[mid])
        {
            if (arr[low] < ans)
            {
                index = low;
                ans = arr[low];
            }
            low = mid + 1;
        }
        // right half
        else
        {
            high = mid - 1;
            if (arr[mid] < ans)
            {
                index = mid;
                ans = arr[mid];
            }
        }
    }
    return index;
}

int main()
{
    vector<int> arr = {4, 5, 1, 2, 3};
    int ans = find(arr);
    cout << "The array has been rotated " << ans << " number of times";
    return 0;
}