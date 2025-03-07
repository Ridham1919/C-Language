#include<conio.h>
#include<stdio.h>
void main(){
	   int i,j,a,b;
	   clrscr();
	   for(i=1;i<=7;i++){
	     for(j=1;j<=13;j++){
		if(5-i<=j&&3+i>=j&&i-3<=j&&11-i>=j ||
		   11-i<=j&&9+i>=j&&3+i<=j&&17-i>=j){
		      printf("* ");
		  }
		 else{
		      printf("  ");
		      }
		  }
		  printf("\n");
	      }




	      getch();
  }