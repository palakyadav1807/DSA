//WAP to check if a tree is balanced or not
/*
In a Balanced Binary Tree for every node, the difference between heights of
left subtree and right subtree should not be more than one.
Can be done with O(n square) and O(n)
Here I have written O(n) solution
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
int isBalanced(Node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    int lh=isBalanced(root->left);
    if(lh==-1) return -1;
    int rh=isBalanced(root->right);
    if(rh==-1) return -1;
    int h=abs(lh-rh);
    if(h>1) return -1;
    else return max(lh,rh)+1;

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
    /
   2
  /
 3

    */
    Node* root=new Node(50);
    root->left=new Node(20);
    root->left->left=new Node(20);
    root->right=new Node(30);
    root->right->left=new Node(5);
    root->right->right=new Node(25);
    root->left->left->left=new Node(2);
    root->left->left->left->left=new Node(3);
    int res=isBalanced(root);
    if(res==-1)
    {
        cout<<"Not Balanced";
    }else
    {
        cout<<"Balanced";
    }
    return 0;
}
