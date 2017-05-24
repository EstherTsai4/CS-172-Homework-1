#include <iostream>
#include <string>
#include <cctype>
#include <cmath>
using namespace std;

void ex03()
{
	//part a
	//initialize and declare variable for the area of a square
	int area = 0;

	//ask user to input area of square
	cout << "Enter in the area of the square: ";
	cin >> area;

	//calculate the side lengths of the square
	double sideLength = 0;
	sideLength = sqrt(area);

	//calculate the diagonal of the square
	const double x = sqrt(2.0);
	double diagonal = 0;
	diagonal = sideLength*x;

	//output the diagonal length to the user
	cout << "The length of the square's diagonal is " << diagonal << endl;

	//part b
	//initialize and declare user's character choice
	char choice = 'a';

	//ask user for choice
	cout << "Enter in y or n: ";
	cin >> choice;

	//see if they inputed a yes or no
	if (tolower(choice) == 'y')
	{
		cout << "yes" << endl;
	}
	else if (tolower(choice) == 'n')
	{
		cout << "no" << endl;
	}
	else
	{
		cout << "Invalid input." << endl;
	}

	//part c
	//initialize char variable tab to tab character
	char tab = '\t';

	//part d
	//initialize and declare string variable
	string mailingAddress;

	//ask user to input their mailing address
	cout << "Enter your mailing address: ";
	cin.ignore();
	getline(cin, mailingAddress);
	cout << "You entered: " << mailingAddress << endl;

	//part e: initialize string variable to empty string
	string variable = " ";
}
