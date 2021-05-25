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

In this program we will solve by method 2
*/
#include<iostream>
#include<queue>
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

void printLeftView(Node* root)
{
    if(root==NULL) return;
    queue<Node*> q;
    q.push(root);
    while(q.empty()==false)
    {
        int cap=q.size();
        for(int i=0;i<cap;i++)
        {
            Node* curr=q.front();
            q.pop();
            if(i==0)
            {
                cout<<curr->data<<" ";
            }
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

