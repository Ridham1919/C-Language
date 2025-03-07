#include<conio.h>
#include<stdio.h>
void main(){
	  int oldid=123,newid,oldpassword=123,newpassword;
	  clrscr();
	  printf("enter your old id =");
	  scanf("%d",&newid);
	  if(newid==oldid){
			  printf("enter ypur old password =");
			  scanf("%d",&newpassword);

	    if(newpassword==oldpassword){
				printf("\nlogin success.");
				}
	    else{
		  printf("\npassword wrong.");
		  }
	   }
	   else{
		     printf("\ndose not match.");

	   }

	  getch();

   }

















