#include <iostream>

// assignment operator =

int main()
{
	int a, b;
	std::cout << "a : " << a << " , b : " << b << std::endl;
	a = 10;
	std::cout << "a : " << a << " , b : " << b << std::endl;
	b = 4;
	std::cout << "a : " << a << " , b : " << b << std::endl;
	a = b;
	std::cout << "a : " << a << " , b : " << b << std::endl;
	b = 7;
	std::cout << "a : " << a << " , b : " << b << std::endl;

	int x, y, z;
	x=y=z=5;
	std::cout << "x : " << x << " , y : " << y << ", z : "<< z  << std::endl;
}
