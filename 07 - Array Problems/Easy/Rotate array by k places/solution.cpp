#include <bits/stdc++.h>
using namespace std;

void Rotatetoleft(int arr[], int n, int k)
{
    if (n == 0)
        return;
    k = k % n;
    if (k > n)
        return;
    int temp[k];

    // adding elements to the temp array
    for (int i = 0; i < k; i++)
    {
        temp[i] = arr[i]; // TC for this is O(k) since the loop is iterating for k times
    }

    // shifting elements in the original array
    for (int i = 0; i < n - k; i++)
    {
        arr[i] = arr[i + k]; // TC for this is O(n - k)
    }

    // adding elements back to the original array
    for (int i = n - k; i < n; i++)
    {
        arr[i] = temp[i - n + k]; // TC for this is O(k)
    }
}

// Total TC is O(n + k)
// Extra SC is O(k) since we use extra array of k size

int main()
{
    int n = 7;
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    Rotatetoleft(arr, n, k);
    cout << "After Rotating the elements to left " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}