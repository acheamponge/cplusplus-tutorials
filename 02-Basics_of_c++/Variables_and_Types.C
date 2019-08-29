#include <iostream>
#include <typeinfo> //allows us to find the variable type
#include <string>
int main()
{
	//declaring variables:
	int a, b, result;
	float c = 0.20;
	char d = 'a';

	//variable assignment:
	a = 5;
	b=2;
	a++; //same as a = a+1;
	result = a-b;

	//variable initialization:
	int e = 7;
	int f(3);
	int g{2};
	int r;

	e = e - f;
	r = e - g;

	int foo = 0;
	auto bar = foo;

	std::string mystr = "This is a string";

	std::cout << "Variable a is: " << a << " - Type: " << typeid(a).name() << std::endl;
	std::cout << "Variable result is: " << result << " - Type: " << typeid(result).name() << std::endl;
	std::cout << "Variable c is: " << c << " - Type: " << typeid(c).name() << std::endl;
	std::cout << "Variable d is: " << d << " - Type: " << typeid(d).name() << std::endl;
	std::cout << "Variable r is: " << r << std::endl;
	std::cout << "Variable mystr: " << mystr << " - Type: " << typeid(mystr).name() << std::endl;
	std::cout << "Variable bar: " << bar << " - Type: " << typeid(bar).name() << std::endl;
}

