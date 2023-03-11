#include<stdio.h>

void main(){
	int num1,num2,num3,num4;
	clrscr();
	printf("Enter number 1 : ");
	scanf("%d",&num1);
	printf("Enter number 2 : ");
	scanf("%d",&num2);
	printf("Enter number 3 : ");
	scanf("%d",&num3);
	printf("Enter number 4 : ");
	scanf("%d",&num4);

	if(num1>num2 && num1>num3 && num1>num4){
		printf("Number 1 is largest");
	} else if(num2>num3 && num2>num4){
		printf("Number 2 is largest");
	} else if(num3>num2 && num3>num4){
		printf("Number 3 is largest");
	}  else {
		printf("Number 4 is largest");
	}
	getch();
}