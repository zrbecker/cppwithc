
#include <iostream>

extern "C"
{

int MyFunc(int n)
{
	std::cout << "You entered: " << n << std::endl;
	std::cout << "I return: " << 2 * n << std::endl;
	return 2 * n;
}

}

