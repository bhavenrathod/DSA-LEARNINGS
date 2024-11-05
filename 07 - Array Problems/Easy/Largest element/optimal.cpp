#include <bits/stdc++.h>
using namespace std;

int findLargest(vector<int> &arr, int size)
{
    int largest = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > largest)
            largest = arr[i];
    }
    return largest;
}

int main()
{
    vector<int> arr = {6, 2, 4, 3, 99, 25};
    int size = arr.size();
    int largestElement = findLargest(arr, size);
    cout << largestElement;
    return 0;
}