//WAP to print value of nodes at a distance of k(start with 0)
/*
        10          ----k=0
      /    \
    20      30      ----k=1
   /       /  \
 40       5    60   ----k=2

*/
#include<iostream>
using namespace std;
//Declaration
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

//Function to print nodes at distance k
void printNodesAtk(Node* root,int k)
{
    if(root==NULL) return;
    if(k==0)
    {
        cout<<(root->data)<<" ";
    }else{
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

    int k=1;
    cout<<"Nodes at distance "<<k<<" are: ";printNodesAtk(root,k);

    return 0;
}
