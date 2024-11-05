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

int pascalTriangle(int r, int c)
{
    int ans = ncr(r - 1, c - 1);
    return ans;
}

// TC is O(c)
// SC is O(1)

int main()
{
    int r = 5, c = 3;
    int element = pascalTriangle(r, c);

    cout << "The element at (r,c) is " << element;

    return 0;
}