#include "ILinearSearchWord.h"
#include <iostream>

void ILinearSearchWord::Search(std::string& word, std::string& sentence)
{
	std::string tempWord;
	bool containsWord = false; 

	for (size_t j = 0; j < sentence.length(); j++)
	{
		char currentSentence = sentence[j];

		if (!isspace(currentSentence))
			tempWord += currentSentence;
		else if (word == tempWord)
		{
			containsWord = true;
			break;
		}			
		else
			tempWord = "";

		if (j == sentence.length() - 1)
			containsWord = word == tempWord; 
	}

	if (containsWord)
		std::cout << "the sentence contains: " << word;
	else
		std::cout << "the sentence doesn't contain: " << word;
}