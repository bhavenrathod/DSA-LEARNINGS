#include <bits/stdc++.h>
using namespace std;

vector<int> permutation(vector<int> &arr, int n)
{
    int index = -1;
    // To find the breakpoint
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] < arr[i + 1]) // breakpoint
        {
            index = i;
            break;
        }
    }

    // If there is no breakpoint
    if (index == -1)
    {
        reverse(arr.begin(), arr.end()); // reverse the whole array
        return arr;
    }

    // Find the next greater element in the right half of the array and swap it
    for (int i = n - 1; i > index; i--)
    {
        if (arr[i] > arr[index])
        {
            swap(arr[i], arr[index]);
            break;
        }
    }

    // Reverse the whole right half of the array
    reverse(arr.begin() + index + 1, arr.end());
    return arr;
}

// TC is O(3n)
// SC is O(1)

int main()
{
    vector<int> arr = {1, 2, 3};
    int n = arr.size();

    vector<int> ans = permutation(arr, n);
    for (auto i : ans)
    {
        cout << i << " ";
    }
    return 0;
}