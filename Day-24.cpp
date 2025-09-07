#include <iostream>
using namespace std;

struct Node
{
    int val;
    Node* left;
    Node* right;
    Node(int x) 
    {
        val = x;
        left = right = NULL;
    }
};


Node* lowestCommonAncestor(Node* root, Node* p, Node* q)
{
   
    if (root == NULL || root == p || root == q)
    {
        return root;
    }
    Node* left = lowestCommonAncestor(root->left, p, q);
    Node* right = lowestCommonAncestor(root->right, p, q);

    
    if (left != NULL && right != NULL)
    {
        return root;
    }
  
    if (left != NULL)
    {
    return left;
    }
    else
    {
    return right;
    }
}


int main() {
  
    Node* root = new Node(3);
    root->left = new Node(5);
    root->right = new Node(1);
    root->left->left = new Node(6);
    root->left->right = new Node(2);
    root->right->left = new Node(0);
    root->right->right = new Node(8);
    root->left->right->left = new Node(7);
    root->left->right->right = new Node(4);

    Node* p = root->left;              
    Node* q = root->left->right->right;

    Node* lca = lowestCommonAncestor(root, p, q);

    cout << "LCA of " << p->val << " and " << q->val << " is: " << lca->val << endl;

    return 0;
}
