#include <iostream>
using namespace std;

struct Node
{
    int val;
    Node *left, *right;
    Node(int x)
    {
        val = x; left = right = NULL; 
        
    }
};

bool mirror(Node* a, Node* b) 
{
    if (a == NULL && b == NULL)
    {
    return true;
    }
    if (a == NULL || b == NULL)
    {
    return false;
    }
    return (a->val == b->val)&&mirror(a->left, b->right)&&mirror(a->right, b->left);
}

int main() {
 
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(2);
    root->left->left = new Node(3);
    root->left->right = new Node(4);
    root->right->left = new Node(4);
    root->right->right = new Node(3);

    if (mirror(root->left, root->right))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    return 0;
}
