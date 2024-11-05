#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int> arr, int n)
{

    int temp = arr[0];
    for (int i = 0; i < n; i++) // Time Complexity is O(N)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp; // Space Complexity is also O(1)

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int n = arr.size();
    rotate(arr, n);
    return 0;
}