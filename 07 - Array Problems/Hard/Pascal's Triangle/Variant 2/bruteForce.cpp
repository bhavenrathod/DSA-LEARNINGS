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

void pascalTriangle(int k)
{
    for (int c = 1; c <= k; c++)
    {
        cout << ncr(k - 1, c - 1) << " ";
    }
}

// TC is O(n*r)
// SC is O(1)

int main()
{
    int k = 5;
    pascalTriangle(k);
    return 0;
}