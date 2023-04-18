#include<stdio.h>

void main(){
	int i,j;
	clrscr();
	for (i = 5; i > 0; i--)
	{
		for(j=0; j<=i-1;j++){
			printf(" ");
		}
		for(j=0;j<5-i;j++){
			if(i==1 || j==0 || j==(4-i)){
			printf("* ");
            } else{
                printf("  ");
            }
        }
        printf("\n");
	}
	getch();
    
}