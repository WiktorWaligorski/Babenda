#include <iostream>
using namespace std;

/*
**********************************************
nazwa funkcji: CheckGender
opis funkcji: sprawdza plec osoby o podanym peselu
parametry: PESEL - zmienna tekstowa wprowadzana przez uzytkownika
zwracany typ i opis: zwraca char o wartosci 'K' lub 'M' w zaleznosci od przedostatniej cyfry numeru pesel
autor: <numer zdaj?cego>
***********************************************
*/

char CheckGender(string PESEL) {
    int GenderDigit = PESEL[9];
    if (GenderDigit % 2 == 0) {
        return 'K';
    }
    else {
        return 'M';
    }
}

bool ControlSum(string PESEL) {
    int Values[] = {1, 3, 7, 9, 1, 3, 7, 9, 1, 3};
    int S = 0, M, R;

    for (int i = 0; i < PESEL.length(); i++) {
        S += PESEL[i] * Values[i];
    }
    M = S % 10;
    if (M == 0) {
        R = 0;
    }
    else {
        R = 10 - M;
    }

    if (R = PESEL[10]) {
        return true;
    }
    else {
        return false;
    }
}

int main()
{
    string PESEL = "00000000000";
    cout << "Podaj pesel: ";
    cin >> PESEL;

    char gender = CheckGender(PESEL);
    switch (gender) {
    case 'K':
        cout << "Kobieta" << endl;
        break;
    case 'M':
        cout << "Mezczyzna" << endl;
        break;
    }

    if (ControlSum(PESEL)) {
        cout << "all good";
    }
    else {
        cout << "brother...";
    }
}
