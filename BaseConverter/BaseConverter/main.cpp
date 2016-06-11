#include <string>
#include <iostream>
#include <cmath>
#include <vector>
#include <sstream>

void InterpretInput();
std::vector<std::string> &split(const std::string &s, char delim, std::vector<std::string> &elems);
std::vector<std::string> split(const std::string &s, char delim);
void CalculateDigits();
void CalculateValue();

unsigned int InputBase;	//Base of the input
unsigned int OutputBase;	//Base of the output
std::string InputStr;		//raw input string
std::string ValueStr;		//just the part that is the input value
std::vector<int> Digits;	//the input value put into a array of ints, one for each digit
int DecValue = 0;				//the decimal equivent of the input

int main()
{
	std::cout << "Please type input:\n\n";

	std::getline(std::cin, InputStr);

	InterpretInput();
	CalculateDigits();
	CalculateValue();

	std::cout << DecValue;

	std::cin >> InputBase;	//just to stop the program from closing
}

void CalculateValue()
{
	for (int i = 0; i < Digits.size(); i++)
	{
		DecValue += Digits[i] * pow(InputBase, Digits.size() - 1 - i);
	}
}

void CalculateDigits()
{
	for (int i = 0; i < ValueStr.size(); i++)
	{
		if (ValueStr[i] == '0')
			Digits.push_back(0);

		if (ValueStr[i] == '1')
			Digits.push_back(1);

		if (ValueStr[i] == '2')
			Digits.push_back(2);

		if (ValueStr[i] == '3')
			Digits.push_back(3);

		if (ValueStr[i] == '4')
			Digits.push_back(4);

		if (ValueStr[i] == '5')
			Digits.push_back(5);

		if (ValueStr[i] == '6')
			Digits.push_back(6);

		if (ValueStr[i] == '7')
			Digits.push_back(7);

		if (ValueStr[i] == '8')
			Digits.push_back(8);

		if (ValueStr[i] == '9')
			Digits.push_back(9);

		if (ValueStr[i] == 'A')
			Digits.push_back(10);

		if (ValueStr[i] == 'B')
			Digits.push_back(11);

		if (ValueStr[i] == 'C')
			Digits.push_back(12);

		if (ValueStr[i] == 'D')
			Digits.push_back(13);

		if (ValueStr[i] == 'E')
			Digits.push_back(14);

		if (ValueStr[i] == 'F')
			Digits.push_back(15);
	}
}

void InterpretInput()
{
	std::vector<std::string> SplitString = split(InputStr, ' ');

	if (SplitString[0] == "bin")
		InputBase = 2;

	if (SplitString[0] == "oct")
		InputBase = 8;

	if (SplitString[0] == "dec")
		InputBase = 10;

	if (SplitString[0] == "hex")
		InputBase = 16;

	ValueStr = SplitString[1];

	if (SplitString[2] == "bin")
		OutputBase = 2;

	if (SplitString[2] == "oct")
		OutputBase = 8;

	if (SplitString[2] == "dec")
		OutputBase = 10;

	if (SplitString[2] == "hex")
		OutputBase = 16;
}


///Thanks stack overflow
/*
The first puts the results in a pre-constructed vector, the second returns a new vector.
*/
std::vector<std::string> &split(const std::string &s, char delim, std::vector<std::string> &elems)
{
	std::stringstream ss(s);
	std::string item;

	while (std::getline(ss, item, delim)) {
		elems.push_back(item);
	}
	return elems;
}

std::vector<std::string> split(const std::string &s, char delim)
{
	std::vector<std::string> elems;
	split(s, delim, elems);
	return elems;
}
///End thanks