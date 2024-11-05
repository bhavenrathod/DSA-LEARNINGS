#include <bits/stdc++.h>
using namespace std;

vector<int> generateRow(int row)
{
    long long res = 1;
    vector<int> ansRow;
    ansRow.push_back(1);
    for (int col = 1; col < row; col++)
    {
        res = res * (row - col);
        res = res / (col);
        ansRow.push_back(res);
    }
    return ansRow;
}

vector<vector<int>> pascalTriangle(int n)
{
    vector<vector<int>> final;

    for (int i = 1; i <= n; i++)
    {
        final.push_back(generateRow(i));
    }
    return final;
}

int main()
{
    int row = 5;
    vector<vector<int>> ans = pascalTriangle(row);

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