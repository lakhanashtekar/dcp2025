#include <iostream>
using namespace std;

#define MAX 100

int stackArr[MAX];
int top = -1;


void push(int x)
{
    if (top == MAX - 1)
    {
        cout << "Stack Overflow\n";
        return;
    }
    stackArr[++top] = x;
}


int pop()
{
    if (top == -1)
    {
        cout << "Stack Underflow\n";
        return -1;
    }
    return stackArr[top--];
}


bool isEmpty()
{
    return (top == -1);
}


void insertAtBottom(int x)
{
    if (isEmpty())
    {
        push(x);
        return;
    }
    int temp = pop();
    insertAtBottom(x);
    push(temp);
}

void reverseStack()
{
    if (isEmpty()) 
    {
    return;
    }
    int temp = pop();
    reverseStack();
    insertAtBottom(temp);
}


void printStack()
{
    for (int i = top; i >= 0; i--) 
    {
        cout << stackArr[i] << " ";
    }
    cout << endl;
}

int main() {
   
    push(1);
    push(2);
    push(3);
    push(4);

    cout << "Original Stack: ";
    printStack();

    reverseStack();

    cout << "Reversed Stack: ";
    printStack();

    return 0;
}
