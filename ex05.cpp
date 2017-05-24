#include <iostream>
#include <iomanip>
#include <cstdbool>
using namespace std;

void integerArray(int integer[], int count)
{
	for (int i = 1; i <= count; i++)
	{
		cout << integer[i] << setw(5);
	}
	cout << endl;

}

void inArray(int integer[], int count)
{
	//initialize and declare value
	int value = 0;

	//asks user for value
	cout << "Enter in a value: ";
	cin >> value;

	//goes through array and sees if the value is in the array
	bool isArray = false;
	for (int i = 1; i <= count; i++)
	{
		if (value == integer[i])
		{
			cout << "The value you entered is in the array." << endl;
			bool isArray = true;
			break;
		}
	}
	if (isArray == false)
	{
		cout << "The value you entered is not in the array." << endl;
	}
}
void ex05()
{
	//part a
	//initialize and declare array for integers
	const int count = 5;
	int integer[count];

	//asks user for 5 integers and stores each in an array
	cout << "Enter in 5 integers: ";

	for (int i = 1; i <= 5; i++)
	{
		cin >> integer[i];
	}

	//part b
	//calulate sum of values in integers from part a
	int sum = 0;
	for (int i = 1; i <= 5; i++)
	{
		sum += integer[i];
	}

	cout << "The sum of the 5 integers is: " << sum << endl;

	//calculate product of integer values in array
	int product = 1;
	for (int i = 1; i <= 5; i++)
	{
		product *= integer[i];
	}

	cout << "The product of the 5 integers is: " << product << endl;

	//part c
	//calls function that takes array and size of array then outputs value from array
	integerArray(integer, count);

	//part d
	//calls function that takes array integer[count] and asks user for value then sees whether the array contains that value
	inArray(integer, count);
}