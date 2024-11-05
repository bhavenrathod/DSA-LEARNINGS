#include <bits/stdc++.h>
using namespace std;

int findMissing(vector<int> &arr, int n)
{
    int hash[n + 1] = {};

    // Storing all the frequencies
    for (int i = 0; i < n - 1; i++)
    {
        hash[arr[i]] = 1;
    }

    for (int i = 1; i <= n; i++)
    {
        if (hash[i] == 0)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 6};
    int n = arr.size();
    int ans = findMissing(arr, n);
    cout << ans;
    return 0;
}