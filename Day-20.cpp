#include <iostream>
using namespace std;

#define MAX 100

int st[MAX];  
int top = -1; 


void push(int x)
{
    if (top < MAX - 1) {
        top++;
        st[top] = x;
    }
}


int pop()
{
    if (top >= 0) {
        int val = st[top];
        top--;
        return val;
    }
    return -1; 
}


int peek()
{
    if (top >= 0) 
    {
    return st[top];
    }
    return -1;
}


bool isEmpty()
{
    return top == -1;
}


void insertSorted(int x) 
{
    if (isEmpty() || x >= peek())
    {
        push(x);
        return;
    }

    int temp = pop();
    insertSorted(x);
    push(temp);
}


void sortStack() 
{
    if (!isEmpty())
    {
        int temp = pop();
        sortStack();
        insertSorted(temp);
    }
}

void printStack() 
{
    for (int i = top; i >= 0; i--) 
    {
        cout << st[i] << " ";
    }
 
}

int main() {
   
    push(3);
    push(1);
    push(4);
    push(2);

    cout << "Original stack: ";
    printStack();

    sortStack();

    cout << "Sorted stack : ";
    printStack();

    return 0;
}
