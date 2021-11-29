#pragma once
using namespace std;
#include <iostream> 
#include <string>

class szyfrowanie
{
public:
	string podstawieniowy(string tekst1);
	string przestawieniowy(string tekst2);
	string deszyfrowanie(string tekst3, int znaki);
	int euler(int p, int q);

};

