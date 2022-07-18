/*********************
* Name: Caleb Drake
* Class: Data Structures
* Program: SimpleClasses
* Purpose: This program demonstrates how to use simple parent/child classes in C++.
*          The parent class is a book object and the child class is an ebook object inheriting properties of the book object.
*          This is the "book.cpp" file, which defines the book class and includes all the necessary getters and setters.
**********************/

#include "book.h"

const char* Book::DEFAULT = "null";

Book::Book() {
	setLength(MIN);
	setWidth(MIN);
	setHeight(MIN);
	setPages(MIN);
	setTitle(DEFAULT);
	setAuthor(DEFAULT);
	setGenre(DEFAULT);
}

Book::Book(int l, int w, int h, int pg, const char* t, const char* a, const char* g) {
	setLength(l);
	setWidth(w);
	setHeight(h);
	setPages(pg);
	setTitle(t);
	setAuthor(a);
	setGenre(g);
}

Book::~Book() {
}

// Getters
int Book::getLength() {
	return length;
}
int Book::getWidth() {
	return width;
}
int Book::getHeight() {
	return height;
}
int Book::getPages() {
	return pages;
}
int Book::getSize() {
	return length * width * height;
}
const char* Book::getTitle() {
	return title;
}
const char* Book::getAuthor() {
	return author;
}
const char* Book::getGenre() {
	return genre;
}

// Setters
void Book::setLength(int l) {
	if (l > MIN) {
		length = l;
	}
	else {
		length = MIN;
	}
}
void Book::setWidth(int w) {
	if (w > MIN) {
		width = w;
	}
	else {
		width = MIN;
	}
}
void Book::setHeight(int h) {
	if (h > MIN) {
		height = h;
	}
	else {
		height = MIN;
	}
}
void Book::setPages(int p) {
	if (p > MIN) {
		pages = p;
	}
	else {
		pages = MIN;
	}
}
void Book::setTitle(const char* t) {
	title = t;
}
void Book::setAuthor(const char* a) {
	author = a;
}
void Book::setGenre(const char* g) {
	genre = g;
}