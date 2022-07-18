/*********************
* Name: Caleb Drake
* Class: Data Structures
* Program: SimpleClasses
* Purpose: This program demonstrates how to use simple parent/child classes in C++.
*          The parent class is a book object and the child class is an ebook object inheriting properties of the book object.
*          This is the "book.h" file, the header file for "book.cpp" which prototypes the book class and its properties.
**********************/

#ifndef CLASSES_BOOK_H
#define CLASSES_BOOK_H

// Minimum size for the dimensions and page amount of the book
#define MIN 0

class Book {

    public:
	// Constructors
		Book();
		// Parameter names listed in order:
		// Length, Width, Height, Pages, Title, Author, Genre
		Book(int, int, int, int, const char*, const char*, const char*);

	// Destructor (because it's good programming form)
		~Book();

	// Getters
		int getLength();
		int getWidth();
		int getHeight();
		int getPages();
		int getSize();        // int getSize() calculates the volume of the book (useful for shipping purposes)
		const char* getTitle();
		const char* getAuthor();
		const char* getGenre();
		
	// Setters
		void setLength(int);
		void setWidth(int);
		void setHeight(int);
		void setPages(int);
		void setTitle(const char*);
		void setAuthor(const char*);
		void setGenre(const char*);

    protected:
		// The variables that make up a book are kept private here
		int length, width, height, pages;
		const char* title, *author, *genre;
		static const char* DEFAULT;
};

#endif // CLASSES_BOOK_H