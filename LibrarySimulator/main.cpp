// LibrarySimulator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void readFile();

int _tmain(int argc, _TCHAR* argv[])
{

	std::cout << "FUCK" << std::endl;
	readFile();

	//prevents from exiting the program
	std::getchar();
	return 0;
}

inline bool TextContains(char *text, char ch) {
	while (*text) {
		if (*text++ == ch)
			return true;
	}
	return false;
}

void Split(char *text, char *delims, std::vector<std::string> &words) {
	int beg;
	for (int i = 0; text[i]; ++i) {
		// While the current char is a delimiter, inc i
		while (text[i] && TextContains(delims, text[i]))
			++i;
		// Beginning of word
		beg = i;
		// Continue until end of word is reached
		while (text[i] && !TextContains(delims, text[i]))
			++i;
		// Add word to vector
		words.push_back(std::string(&text[beg], &text[i]));
	}
}

void readFile(){

	std::string line;
	std::ifstream myfile("librarybooks.txt");
	std::vector<std::string> words;
	std::stringstream ss;

	std::string author;
	std::string title;
	int pages;
	std::string classification;

	if (myfile.is_open()){

		
		while (std::getline(myfile, line)){
			std::cout << line << std::endl;
			//char *cstr = &line[0u];
			//Split(cstr, ", ", words);
			//for (size_t i = 0; i < words.size(); ++i)
			//	std::cout << words[i] << '\n';
			for (std::string::size_type i = 0; i < line.size(); ++i) {
				
				if(line[i] != ','){
					ss << line[i];
				}
				else{
					break;
				}


			}
			std::cout << ss.str() << std::endl;

			break;
		}

		myfile.close();
	}
	else std::cout << "Unable to open file";
	


	
	

}



