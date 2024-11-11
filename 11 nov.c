#include<stdio.h>
int main(){
	int age;
	printf("enter your age");
	scanf("%d",&age);
	if(age>90){
		printf("your grade *A*");
	}
	else if (age>=80){
		printf("your grade *B*");
		
	}
	else if (age>70){
		printf("your grade *C*");
		
	}
	else if (age>60){
		printf("your grade *D*");
		
	}
	else{
		printf("*Fail*");
	}
}

