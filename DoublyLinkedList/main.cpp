#include <iostream>
#define null 0
using namespace std;
void InsertAtHead(int);
void InsertAtTail(int);
void Print();
void ReversePrint();

struct Node
{
    int data;
    Node *prev;
    Node *next;

};

Node* head=null;

void InsertAtHead(int ele)
{
    Node *temp;
    temp=new Node;
    temp->data=ele;
    temp->prev=null;
    temp->next=null;
    if(head==null)
    {
        head=temp;
            return;
    }
    head->prev=temp;
    temp->next=head;
    head=temp;
}

void InsertAtTail(int ele)
{
    Node * temp= new Node;
    temp->data=ele;
    temp->next=null;
    temp->prev=null;

   if(head==null)
   {
       head=temp;
       return;


   }



Node * temp1=head;

while(temp1->next!=null)
{
    temp1=temp1->next;

}
temp1->next=temp;
temp->prev=temp1;

}

void Print()
{
    if(head==null)
        return;
    cout<<"List contains \n";

    Node* temp=head;
    while(temp!=null)
    {
        cout<<temp->data<<" ";
        temp=temp->next;

    }


    cout<<"\n";
    cout<<"\n";
}

void ReversePrint()
{
     if(head==null)
        return;
    cout<<"List In Reverse Order \n";

    Node* temp=head;
    while(temp->next!=null)
    {
        temp=temp->next;

    }
    cout<<temp->data<<" ";
    temp=temp->prev;
while(temp!=null)
{
     cout<<temp->data<<" ";
     temp=temp->prev;

}

    cout<<"\n";
    cout<<"\n";
}


int main()
{

for(int i=1;i<=10;i++)
{
    InsertAtHead(i);
}

Print();
ReversePrint();
}
