#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> rotateMat(vector<vector<int>> &matrix)
{
    int n = matrix.size();

    // transpose
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // reverse
    for (int i = 0; i < n; i++)
    {
        reverse(matrix[i].begin(), matrix[i].end());
    }

    return matrix;
}

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<vector<int>> ans = rotateMat(matrix);

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