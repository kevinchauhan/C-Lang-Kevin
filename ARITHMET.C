#include<stdio.h>

void main(){
	int a,b,sum,sub,mul;
	float div;
	clrscr();
	printf("Enter the value of a : ");
	scanf("%d",&a);
	printf("Enter the value of b : ");
	scanf("%d",&b);
	sum = a+b;
	sub = a-b;
	mul = a*b;
	div = (float)a/b;
	printf("Sum of a & b is : %d\n",sum);
	printf("Sub of a & b is : %d\n",sub);
	printf("Mul of a & b is : %d\n",mul);
	printf("Div of a & b is : %.2f\n",div);
	getch();

}