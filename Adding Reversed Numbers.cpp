#include <iostream>
using namespace std;
 
int main() {
	// your code goes here
	int t,a,b;
	cin>>t;
	while(t--){
        cin>>a>>b;
        int arev=0,brev=0,sumrev=0,sum=0;
        while(a!=0){
            arev=(arev*10)+(a%10);
            a=a/10;
        }
        while(b!=0){
            brev=(brev*10)+(b%10);
            b=b/10;
        }
        sum=arev+brev;
        while(sum!=0){
            sumrev=(sumrev*10)+(sum%10);
            sum=sum/10;
        }
        cout<<sumrev<<endl;
	}
	return 0;
}
 
