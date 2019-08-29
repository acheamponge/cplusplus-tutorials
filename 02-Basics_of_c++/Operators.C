#include <iostream>

// assignment operator =
// ternary operator ?

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

	int d, e = 3;
	std::cout << "d : " << d << " , e : " << e << std::endl;
	d = e;
	std::cout << "d : " << d << " , e : " << e << std::endl;
	d += 2;
	std::cout << "d : " << d << " , e : " << e << std::endl;

	int f,g;
	f = 2;
	g = 7;
	
	std::cout << ((a>b) ? a : b) << std::endl;

	int i;
	float j = 3.14;
	i = int(j);
	std::cout << i << std::endl;
}
