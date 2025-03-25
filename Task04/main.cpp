#include <iostream>
#include "logic.h"
using namespace std;

int main() {
	int number = 0;
	cout << "Input your number: ";
	cin >> number;

	cout << "Fib number: " << fib(number);

	return  0;
}