#include <iostream>
#define null 0
using namespace std;
struct Node
{
    int data;
    Node* link;

};

Node* head=null;


void Insert(int ele)
{
Node * temp=new Node;
temp->data=ele;
temp->link=null;

if(head==null)
{
    head=temp;
}
  else{
   Node * temp1=head;
    while(temp1->link!=null)
    {
    temp1=temp1->link;
    }
temp1->link=temp;

  }

}

void Print()
{
    Node * temp=head;
    while(temp!=null)
    {
        cout<<temp->data<<" ";
        temp=temp->link;

    }

}

/*void ReversePrint(Node * temp)
{

    if(temp==null)
    return;
    ReversePrint(temp->link);
    cout<<temp->data<<" ";

}*/

void Reverse(Node * temp)
{

Node* prev;
Node *next;
Node *curr;
prev=null;
curr=head;
next=null;

while(curr!=null)
{
    next=curr->link;
    curr->link=prev;
    prev=curr;
    curr=next;


}
head=prev;


}
int main()
{
    int n=10;
    for(int i=1;i<n;i++)
        Insert(i);
    cout<<"List contains ";
    Print();
    cout<<endl;
    cout<<"List after Reversing ";
    Reverse(head);
    Print();
    return 0;
}
