#include "szyfry.h"
string szyfrowanie::podstawieniowy(string tekst1) {

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
string szyfrowanie::przestawieniowy(string tekst2) {
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
string szyfrowanie::deszyfrowanie(string tekst3, int znaki) {




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
int szyfrowanie::euler(int p, int q) {
	int g = (p - 1) * (q - 1);
	return g;
}
