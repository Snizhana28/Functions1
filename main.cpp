// This is a personal academic project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: https://pvs-studio.com

/*Task 2. Write a function that implements the algorithm
binary search of a given key in a one-dimensional array.*/
#include <iostream>
using namespace std;

void searchKey(int arr[16], int key)
{
	bool cheker = false;
	int l = 0; 
	int r = 15; 
	int mid;

	while ((l <= r) && (cheker != true)) {
		mid = (l + r) / 2; 
		if (arr[mid] == key) cheker = true;
		if (arr[mid] > key) r = mid - 1; 
		else l = mid + 1;
	}

	if (cheker) cout << "Key " << key << " is in the cell " << mid << endl;
	else cout << "This key is not in the array" << endl;
}
int main()
{
	int arr[16]{ 10, 1, 4, 5, 8, 33, 7, 8, 12, 18, 3, 9, 17, 11, 6, 54};
	int key;
	cout << "Enter a key --> ";
	cin >> key;
	searchKey(arr, key);
	for (int i = 0; i < 16; i++) {
		cout << arr[i] << "  ";
	}
	return 0;
}
