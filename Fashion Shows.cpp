#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
	// your code here
	int t;
	cin>>t;
	while(t--){
        int val,n,sum=0;
        cin>>n;
        vector<int> a,b;
        for(int i=0;i<n;i++){
            cin>>val;
            a.push_back(val);
        }
        for(int i=0;i<n;i++){
            cin>>val;
            b.push_back(val);
        }
        sort(a.begin(),a.end(),greater<int>());
        sort(b.begin(),b.end(),greater<int>());
 
        for(int i=0;i<n;i++){
            sum+=a[i]*b[i];
        }
 
        cout<<sum<<endl;
	}
 
	return 0;
}
