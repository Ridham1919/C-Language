#include<stdio.h>
#include<conio.h>
void main(){
	  int arr[5]={10,36,40,50},i,n;
	  clrscr();

	  printf("enter a number to search: ");
	  scanf("%d",&n);

	  for(i=0;i<5;i++){
	    if(arr[i]==n){
	      printf("\nyes.");
	    }
	    else{
		printf("\nno.");
		getch();
	    }
	  }

	 getch();



}