#include <bits/stdc++.h>
using namespace std;

void printStack(stack<int> s)
{
    stack<int> st2 = s;
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
}

int main()
{
    // LIFO - last in first out
    stack<int> st1;
    st1.push(1);
    st1.push(2);
    st1.push(3);
    st1.emplace(4);
    st1.emplace(5);

    cout << "The elements of the stack are ";
    printStack(st1);
    cout << endl;

    cout << "The size of the stack is " << st1.size();
    cout << endl;
    cout << "The top element of the stack is " << st1.top();
    cout << endl;
    cout << "Pop the top element of the stack ";
    st1.pop();
    cout << endl;

    // ALL THE ABOVE OPERATIONS HAPPEN AT THE TIME COMPLEXITY IF O(1);
    printStack(st1);

    return 0;
}