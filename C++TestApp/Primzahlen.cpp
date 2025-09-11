#include <iostream>
#include <string>

// Commented out main function to avoid multiple main functions
// Uncomment this and comment out main in Test2.cpp if you want to run the prime number checker
/*
int main() {
	int inputNumber;
	bool isPrime = true;

	std::cout << "Geben Sie eine Zahl ein: ";
	std::cin >> inputNumber;

	if (inputNumber <= 1) {
		isPrime = false; 
	} else {
		for (int i = 2; i <= inputNumber; i++) {
			if (inputNumber % i == 0) {
				if (i != inputNumber) {
					isPrime = false;
					break;
				}
			}
		}
	}
	if (isPrime) {
		std::cout << inputNumber << " ist eine Primzahl." << std::endl;
	} else {
		std::cout << inputNumber << " ist keine Primzahl." << std::endl;
	}
	system("pause");
}
*/