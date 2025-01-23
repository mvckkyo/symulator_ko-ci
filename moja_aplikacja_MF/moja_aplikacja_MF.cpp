#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Funkcja do wykonania rzutu kością
int rollDice(int sides) {
    return rand() % sides + 1; // Generuje losową liczbę od 1 do 'sides'
}

int main() {
    // Inicjalizacja generatora liczb losowych
    srand(static_cast<unsigned int>(time(0)));

    int diceSides; // Liczba ścianek na kości
    int rollCount; // Liczba rzutów

    cout << "**********************************" << endl;
    cout << "* Symulator rzutow koscmi RPG    *" << endl;
    cout << "* Dostepne kosci: d3 do d100     *" << endl;
    cout << "**********************************" << endl;
    cout << "\nJak dziala program?\n";
    cout << "1. Wybierz liczbe scianek na kosci (np. 6 dla k6, 20 dla k20).\n";
    cout << "2. Podaj liczbe rzutow.\n";
    cout << "3. Otrzymasz wyniki dla kazdego rzutu.\n\n";

    while (true) {
        // Uzytkownik wybiera liczbe scianek na kosci
        cout << "Podaj liczbe scianek na kosci (3 - 100, 0 aby wyjsc): ";
        cin >> diceSides;

        // Sprawdzenie wyjscia
        if (diceSides == 0) {
            cout << "Dziekujemy za skorzystanie z symulatora!\n";
            break;
        }

        // Walidacja liczby scianek
        if (diceSides < 3 || diceSides > 100) {
            cout << "Blad: liczba scianek musi byc w przedziale od 3 do 100!\n";
            continue;
        }

        // Uzytkownik podaje liczbe rzutow
        cout << "Podaj liczbe rzutow: ";
        cin >> rollCount;

        // Walidacja liczby rzutow
        if (rollCount <= 0) {
            cout << "Blad: liczba rzutow musi byc wieksza od 0!\n";
            continue;
        }

        cout << "\nRzucasz k" << diceSides << " " << rollCount << " razy:\n";
        cout << "----------------------------------\n";

        // Symulacja rzutow
        for (int i = 1; i <= rollCount; i++) {
            int result = rollDice(diceSides);
            cout << "Rzut " << i << ": " << result << endl;
        }

        cout << "----------------------------------\n\n";
    }

    return 0;
}



