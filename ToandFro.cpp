#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,k,i,j;
    string s;
    char temp;
    while(1)
    {
        cin>>n;
        if(n==0)
            break;
        else
        {
            cin>>s;
            k=0;
            char mat[s.length()/n][n];
            for(i=0;i<s.length()/n;i++)
                for(j=0;j<n;j++)
                    mat[i][j]=s[k++];
 
            for(i=0;i<s.length()/n;i++)
            {
                if(i%2!=0)
                {
                    j=n-1;
                    k=0;
                    while(k<j)
                    {
                        temp=mat[i][k];
                        mat[i][k]=mat[i][j];
                        mat[i][j]=temp;
                        k++;
                        j--;
                    }
                }
            }
 
            for(i=0;i<n;i++)
              for(j=0;j<s.length()/n;j++)
                    cout<<mat[j][i];           
 
            cout<<"\n";
        }
    }
return 0;
}
