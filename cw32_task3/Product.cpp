#include "Product.h"

Shop::Product::Product()
{
    title = "undefined";
    price = 0.0;
    manufacturer = "undefined";
    age = 0;
}

Shop::Product::Product(string title, float price, string manufacturer, int age)
{
    this->title = title;
    this->price = price;
    this->manufacturer = manufacturer;
    this->age = age;
}

void Shop::Product::setTitle(string title)
{
    this->title = title;
}

void Shop::Product::setPrice(float price)
{
    this->price = price;
}

void Shop::Product::setManufacturer(string manufacturer)
{
    this->manufacturer = manufacturer;
}

void Shop::Product::setAge(int age)
{ 
    this->age = age;
}

string Shop::Product::getTitle() const
{
    return title;
}

float Shop::Product::getPrice() const
{
    return price;
}

string Shop::Product::getManufacturer() const
{
    return manufacturer;
}

int Shop::Product::getAge() const
{
    return age;
}
