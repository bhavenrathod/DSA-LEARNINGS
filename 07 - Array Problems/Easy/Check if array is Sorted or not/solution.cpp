#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> array, int size)
{
    for (int i = 1; i < size; i++)
    {
        if (array[i] < array[i - 1])
            return false;
    }
    return true;
}

int main()
{
    vector<int> array = {1, 30, 3, 5, 9};
    int answer = check(array, array.size());
    cout << answer;
    return 0;
}