/*
Tree Traversal methods:
  A.Depth First Traversal
     1.In-order Traversal(leftSubtree->root->rightSubtree)
     2.Post-order Traversal(leftSubtree->rightSubtree->root)
     3.Pre-order Traversal(root->leftSubtree->rightSubtree)
  B.Breadth First Traversal

In this program we will code for all three types of Depth First Traversal
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

//Function for in-order traversal
void inorder(Node* root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}

//Function for pre-order traversal
void preorder(Node* root)
{
    if(root!=NULL)
    {
        cout<<root->data<<" ";
        inorder(root->left);
        inorder(root->right);
    }
}

//Function for post-order traversal
void postorder(Node* root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        inorder(root->right);
        cout<<root->data<<" ";
    }
}
/*
        10
      /    \
    20      30
   /       /  \
 40       5    60

*/

int main()
{
    Node* root=new Node(10);
    root->left=new Node(20);
    root->left->left=new Node(40);
    root->right=new Node(30);
    root->right->left=new Node(5);
    root->right->right=new Node(60);

    //In-order
    cout<<"In-order"<<endl;
    inorder(root);
    cout<<endl;

    //Post-order
    cout<<"\nPost-order"<<endl;
    postorder(root);
    cout<<endl;

    //Pre-order
    cout<<"\nPre-order"<<endl;
    preorder(root);
    cout<<endl;

    return 0;
}
