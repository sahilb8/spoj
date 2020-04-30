#include <iostream>
using namespace std;
 
int main() {
	// your code goes here
	int t,a;
	cin>>t;
	while(t--){
        int c=0;
        cin>>a;
        for(int i=5;a/i>=1;i*=5)
            c+=a/i;
 
        cout<<c<<endl;
 
	}
	return 0;
}
