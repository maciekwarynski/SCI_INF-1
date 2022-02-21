
class wektor
{
public:
	wektor() {
		size = 10;
		tablica = new int[size];
		for (int i = 0; i < size; i++) {
			tablica[i] = 0;
		}
	}
	wektor(unsigned int szymonmnieuratowal) {
		size = szymonmnieuratowal;
		tablica = new int[size];
		for (int i = 0; i < size; i++) {
			tablica[i] = 0;
		}
	}
	void dodajElement(int a);
	void usunElement();
	int odczyt(int index);
	void dodajmiejsce(int pozycja, int co);
	void usunmiejsce(int index);
	void hefalumpy();
	~wektor() {
		delete [] tablica;
	}

private:
	int* tablica;
	unsigned int size;
};

