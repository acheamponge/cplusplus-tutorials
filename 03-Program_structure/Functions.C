#include <iostream>

int addition(int a, int b)
{
	int r;
	r = a+b;
	return r;
}

int subtraction(int a, int b)
{
	int r;
	r = a-b;
	return r;
}


//Functions with no type.
void printmessage()
{
	std::cout << "I am a function" << std::endl;
}


//Arguments passed by value and by reference
void duplicate (int& a, int& b, int& c)
{
	a*=2;
	b*=2;
	c*=2;
}



//Default values in parameters
int divide (int a, int b=2)
{
	int r;
	r = a/b;
	return r;
}



//Recursivity
long factorial (long a)
{
	if (a>1)
	{
		return (a*factorial(a-1));
	}
	else
	{
		return 1;
	}
}

int main()
{
	int z;
	z = addition(5,3);
	int a, b, c;
	int y = subtraction(7,2);
	duplicate(a =1, b=3, c=7);
	std::cout << "The addition of 5, 3 result is " << z << std::endl;
	std::cout << "The subtraction of 7,2 result is " << y << std::endl;
	std::cout << "a= " << a << ", b= " << b << ", c= " << c << std::endl;
	printmessage();
	std::cout << divide(12) << std::endl;
	std::cout << divide(20,4)<<std::endl;
	long number=9;
	std::cout << number << "! = " << factorial(number)<<std::endl;

}
