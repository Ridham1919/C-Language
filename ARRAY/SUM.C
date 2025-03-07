#include<conio.h>
#include<stdio.h>
void main(){
	 int n,i,a[100],p=0;
	 clrscr();
	 printf("enter the size of array: ");
	 scanf("%d",&n);

	 for(i=0;i<n;i++){
	     printf("Enter Value Of a[%d]: ",i);
	     scanf("%d",&a[i]);
	     p+=a[i];
	 }
	   printf("sum of the array is: %d\n",p);
	   getch();
}

