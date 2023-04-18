#include<stdio.h>

void main(){
	int i,j;
	clrscr();
	for (i = 4; i > 0; i--)
	{
		for(j=0; j<=i;j++){
			printf(" ");
		}
		for(j=0;j<4-i;j++){
			printf("* ");
		}
		printf("\n");
	}
	for (i = 0; i < 4; i++)
	{
		for(j=0; j<=i;j++){
			printf(" ");
		}
		for(j=0;j<4-i;j++){
			printf("* ");
		}
		printf("\n");
	}
	getch();
}