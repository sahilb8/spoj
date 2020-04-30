#include<bits/stdc++.h>
#include<string>
using namespace std;
 
 
int palindrome(int arr[], int n)
{
    int flag = 0;
 
    int arr2[n];
    memcpy(arr2, arr, n * sizeof(int));
 
 
    reverse(arr, arr + n);
 
    for (int i = 0; i < n; i++)
        if (arr[i] != arr2[i]) {
            flag = 1;
            break;
        }
 
    if (flag == 0)
        return 1;
    else
        return 0;
}
 
int main()
{
    int t;
    string s;
    cin>>t;
    while(t--)
    {
    cin>>s;
    int n=s.length();
    int arr[n];
    int i;
    for(i=0;s[i]!='\0';i++)
        arr[i]=s[i];
 
    if(palindrome(arr, n))
        cout<<"YES\n";
    else
        cout<<"NO\n";
    }
 
 
    return 0;
}
