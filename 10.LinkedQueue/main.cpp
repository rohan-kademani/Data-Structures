#include <iostream>
#define null 0
using namespace std;
struct Node
{
    int data;
    Node* link;

};
Node* Front=null;
Node* Rear=null;

//Function Prototype
void Enqueue(int);
int Dequeue();
bool Isempty();
int Peek();

//Function Declaration
void Enqueue(int ele)
{
    Node* temp=new Node;
    temp->data=ele;
    temp->link=null;
if(Isempty())
{
Front=temp;
Rear=temp;
}
else{
    Rear->link=temp;
    Rear=temp;
}
}

int Dequeue()
{
    if(Isempty())
    {
        return -1;

    }
    int ele=Peek();
    Node * temp=Front;
    Front=Front->link;
    delete temp;
    return ele;
}

bool Isempty()
{
    if(Front==null)
        return true;
    else
        return false;
}

int Peek()
{

    return Front->data;
}
int main()
{
    for(int i=1;i<=10;i++)
    {
        Enqueue(i);
        cout<<i<<" ";

    }
    cout<<"\n";
     for(int j=1;j<=10;j++)
    {
        cout<<Peek()<<" ";
        Dequeue();

    }
    return 0;
}
