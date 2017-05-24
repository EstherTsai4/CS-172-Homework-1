#include <iostream>
#include <cmath>
#include <cctype>
#include <iomanip>
using namespace std;
int doubleNumber(int choice)
{
	int doubled = 0;
	return doubled = choice * 2;
}

int sumOfTwoNumbers(int x, int y)
{
	int sum = 0;
	return sum = x + y;
}

void AddOne(int& number)
{
	number++;
}

void ex04()
{
	//part a
	//initialize and declare user's number choice
	int choice = 0;

	//ask user for input
	cout << "Enter in a number between 1 and 10: ";
	cin >> choice;

	//loop until correct input
	while (choice < 1 && choice > 10)
	{
		cout << "Invalid input. Please try again: ";
		cin >> choice;
	}

	//part b
	//keep calculating cubes up to the inputed number and adding onto the sum
	int sum = 0;
	
	for (int i = 1; i <= choice; i++)
	{
		sum += (i*i*i);
	}

	cout << "The sum of the cubes from 1 to " << choice << " is " << sum << endl;

	//part c
	//keeps inputing asterisks until reaches number inputed
	int i = 1;
	do
	{
		cout << "* ";
		i++;
	} while (i <= choice);
	cout << endl;

	//part d
	//output all even numbers from 0 to 40 including 0
	for (int i = 0; i <= 40; i++)
	{
		if (i % 2 == 0)
		{
			cout << left << i << setw(5)<< endl;
		}
	}

	//part e
	cout << "The doubled number is " << doubleNumber(choice) << endl;

	//part f
	//initialize and declare two random numbers
	srand(time(NULL));
	int x = rand() % 100;
	int y = rand() % 100;

	//call function that returns sum of the random numbers
	cout << "The sum of " << x << " and " << y << " is " << sumOfTwoNumbers(x, y) << endl;

	//part g
	//call function that adds one to parameter and outputs the changed parameter
	AddOne(choice);

	//display new number
	cout << "After adding one, your new number is: " << choice << endl;
}
