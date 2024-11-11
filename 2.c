#include<stdio.h>
int main(){
float  basicsalary,grosssalary ,hra,da;
 
printf("enter the basic salary: ");
scanf("%f",&basicsalary);
printf("enter the hra:");
scanf("%f",&hra);
printf("enter the da:");
scanf("%f",&da);

 
 printf("gross salary is %f",basicsalary+hra/100*basicsalary+da/100*basicsalary);
 

 
}
