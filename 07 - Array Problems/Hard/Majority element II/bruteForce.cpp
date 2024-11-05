#include <bits/stdc++.h>
using namespace std;

vector<int> findMajority(vector<int> &arr)
{
    int n = arr.size();
    vector<int> temp;

    for (int i = 0; i < n; i++)
    {
        if (temp.size() == 0 || temp[0] != arr[i])
        {
            int cnt = 0;
            for (int j = 0; j < n; j++)
            {
                if (arr[j] == arr[i])
                    cnt++;
            }
            if (cnt > n / 3)
            {
                temp.push_back(arr[i]);
            }
        }
        if (temp.size() == 2)
            break;
    }
    return temp;
}

// TC is ~ O(n^2)
// SC is O(1)

int main()
{
    vector<int> arr = {11, 33, 33, 11, 33, 11};
    vector<int> ans = findMajority(arr);
    for (auto it : ans)
    {
        cout << it << " ";
    }
    return 0;
}