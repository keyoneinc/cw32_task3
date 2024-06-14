#pragma once
#include "Product.h"

namespace Shop {
	namespace Sport {
		class Inventory : public Product
		{
		protected:
			string kind;
			float weight;

		public:
			Inventory();
			Inventory(string title, float price, string manufacturer, int age, string kind, float weight);

			void setKind(string kind);
			void setWeight(float weight);

			string getKind() const;
			float getWeight() const;

			virtual void show()const override;
			virtual string type()const override;

		};

	}
}
