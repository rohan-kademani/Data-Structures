#include <iostream>
#define null 0
#include<queue>

using namespace std;

struct Node
{
    char data;
    Node* left;
    Node* right;

};

Node* GetNewnode(char data)
{

    Node * temp=new Node;
    temp->data=data;
    temp->left=null;
    temp->right=null;
    return temp;

}

void LevelOrder(Node* root)
{
if(root==null)
    return ;
queue<Node*> Q;
Q.push(root);
Node* current;
while(!Q.empty())
{
    current=Q.front();
    if(current->left!=null)
        Q.push(current->left);
    if(current->right!=null)
        Q.push(current->right);
    cout<<current->data<<" ";
    Q.pop();
}

}

int main()
{
    Node * root=null;
    root=GetNewnode('A');
    root->left=GetNewnode('B');
    root->right=GetNewnode('C');
    LevelOrder(root);
    return 0;
}
