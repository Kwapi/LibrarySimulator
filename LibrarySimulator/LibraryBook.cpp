#include "stdafx.h"
#include "LibraryBook.h"


LibraryBook::LibraryBook()
{
}


LibraryBook::~LibraryBook()
{
}






LibraryBook::Status LibraryBook::getStatus(){
	return status;
}

void LibraryBook::setStatus(LibraryBook::Status status){
	this->status = status;
}

std::string LibraryBook::getClassification(){
	return classification;
}

void LibraryBook::setClassification(std::string classification){
	this->classification = classification;
}

