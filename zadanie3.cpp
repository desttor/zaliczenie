#include <iostream>
using namespace std;
int silnia_iteracyjnie(int n) {
    int wynik = 1;
    for (int i = 2; i <= n; i++) {
        wynik *= i;
    }
    return wynik;
}

int silnia_rekurencyjnie(int n) {
    if (n == 0) {
        return 1;
    }
    else {
        return n * silnia_rekurencyjnie(n - 1);
    }
}

int main() {
    int n;
    cout << "Podaj liczbę do obliczenia silni: ";
    cin >> n;

    cout << "Silnia obliczona iteracyjnie: " << silnia_iteracyjnie(n) << endl;

    cout << "Silnia obliczona rekurencyjnie: " << silnia_rekurencyjnie(n) << endl;

    return 0;
}