#include <iostream>
#include <string>
#include "IExercisesWeek1.h"
#include "ILuckyNumber.h"
#include "ILinearSearchWord.h"
#include "IContainsNumber.h"
#include "IFibonacciNumbers.h"
#include "IOccurencesOfChars.h"
#include "List.cpp"

using namespace std;

class Rectangle {
private:
	int x{ 1 };
	int y{ 1 };	
public:
	//-------------------------------------------------vvv---Same as writing this->x = x; 
	Rectangle(int x = 1, int y = 1, int z = 1) : x(x), y(y){
		
	}
	//This constructor vvv is calling the other one ^^^^^
	/*Rectangle(int x, int y) : Rectangle(x, y, 10) {
	}*/

	~Rectangle(){
		cout << "In Destructor:" << endl; 	
		//delete x
		//delete y

	}

	//Accessor Methods
	int getX() { return x; }
	int getY() { return y; }
	//Mutator Methods
	void SetX(int val) { x = val; }
	void SetY(int val) { y = val; }
	//Facilitator Methods
	int area() { return x * y; }
	int circumference() { return (x * 2) + (y * 2); }
	//Inspector Methods
	bool isSquare() { return x == y; }
};

void DrawSquare(); 
void DrawPog(); 

int main() {

	DrawPog(); 

	/*IOccurencesOfChars occurence;
	occurence.CheckOccurence(); */

	int x = 1; 
	int y = 2; 
	int z = 3; 

	List<int> test = List<int>();
	test.Add(x);
	test.Add(y);
	test.Add(z);
	cout << test[0] << ", ";
	cout << test[1] << ", ";
	cout << test[2] << endl;
	test.Remove(y);
	cout << test[0] << ", ";
	cout << test[1] << ", ";
	cout << test[2];


	/*for (int value : test)
	{
		cout << value << ", ";
	}*/

	/*for (int value : list)
	{
		cout << value << ", ";
	}*/

	/*
	int amount;
	IFibonacciNumbers fibNum; 
	cout << "Amount: ";
	cin >> amount; 
	cout << endl; 
	fibNum.FibNumbers(amount);*/

	/*
	string number; 
	string input; 
	IContainsNumber numberSearch; 
	cout << "Write a number: "; 
	cin >> input; 
	cout << endl; 
	cout << "Search for digit: ";
	cin >> number; 
	cout << endl; 
	cout << input << " contains " << number << " " << boolalpha << numberSearch.Contains(number, input);*/
	
	/*
	string sentence; 
	string word; 
	ILinearSearchWord searchWord; 
	cout << "Write a sentence: ";
	std::getline(std::cin, sentence);
	cout << endl; 
	cout << "Write a word to look for: ";
	cin >> word; 
	cout << endl; 
	searchWord.Search(word, sentence);	*/

	/*
	string input; 
	bool isLucky; 
	ILuckyNumber luckyNumber; 	
	cout << "Write: ";
	cin >> input; 
	cout << endl; 
	isLucky = luckyNumber.IsLucky(input);
	cout << input << " is lucky: " << boolalpha << isLucky;*/

	/*IExercisesWeek1 week1;
	week1.DecompressString();	 
	cout << endl;
	week1.CompressString(); */
	return 0;
}

void DrawSquare(){
	cout << "    __________" << endl;
	cout << "   /         /|" << endl;
	cout << "  /         / |" << endl;
	cout << " /_________/  |" << endl;
	cout << " |~~~~~~~~~|  |" << endl;
	cout << " |~~~~~~~~~|  /" << endl;
	cout << " |~~~~~~~~~| /" << endl;
	cout << " |_________|/" << endl;
	cout << endl;
	cout << endl;
}

void DrawPog()
{
	cout << "    ______   ______   ______ " << endl;
	cout << "   |   _  | |   _  | |  ____|" << endl; 
	cout << "   |  |_| | |  | | | | | ___" << endl;
	cout << "   | _____| |  | | | | ||__ |" << endl; 
	cout << "   | |      |  |_| | | |___||" << endl; 
	cout << "   |_|      |______| |______|" << endl;
	cout << endl;
	cout << endl;
}

//if rect is a pointer and you want to access it's members, -> works instead of (*rect)
//rect->isSquare()

//If you want displayed booleans to be true/false instead of 1/0
//cout << boolalpha;

/* Simple class with constructor
class Rectangle {
public:
	int x;
	int y;
	int width;
	int height;

	Rectangle(int X, int Y, int Width, int Height){
		x = X;
		y = Y;
		width = Width > 0 ? Width : 1;
		height = Height > 0 ? Height : 1;
	}
};*/


//Useful for replacing V V   with V V
//typedef unsigned long long int Bigint; 

/*	int* ptr = new int[100]{}; //Ends up in stack which points to the first bytes of the array in the heap
	//ptr is reassigned and loses the adress to the array. The array still exists in memory which makes this a memory leak. The memory is there but there's no way to access it.
	//ptr should be deleted and reset before being reassigned. Reset { delete[] ptr; ptr = nullptr }
	ptr = new int{ 100 };
	delete[] ptr;
	ptr = nullptr; */

/*
	 __________
    /		  /| 
   /		 / | 
  /_________/  | 
  |		    |  |
  |		    |  /
  |		    | /
  |_________|/

*/
/*
     ______   ______   ______  
    |   _  | |   _  | |  ____|
    |  |_| | |  | | | | | ___
    | _____| |  | | | | ||__ |
    | |      |  |_| | | |___||
    |_|      |______| |______|
*/