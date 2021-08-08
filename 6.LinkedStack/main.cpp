#include <iostream>
#define null 0
using namespace std;
void Push(int ele);
void Pop();
bool Isempty();
int Top();


struct Node
{
    int data;
    Node *link;

};
Node * head=null;

void Push(int ele)
{
    Node * temp= new Node;
    temp->data=ele;
    temp->link=null;

    if(Isempty())
    {
        head=temp;
     return;
    }
temp->link=head;
head=temp;

}
void Pop()
{

    if(Isempty())
        return;

    Node *temp=head;
    head=head->link;
    delete temp;

}

int Top()
{
    if(!Isempty())
        return head->data;
}



bool Isempty()
{

    if(head==null)
        return true;
    else
        return false;

}




int main()
{
    for(int i=1;i<=10;i++)
    {
        Push(i);
      cout<<Top()<<" ";

    }
    cout<<"\n";
    for(int i=1;i<=10;i++)
    {
        cout<<Top()<<" ";
        Pop();
    }
    return 0;
}
