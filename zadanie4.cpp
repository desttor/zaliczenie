#include <iostream>
using namespace std;

inline int funinline(int x, int y) {
    return x * y;
}

int main()
{
    int liczba_x;
    int liczba_y;
    cout << "podaj liczbe x: ";
    cin >> liczba_x;
    cout << "podaj liczbe y: ";
    cin >> liczba_y;
    cout << "mnozenie liczb wynosi: " << funinline(liczba_x, liczba_y);
}

