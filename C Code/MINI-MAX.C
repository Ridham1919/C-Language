#include<stdio.h>
#include<conio.h>


void main() {

	    int a,b;
	    clrscr();

	    printf("Enter your first value =");
	    scanf("%d", &a);

	    printf("Enter your second value =");
	    scanf("%d", &b);

	   (a<b)?printf("\n%d is mini.",a):printf("%d is mini.",b);
	   (a>b)?printf("%d is max.",a):printf("\n%d is max.",b);

	   getch();
}