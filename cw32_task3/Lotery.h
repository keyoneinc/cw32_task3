#pragma once
#include "Product.h"
#include "Inventory.h"
#include "Book.h"
#include "Toy.h"
#include <vector>
using std::vector;

namespace Shop {
	class Lotery
	{
		vector <Product*> Loto;

	public:
		void addItem(Product* obj);
		void randItem();
		void showList() const;
	};
}

