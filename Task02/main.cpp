#include <iostream>
#include "logic.h"
using namespace std;

int main() {
	int number = 0;
	cout << "Input number of elements: ";
	cin >> number;

	cout << "Fibonacci number" << get_fibonacci_number(number);

	return 0;
}