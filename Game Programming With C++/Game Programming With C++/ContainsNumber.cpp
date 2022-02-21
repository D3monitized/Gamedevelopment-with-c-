#include "IContainsNumber.h"
#include <iostream>
#include <string>

bool IContainsNumber::Contains(std::string& number, std::string& input)
{
	for (size_t i = 0; i < input.length(); i++)
	{
		char current = input[i];
		std::string temp; 
		temp += current; 
		if (temp == number)
			return true;
		else if (i == input.length() - 1)
			return false; 

		temp = "";
	}
}