#include <iostream>
#include <cstdbool>
#include <ctime>
#include <cctype>
#include <cmath>
#include <string>
#include <sstream>
using namespace std;

void ex02()
{
	//part a: initialize and declare hasPassedTest
	bool hasPassedTest = true;

	//part b
	//initializes and declares random numbers for variables x and y
	srand(time(NULL));
	int x = rand() % 100;
	int y = rand() % 100;

	//checks to see which one is greater
	if (x > y)
	{
		cout << "x " << x << " is greater than y " << y << "." << endl;
	}
	else if (x < y)
	{
		cout << "x " << x << " is less than y " << y << "." << endl;
	}
	else if (x == y) //PT: could just use else here
	{
		cout << "x " << x << " is equal to y " << y << "." << endl;
	}

	//part c
	//declare and initialize numberOfShares
	int numberOfShares = 0;

	//prompt user to enter value for numberOfShares
	cout << "Enter in the number of shares: ";
	cin >> numberOfShares;

	//checks if number is less than 100
	if (numberOfShares < 100)
	{
		cout << "The number of shares is less than 100." << endl;
	}
	else
	{
		cout << "The number of shares is greater than 100." << endl;
	}

	//part d
	//declare and initialize variables for box width and book width
	int boxWidth = 10;
	int bookWidth = 10;

	//ask user to enter in a box width and book width
	cout << "Enter in a box width : ";
	cin >> boxWidth;
	cout << "Enter in a book width: ";
	cin >> bookWidth;

	//see if the box width is evenly divisible by the book width
	if (boxWidth % bookWidth == 0)
	{
		cout << "The box width is evenly divisible by the book width." << endl;
	}
	else
	{
		cout << "The box width is not evenly divisible by the book width." << endl;
	}

	//part e
	//declare and initialize variables for shelf life and outside temperature
	int ShelfLife = 0;
	int OutsideTemp = 0;

	//ask user for shelf life and outside temperature
	cout << "What is the shelf life of the box of chocolate in months? " << endl;
	cin >> ShelfLife;
	cout << "What is the outside temperature in Fahrenheit? " << endl;
	cin >> OutsideTemp;

	//decrease shelf life by 4 if outside temp is greater than 90
	if (OutsideTemp > 90)
	{
		ShelfLife -= 4;
		cout << "The shelf life of your box of chocolates is now " << ShelfLife << endl;
	}
	else
	{
		cout << "The shelf life of your box of chocolates is " << ShelfLife << endl;
	}
}
