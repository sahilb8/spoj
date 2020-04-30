#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,sum,i;
    while(1)
    {
        cin>>n;
        if(n)
        {
        sum=0;
        for(i=1;i<=n;i++)
        sum+=pow((n-i+1),2);
        cout<<sum<<"\n";
        }
        else
            break;
    }
 
}
