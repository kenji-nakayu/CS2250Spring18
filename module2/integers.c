#include <stdio.h>

int main() {

	int userAge;
	const int votingAge = 18;
	
	printf("userAge address: %p value: %d\n", &userAge, userAge);
	printf("votingAge address: %p value: %d\n", &votingAge, votingAge);

return 0;
}
