#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;    // temporary array for sorting the elements
    int left = low;      // starting index of the left half of arr
    int right = mid + 1; // starting index of the right half of the arr

    // strong the elements in the temporary array in a sorted manner
    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // for the remaining elements of the left half
    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    // for the remaining elements of the right half
    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    // for the storing of the elements of temp array to the arr
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}

void mergeSort(vector<int> &arr, int low, int high)
{
    int mid = (low + high) / 2;
    if (low >= high) // base condition
        return;
    mergeSort(arr, low, mid);      // for left half
    mergeSort(arr, mid + 1, high); // for right half
    merge(arr, low, mid, high);    // to merge the arrays
}

int main()
{
    vector<int> arr = {9, 5, 3, 7, 2, 1, 6};
    int size = arr.size();
    cout << "Array before using merge sort - ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    mergeSort(arr, 0, size - 1);

    cout << "\nArray after using merge sort - ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}