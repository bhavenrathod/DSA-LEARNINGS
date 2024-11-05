#include <bits/stdc++.h>

using namespace std;

int count_digits(int n)
{
    string x = to_string(n);
    return x.length();
}

int main()
{
    int n = 12345;
    cout << "Number of digits in " << n << " is " << count_digits(n);
    return 0;
}