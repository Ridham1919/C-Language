#include<stdio.h>
#include<conio.h>

void main(){
	   int num;
	   clrscr();
	   printf("enter a number:");
	   scanf("%d",&num);

	   if(num>0) {
		     printf("the number %d is positive.\n",num);
	   }
	   else if(num<0) {
		     printf("the number %d is negative.\n",num);
	   }
	   else {
		     printf("the number is zero.\n");
	   }

	   getch();
}