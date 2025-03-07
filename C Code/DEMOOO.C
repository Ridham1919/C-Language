#include<stdio.h>
#include<conio.h>

int main() {
    int a,b, result;
    char operation;
    clrscr();

    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("Choose an operation:\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("Enter the operation (+, -, *): ");
    scanf(" %c", &operation);

    printf("Enter the modulus value: ");


    switch(operation) {
	case '1':
	    result = a + b;
	    printf("Result of %d + %d = %d\n", a, b, result);
	    break;
	case '2':
	    result = a - b;
	    printf("Result of %d - %d = %d\n", a, b, result);
	    break;
	case '3':
	    result = a * b;
	    printf("Result of %d * %d = %d\n", a, b, result);
	    break;
	default:
	    printf("Invalid operation selected.\n");

    }
    getch();
}
