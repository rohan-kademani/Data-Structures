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

bool Search(Node * root,int data){

if(root==null)
    return false;
else
{
if(root->data==data)
    return true;
else
{
if(data<root->data)
    return Search(root->left,data);
else
    return Search(root->right,data);
}

}

}


//Main function Begins
int main()
{
    int data;
    Node* root=null;
    for(int i=1;i<10;i++)
    root=Insert(root,i);
    cout<<"Enter number to search  ";
    cin>>data;
    if(Search(root,data))
        cout<<"Element "<<data<<" found\n";
    else
        cout<<"Element "<<data<<" not found\n";

    return 0;
}
//Time complexity of Searching ,Inserting will be O(log(n))
