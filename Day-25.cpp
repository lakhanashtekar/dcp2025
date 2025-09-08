#include <iostream>
using namespace std;

struct Node {
    int val;
    Node* left;
    Node* right;
    Node(int x)
    {
        val = x;
        left = right = NULL;
    }
};

bool isBSTUtil(Node* root, long minVal, long maxVal)
{
    if (root == NULL) 
    {
    return true;
    }
   
    if (root->val <= minVal || root->val >= maxVal)
    {
        return false;
    }
    
    return isBSTUtil(root->left, minVal, root->val) &&
           isBSTUtil(root->right, root->val, maxVal);
}


bool isBST(Node* root)
{
    return isBSTUtil(root, LONG_MIN, LONG_MAX);
}

int main() {
 
    Node* root = new Node(2);
    root->left = new Node(1);
    root->right = new Node(3);

    if (isBST(root))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}
