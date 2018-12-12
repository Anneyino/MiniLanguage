// ReentrantApp.cpp : Defines the entry point for the console application.
//

#include "ScannerParserCL.h"

#include <iostream>

int main()
{
	ScannerParserCL pt;
	string fileName;
	std::cout << "Input the source file name: " << endl;
	std::cin >> fileName;
	lineNumber = 1;
	IsProgramCorrect = true;
	pt.RunParser(fileName);


	std::cout << "Type any key"; char c = std::cin.get();

	system("pause");
	return 0;
}