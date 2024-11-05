#include <bits/stdc++.h>
using namespace std;

vector<int> findLeaders(vector<int> &arr)
{
    vector<int> ans;
    int last = INT_MIN;
    int n = arr.size();

    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] > last)
        {
            ans.push_back(arr[i]);
        }
        last = max(last, arr[i]);
    }
    sort(ans.begin(), ans.end());
    return ans;
}

// TC is O(n)
// SC is O(n)

int main()
{
    vector<int> arr = {10, 22, 3, 0, 6};
    vector<int> leaders = findLeaders(arr);

    for (auto it : leaders)
    {
        cout << it << " ";
    }
    return 0;
}