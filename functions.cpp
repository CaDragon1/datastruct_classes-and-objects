/*********************
* Name: Caleb Drake
* Class: Data Structures
* Program: SimpleClasses
* Purpose: This program demonstrates how to use simple parent/child classes in C++.
*          The parent class is a book object and the child class is an ebook object inheriting properties of the book object.
*          This is the "functions.cpp" file, which implements the functions necessary to display each object's properties in the command line.
**********************/

#include "functions.h"

void displayBook(Book* book) {

	std::cout << book->getLength() << std::endl;
	std::cout << book->getWidth() << std::endl;
	std::cout << book->getHeight() << std::endl;
	std::cout << book->getSize() << std::endl;
	std::cout << book->getPages() << std::endl;
	std::cout << book->getTitle() << std::endl;
	std::cout << book->getAuthor() << std::endl;
	std::cout << book->getGenre() << std::endl;
	std::cout << std::endl;
}

void displayEBook(EBook* ebook) {

	std::cout << ebook->getLength() << std::endl;
	std::cout << ebook->getWidth() << std::endl;
	std::cout << ebook->getHeight() << std::endl;
	std::cout << ebook->getPages() << std::endl;
	std::cout << ebook->getSize() << std::endl;
	std::cout << ebook->getTitle() << std::endl;
	std::cout << ebook->getAuthor() << std::endl;
	std::cout << ebook->getGenre() << std::endl;
	std::cout << std::endl;
}