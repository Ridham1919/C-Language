#include<stdio.h>
#include<conio.h>
void main(){
	   int i,j;
	   clrscr();
	   for(i=1;i<=15;i++){
	      for(j=1;j<=15;j++){
		  if((i==1||i==5||i==15||j==1||j==7||j==15)||
		     (j==10&&i>9&&i<16)||
		     (j==12&&i>9&&i<16)||
		     (i==10&&j>10&&j<12)||
		     (i==8&&j>2&&j<6)||(j==3&&i>7&&i<11)||(j==5&&i>7&&i<11)||(i==10&&j>2&&j<6)){
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