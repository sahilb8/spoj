#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int x,y,t;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        if(x>=y)
        {
            if(x%2==0 && y%2==0 && x-y<=2)
                cout<<x+y<<"\n";
            else if(x%2!=0 && y%2!=0 && x-y<=2)
                cout<<x+y-1<<"\n";
            else
                cout<<"No Number\n";
        }
        else
            cout<<"No Number\n";
    }
 
return 0;
}
