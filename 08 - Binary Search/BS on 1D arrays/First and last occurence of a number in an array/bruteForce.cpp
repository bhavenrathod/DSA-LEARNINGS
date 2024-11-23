#include <bits/stdc++.h>

using namespace std;

vector<int> findOccurence(vector<int> v, int n, int key)
{
    vector<int> arr(2, -1);
    int first = -1, last = -1;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == key)
        {
            if (first == -1)
            {
                first = i;
            }
            last = i;
        }
    }
    arr[0] = first;
    arr[1] = last;
    return arr;
}

// TC is O(n)
// SC is O(1)

int main()
{
    vector<int> v = {3, 4, 13, 13, 13, 20, 40};
    int n = v.size();
    int key = 13;
    vector<int> arr = findOccurence(v, n, key);

    cout << "First occurence of " << key << " is at index " << arr[0] << endl;
    cout << "Last occurence of " << key << " is at index " << arr[1] << endl;
    return 0;
}