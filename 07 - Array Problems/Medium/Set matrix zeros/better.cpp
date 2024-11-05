#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> setZero(vector<vector<int>> &matrix, int n, int m)
{
    int row[n] = {0};
    int col[m] = {0};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 0)
            {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (row[i] || col[j])
            {
                matrix[i][j] = 0;
            }
        }
    }
    return matrix;
}

// TC is O(2*n*m)
// SC is O(n) + O(m)

int main()
{
    vector<vector<int>> matrix = {{0, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    int n = matrix.size();
    int m = matrix[0].size();

    vector<vector<int>> ans = setZero(matrix, n, m);

    cout << "The final matrix is: " << endl;
    for (auto it : ans)
    {
        for (auto ele : it)
        {
            cout << ele << " ";
        }
        cout << endl;
    }
    return 0;
}