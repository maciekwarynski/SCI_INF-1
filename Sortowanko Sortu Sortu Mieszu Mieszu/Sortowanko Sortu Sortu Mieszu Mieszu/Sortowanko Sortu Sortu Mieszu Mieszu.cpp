#include <iostream>
#include<vector>
#include"sortowanie.h"
using namespace std;
int main() {
    sortowanie Liczby;
    Liczby.generator();
    char wybor;
    cout << "\nWybierz sortowanie\n1-bombelkowe\n2-wstawieniowe\n";
    cin >> wybor;
    if (wybor == '1') {
        Liczby.bombelkowy();
    }
    else if (wybor == '2') {
        Liczby.wstawianie();
    }
    else {
        cout << "\nerror\n";
    }
}