#include <bits/stdc++.h>
using namespace std;

vector<int> rearrange(vector<int> arr, int n)
{
    vector<int> pos;
    vector<int> neg;

    // Segregate the array into positives and negatives.
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
            pos.push_back(arr[i]);
        else
            neg.push_back(arr[i]);
    }

    // Positives on even indices, negatives on odd.
    for (int i = 0; i < n / 2; i++)
    {
        arr[2 * i] = pos[i];
        arr[2 * i + 1] = neg[i];
    }
    return arr;
}

// TC is O(n) + O(n/2)
// SC is O(n/2 + n/2)

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