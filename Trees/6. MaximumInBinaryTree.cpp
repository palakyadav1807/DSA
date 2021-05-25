//WAP to find maximum in a Binary Tree
/*
Can be solved using recursive or iterative(using queue as used in level order traversal)
In this code we have used recursive Solution(T.C.=O(n),Aux. Space=O(h))
Iterative have T.C.=O(n) and Aux Space=O(width of the tree)
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

//Function which returns maximum in a Binary Tree
int maximum(Node* root)
{
    if(root==NULL)
    {
        return INT_MIN;
    }
    else
    {
        return max(root->data,max(maximum(root->left),maximum(root->right)));
    }
}

int main()
{
    //Forming the following tree
    /*
            10
          /    \
        20      30
       /       /  \
     40       5    60

    */
    Node* root=new Node(10);
    root->left=new Node(20);
    root->left->left=new Node(40);
    root->right=new Node(30);
    root->right->left=new Node(5);
    root->right->right=new Node(60);

    int res=maximum(root);
    cout<<"Maximum value is: "<<res;

    return 0;
}
