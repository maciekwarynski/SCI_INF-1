#include <iostream>
#include <string>
#include <time.h> 
#include "szyfry.h"
using namespace std;
string tekst;
szyfrowanie szyfr;
int petla = 1;
int modInverse(int a, int m)
{
	for (int x = 1; x < m; x++)
		if (((a%m) * (x%m)) % m == 1)
			return x;
}
int main()
{
	srand(time(NULL));
	while (petla == 1) {

		cout << "Wprowadz tekst:" << endl;
		getline(cin, tekst);
		cout << "Wybierz:" << endl;
		cout << "1. Szyfr podstawieniowy" << endl;
		cout << "2. Szyfr przestawieniowy" << endl;
		cout << "3. Szyfr podstawieniowy i szyfr przestawieniowy" << endl;
		cout << "4. Odszyfruj teskt" << endl;
		cout << "5. Generowanie klucza RSA" << endl;
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

		case 5:
			
			int p = 13;
			int q = 11;
			int n = p * q;
			int eu = szyfr.euler(p, q);
			int e = 3;
			int d = modInverse(e, eu) ;
			cout << "Publiczny:" << endl << "N: " << n << endl << "E: " << e << endl;
			cout << "Prywatny: " << endl << "E: "<< e << endl << "D: " << d << endl;	
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
