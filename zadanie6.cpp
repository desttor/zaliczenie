#include <iostream>

using namespace std;

struct Osoba {
    string imie;
    string nazwisko;
    int wiek;
};

int main() {
    Osoba osobaStatyczna;
    osobaStatyczna.imie = "Jan";
    osobaStatyczna.nazwisko = "Kowalski";
    osobaStatyczna.wiek = 30;

    cout << "Osoba statyczna: " << endl;
    cout << "Imie: " << osobaStatyczna.imie << endl;
    cout << "Nazwisko: " << osobaStatyczna.nazwisko << endl;
    cout << "Wiek: " << osobaStatyczna.wiek << endl;

    Osoba* osobaDynamiczna = new Osoba;

    osobaDynamiczna->imie = "Anna";
    osobaDynamiczna->nazwisko = "Nowak";
    osobaDynamiczna->wiek = 25;

    cout << "\nOsoba dynamiczna: " << endl;
    cout << "Imie: " << osobaDynamiczna->imie << endl;
    cout << "Nazwisko: " << osobaDynamiczna->nazwisko << endl;
    cout << "Wiek: " << osobaDynamiczna->wiek << endl;

    delete osobaDynamiczna;

    return 0;
}