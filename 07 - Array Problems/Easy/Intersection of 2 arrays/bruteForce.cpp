#include <bits/stdc++.h>
using namespace std;

vector<int> findIntersection(vector<int> arr1, vector<int> arr2, int n, int m)
{
    vector<int> ans;
    int visited[m] = {0};

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr1[i] == arr2[j] && visited[j] == 0)
            {
                ans.push_back(arr1[i]);
                visited[j] = 1;
                break;
            }
            if (arr2[j] > arr1[i])
                break;
        }
    }
    return ans;
}

// TC is O(n * m)
// SC is O(m)

int main()
{
    vector<int> arr1 = {1, 1, 2, 2, 3, 3, 4, 5};
    vector<int> arr2 = {1, 2, 3, 3, 4, 4, 5};
    int n = arr1.size();
    int m = arr2.size();
    vector<int> array = findIntersection(arr1, arr2, n, m);
    for (auto i : array)
    {
        cout << i << " ";
    }
    return 0;
}