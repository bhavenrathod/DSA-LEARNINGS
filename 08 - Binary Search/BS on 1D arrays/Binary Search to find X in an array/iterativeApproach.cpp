#include <bits/stdc++.h>
using namespace std;

int search(vector<int> &arr, int n, int target)
{
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

// TC is O(log n) (base 2)

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int n = arr.size();
    int target = 2;
    int answer = search(arr, n, target);

    if (answer == -1)
        cout << "The element is not present in the array";
    else
        cout << "The element is present at index " << answer;
    return 0;
}