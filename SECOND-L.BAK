#include<stdio.h>

void main(){
	int a,b,c,d;
	clrscr();

	//input
	printf("Enter the value of a : ");
	scanf("%d",&a);
	printf("Enter the value of b : ");
	scanf("%d",&b);
	printf("Enter the value of c : ");
	scanf("%d",&c);
	printf("Enter the value of d : ");
	scanf("%d",&d);

	//logic
	if(a>b && a>c && a>d){
		if(b>c && b>d){
			printf("b is second largest");
		} else if(c>d){
			printf("c is second largest");
		} else{
			printf("d is second largest");
		}
	} else if(b>a && b>c && b>d){
		if(a>c && a>d){
			printf("a is second largest");
		} else if(c>d){
			printf("c is second largest");
		} else{
			printf("d is second largest");
		}
	} else if(c>a && c>b && c>d){
		if(b>a && b>d){
			printf("b is second largest");
		} else if(a>d){
			printf("a is second largest");
		} else{
			printf("d is second largest");
		}
	}  else{
		if(b>a && b>c){
			printf("b is second largest");
		} else if(c>a){
			printf("c is second largest");
		} else{
			printf("a is second largest");
		}
	}

	getch();
}