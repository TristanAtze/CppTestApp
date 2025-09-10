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
    system("pause");
    return 0;
}