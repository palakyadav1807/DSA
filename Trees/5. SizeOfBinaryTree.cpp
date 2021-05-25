//WAP to find Size of the tree
/*
We can do this in two ways:
1. Using a recursive function(As done in this program)
          Time Complexity: O(n), n is number of nodes in the tree
          Aux. space: O(h),h is height of the tree
2. Using Queue DS
          Time Complexity: O(n), n is number of nodes in the tree
          Aux. space: O(w),w is width of the tree
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
//function the return size of BT
int sizeOfBT(Node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    return 1+sizeOfBT(root->left)+sizeOfBT(root->right);
}


int main()
{
    //Forming the following tree
    /*
            10
          /    \
        20      30
       /
     40

    */
    Node* root=new Node(10);
    root->left=new Node(20);
    root->left->left=new Node(40);
    root->right=new Node(30);

    int res=sizeOfBT(root);
    if(res==0)
    {
        cout<<"Tree is empty";
    }else{
        cout<<"Size of Tree is: "<<res;
    }

    return 0;
}

