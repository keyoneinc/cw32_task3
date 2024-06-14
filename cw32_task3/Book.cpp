#include "Book.h"

Shop::Entertainment::Book::Book()
{
    author = "undefined";
    genre = "undefined";
    pages = 0;
}

Shop::Entertainment::Book::Book(string title, float price, string manufacturer, int age, string author, string genre, int pages)
    : Product(title, price, manufacturer, age)
{
    this->author = author;
    this->genre = genre;
    this->pages = pages;
}

void Shop::Entertainment::Book::setAuthor(string author)
{
    this->author = author;
}

void Shop::Entertainment::Book::setGenre(string genre)
{
    this->genre = genre;
}

void Shop::Entertainment::Book::setPages(int pages)
{
    this->pages = pages;
}

string Shop::Entertainment::Book::getAuthor() const
{
    return author;
}

string Shop::Entertainment::Book::getGenre() const
{
    return genre;
}

int Shop::Entertainment::Book::getPages() const
{
    return pages;
}

void Shop::Entertainment::Book::show() const
{
    cout << "\t" << type() << endl;
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "Genre: " << genre << endl;
    cout << "Price: " << price << endl;
    cout << "Edition: " << manufacturer << endl;
    cout << "Age: " << age << endl;
    cout << "Number of pages: " << pages << endl << endl;
    
}

string Shop::Entertainment::Book::type() const
{
    return "Book";
}
