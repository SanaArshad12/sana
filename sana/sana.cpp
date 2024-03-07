// stackBasic.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#define n 100


class stack
{
    int* arr;
    int top;
public:

    stack()
    {
        arr = new int[n];
        top = NULL;
    }
    void push(int x)
    {
        //if top is on last index
        if (top == n - 1) {
            cout << "stack is over flow" << endl;
            return;
        }
        top++;
        arr[top] = x;
    }
    void pop()
    {
        if (top == NULL) {
            cout << "no element to pop" << endl;
            return;
        }
        top--;
    }
    int topElement()
    {
        if (top == NULL) {
            cout << "no element in stack" << endl;
            return -1;
        }

        else
            return arr[top];
    }

    bool empty()
    {
        if (top == NULL) {

            return 1;
        }
        else

            return 0;
    }
};




int main()
{
    stack stack;
    //cout << "Pushing elements onto stack" << endl;

    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);


    cout << "current top element after pushes: " << endl;
    cout << stack.topElement() << endl;
    cout << "popping top element: " << endl;
    stack.pop();

    cout << stack.topElement() << endl;
    cout << "popping top element: " << endl;
    stack.pop();
    cout << stack.topElement() << endl;
    cout << "popping top element: " << endl;
    stack.pop();
    cout << stack.topElement() << endl;

    stack.pop();
    cout << "stack is now empty." << endl;
    cout << stack.empty() << endl;

    // return;
}
