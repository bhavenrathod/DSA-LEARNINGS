#include <bits/stdc++.h>
using namespace std;

int findMissing(vector<int> &arr, int n)
{
    // find the sum of the numbers till n
    int sum1 = (n * (n + 1)) / 2;
    int sum2 = 0;
    // find the sum of the array
    for (int i = 0; i < n - 1; i++)
    {
        sum2 += arr[i];
    }

    int missingNum = sum1 - sum2;
    return missingNum;
}
// Tc is O(n) SC is O(1)
int main()
{
    vector<int> arr = {1, 2, 3, 4, 6};
    int n = arr.size();
    int ans = findMissing(arr, n);
    cout << ans;
    return 0;
}