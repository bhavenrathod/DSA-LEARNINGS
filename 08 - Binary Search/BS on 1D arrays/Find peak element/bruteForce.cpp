#include <bits/stdc++.h>
using namespace std;

int findPeak(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        if ((i == 0 || arr[i - 1] < arr[i]) && (i == n - 1 || arr[i] > arr[i + 1]))
        {
            return arr[i];
        }
    }
    return -1;
}

// TC is O(n)
// SC is O(1)

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 5, 1};
    int size = arr.size();
    int ans = findPeak(arr, size);

    cout << "The Peak element is " << ans;
    return 0;
}