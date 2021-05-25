//Binary Tree Declaration
/*
Form the following tree
         10
       /    \
      20     30
     /         \
    40          50
*/

#include<iostream>
using namespace std;

struct Node
{
    int key;
    Node* left;
    Node* right;
    Node(int k)
    {
        key=k;
        left=NULL;
        right=NULL;
    }
};
int main()
{
    Node* root=new Node(10);
    root->left=new Node(20);
    root->right=new Node(30);
    root->left->left=new Node(40);
    root->right->right=new Node(50);
    return 0;
}
