#include <bits/stdc++.h>
using namespace std;

int findSingle(vector<int> &arr, int size)
{
    if (size == 1)
        return arr[0];
    for (int i = 0; i < size; i++)
    {
        if (i == 0)
        {
            if (arr[i] != arr[i + 1])
                return arr[i];
        }
        else if (i == size - 1)
        {
            if (arr[i] != arr[i - 1])
                return arr[i];
        }
        else
        {
            if (arr[i] != arr[i - 1] && arr[i] != arr[i + 1])
                return arr[i];
        }
    }
    return -1;
}

// TC is O(n)
// SC is O(1)

int main()
{
    vector<int> arr = {1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 6};
    int n = arr.size();
    int ans = findSingle(arr, n);
    cout << "The single element is " << ans;
    return 0;
}