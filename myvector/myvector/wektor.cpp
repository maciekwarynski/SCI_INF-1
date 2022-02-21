#include "wektor.h"
#include <iostream>
void wektor::dodajElement(int a)
{
	int* tablica2 = new int[size + 1];
	for (int i = 0; i < size; i++)
	{
		tablica2[i] = tablica[i];
	}
	tablica2[size] = a;
	delete[] tablica;
	tablica = tablica2;
	size++;
	
}

void wektor::usunElement()
{
	int* tablica2 = new int[size - 1];
	for (int i = 0; i < size-1; i++)
	{
		tablica2[i] = tablica[i];
	}
	
	delete[] tablica;
	tablica = tablica2;
	size--;
}

int wektor::odczyt(int index)
{
	if (index < 0 || index >= size) {
		return -2147483647;
	}
	return tablica[index];
	
}

void wektor::dodajmiejsce(int pozycja, int co)
{
	if (pozycja > size - 1 || pozycja < 0)
	{
		return;
	}
	else {
		int* tab = new int[size + 1];
		int j = 0;
		for (int i = 0; i < size + 1; i++)
		{
			if (i == pozycja)
			{
				tab[pozycja] = co;
				continue;
			}
			tab[i] = tablica[j];
			++j;
		}
		size++;
		delete[] tablica;
		tablica = tab;
	}
}

void wektor::usunmiejsce(int index)
{
	if (index > size - 1 || index < 0)
	{
		return;
	}
	else {
		int* tab = new int[size - 1];
		int j = 0;
		for (int i = 0; i < size - 1; i++)
		{
			if (i == index)
			{
				++j;
			}
			tab[i] = tablica[j];
			++j;
		}
		--size;
		delete[] tablica;
		tablica = tab;
	}
}

void wektor::hefalumpy()
{
	for (int i = 0; i < size; i++) {
		std::cout << tablica[i] << std::endl;
	}
}
