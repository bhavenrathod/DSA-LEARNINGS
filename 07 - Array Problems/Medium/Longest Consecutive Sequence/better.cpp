#include <bits/stdc++.h>
using namespace std;

int longestSequence(vector<int> &arr)
{
    int n = arr.size();
    int longest = 1;
    int cnt = 0;
    int lastSmall = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        sort(arr.begin(), arr.end());
        if (arr[i] - 1 == lastSmall)
        {
            // a[i] is the next element of the
            // current sequence.
            cnt++;
            lastSmall = arr[i];
        }
        else if (arr[i] != lastSmall)
        {
            cnt = 1;
            lastSmall = arr[i];
        }
        longest = max(longest, cnt);
    }
    return longest;
}

// TC is O(nlogn) + O(n)
// SC is O(1)

int main()
{
    vector<int> arr = {100, 200, 1, 2, 3, 4};

    int ans = longestSequence(arr);
    cout << "The length of the longest Sequence is " << ans;
    return 0;
}