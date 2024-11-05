#include <bits/stdc++.h>
using namespace std;

int search(vector<int> &arr, int low, int high, int target)
{
    if (low > high)
        return -1; // Target not found

    int mid = (low + high) / 2;

    if (arr[mid] == target)
        return mid; // Target found at index mid
    else if (arr[mid] < target)
        return search(arr, mid + 1, high, target); // Search in the right half
    else
        return search(arr, low, mid - 1, target); // Search in the left half
}

// TC is O(log n) (base 2)

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int n = arr.size();
    int low = 0;
    int high = n - 1;
    int target = 4;
    int ans = search(arr, low, high, target);
    if (ans == -1)
        cout << "The element is not present in the array";
    else
        cout << "The element is present at index " << ans;
    return 0;
}