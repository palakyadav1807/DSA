/*
WAP to find height of the Binary tree
        10
      /    \
    20      30
   /       /  \
 40       5    60

*/
#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
    Node(int d)
    {
        data=d;
        left=NULL;
        right=NULL;
    }
};

//Recursive function to find height of the tree
int height(Node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    return 1+max(height(root->left),height(root->right));
}

int main()
{
    Node* root=new Node(10);
    root->left=new Node(20);
    root->left->left=new Node(40);
    root->right=new Node(30);
    root->right->left=new Node(5);
    root->right->right=new Node(60);

    //Calling height function
    int res=height(root);
    cout<<"Height of the tree is "<<res;

    return 0;
}
