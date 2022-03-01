#include <iostream>
#include "Lista.h"
using namespace std;
List::List()
{
	head = nullptr;
	tail = nullptr;
}

void List::Add(int val)
{
	ListElement *tmp = new ListElement();
	tmp->value = val;
	tmp->nextEl = nullptr;
	if (head == nullptr) {
		head = tmp;
		tail = tmp;
	}
	else {
		tail->nextEl = tmp;
		tail = tail->nextEl;
	}
}

void List::Remove()
{
}

int List::At(int idex)
{
	return 0;
}

void List::Print()
{
	ListElement *hed =head;
	while (hed) {
		cout << hed->value << endl;
		hed = hed->nextEl;
	}
}

List::~List()
{
}
