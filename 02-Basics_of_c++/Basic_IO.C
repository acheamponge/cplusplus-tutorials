//io example

#include <iostream>
#include <string>

int main()
{
	int i;
	//std::cout << "Please enter an integer value: ";
	//std::cin >> i;
	//std::cout << "The value you entered is : " << i;
	//std::cout << " and its double is " <<i *2 << std::endl;

	//unfortunately cin considers spaces as terminating in order to get around this use getline.
	std::string name;
	std::cout << "Please, enter your full name: ";
	std::getline (std::cin,name);
	std::cout << "Hello, " << name << "!\n";
}

