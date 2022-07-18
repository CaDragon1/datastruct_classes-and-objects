/*********************
* Name: Caleb Drake
* Class: Data Structures
* Program: SimpleClasses
* Purpose: This program demonstrates how to use simple parent/child classes in C++.
*          The parent class is a book object and the child class is an ebook object inheriting properties of the book object.
*          This is the "main.cpp" file, which calls the necessary functions to produce the program's output.
**********************/
#include "main.h"

int main(int argc, char** argv) {
	Book myBook1;
	Book myBook2(7, 3, 9, 1230, "Rhythm of War", "Brandon Sanderson", "Fantasy");

	EBook myEBook1;
	EBook myEBook2(387, 3118, "Moonwalking with Einstein", "Joshua Foer", "Nonfiction");

	displayBook(&myBook1);
	displayBook(&myBook2);

	displayEBook(&myEBook1);
	displayEBook(&myEBook2);

	return 0;
}