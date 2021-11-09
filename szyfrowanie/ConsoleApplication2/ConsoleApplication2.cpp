#include <iostream>
#include <string>
#include "szyfrowanie.h"
using namespace std;
string tekst;
szyfrowanie szyfr;
int petla = 1;
int main()
{
	while (petla == 1) {
		
		cout << "Wprowadz tekst:" << endl;
		getline(cin, tekst);
		cout << "Wybierz:" << endl;
		cout << "1. Szyfr podstawieniowy" << endl;
		cout << "2. Szyfr przestawieniowy" << endl;
		cout << "3. Szyfr podstawieniowy i szyfr przestawieniowy" << endl;
		cout << "4. Odszyfruj teskt" << endl;
		int wybor;
		cin >> wybor;
		switch (wybor) {
		case 1:
			cout << szyfr.podstawieniowy(tekst);
			break;
		case 2:
			cout << szyfr.przestawieniowy(tekst);
			break;
		case 3:
			cout << szyfr.podstawieniowy(szyfr.przestawieniowy(tekst));
			break;
		case 4:

			for (int licznik = 0; licznik < 26; licznik++) {
				cout << szyfr.deszyfrowanie(tekst, licznik) << endl;
			}
			break;
			

		}
		cout << endl << "Zakonczyc program? (tak/nie)" << endl;
		string odp;
		cin >> odp;
		if (odp == "tak") {
			petla = 0;
			}
		
		cin.ignore();
	}
}
