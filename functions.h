/*********************
* Name: Caleb Drake
* Class: Data Structures
* Program: SimpleClasses
* Purpose: This program demonstrates how to use simple parent/child classes in C++.
*          The parent class is a book object and the child class is an ebook object inheriting properties of the book object.
*          This is the "functions.h" file, which declares the functions that are implemented in "functions.cpp".
**********************/
#ifndef BOOK_FUNCTIONS_H
#define BOOK_FUNCTIONS_H

#include <iostream>
#include "ebook.h"

void displayBook(Book*);
void displayEBook(EBook*);

#endif //BOOK_FUNCTIONS_H