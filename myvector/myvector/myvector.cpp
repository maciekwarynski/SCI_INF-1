
#include <iostream>
#include "wektor.h"
using namespace std;

int main()
{
    wektor vektor1;
    vektor1.dodajElement(8);
    cout << vektor1.odczyt(10);
    vektor1.usunElement();
    cout << vektor1.odczyt(10);
    vektor1.dodajmiejsce(3, 5);
    vektor1.hefalumpy();
    cout << endl;
    vektor1.usunmiejsce(3);
    vektor1.hefalumpy();

    
}

