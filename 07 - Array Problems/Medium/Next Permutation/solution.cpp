#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1,2,3};
 
    next_permutation(arr.begin(), arr.end()); //Using built-in C++ function

    cout << arr[0] << " " << arr[1] << " " << arr[2];
    return 0;
}