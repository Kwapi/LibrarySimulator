#pragma once

#include <string>
#include <iostream>

class Book
{
public:
	Book();
	~Book();

	std::string getAuthor();
	void setAuthor(std::string);
	std::string getTitle();
	void setTitle(std::string);
	int getPages();
	void setPages(int);


private:
	std::string author;
	std::string title;
	int	pages;


};

