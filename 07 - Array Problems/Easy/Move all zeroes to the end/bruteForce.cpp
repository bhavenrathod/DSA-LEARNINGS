#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int> arr, int n)
{
    vector<int> temp;
    // adding non-zero elements to the temp array
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            temp.push_back(arr[i]);
        }
    }

    int tsize = temp.size();
    // adding the elements from the temp array to the original array
    for (int i = 0; i < tsize; i++)
    {
        arr[i] = temp[i];
    }

    // filling the remaining places with zeroes
    for (int i = tsize; i < n; i++)
    {
        arr[i] = 0;
    }

    // print the array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

// TC - O(n) + O(x) + O(N-x) ~ O(2n)
// SC - O(n)

int main()
{
    vector<int> arr = {1, 5, 0, 0, 4, 6};
    int n = arr.size();
    moveZeroes(arr, n);
    return 0;
}