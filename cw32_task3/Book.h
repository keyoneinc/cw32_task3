#pragma once
#include "Product.h"

namespace Shop {
	namespace Entertainment {
		class Book : public Product
		{
		protected:
			string author;
			string genre;
			int pages;

		public:
			Book();
			Book(string title, float price, string manufacturer, int age, string author, string genre, int pages);

			void setAuthor(string author);
			void setGenre(string genre);
			void setPages(int pages);

			string getAuthor() const;
			string getGenre() const;
			int getPages() const;

			virtual void show()const override;
			virtual string type()const override;
		};
	}
}

