#include <bits/stdc++.h>
using namespace std;

int ncr(int n, int r)
{
    long long res = 1;
    for (int i = 0; i < r; i++)
    {
        res = res * (n - i);
        res = res / (i + 1);
    }
    return res;
}

vector<vector<int>> pascalTriangle(int n)
{
    vector<vector<int>> final;
    for (int row = 1; row <= n; row++)
    {
        vector<int> temp;
        for (int col = 1; col <= row; col++)
        {
            temp.push_back(ncr(row - 1, col - 1));
        }
        final.push_back(temp);
    }
    return final;
}

int main()
{
    int n = 5;
    vector<vector<int>> answer = pascalTriangle(n);

    for (auto it : answer)
    {
        for (auto ele : it)
        {
            cout << ele << " ";
        }
        cout << endl;
    }
    return 0;
}