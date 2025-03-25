#include <iostream>
#include "logic.h"
using namespace std;

int main() {
	int number;
	cout << "Input your number: " << number;
	cin >> number;

	cout << "Factorial: " << calculate_factorial(number) << endl;

	return 0;
}