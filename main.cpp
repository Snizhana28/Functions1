// This is a personal academic project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: https://pvs-studio.com

/*Task 4. Write a function that displays on the screen
the playing card given to her*/
#include <iostream>
#include <iomanip>
using namespace std;

int playing—ard(char card, char simbol)
{
	int result = 1;
	char hl = (char)196; //horizontal line
	char vl = (char)179; //vertical line
	int indent = 6;
	cout << (char)218 << hl << hl << hl << hl << hl << hl << hl << (char)191 << endl << vl;
	if (card == '0')
	{
		indent = 5;
		cout << '1';
	}
	cout << card << simbol << "\t" << vl << endl <<
		vl << "\t" << vl << endl <<
		vl << "\t" << vl << endl <<
		vl << "\t" << vl << endl <<
		vl << "\t" << vl << endl <<
		vl << setw(indent) << simbol;
	if (card == '0')
	{
		cout << '1';
	}
	cout << card << vl << endl << (char)192 << hl << hl << hl << hl << hl << hl << hl << (char)217 << endl;
	return result;
}

int main()
{
	int result;
	char simbol;
	char card;
	cout << "Enter number card\nformat: 6, 7, 8, 9, 10, J, D, K, A"<< endl;
	cin >> card;
	cout << "Enter simbol\nformat: *, +, &, #" << endl;
	cin >> simbol;
	result = playing—ard(card, simbol);
	return 0;
}