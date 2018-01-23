#include <stdio.h>

int main() {

	int digit1;
	int digit2;

	printf("Enter two integers:\n");
	scanf("%d %d", &digit1, &digit2);
	printf("The sum of %d and %d is %d\n", digit1, digit2, digit1 + digit2);
	printf("The difference of %d and %d is %d\n", digit1, digit2, digit1 - digit2);
	printf("The product of %d and %d is %d\n", digit1, digit2, digit1 * digit2);	
	printf("The division of %d and %d is %d\n", digit1, digit2, digit1 / digit2);	
	printf("The modulus of %d and %d is %d\n", digit1, digit2, digit1 % digit2);	

return 0;
}
