//Breadth-first traversal using Queue Data Structure
#include<iostream>
#include<queue>
using namespace std;

//Declaring Binary tree
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

//Function to Print Node Breadth-first manner
void printNodes(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    queue<Node*> q;
    q.push(root);
    while(q.empty()==false)
    {
        Node *curr=q.front();
        q.pop();
        cout<<(curr->data)<<" ";
        if(curr->left!=NULL)
        {
            q.push(curr->left);
        }
        if(curr->right!=NULL)
        {
            q.push(curr->right);
        }
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

    cout<<"Nodes of the tree are as follows: \n";
    printNodes(root);

    return 0;
}
