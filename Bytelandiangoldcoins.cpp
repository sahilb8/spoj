#include<bits/stdc++.h>
using namespace std;
 
long long counter(long long arr[],long long n)
{
    if(n<12)
        return n;
    if(arr[n]!=0)
        return arr[n];
    else
    {
        arr[n]=max((counter(arr,n/2)+counter(arr,n/3)+counter(arr,n/4)),n);
        return arr[n];
    }
}
 
int main()
{
    long long n;
    long long *arr;
    while(cin>>n)
    {
        arr=new long long[n+1];
        cout<<counter(arr,n)<<"\n";
    }
return 0;
}
