#include <iostream>
#include<string>

int main()
{
	//If and else statement
	int x = 20;
	if (x > 0)
	{
		std::cout << "x is positive" << std::endl;
	}
	else
	{
		std::cout << "x is negative" << std::endl;
	}

	
	//While loop
	int n = 10;

	while (n>0)
	{
		std::cout << n << std::endl;
		n--;
	}
	
	std::cout << "WE HAVE LIFT OFFFFFF!!!! " << std::endl;

	
	//The for loop
	for (int i = 10; i > 0; i--)
	{
		std::cout << i << ", ";
	}
	std::cout << "LiFTOFF" << std::endl;

	std::string str {"Hello!"};
	

	//Range-based for loop
	for (char c : str)
	{
		std::cout << "[" << c << "]";
	}
	std::cout<<std::endl;
	

	//The break statement
	for(int t = 10; t >0; t--)
	{
		if (t==3)
		{
			std::cout << "countdown aborted!" << std::endl;
			break;
		}
		std::cout << t << ", ";
	}


	//The continue statement
	for (int s = 10; s > 0; s--)
	{
		if (s==5) 
		{	
			continue;
		}
		std::cout << s << ", ";
	}

	std::cout << "Liftoff!!!" << std::endl;
}
