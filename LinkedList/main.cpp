#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#define null 0
using namespace std;

struct Node
{
    int data;
    Node *link;

};
Node* head=null;
int isempty()
{

    if(head==null)
        return 1;
    else
        return 0;
}
Node* newNode()
{
    Node *temp=new Node();
    return temp;
}
void Insert(int ele)
{

    Node* temp;
       temp=newNode();
       temp->data=ele;
       temp->link=null;
       if(head==null)
       {

           head=temp;
       }
       else{
       Node* temp1=head;
        while(temp1->link!=null)
        {
            temp1=temp1->link;

        }
    temp1->link=temp;
       }
}
void Print()
{
    if(isempty()==1)
    {

        cout<<"List is empty\n";
        return;
    }
    cout<<"List contains \n";
    Node * temp;
    temp=head;
    while(temp!=null)
    {
        cout<<temp->data<<" ";
        temp=temp->link;

    }
cout<<"\n\n";
}

void Remove(int ele)
{
    if(isempty()==1)
    {

        cout<<"List is empty\n";
        return;
    }
    Node * temp=head;
    if(head->data==ele)
    {
        Node* temp1=head;
        head=head->link;
        delete temp1;
        Print();
        return;
    }
    temp=head;
    Node* prev;
    while(temp!=null)
    {
        if(temp->data==ele)
        {
        prev->link=temp->link;
        delete temp;
           Print();
           return;
        }
        prev=temp;
        temp=temp->link;

    }
    cout<<"Element not found\n";
}
void message()
{

    cout<<"Enter 1.Insert 2.delete 3.print\n";
}

int main()
{
    int n,ele;
    start:
    message();
    cin>>n;
  switch(n)
  {
   case 1:cout<<"Enter the element\n";
        cin>>ele;
        Insert(ele);
        break;
case 2:cout<<"Enter the element\n";
       cin>>ele;
       Remove(ele);
       break;
case 3:Print();
        break;
default:exit(0);

  }

  goto start;

}
