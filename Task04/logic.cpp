#include "logic.h"
int fib(int number) {
	if (number <= 0) {
		return -1;
	}

	if (number <= 2) {
		return number - 1;
	}

	return fib(number - 1) - fid(number - 2);
}