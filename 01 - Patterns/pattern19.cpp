#include <bits/stdc++.h>
using namespace std;

void print(int n)
{
    int spaces = 0;
    // for upper part of symmetry
    for (int i = 0; i < n; i++)
    {
        // star
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }

        // spaces
        for (int j = 0; j < spaces; j++)
        {
            cout << " ";
        }

        // star
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        spaces += 2;
        cout << endl;
    }

    // for lower part of symmetry
    spaces = 2 * n - 2;
    for (int i = 0; i < n; i++)
    {
        // star
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }

        // spaces
        for (int j = 0; j < spaces; j++)
        {
            cout << " ";
        }

        // star
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        spaces -= 2;
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    print(n);
    return 0;
}

// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********