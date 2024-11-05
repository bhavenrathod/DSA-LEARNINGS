#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &arr, int end)
{
    if (end == 0)
        return;
    for (int i = 0; i < end; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
    bubbleSort(arr, end - 1);
}

int main()
{
    vector<int> arr = {2, 8, 6, 3, 7};
    cout << "Array before recursive bubble sort - ";
    int end = arr.size() - 1;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    bubbleSort(arr, end);
    cout << "\nArray after recursive bubble sort - ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}