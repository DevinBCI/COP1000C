#include <stdio.h>
#include <stdlib.h>
// Written by Devin Wood
// Date: 9/12/2016 (MM/DD/YY)
// Purpose: I/O and Arithmetic Assignment
main() {
	int a, b;

	
	printf("Enter your first number: ");
	scanf_s("%i", &a);
	printf("The first number is: %i\n",a);
	printf("Enter your second number: ");
	scanf_s("%i", &b);
	printf("The second number is: %i\n", b);
	int add, sub, mult, square, div, squareTwo;
	add = a + b;
	sub = a - b;
	mult = a * b;
	div = a / b;
	square = a * a;
	squareTwo = b * b;\
	printf("The addition is %i\n", add);
	printf("The multiplication is %i\n", mult);
	printf("The square of %i is %i\n",a, square);
	printf("The square of %i is %i\n", b, squareTwo);
	printf("\n");
	printf("Thank you. \n");
	system("pause");
}