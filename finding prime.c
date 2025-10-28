#include<stdio.h>
int main()
{
	int i,n,isprime;
	printf("ENTER THE NUMBER: ");
	scanf("%d",&n);
	if(n<=1){
		isprime=0;
		break ;
	}else{
	for(i=2;i*i<=n;i++){
	if(n%i==0){
		isprime=0;
			break;
		}
		}
}
   	if(isprime){
   		printf("is prime");
	   }else{
	   	printf("not a prime: ");
	   }
	   return 0;
}
