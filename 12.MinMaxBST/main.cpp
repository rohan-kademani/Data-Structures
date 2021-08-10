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
int GetMax(Node*);
int GetMin(Node*);
Node* Insert(Node*,int);


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
        return root;
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



int GetMax(Node* root)
{
    if(root==null)
    {
        cout<<"Error\n";
        return -1;
    }
if(root->right==null)
    return root->data;
else
    return GetMax(root->right);
}

int GetMin(Node* root)
{
    if(root==null)
    {
        cout<<"Error\n";
        return -1;
    }
if(root->left==null)
    return root->data;
else
    return GetMax(root->left);

}

//Main function Begins
int main()
{
    int data;
    Node* root=null;
    cout<<"Tree contains ";
    for(int i=1;i<10;i++)
    {
    root=Insert(root,i);
    cout<<i<<" ";
    }
    cout<<"\n";
    cout<<"MAX "<<GetMax(root)<<"\n";

    cout<<"MIN "<<GetMin(root)<<"\n" ;
    return 0;
}
//Time complexity of Searching ,Inserting will be O(log(n))
