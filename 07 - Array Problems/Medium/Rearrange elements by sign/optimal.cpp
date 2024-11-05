#include <bits/stdc++.h>
using namespace std;

vector<int> rearrange(vector<int> arr, int n)
{
    vector<int> temp(n, 0);
    int pos = 0, neg = 1;

    for (int i = 0; i < n; i++)
    {
        // Fill negative elements in odd indices and inc by 2.
        if (arr[i] < 0)
        {
            temp[neg] = arr[i];
            neg += 2;
        }
        // Fill positive elements in even indices and inc by 2.
        else
        {
            temp[pos] = arr[i];
            pos += 2;
        }
    }
    return temp;
}

// TC is O(n)
// SC is O(n)

int main()
{
    vector<int> arr = {1, 2, -4, -5};
    int n = arr.size();
    vector<int> ans = rearrange(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}