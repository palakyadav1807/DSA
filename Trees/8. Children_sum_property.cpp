//WAP to check if the tree follows Children-sum property
/*
Children Sum Property is a property in which the sum of values of the left child and right child should be
equal to the value of their node if both children are present. Else if only one child is present then the
value of the child should be equal to its node value.
O(n) O(h)
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
bool isCSum(Node* root)
{
    if(root==NULL)
    {
        return true;
    }
    if(root->left==NULL && root->right==NULL)
    {
        return true;
    }
    int sum=0;
    if(root->left!=NULL)
    {
        sum+=(root->left->data);
    }
    if(root->right!=NULL)
    {
        sum+=(root->right->data);
    }
    return (sum==(root->data))&& isCSum(root->left) && isCSum(root->right);
}
int main()
{
    //Forming the following tree
    /*
            50
          /    \
        20      30
       /       /  \
     20       5    25

    */
    Node* root=new Node(50);
    root->left=new Node(20);
    root->left->left=new Node(20);
    root->right=new Node(30);
    root->right->left=new Node(5);
    root->right->right=new Node(25);
    bool res=isCSum(root);
    cout<<res;
    return 0;
}
