#include<stdio.h>
#include<conio.h>
void main(){
	   int i,j;
	   clrscr();
	   for(i=1;i<=10;i++){
	      for(j=1;j<=10;j++){
		  if(i==1||i==10||j==1||j==10||
		  (i==3&&j>2&&j<9)||
		  (i==8&&j>2&&j<9)||
		  (j==3&&i>2&&i<9)||
		  (j==8&&i>2&&i<9)){
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