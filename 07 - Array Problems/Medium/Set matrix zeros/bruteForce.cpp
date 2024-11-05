#include <bits/stdc++.h>
using namespace std;
// Mark 0s in rows as -1
void markR(vector<vector<int>> &matrix, int n, int m, int i)
{
    for (int j = 0; j < m; j++)
    {
        if (matrix[i][j] != 0)
        {
            matrix[i][j] = -1;
        }
    }
}

// Mark 0s in columns as -1
void markC(vector<vector<int>> &matrix, int n, int m, int j)
{
    for (int i = 0; i < n; i++)
    {
        if (matrix[i][j] != 0)
        {
            matrix[i][j] = -1;
        }
    }
}

// Set -1 for rows and cols
// that contains 0. Don't mark any 0 as -1:
vector<vector<int>> zerosMatrix(vector<vector<int>> &matrix, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 0)
            {
                markR(matrix, n, m, i);
                markC(matrix, n, m, i);
            }
        }
    }

    // Finally, mark all -1 as 0:
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == -1)
            {
                matrix[i][j] = 0;
            }
        }
    }

    return matrix;
}

// TC is O(n*m) * O(n+m) + O(n*m) ~ O(n^3)
// SC is O(1)

int main()
{
    vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>> answerMatrix = zerosMatrix(matrix, n, m);

    cout << "The final matrix is " << endl;
    for (auto it : answerMatrix)
    {
        for (auto ele : it)
        {
            cout << ele << " ";
        }
        cout << endl;
    }
    return 0;
}