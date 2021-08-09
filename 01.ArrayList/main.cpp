#include <iostream>
#define MAX 2000

using namespace std;

int List[MAX];
int last=-1;
void Insert(int);
void Insert(int,int);
void Print();


void Insert(int ele)
{
 List[++last]=ele;

}
void Insert(int ele,int pos)
{
 List[pos]=ele;
 last++;

}
void Remove()
{
    if(last==0)
        return;
    last--;
    Print();

}
void Remove(int pos)
{
    if(last==0 || pos<0 || pos>last)
    {

        cout<<"Invalid input"<<"\a"<<endl;
        return;
    }
    for(int i=pos;i<last;i++)
    {
        List[i]=List[i+1];
    }
    last--;
    Print();

}
void Print()
{
    for(int i=0;i<=last;i++)
    cout<<List[i]<<" ";
    cout<<endl;
}

int main()
{
    Insert(1);
    Insert(2);
    Insert(3);
    Print();
    Insert(4);
    Insert(5);
    Insert(6);
    Remove();
    Remove();
    Remove(-5);
    return 0;
}
