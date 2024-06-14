#pragma once
#include "Product.h"

namespace Shop {
	namespace Child {
		class Toy : public Product
		{
		protected:
			string material;

		public:
			Toy();
			Toy(string title, float price, string manufacturer, int age, string material);

			void setMaterial(string material);
			string getMaterial() const;

			virtual void show()const override;
			virtual string type()const override;

		};
	}
}



