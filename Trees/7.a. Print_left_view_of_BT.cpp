//WAP to print left view of a Binary Tree
//For Example :-
/*
        10
      /    \
    20      30
           /  \
          5    60

Left View : 10 20 5
There can be two methods for this-
1. Recursive(using pre-order traversal based on the fact that in pre order
             traversal the leftmost node is visited before any other node)
2. Iterative (level order traversal using queue)

In this program we will solve recursively
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

int maxLevel=0;

void leftView(Node* root,int level)
{
    if(root==NULL) return;
    if(level>maxLevel)
    {
        maxLevel=level;
        cout<<(root->data)<<" ";
    }
    leftView(root->left,level+1);
    leftView(root->right,level+1);
}
void printLeftView(Node* root)
{
    leftView(root,1);
}

int main()
{
    Node* root=new Node(10);
    root->left=new Node(20);
    root->right=new Node(30);
    root->right->left=new Node(5);
    root->right->right=new Node(60);

    printLeftView(root);

    return 0;
}
