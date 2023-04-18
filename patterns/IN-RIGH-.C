#include<stdio.h>

void main(){
   int i,j;
   clrscr();
	for (i = 0; i < 5; i++)
	{
		for(j=0;j<5-i;j++){
			printf("*");
		}
		printf("\n");
	}
	getch();
}