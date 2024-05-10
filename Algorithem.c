#include <stdio.h>

int main()
{
	int x, y, sum;


	// INPUT X
	printf("Value of x is : ");
	scanf_s("%d", &x);


	// INPUT Y
	printf("Value of y is : ");
	scanf_s("%d", &y);

	// SUM = X + Y
	sum = x + y;
	printf("Sum of %d + %d is %d\n", x, y, sum); // PRINTF SUM!

	return 0;
}

// Proposition Pseudocode 
// START
// READ X
// READ Y
// COMPUTE SUM = X + Y
// PRINTF SUM
// STOP

// Make Sure Testing 3 Time With Number For Sum = X + Y
// Value of x is : 7
// Value of y is : 8
// Sum of 7 + 8 is 15

// Value of x is : 23
// Value of y is : 37
// Sum of 7 + 8 is 60

// Value of x is : 51
// Value of y is : 60
// Sum of 7 + 8 is 111
