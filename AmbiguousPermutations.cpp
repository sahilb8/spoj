#include <iostream>
using namespace std;
 
int main()
{
    int n,a[100002],c,i;
    while(1)
    {
        c=0;
        cin>>n;
        if(n==0)
            break;
        else
        {
            for(i=1;i<=n;i++)
                cin>>a[i];
            for(i=1;i<=n;i++)
            {
                if(i==a[a[i]])
                    c++;
            }
            if(c==n)
                cout<<"ambiguous\n";
            else
                cout<<"not ambiguous\n";
        }
    }
return 0;
}
