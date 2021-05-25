/*
Breadth First Traversal using height of tree and function to print nodes at distance k
Time complexity :- O(n*h)

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

//Function to find height of the tree
int height(Node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    return 1+max(height(root->left),height(root->right));
}

//Function to print nodes at distance k
void printNodesAtk(Node* root,int k)
{
    if(root==NULL) return;
    if(k==1)
    {
        cout<<(root->data)<<" ";
    }
    else
    {
        printNodesAtk(root->left,k-1);
        printNodesAtk(root->right,k-1);
    }
}

int main()
{
    Node* root=new Node(10);
    root->left=new Node(20);
    root->left->left=new Node(40);
    root->right=new Node(30);
    root->right->left=new Node(5);
    root->right->right=new Node(60);

    int h=height(root);
    for(int i=1;i<=h;i++)
    {
        printNodesAtk(root,i);
    }

    return 0;
}

