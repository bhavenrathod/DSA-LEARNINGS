#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> &arr, int n, int x)
{
    int low = 0;
    int high = n - 1;
    int index = n;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] > x)
        {
            index = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return index;
}

// TC is O(log n) (base 2)

int main()
{
    vector<int> arr = {3, 5, 8, 15, 19};
    int n = arr.size();
    int x = 9;
    int ans = lowerBound(arr, n, x);
    cout << "Lower bound index is " << ans;
    return 0;
}