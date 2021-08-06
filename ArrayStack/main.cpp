#include <iostream>
#define MAX 200
using namespace std;

//Function prototype
void Push(int);
void Pop();
int Top();
bool Isempty();

//Global variable
int top=-1;
int S[MAX];

//Function declartion
void Push(int ele)
{

   if(top==MAX)
{
cout<<"\nStack Overflow\n";
   return;
}
    S[++top]=ele;

}
void Pop()
{
    if(!Isempty())
    top--;
    else
        cout<<"Stack is empty\n";
}

bool Isempty()
{

    if(top==-1)
    return true;
    else
        return false;


}
int Top()
{

    if(!Isempty())
    return S[top];
}

//Main function
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

/*
Stack is a ADT where insertion and deletion of element takes places at one end called Top.
Stack can be used for Recursion ,balancing operators and Undo operation in editor.
Time complexity O(1) for Push and Pop.
*/
