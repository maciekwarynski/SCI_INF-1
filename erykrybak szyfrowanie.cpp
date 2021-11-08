#include <iostream>
#include <string>
using namespace std;
string tekst;
string podstawieniowy(string tekst1) {

	cout << "O ile znakow?" << endl;
	int znaki;
	cin >> znaki;
	if (znaki > 26) {
		znaki = 26;
	}
	if (znaki < 1) {
		znaki = 1;
	}
	int a = tekst1.length();
	for (int i = 0; i < a; i++) {
		if (tekst1[i] >= 97 && tekst1[1] <= 122) {
			tekst1[i] = tekst1[i] + znaki;
			if (tekst1[i] > 122) {
				tekst1[i] = tekst1[i] - 26;
			}
		}
		else {
			continue;
		}
	}
	return tekst1;
}

string przestawieniowy(string tekst2) {
	int dlugi = tekst2.length();
	if (dlugi % 2 != 0) {
		dlugi--;
	}
	for (int i = 0; i < dlugi; i = i + 2) {
		int czas2 = i + 1;
		char czas = tekst2[i];
		tekst2[i] = tekst2[czas2];
		tekst2[czas2] = czas;

	}
	return tekst2;
}
string deszyfrowanie(string tekst3, int znaki) {
	
	
	
	
	int a = tekst3.length();
	for (int i = 0; i < a; i++) {
		if (tekst3[i] >= 97 && tekst3[1] <= 122) {
			tekst3[i] = tekst3[i] - znaki;

			if (tekst3[i] < 97) {
				tekst3[i] = tekst3[i] + 26;

			}
		}
		else {
			continue;
		}
	}
	return tekst3;
}
int main()
{

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
		cout << podstawieniowy(tekst);
		break;
	case 2:
		cout << przestawieniowy(tekst);
		break;
	case 3:
		cout << podstawieniowy(przestawieniowy(tekst));
		break;
	case 4:
		
		for (int licznik = 0; licznik < 26; licznik++) {
			cout << deszyfrowanie(tekst, licznik) << endl;
		}
		break;
	}
}