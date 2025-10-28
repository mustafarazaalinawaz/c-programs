#include <stdio.h>
int main() {
int cus_id, bill, units, total, service_charge=5;
printf(" Enter cus_id:");
scanf("%d %d",&cus_id, &units);
if (units<=50){ 
bill=units*1.50;
}
else if (units<=10)
{
bill=units*2.50;
}
else if(units<=250)
{
bill=units*3.00;
}
total=service_charge+bill;
printf("%d",total) ;
return 0;
}