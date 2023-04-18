#include<stdio.h>
main(){
	int i,j,k;
	clrscr();
	for (i = 0; i < 5; i++)
	{
	for(j=0; j<=i;j++){
		printf(" ");
	}
	for(k=0;k<5;k++){
	// if(i==0 || k==0 || i==4 || k==4){
		printf("* ");
		// } else{
		// printf("  ");
		// }
	}
	printf("\n");
	}
	getch();
}