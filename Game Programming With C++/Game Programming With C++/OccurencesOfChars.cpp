#include "IOccurencesOfChars.h"
#include <iostream>
#include <string>

void IOccurencesOfChars::CheckOccurence()
{
	std::string input;
	std::string output; 

	std::cout << "Write a word: "; 
	std::cin >> input; 
	std::cout << std::endl; 
	
	for (size_t i = 0; i < input.length(); i++)
	{
		char current = input[i];
		int count = 0; 
		bool hasCharacter = false; 

		for (size_t k = 0; k < output.length(); k++)
		{
			char currentOut = output[k];
			if (currentOut == current)
				hasCharacter = true; 
		}

		if (hasCharacter)
			continue;
		

		for (size_t j = i; j < input.length(); j++)
		{
			char next = input[j];

			if (current == next)
				count++;
		}

		output += current;
		output += " = ";
		output += std::to_string(count);
		output += "\n";
	}

	std::cout << output; 
}