#include <stdio.h>
int main()
{
	int n,k,sum=0,x;
	printf("enter the number:");
	scanf("%d",&n);
	x=n;
	while(n=0){
		k=n%10;
		sum=sum+(k*k*k);
		n=n/10;
		
	}
	if(x==sum){
		printf("it is armstrongnumber:");
	}
	else{
	    printf("it is not a armstrong number:");	
    }
	return 0;
}                       