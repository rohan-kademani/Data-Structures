#include <iostream>
#include<stack>
#include<string>
using namespace std;
bool Balanced(char* exp);

stack<char> S;

bool Balanced(char exp[])
{
    int i=0;
    while(exp[i]!='\0')
    {
     if(exp[i]=='(' || exp[i]=='{' || exp[i]=='[')
        {
            S.push(exp[i]);
        }
        else
        {
            if(exp[i]==')' || exp[i]=='}' || exp[i]==']')
            {
            if(exp[i]==')' && S.top()=='(')
                S.pop();
            else
            if(exp[i]=='}' && S.top()=='{')
                S.pop();
            else
            if(exp[i]==']' && S.top()=='[')
                S.pop();
             else
                return false;
            }

        }
        i++;
    }
    if(S.empty())
        return true;
    return false;


}
int main()
{
char expression[100];

cin.getline(expression,80);
if(Balanced(expression))
    cout<<"Expression "<<expression<<" is balanced";
else
cout<<"Expression "<<expression<<" is not balanced";
return 0;
}
