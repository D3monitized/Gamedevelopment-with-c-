#include "IFibonacciNumbers.h"
#include <iostream>
#include <string>

void IFibonacciNumbers::FibNumbers(int& amount)
{
	int n1 = 0; 
	int n2 = 0; 

	for (size_t i = 0; i < amount + 1; i++)
	{					
		if (i == 1)
		{
			std::cout << "1, ";
			n2 = 1; 
		}			
		else
		{
			int result = n1 + n2; 
			std::cout << std::to_string(result) << ", ";
			n1 = n2; 
			n2 = result; 
		}
	}
}