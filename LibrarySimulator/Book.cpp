#include "stdafx.h"
#include "Book.h"


Book::Book()
{
}


Book::~Book()
{
}

std::string Book::getAuthor(){
	return author;
}

void Book::setAuthor(std::string author){
	this->author = author;
}

std::string Book::getTitle(){
	return title;
}

void Book::setTitle(std::string title){
	this->title = title;
}

int Book::getPages(){
	return pages;
}

void Book::setPages(int pages){
	this->pages = pages;
}



