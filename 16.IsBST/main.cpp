#include <iostream>
#define null 0
#define MAX 35000
#define MIN -35000
using namespace std;

struct Node{
int data;
Node* left;
Node* right;

};
bool IsBST(Node* root,int minvalue,int maxvalue)
{
    if(root==null)
        return true;
    if((root->data > minvalue) && (root->data <maxvalue) && IsBST(root->left,minvalue,root->data) && IsBST(root->right,root->data,maxvalue))
        return true;
    else
        return false;

}
bool IsBinarySearchTree(Node* root)
{

    return IsBST(root,MIN,MAX);

}

Node* GetNewNode(int data)
{

    Node* temp=new Node;
    temp->data=data;
    temp->left=null;
    temp->right=null;
    return temp;
}



int main()
{

    Node * root=GetNewNode(3);
    root->left=GetNewNode(4);
    root->right=GetNewNode(5);
if(IsBinarySearchTree(root))
    cout<<"YES its a BST";
else
    cout<<"NO its not a BST";
    return 0;
}
