// C++TestApp.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <string>

int main()
{
    int zahl;
	std::cout << "Geben Sie eine Zahl ein: ";
	std::cin >> zahl;
	std::cout << "Die eingegebene Zahl ist: " << zahl << std::endl;
    system("pause");
    return 0;
}