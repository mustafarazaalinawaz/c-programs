#include <stdio.h>
int main(){
	float celsius,fahrenheit;
	printf("enter fahrenheit  :\n");
	scanf("%f",&fahrenheit);
	celsius=(fahrenheit-32)*5.0/9.0;
	printf("celsius is %f",celsius);
	
	return 0;
}