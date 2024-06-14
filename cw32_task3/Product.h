#pragma once
#include <iostream>
#include <string>
#include <fstream>
using std::cout;
using std::endl;
using std::string;
using std::ofstream;
using std::ifstream;

namespace Shop {
	class Product
	{
	protected:
		string title;
		float price;
		string manufacturer;
		int age;

	public:
		Product();
		Product(string title, float price, string manufacturer, int age);
		virtual ~Product() { };
		
		void setTitle(string title);
		void setPrice(float price);
		void setManufacturer(string manufacturer);
		void setAge(int age);

		string getTitle() const;
		float getPrice() const;
		string getManufacturer() const;
		int getAge() const;

		virtual void show()const = 0;
		virtual string type()const = 0;
		virtual void save(ofstream& file)const = 0;
		virtual void load(ifstream& file) = 0;





	};

}


