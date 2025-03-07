#include<stdio.h>
#include<conio.h>
void main(){
	   int i,j,h,r,l,m,a,b;
	   clrscr();
	   for(i=1;i<=5;i++){
	     for(j=1;j<=5;j++){
		  if(j<=i){
			  printf("* ");
			  }
		  else{
		       printf("  ");
		       }

		    }
		       printf("\n");
		 }

	   for(h=1;h<=5;h++){
	     for(r=1;r<=5;r++){
		if(r<=5-h+1){
			      printf("* ");
			     }
		else{
		     printf("  ");
		     }
		 }
		  printf("\n");
	       }

	   for(l=1;l<=5;l++){
	      for(m=1;m<=5;m++){
		  if(m>=l){
			    printf("* ");
			    }
		  else{
			 printf("  ");
			 }
		    }
		    printf("\n");
		  }

	   for(a=1;a<=5;a++){
	     for(b=1;b<=5;b++){
	       if(b>=5-a+1){
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