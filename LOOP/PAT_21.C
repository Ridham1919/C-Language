#include<conio.h>
#include<stdio.h>
void main(){
	   int i,j,a=1;
	   clrscr();
	   for(i=1;i<=5;i++){
	     for(j=1;j<=9;j++){
		if(6-i<=j&&4+i>=j){
		      printf("%d ",a);
		      a++;
		  if(a==10){
		     a=1;
		  }
		  }
		 else{
		      printf("  ");
		      }
		  }
		  printf("\n");
	      }




	      getch();
  }