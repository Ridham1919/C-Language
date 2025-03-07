#include<stdio.h>
#include<conio.h>

void main(){
	   int a,b,c,d;
	   clrscr();
	   printf("enter your value =");
	   scanf("%d %d %d %d", a,b,c,d);
	   if(a<b){
		 if(a<c){
			if(a<d){
				 printf("a is min.");
			}
			else{
				printf("b is min.");
			}

		      }

		 else{
			 printf("c is min.");
		       }

		       }

	     else{
		   if(b<c){
			  if(b<d){
				   printf("b is min.");
			  }
			  else{
				printf("d is min.");
			  }
		       }

		    else{

			  printf("c is min.");

			}


		 }


	     getch();



   }

