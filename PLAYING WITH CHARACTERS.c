#include<stdio.h>
int main(){
 char ch;
 char sr[1000];
 char sen[10000];
 printf("enter the ch: ");
scanf("%c",&ch);
printf("enter the sr: \n");
scanf("%s",sr);
getchar();
printf ("enter the sen:\n");
scanf("%[^\n]%*c",sen);
printf("%c\n%s\n%s\n%s",ch,sr,sen);
return 0;
}

 