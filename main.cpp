// This is a personal academic project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: https://pvs-studio.com
/*Task 1. Write a function that accepts two pairs of meters: 
the base of the power and the exponent of the power, and calculates
the power of the number based on the received data*/
#include <iostream>
using namespace std;

int Power(int number, int exponent)
{
    if (exponent == 0)
        return 1;
    if (exponent == 1)
        return number;
    int result = number;
    for (int i = 0; i < exponent - 1; i++)
        result *= number;
    
    return result;
}

int main()
{
	int number, exponent;
	cout << "Enter a number (base of the power): ";
	cin >> number;
	cout << "Enter the exponent: ";
	cin >> exponent;
	cout << "Result : " << Power(number, exponent);
	
	return 0;
}