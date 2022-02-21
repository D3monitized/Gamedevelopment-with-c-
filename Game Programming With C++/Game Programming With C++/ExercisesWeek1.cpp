#include "IExercisesWeek1.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std; 

void IExercisesWeek1::CompressString()
{
	cout << "Compress string: " << endl;
	cout << endl;

	string input;
	string output;
	int length;

	cout << "Write: ";
	cin >> input;

	length = input.length();
	char current = NULL;
	int iterrations = 0;

	for (int i = 0; i < length; i++)
	{
		iterrations++;
		current = input[i];
		char next = i + 1 < length ? input[i + 1] : NULL;
		if (next != NULL && current != next)
		{
			output += current;
			output += to_string(iterrations);
			iterrations = 0;
		}
		else if (i == length - 1)
		{
			output += current;
			output += to_string(iterrations);
		}
	}

	cout << "Result: " << output;
}

void IExercisesWeek1::DecompressString()
{
	cout << "Decompress string: " << endl;
	cout << endl;

	string input;
	string output;
	int length;

	cout << "Write: ";
	cin >> input;
	length = input.length();
	int iterrations = 0; 

	
	for (int i = 0; i < length; i++)
	{
		char letter = input[i];
		int digit = 0;
		stringstream stream;
		stream << input[i + 1];
		if (i + 2 < length && isdigit(input[i + 2])) //If 2 digit number
		{			
			stream << input[i + 2];
			stream >> digit; 
			iterrations = 2; 
		}
		else{
			stream >> digit;
			iterrations = 1; 
		}
		
		for (int j = 0; j < digit; j++)
		{
			output += letter;
		}

		if (i + iterrations < length)
			i += iterrations;
		else
			break; 

		iterrations = 0; 
	}

	cout << "Result: " << output; 
}