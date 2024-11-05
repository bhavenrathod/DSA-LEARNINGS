#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> &arr)
{
    int n = arr.size();
    map<int, int> mpp;

    // Count the frequency of each element in the array
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    // Iterate through the map and find the element with frequency > n/2
    for (auto it : mpp)
    {
        if (it.second > n / 2)
            return it.first;
    }

    // If no majority element is found, return -1
    return -1;
}

// TC is O(n*logn) + O(n)
// We are using a map data structure. Insertion in the map takes logN time. And we are doing it for N elements. So, it results in the first term O(N*logN). The second O(N) is for checking which element occurs more than floor(N/2) times. If we use unordered_map instead, the first term will be O(N) for the best and average case and for the worst case, it will be O(N2)

// SC is O(n)

int main()
{
    vector<int> arr = {2, 2, 1, 1, 2, 2, 1};
    int ans = majorityElement(arr);
    cout << "The majority element is " << ans << endl;
    return 0;
}