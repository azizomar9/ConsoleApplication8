// ConsoleApplication8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>	
#include <fstream>

using namespace std; 

int main()
{
	int num, sum = 0; 

	ifstream infile;
	infile.open("C:\\Users\\W210403422\\Desktop\\test.txt");
	infile >> num;
	sum = num; 
	while (!infile.eof()) {
		infile >> num;
		sum = num + sum;
			}
	cout << "The sum of all the values " << " " << sum;
    return 0;
}

