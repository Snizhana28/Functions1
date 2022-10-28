// This is a personal academic project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: https://pvs-studio.com
/*Task 2. Write a function that receives as
parameters of 2 integers and returns the sum of the numbers in the range between them*/
#include <iostream>
using namespace std;

int Suma(int num1, int num2)
{
    int sum = 0;
    for (int i = num1+1; i < num2; i++)
        sum += i;
    return sum;
}

int main()
{
	int num1, num2;
	cout << "Enter a number 1 : ";
	cin >> num1;
	cout << "Enter a number 2 : ";
	cin >> num2;
	cout << "Result (Suma) : " << Suma(num1, num2);
	return 0;
}