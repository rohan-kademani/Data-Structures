#include <iostream>
#define null 0

using namespace std;

//Defining Node
struct Node
{
    int data;
    Node* left;
    Node* right;
};

//Function Prototype
Node* Insert(Node*,int);
bool Search(Node*);

//Function Declaration
Node * GetNewNode(int data)
{
    Node* temp=new Node;
    temp->data=data;
    temp->left=null;
    temp->right=null;
    return temp;

}
Node* Insert(Node* root,int data)
{

    if(root==null)
    {
        root=GetNewNode(data);
    }
    else
    {
    if(data<root->data)
    {
        root->left=Insert(root->left,data);

    }
    else
    {
    root->right=Insert(root->right,data);
    }
    }
return root;

}

int Max(int x,int y)
{

    if(x>=y)
    return x;
    else
    return y;

}

int Height(Node* root)
{
    if(root==null)
    {
        return -1;
    }

    return Max(Height(root->left),Height(root->right))+1;
}


//Main function Begins
int main()
{

    Node* root=null;
    root=Insert(root,9);
    root=Insert(root,5);
    root=Insert(root,15);
    root=Insert(root,16);
    root=Insert(root,6);
    root=Insert(root,2);
    root=Insert(root,1);


    cout<<"Height of Tree is "<<Height(root);
    return 0;
}
//Time complexity of Searching ,Inserting will be O(log(n))
