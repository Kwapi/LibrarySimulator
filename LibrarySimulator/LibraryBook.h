#pragma once
#include "Book.h"



class LibraryBook :
	public Book
{
public:
	enum Status
	{
		ON_LOAN,
		AVAILABLE_FOR_LENDING,
		REFERENCE_ONLY
	};

	LibraryBook();
	~LibraryBook();

	Status getStatus();
	void setStatus(Status);
	std::string getClassification();
	void setClassification(std::string classification);

private:

	Status status;
	std::string classification;
};

