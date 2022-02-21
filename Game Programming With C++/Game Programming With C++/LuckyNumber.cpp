#include<iostream>
#include<string>
#include "ILuckyNumber.h"
#include <sstream>

using namespace std; 

bool ILuckyNumber::IsLucky(string& input)
{
	int number[10] = {};	
	bool isLucky = true; 

	for (size_t i = 0; i < input.length(); i++)
	{
		int digit;
		stringstream stream; 
		stream << input[i]; 
		stream >> digit; 
		
		
		for (int j = 0; j < size(number); j++)
		{
			if (number[j] == digit)
				isLucky = false;
			else if (number[j] != NULL && j != 0)
				continue; 

			number[j] = digit;
			break; 
		}	

		stream.clear(); 
	}

	return isLucky; 
}

