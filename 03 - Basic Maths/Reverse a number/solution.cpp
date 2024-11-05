#include <iostream>

using namespace std;

int main()
{
    int num = 123; // Or get input from the user
    int reverse = 0;
    int originalNum = num; // Store the original number for output

    while (num != 0)
    {
        int digit = num % 10;
        reverse = reverse * 10 + digit;
        num /= 10;
    }

    cout << "The reverse of " << originalNum << " is " << reverse << endl;

    return 0;
}