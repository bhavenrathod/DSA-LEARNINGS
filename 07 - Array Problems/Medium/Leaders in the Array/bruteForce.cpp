#include <bits/stdc++.h>
using namespace std;

vector<int> findLeaders(vector<int> &arr)
{
    int n = arr.size();
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        bool flag = true;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                flag = false;
                break;
            }
        }

        if (flag)
            ans.push_back(arr[i]);
    }

    return ans;
}

// TC is O(n^2)
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