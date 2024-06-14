#include <iostream>
#include "Lotery.h"

int main()
{
	Shop::Lotery Zabawa;
	Zabawa.addItem(new Shop::Child::Toy("Ball", 200, "Nike", 12, "leather"));
	Zabawa.addItem(new Shop::Child::Toy("Kite", 200, "Nike", 12, "cotton"));
	
	Zabawa.addItem(new Shop::Sport::Inventory("Snikers", 20000, "Nike", 10, "football", 0.5));

	/*Zabawa.addItem(new Shop :: Entertainment :: Book("")*/

	Zabawa.randItem();
}
