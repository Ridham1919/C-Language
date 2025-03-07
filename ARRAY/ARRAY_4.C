#include<stdio.h>
int main(){
	  int i,a[4]={10,20,30,40},p=0;

	  for(i=0;i<=3;i++){
	     printf("\nenter value of a[%d]:%d",i,a[i]);
	     p +=a[i];
	  }
	    printf("\nsum : %d",p);

	return 0;
}