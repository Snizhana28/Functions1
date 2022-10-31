/*Task 1. Write a function that implements the algorithm
linear search for a given key in a one-dimensional array*/
// This is a personal academic project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: https://pvs-studio.com
#include <iostream>
using namespace std;

void searchKey(int arr[15], int key)
{
	bool cheker = false;
	for (int i = 0; i < 15; i++)
	{
		if (arr[i] == key) {
			cheker = true;
			cout << "Key " << arr[i] << " is in the cell " << i << endl;
		}
	}
	if (!cheker)
		cout << "This key is not in the array" << endl;
}

int main()
{
	int arr[15]{ 10, 1, 4, 5, 8, 33, 7, 8, 12, 18, 3, 9, 17, 11, 6};
	int key;
	cout << "Enter a key --> ";
	cin >> key;
	searchKey(arr, key);
	for (int i = 0; i < 15; i++){
		cout << arr[i] << "  ";
	}
	return 0;
}

