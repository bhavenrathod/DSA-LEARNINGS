#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> rotate(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    vector<vector<int>> rotated(n, vector<int>(n, 0));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            rotated[j][(n - 1) - i] = matrix[i][j];
        }
    }
    return rotated;
}

// TC is O(n^2)
// SC is O(n^2)

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    vector<vector<int>> ans = rotate(matrix);
    int n = ans.size();
    int m = ans[0].size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}