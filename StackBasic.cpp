#include <iostream>
#define MAX 5
using namespace std;

class Stack
{
    int A[MAX];
    int top;

public:
    Stack()
    {
        top = -1;
    }

    bool isFull()
    {
        if (top == MAX - 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void push(int value)
    {
        if (isFull())
        {
            cout << "Stack is Overflow" << endl;
        }
        else
        {
            top++;
            A[top] = value;
            cout << value << " is added to stack" << endl;
        }
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is Underflow" << endl;
        }
        else
        {
            cout << A[top] << " is deleted" << endl;
            top--;
        }
    }

    void peek()
    {
        if (isEmpty())
        {
            cout << "Stack is Empty" << endl;
        }
        else
        {
            cout << A[top] << " is topmost element" << endl;
        }
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Stack is Empty" << endl;
        }
        else
        {
            for (int i = top; i >= 0; i--)
            {
                cout << A[i] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Stack s1;

    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.pop();
    s1.peek();
    s1.display();

    return 0;
}
