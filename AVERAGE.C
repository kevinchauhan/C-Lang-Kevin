#include<stdio.h>

void main(){
	int sub1,sub2,sub3,sub4,sub5;
	float avg;
	clrscr();
	printf("Enter marks of subject 1 : ");
	scanf("%d",&sub1);
	printf("Enter marks of subject 2 : ");
	scanf("%d",&sub2);
	printf("Enter marks of subject 3 : ");
	scanf("%d",&sub3);
	printf("Enter marks of subject 4 : ");
	scanf("%d",&sub4);
	printf("Enter marks of subject 5 : ");
	scanf("%d",&sub5);

	avg = (sub1+sub2+sub3+sub4+sub5)/5.0;
	printf("Average of marks of 5 sub is : %.2f\n",avg);
	getch();
}
