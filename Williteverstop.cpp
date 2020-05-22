#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long n;
    cin>>n;
    while(n>1)
    {
        if(n%2!=0)
        {
            cout<<"NIE";
            goto election;
        }
        n=n/2;
    }
cout<<"TAK";
election:
    NULL;
 
return 0;
}
