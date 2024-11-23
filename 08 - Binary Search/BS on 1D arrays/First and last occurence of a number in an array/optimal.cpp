#include <bits/stdc++.h>
using namespace std;

int findFirst(vector<int> &arr, int n, int key)
{
    int low = 0, high = n - 1;
    int result = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key)
        {
            result = mid;
            high = mid - 1; // Look in left half for first occurrence
        }
        else if (arr[mid] > key)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return result;
}

int findLast(vector<int> &arr, int n, int key)
{
    int low = 0, high = n - 1;
    int result = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key)
        {
            result = mid;
            low = mid + 1; // Look in right half for last occurrence
        }
        else if (arr[mid] > key)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return result;
}

vector<int> findOccurrence(vector<int> &arr, int n, int key)
{
    vector<int> result(2);
    result[0] = findFirst(arr, n, key);
    result[1] = findLast(arr, n, key);
    return result;
}

int main()
{
    vector<int> arr = {3, 4, 13, 13, 13, 20, 40};
    int n = arr.size();
    int key = 13;

    vector<int> result = findOccurrence(arr, n, key);

    cout << "First occurrence of " << key << " is at index " << result[0] << endl;
    cout << "Last occurrence of " << key << " is at index " << result[1] << endl;

    return 0;
}