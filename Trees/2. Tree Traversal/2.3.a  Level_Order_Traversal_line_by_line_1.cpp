//Level Order Traversal Line by Line i.e. printing every level in new line using queue DS
//Method 1- Using single loop
//Method 2- Using nested loop
//Both methods have same time and space complexities(O(n) and O(w) respectively)
//This code is of Method 1

#include<iostream>
#include<queue>
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
void levelOrderLineByLine(Node* root)
{
    if(root==NULL)
        return;
    queue <Node*> q;
    q.push(root);
    q.push(NULL);
    while(q.size()>1)
    {
        Node* curr=q.front();
        q.pop();
        if(curr==NULL)
        {
            cout<<"\n";
            q.push(NULL);
            continue;
        }
        cout<<(curr->data)<<" ";
        if(curr->left!=NULL){
            q.push(curr->left);
        }
        if(curr->right!=NULL){
            q.push(curr->right);
        }
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
    levelOrderLineByLine(root);
    return 0;
}


