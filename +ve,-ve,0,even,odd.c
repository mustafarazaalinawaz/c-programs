#include <stdio.h>
int main() {
	int num;
	printf("Enter the integer: ");
	scanf("%d", &num);
	if (num>0){
		printf("the number is positive\n");
		if(num%2==0){
			printf("It is even\n");
		} else{
			printf("It is odd\n");
		}
		{
			if(num==0){
				printf("The number is zero\n");
			} else{
				printf("the number is negative\n");
			}
			
		}
	}
	return 0;
}