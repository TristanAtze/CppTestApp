#include <iostream>
#include <string>
#include <iomanip>   // for setw (falls du es später nutzt)
#include <vector>    // for std::vector
#include <algorithm> // for min_element, max_element

// << bedeutet: "schiebe in den Ausgabestrom"
// >> bedeutet: "hole aus dem Eingabestrom"

int main() {
	std::string input;
	std::cout << "Geben Sie ein Wort oder einen Satz ein: ";
	std::cin >> input;
	std::string reversedInput = std::string(input.rbegin(), input.rend());

	if (reversedInput.find(" ") != std::string::npos) {
		reversedInput.erase(std::remove(reversedInput.begin(), reversedInput.end(), ' '), reversedInput.end());
		input.erase(std::remove(input.begin(), input.end(), ' '), input.end());
	}

	if (input == reversedInput) {
		std::cout << "Das Wort oder der Satz ist ein Palindrom." << std::endl;
	}
	else {
		std::cout << "Das Wort oder der Satz ist kein Palindrom." << std::endl;
	}

    system("pause");
    return 0;
}