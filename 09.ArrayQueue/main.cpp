#include <iostream>
#define MAX 101
using namespace std;
//Global variable
int Front=-1;
int Rear=-1;
int Q[MAX];
//Function Prototype
void Enqueue(int);
int Dequeue();
int FrontOrPeek();
bool IsEmpty();
bool IsFull();

//Function Declaration
void Enqueue(int ele)
{
    if(IsFull())
    {
        cout<<"OVERFLOW\n";
       return;
    }

 if(IsEmpty())
 {
     Front++;
     Rear++;
     Q[Rear]=ele;
 }
 else
    Q[++Rear]=ele;

}

int Dequeue()
{
 int temp;
 if(IsEmpty())
    return -1;
else if(Front==Rear)
{
    temp=Q[Front];
    Front=-1;
    Rear=-1;

}
else
{
    temp=Q[Front];
    Front++;
}


  return temp;
}
bool IsEmpty()
{

    if(Front==-1 && Rear==-1)
        return true;
    return false;
}
bool IsFull()
{

    if(Rear==MAX)
        return true;
    return false;
}
int FrontOrPeek()
{
   return Q[Front];

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
        cout<<FrontOrPeek()<<" ";
        Dequeue();

    }

    return 0;
}
