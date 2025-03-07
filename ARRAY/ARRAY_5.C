#include<stdio.h>
#include<conio.h>
void main(){
	  int a[5]={10,20,30,25,50},i,z=0;
	  clrscr();
	  printf("enter the size of array: ");
	  scanf("&d",&a);

	  for(i = 0;i<5;i++){
		printf("enter value of a[%d]: ",i);
		scanf("%d",&a[i]);
		z += a[i];
	  }
	  printf("\n total of the array :- %d",z);
	  getch();
}