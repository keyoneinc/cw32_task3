#include "Lotery.h"

void Shop::Lotery::addItem(Product* obj)
{
	Loto.push_back(obj);
}

void Shop::Lotery::randItem()
{
	if (Loto.size() == 0) {
		cout << "Lotery is empty" << endl;
		return;
	}
	int N = rand() % Loto.size();
	Loto[N]->show();

}

void Shop::Lotery::showList() const
{
	for (int i = 0; i < Loto.size(); i++) {
		Loto[i]->show();
	}
}
