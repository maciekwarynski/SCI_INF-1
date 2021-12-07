#include <iostream>
#include <string>
#include <time.h> 
#include "szyfry.h"
using namespace std;
string tekst;
szyfrowanie szyfr;
int petla = 1;
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
			int pierwsze[25] = { '2','3','5','7','11','13','17','19','23','29','31','37','41','43','47','53','59','61','67','71','73','79','83','89','97' };
			int p = pierwsze[rand() % 25];
			int q = pierwsze[rand() % 25];
			int n = p * q;
			int eu = szyfr.euler(p, q);
			int e = 3;
			int d = (1 % eu) / e;
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
