/*
WAP to find Maximum width of a Binary Tree
Maximum Width of Binary tree is the maximum number of nodes present in a level of the Tree.
Hint:- we use level order traversal line by line logic to find maximum width of the Binary Tree.
*/
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

int maxWidth(Node* root)
{
    int res= INT_MIN;
    if(root==NULL)
        return 0;
    queue <Node*> q;
    q.push(root);
    while(q.empty()==false)
    {
        int count=q.size();
        for(int i=0;i<count;i++)
        {
            res=max(res,count);
            Node* curr=q.front();
            q.pop();
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
    return res;
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
    int res=maxWidth(root);
    cout<<res;
    return 0;
}
