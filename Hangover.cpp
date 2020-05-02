#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,sum;
    float i,c;
    while(1)
    {
 
        c=0;
        cin>>n;
        if(n==0.00)
            return 0;
        else
        {
            sum=0.0;
            i=2;
            while(sum<=n)
            {
                sum+=1/i;
                c++;
                i++;
            }
        cout<<c<<" card(s)\n";
        }
    }
    return 0;
}
