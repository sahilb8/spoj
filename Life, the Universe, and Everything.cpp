#include <stdio.h>
 
int main(void) {
	// your code here
    int a[100],i,n;
    
    for(i=0;i<100;i++)
    	scanf("%d",&a[i]);
     
     i=0;
     while(a[i]!=42)
     {
     	printf("%d ",a[i]);
     	i++;
     }
	return 0;
} 
