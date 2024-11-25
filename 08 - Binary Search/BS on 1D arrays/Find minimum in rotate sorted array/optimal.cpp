#include <bits/stdc++.h>
using namespace std;

int findMinimum(vector<int> v, int n)
{
    int low = 0;
    int high = n - 1;

    int ans = INT_MAX;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        // if the search space is already sorted
        if (v[low] <= v[high])
        {
            ans = min(ans, v[low]);
            break;
        }

        if (v[low] <= v[mid])
        {
            ans = min(v[low], ans);
            low = mid + 1;
        }
        else
        {
            ans = min(v[mid], ans);
            high = mid - 1;
        }
    }
    return ans;
}

// TC is O(logn)
// SC is O(1)

int main()
{
    vector<int> v = {4, 5, 6, 7, 0, 1, 2, 3};
    int n = v.size();
    int ans = findMinimum(v, n);
    cout << "The minimum integer in the array is " << ans;
    return 0;
}