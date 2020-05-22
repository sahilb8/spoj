#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int p,n,i,c,j;
    char toss[40];
    string s="TTTTTHTHTTHHHTTHTHHHTHHH";
    cin>>p;
    while(p--)
    {
 
        cin>>n;
        for(i=0;i<40;i++)
            cin>>toss[i];
        j=0;
        cout<<n<<" ";
        while(j!=21)
        {
            c=0;
            for(i=0;i<38;i++)
            {
                if(toss[i]==s[j] && toss[i+1]==s[j+1] && toss[i+2]==s[j+2])
                    c++;
 
            }
            j=j+3;
            cout<<c<<" ";
        }
        c=0;
        for(i=0;i<38;i++)
            if(toss[i]=='H' && toss[i+1]=='H' && toss[i+2]=='H')
                    c++;
        cout<<c;
        cout<<"\n";
 
    }
 
return 0;
}
