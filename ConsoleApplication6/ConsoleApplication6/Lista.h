
class ListElement
{
public:
	int value; //wartoœæ elementu
	ListElement* nextEl; //wskaŸnik na nastêpny element
};

class List
{

public:
	List();
	void Add(int val);
	void Remove();
	int At(int idex);
	void Print();
	~List();
private:
	ListElement* head, *tail; //wskaźniki na pierwszy i ostatni element listy 
};



