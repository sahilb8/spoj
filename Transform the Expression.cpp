#include<bits/stdc++.h>
#include<string>
using namespace std;
 
int isOperand(char x)
{
    if(x=='+' || x=='-' || x=='*' || x=='/'|| x=='^'|| x==')'|| x=='(')
        return 0;
    else
        return 1;
}
int outStackPre(char c)
{
    if(c=='+' ||c=='-')
        return 1;
    else if(c=='*' ||c=='/')
        return 3;
    else if(c=='^')
        return 6;
    else if(c=='(')
        return 7;
    else if(c==')')
        return 0;
}
 
int InStackPre(char c)
{
    if(c=='+' ||c=='-')
        return 2;
    else if(c=='*' ||c=='/')
        return 4;
    else if(c=='^')
        return 5;
    else if(c=='(')
        return 0;
    else if(c==')')
        return 999;
}
 
int main()
{
    int t;
    stack<char> z;
    string s;
    char a;
    int i;
    cin>>t;
    while(t--)
    {
    cin>>s;
 
    for(i=0;s[i]!='\0';i++)
    {
        a=s[i];
        if(isOperand(a))
            cout<<a;
        else if(a==')')
        {
            while(z.top()!='(')
            {
                cout<<z.top();
                z.pop();
            }
            z.pop();
        }
        else
        {
            if(z.empty() || outStackPre(a)>InStackPre(z.top()))
                z.push(a);
            else
            {
                cout<<z.top();
                z.pop();
            }
 
        }
 
    }
    while(!z.empty())
    {
        cout<<z.top();
        z.pop();
    }
    cout<<"\n";
    }
    return 0;
}
