#include <iostream>
#include<stack>
#include<string.h>
#include<stdlib.h>

using namespace std;
stack<int> S;

int PostfixEvaluation(char *);
int PrefixEvaluation(char *);
int evaluate(char Operator,int Operand1,int Operand2)
{

    if(Operator=='*')
        return Operand1*Operand2;
    if(Operator=='/')
        return Operand1/Operand2;
    if(Operator=='+')
        return Operand1+Operand2;
    if(Operator=='-')
        return Operand1-Operand2;


}
int Num(char x)
{
    int a;
    a=(int)x;
    return a-48;


}
int PostfixEvaluation(char exp[])
{
   int i=0;
   int a,b,ele;
   while(exp[i]!='\0')
   {
       if(exp[i]>='0' && exp[i]<='9')
       {
           ele=Num(exp[i]);
           S.push(ele);

       }
       else
       {
           b=S.top();
           S.pop();
           a=S.top();
           S.pop();
        ele=evaluate(exp[i],a,b);
        S.push(ele);
       }
       i++;


   }
   return S.top();
}

int PrefixEvaluation(char exp[])
{
   int i=0;
   int a,b,ele;
   int len=strlen(exp);
   i=len-1;
   while(i!=-1)
   {
       if(exp[i]>='0' && exp[i]<='9')
       {
           ele=Num(exp[i]);
           S.push(ele);

       }
       else
       {
           a=S.top();
           S.pop();
           b=S.top();
           S.pop();
        ele=evaluate(exp[i],a,b);
        S.push(ele);
       }
       i--;


   }
   return S.top();
}



int main()
{
    int n,ans;
    char exp[100];
    cout<<"Enter the expression ";
    cin.getline(exp,100);
    cout<<"Enter 1 for Prefix and 2 for Postfix :";
    cin>>n;
    if(n==2)
        ans=PostfixEvaluation(exp);
    else if(n==1)
        ans=PrefixEvaluation(exp);
    else
        cout<<"Invalid entry";

    cout<<ans;
    return 0;
}
