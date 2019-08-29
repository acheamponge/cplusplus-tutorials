/*What is a compiler?
 

  A Compiler basically translates a c++ program into machine language code.

  For this project, since the c++ code is written in a Google Cloud Platform instance in a Linux 
  environment, the compiler used is g++

*/

#include <iostream>
#include <string>

int main()
{	
	std::string mystr = "A compiler basically translates a c++ program into machine language code.";
	std::string mystr2 = "For this project, since the c++ code is written in a Google Cloud Platform instance in a Linux environment, the compiler used is g++";

	std::cout << mystr << std::endl << std::endl << mystr2 << std::endl;
}
