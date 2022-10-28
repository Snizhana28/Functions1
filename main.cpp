// This is a personal academic project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: https://pvs-studio.com
/*Task 5. Write a function that determines whether a six-digit number is "lucky"*/
#include <iostream>
using namespace std;

void LuckyNumber(int number)
{
	int n1, n2, n3, n4, n5, n6;
	n1 = number / 100000; //1
	n2 = (number / 10000) % 10; //2
	n3 = (number / 1000) % 10;//3
	n4 = (number / 100) % 10;//4
	n5 = (number / 10) % 10;//5
	n6 = number % 10; //6
	if (n1 + n2 + n3 == n4 + n5 + n6)
	{
		cout << "This is a lucky number !";
	}
	else
		cout << "This is not a lucky number !";
}

int main()
{
	int number;
	cout << "Enter a six-digit number : ";
	cin >> number;
	LuckyNumber(number);

	return 0;
}