#include "logic.h"
int calculate_factorial(int number) {
	if (number < 1) {
		return -1;
	}

	int factorial = 1;
	for (int i = 2; i < number + 1; i++) {
		factorial *= i;
	}

	return factorial;
}