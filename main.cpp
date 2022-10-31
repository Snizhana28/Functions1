// This is a personal academic project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: https://pvs-studio.com

/*Task 3. Write a function to convert a number,
written in binary form, in the decimal system.*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void binary(string number)
{
	int decNumber = 0;
	for (int i = 0; i < number.size(); i++)
	{
		decNumber += (number[i] - '0') * pow(2, number.size(); - i - 1);
	}
	cout << "Decimal number: ";
	cout << decNumber << endl;
}

int main()
{
	cout << "Enter binary number" << endl;
	string number;
	cin >> number;
	binary(number);
	return 0;
}
