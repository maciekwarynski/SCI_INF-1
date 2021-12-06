#include<iostream>
#include<stdlib.h>
#include<vector>
#include "sortowanie.h"
using namespace std;
void sortowanie::granit() {
    cout << "\n____________________________________________________";
    for (int i = 0; i < liczby_wylosowane.size(); i++)
    {
        cout << "\n" << "liczba nr " << i + 1 << ": " << liczby_wylosowane[i];
    }
    cout << "\n____________________________________________________";
}
void sortowanie::generator() {
    srand(time(NULL));
    for (int i = 0; i < 100; i++)
    {
        liczby_wylosowane.push_back(rand() % 1001);
    }
    granit();
}
void sortowanie::bombelkowy() {
    for (int i = 0; i < liczby_wylosowane.size() - 1; i++)
    {
        for (int i = 0; i < liczby_wylosowane.size() - 1; i++)
        {

            if (liczby_wylosowane[i] > liczby_wylosowane[i + 1]) {
                int temp = liczby_wylosowane[i];
                liczby_wylosowane[i] = liczby_wylosowane[i + 1];
                liczby_wylosowane[i + 1] = temp;
            }
        }
    }
    granit();
}
void sortowanie::wstawianie() {

    for (int j = liczby_wylosowane.size() - 1; j >= 0; j--)
    {
        x = liczby_wylosowane[j];
        i = j + 1;
        while (i<liczby_wylosowane.size() && x>liczby_wylosowane[i])
        {
            liczby_wylosowane[i - 1] = liczby_wylosowane[i];
            i++;
        }
        liczby_wylosowane[i - 1] = x;
    }
    granit();
}