#include <iostream>
#include <string>
#include <iomanip>   // for setw (falls du es später nutzt)
#include <vector>    // for std::vector
#include <algorithm> // for min_element, max_element

using namespace std; // standard namespace

// << bedeutet: "schiebe in den Ausgabestrom"
// >> bedeutet: "hole aus dem Eingabestrom"

int main() {
    vector<int> numbers;
    int NumCount;

    cout << "Wie viele Zahlen willst du eingeben? ";
    cin >> NumCount;

    numbers.reserve(NumCount);

    for (int i = 0; i < NumCount; i++) {
        int number;
        cout << (i + 1) << ". Zahl: ";
        cin >> number;
        numbers.push_back(number);
    }

    // Summe berechnen
    int sum = 0;
    for (int value : numbers) {
        sum += value;
    }
    cout << "Summe: " << sum << endl;

    // Durchschnitt berechnen
    cout << "Durchschnitt: " << (sum / static_cast<double>(NumCount)) << endl;

    auto maxNumIt = max_element(numbers.begin(), numbers.end());
    cout << "Größte Zahl: " << *maxNumIt << endl;

    auto minNumIt = min_element(numbers.begin(), numbers.end());
    cout << "Kleinste Zahl: " << *minNumIt << endl;

    sort(numbers.begin(), numbers.end());
    cout << "Sortierte Zahlen: ";
    for (int value : numbers) {
        cout << value << " ";
    }
    cout << endl;

    system("pause");
    return 0;
}
