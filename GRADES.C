#include<stdio.h>

void main(){
	int marks;
	clrscr();
	printf("Enter the marks : ");
	scanf("%d",&marks);

	if(marks >100 || marks <0){
		printf("Enter the valid marks");
	}else if(marks<100 && marks>=85){
		printf("Your grade is : A");
	}else if(marks<85 && marks>=70){
		printf("Your grade is : B");
	}else if(marks<70 && marks>=50){
		printf("Your grade is : C");
	}else if(marks<50 && marks>=35){
		printf("Your grade is : D");
	}else if(marks<35){
		printf("You are Fail...");
	}
	getch();
}