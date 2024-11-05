#include <bits/stdc++.h>
using namespace std;

void pascalTriangle(int k)
{
    long long ans = 1;
    cout << ans << " ";
    for (int i = 1; i < k; i++)
    {
        ans = ans * (k - i);
        ans = ans / i;
        cout << ans << " ";
    }
}

// TC is O(n)
// SC is O(1)

int main()
{
    int k = 5;
    pascalTriangle(k);
    return 0;
}