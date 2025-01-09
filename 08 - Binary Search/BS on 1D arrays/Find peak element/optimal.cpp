#include <bits/stdc++.h>
using namespace std;

int findPeak(vector<int> &arr, int n)
{
    if (n == 1)
        return 0;
    if (arr[0] > arr[1])
        return arr[0];
    if (arr[n - 1] > arr[n - 2])
        return arr[n - 1];

    int low = 1, high = n - 2;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
            return arr[mid];
        else if (arr[mid] > arr[mid + 1])
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}

int main()
{
    vector<int> arr = {1, 2, 1, 3, 5, 6, 4};
    int size = arr.size();
    int ans = findPeak(arr, size);
    cout << "The peak element is " << ans;
    return 0;
}