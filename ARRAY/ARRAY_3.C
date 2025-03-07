#include<stdio.h>
#include<conio.h>
void main(){
	  int a[5]={10,20,20,20,30};
	  int x,n=0,i;
	  printf("enter a number: ");
	  scanf("%d",&x);

	  for(i=0;i<5;i++){
	     if(a[i]==x){
	       n++;
		}
	  }
	  if(n>0){
		printf("%d is %d times in array\n",x,n);
	  }else{
		printf("%d is 0 time in the array\n",x);
		}


	  getch();
}