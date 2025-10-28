#include <stdio.h>
int main(){
	int a;
	float b;
	char ch;
	char str[101];
	printf("enter an integer:\n");
	scanf("%d", &a);
	printf("enter a float:\n");
	scanf("%f", &b);
	printf("enter a character:\n");
	scanf(" %c", &ch);
	printf("enter a string:\n");
	scanf("%s", str);
	printf("integer: %d", a);
	printf("float:%f\n", b);
	printf("character:%c\n", ch);
	printf("string:%s\n", str);
	return 0;
} 