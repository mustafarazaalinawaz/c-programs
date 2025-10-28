#include <stdio.h>
#include <math.h>
int main(){
	float a,b,c,real,imaginary;
	float dis,root1,root2;
	printf("enter the co-efficient a,b,c");

	scanf("%f %f %f",&a,&b,&c);
	dis=b*b-4*a*c;
	if(dis>0){
		printf("roots are real and distinct");
		root1=(-b+sqrt(dis)/2*a);
		root2=(-b-sqrt(dis)/2*a);
	    printf("%f",root1);
			printf("%f",root2);}
			else if (dis==0){
				printf("roots are complex and equal");
				real=(-b)/(2*a);
				imaginary=sqrt(-dis)/(2*a);}
				else{
				printf("root1 = %f+%f:\n",real,imaginary);
				printf("root2 = %f-%f:\n",real,imaginary);
			}
			return 0;
}