/*********************
* Name: Caleb Drake
* Class: Data Structures
* Program: SimpleClasses
* Purpose: This program demonstrates how to use simple parent/child classes in C++.
*          The parent class is a book object and the child class is an ebook object inheriting properties of the book object.
*          This is the "ebook.h" file, which is the header for "ebook.cpp" and declares everything in "ebook.cpp".
*          It includes and inherits "book.h".
**********************/

#ifndef CLASSES_EBOOK_H
#define CLASSES_EBOOK_H

#include "book.h"

class EBook : public Book {
public:
	// Constructors
	EBook();
	// Parameter names listed in order:
	// Pages, size, title, author, genre
	// Length, width, and height will all be the MIN value (0) because this is a digital object.
	EBook(int, int, const char*, const char*, const char*);

	//Destructor
	~EBook();

	// Getters
	int getSize();		// In this case, the size is not volume but rather file size, so it is measured in kb

	// Setters
	void setSize(int);

protected:
	int size;
};

#endif //CLASSES_EBOOK_H