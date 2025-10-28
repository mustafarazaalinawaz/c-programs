#include<stdio.h>
int main() {
	int n, sum = 0;
printf("enter the positive integer: ");
scanf("%d", &n);
for (int i = 1; i <= n; i++){
	sum+=i;//sum=sum+1
}
printf("sum = %d\n", sum);
return 0;
}