/*********************
* Name: Caleb Drake
* Class: Data Structures
* Program: SimpleClasses
* Purpose: This program demonstrates how to use simple parent/child classes in C++.
*          The parent class is a book object and the child class is an ebook object inheriting properties of the book object.
*          This is the "ebook.cpp" file, which contains the ebook class code and includes the getters and setters for its properties.
**********************/

#include "ebook.h"

// Constructors
EBook::EBook() {
	setLength(MIN);
	setWidth(MIN);
	setHeight(MIN);
	setSize(MIN);
	setPages(MIN);
	setTitle(DEFAULT);
	setAuthor(DEFAULT);
	setGenre(DEFAULT);
}

EBook::EBook(int p, int s, const char* t, const char* a, const char* g) {
	setLength(MIN);		// Length, Width, and Height all are set to 0.
	setWidth(MIN);		// This is because an ebook has no physical form.
	setHeight(MIN);
	setSize(s);
	setPages(p);
	setTitle(t);
	setAuthor(a);
	setGenre(g);
}

EBook::~EBook() {
}

// Getters
int EBook::getSize() {	// This overrides the getSize() function of Book because the size of a digital object is different than a physical object.
	return size;
}

// Setters
void EBook::setSize(int s) {
	if (s > MIN) {
		size = s;
	}
	else {
		size = MIN;
	}
}