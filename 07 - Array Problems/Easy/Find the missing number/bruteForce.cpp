#include <bits/stdc++.h>
using namespace std;

int findMissing(vector<int> arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        int flag = 0;
        for (int j = 0; i < n - 1; j++)
        {
            if (arr[j] == i)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            return i;
    }
    return -1;
}

// TC is O(n*n) where n is the size of the array + 1
// SC is O(1)

int main()
{
    vector<int> arr = {1, 2, 3, 5, 6};
    int n = arr.size();
    int ans = findMissing(arr, n);
    cout << ans;
    return 0;
}