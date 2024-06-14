#include "Toy.h"

Shop::Child::Toy::Toy()
{
    material = "undefined";
}

Shop::Child::Toy::Toy(string title, float price, string manufacturer, int age, string material)
    : Product(title, price, manufacturer, age)
{
    this->material = material;
}

void Shop::Child::Toy::setMaterial(string material)
{
    this->material = material;
}

string Shop::Child::Toy::getMaterial() const
{
    return material;
}

void Shop::Child::Toy::show() const
{
    cout << "\t" << type() << endl;
    cout << "Title: " << title << endl;
    cout << "Price: " << price << endl;
    cout << "Manufacturer: " << manufacturer << endl;
    cout << "Age: " << age << endl;
    cout << "Material: " << material << endl << endl;


}

string Shop::Child::Toy::type() const
{
    return "Toy";
}
