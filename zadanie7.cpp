#include <iostream>
using namespace std;

// Enum (wyliczenie) - pozwala zdefiniowac zestaw nazwanych stalych liczbowych.
// Ulatwia prace z wartosciami symbolicznymi zamiast liczb.
enum Dzien {
    Poniedzialek,
    Wtorek,    
    Sroda,      
    Czwartek, 
    Piatek,
    Sobota, 
    Niedziela
};

union Dane {
    int liczbaCalkowita;
    float liczbaZmiennoprzecinkowa;
    char znak;
};

int main() {
    // Uzycie enum
    Dzien dzisiaj = Piatek;

    cout << "Dzisiaj jest: ";
    switch (dzisiaj) {
    case Poniedzialek: cout << "Poniedzialek"; break;
    case Wtorek: cout << "Wtorek"; break;
    case Sroda: cout << "Sroda"; break;
    case Czwartek: cout << "Czwartek"; break;
    case Piatek: cout << "Piatek"; break;
    case Sobota: cout << "Sobota"; break;
    case Niedziela: cout << "Niedziela"; break;
    }
    cout << endl;

    // Uzycie unii
    Dane mojeDane;
    mojeDane.liczbaCalkowita = 42;

    cout << "Liczba calkowita: " << mojeDane.liczbaCalkowita << endl;

    mojeDane.liczbaZmiennoprzecinkowa = 3.14f;
    cout << "Liczba zmiennoprzecinkowa: " << mojeDane.liczbaZmiennoprzecinkowa << endl;

    mojeDane.znak = 'A';
    cout << "Znak: " << mojeDane.znak << endl;

    return 0;
}