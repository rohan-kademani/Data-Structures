#include <iostream>
#define null 0


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

void PreOrder(Node* root)
{
if(root==null)
    return ;
cout<<root->data<<" ";
PreOrder(root->left);
PreOrder(root->right);
}

void InOrder(Node* root)
{
if(root==null)
    return ;
InOrder(root->left);
cout<<root->data<<" ";
InOrder(root->right);
}

void PostOrder(Node* root)
{
if(root==null)
    return ;
PostOrder(root->left);
PostOrder(root->right);
cout<<root->data<<" ";
}
int main()
{
    Node * root=null;
    root=GetNewnode('A');
    root->left=GetNewnode('B');
    root->right=GetNewnode('C');
    PreOrder(root);
    cout<<"\n";
    InOrder(root);
    cout<<"\n";
    PostOrder(root);
    cout<<"\n";

    return 0;
}
