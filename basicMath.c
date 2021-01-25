#include <stdio.h>

int main()
{
	int inputNumber1;
	int inputNumber2;
	int inputNumber3;
	
	printf("Enter First Number:");
	scanf("%d", &inputNumber1);
	
	printf("Enter Second Number:");
	scanf("%d", &inputNumber2);
	
	printf("Enter Third Number:");
	scanf("%d", &inputNumber3);
	
	printf("Sum: %d\n", inputNumber1+inputNumber2+inputNumber3);
	printf("First negated: %d\n", -inputNumber1);
	printf("After Number 2: %d\n", inputNumber2+1);
	printf("Product of Number 2 and Number 3: %d\n", inputNumber2*inputNumber3);
	
	return 0;
}