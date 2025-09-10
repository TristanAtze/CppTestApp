#include <iostream>
#include <string>
using namespace std; //standard namespace

//<< bedeutet: „schiebe in den Ausgabestrom“
//>> bedeutet : „hole aus dem Eingabestrom“

int main()
{
    int zahl;
	std::cout << "Geben Sie eine Zahl ein: "; // character output --> cout
	std::cin >> zahl; // character input  --> cin
	std::cout << "Die eingegebene Zahl ist: " << zahl << std::endl; // endl = end line

	int a, b;
	std::cout << "Taschenrechner in C++\n";
	std::cout << "Geben die erste Zahle ein: ";
	std::cin >> a;

	std::cout << "Gebe die zweite Zahl ein: ";
	std::cin >> b;

	char op;
	std::cout << "Geben Sie den Operator ein (+, -, *, /): ";
	std::cin >> op;

	switch (op)
	{
		case '+':
			std::cout << "Ergebnis: " << a + b << std::endl;
			break;
		case '-':
			std::cout << "Ergebnis: " << a - b << std::endl;
			break;
		case '*':
			std::cout << "Ergebnis: " << a * b << std::endl;
			break;
		case '/':
			if (b != 0)
				std::cout << "Ergebnis: " << a / b << std::endl;
			else
				std::cout << "Fehler: Division durch Null!" << std::endl;
			break;

		default:
			break;
	}
	
    system("pause");
    return 0;
}