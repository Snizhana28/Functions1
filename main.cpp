// This is a personal academic project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: https://pvs-studio.com
/*Task 3. A number is called perfect if the sum
of all its divisors is equal to itself. Write
the search function for such numbers in the entered interval*/
#include <iostream>
using namespace std;

int Perfect_num(int x, int y)
{
    for (int i = x; i < y; i++)
    {
        int sum = 0;
        for (int j = 1; j < i; j++)
        {
            if ((i % j) == 0)
                sum += j;
        }
        if (sum == i)
            cout << "This is a perfect number! "<< sum << endl;
    }
    return 0;
}

int main()
{
    int x, y;
    cout << "Enter a interval (number 1) : ";
    cin >> x;
    cout << "Enter a interval (number 2) : ";
    cin >> y;
    Perfect_num(x, y);
   
	return 0;
}