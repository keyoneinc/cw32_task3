#include "Inventory.h"

Shop::Sport::Inventory::Inventory()
{
	kind = "undefined";
	weight = 0;
}

Shop::Sport::Inventory::Inventory(string title, float price, string manufacturer, int age, string kind, float weight)
	: Product(title, price, manufacturer, age)
{
	this->kind = kind;
	this->weight = weight;
}

void Shop::Sport::Inventory::setKind(string kind)
{
	this->kind = kind;
}

void Shop::Sport::Inventory::setWeight(float weight)
{
	this->weight = weight;
}

string Shop::Sport::Inventory::getKind() const
{
	return kind;
}

float Shop::Sport::Inventory::getWeight() const
{
	return weight;
}

void Shop::Sport::Inventory::show() const
{
	cout << "\t" << type() << endl;
	cout << "Title: " << title << endl;
	cout << "Kind: " << kind << endl;
	cout << "Weight: " << weight << endl;
	cout << "Price: " << price << endl;
	cout << "Manufacturer: " << manufacturer << endl;
	cout << "Age: " << age << endl << endl;

}

string Shop::Sport::Inventory::type() const
{
	return "Sport";
}
