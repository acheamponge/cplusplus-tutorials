#include <iostream>

//Preprocessor definitions #DEFINE
#define PI  3.14159
#define NEWLINE std::endl;

//Typed Constants: 
//
const double pi = 3.14159; 
const char newline = '\n';

int main()
{
	double r= 5.0;
	double circle;

	circle = 2 * pi * r;
	std::cout << circle << newline;
	std::cout << 2 * PI * r << NEWLINE;
}
