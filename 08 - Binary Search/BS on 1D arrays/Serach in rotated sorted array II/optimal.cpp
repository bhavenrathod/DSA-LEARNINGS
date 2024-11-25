#include <bits/stdc++.h>
using namespace std;

bool search(vector<int> &v, int n, int target)
{
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (v[mid] == target)
            return true;

        if (v[low] == v[mid] && v[mid] == v[high])
        {
            low++;
            high--;
            continue;
        }

        if (v[low] <= v[mid])
        {
            if (v[low] <= target && target <= v[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else
        {
            if (v[mid] <= target && target <= v[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return false;
}

// TC is O(logn)
// SC is O(1)

int main()
{
    vector<int> v = {2, 5, 6, 0, 0, 1, 2};
    int n = v.size();
    int target = 5;
    bool ans = search(v, n, target);
    cout << ans;
    return 0;
}