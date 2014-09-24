/*
	
	Logic 1
	Program 8
	September 23rd, 2014
	Daniel Perez

	This program gets the age, gender, and # of children, then displays that information withthe number of people surveyed,
	the total # of people 40+, total under 40, total males and females, and average # of females.
	
*/

#include <iostream>
using namespace std;



void main()
{

	int    age;
	char   gender;
	int    children;
	int    totalPeople;
	int    totalMales;
	int    totalFemales;
	double avgChildren;
	int    fortyPlus;
	int    under40;
	int    sumChildren;
	

	totalPeople  = 0;
	totalMales   = 0;
	totalFemales = 0;
	avgChildren  = 0;
	fortyPlus    = 0;
	under40      = 0;
	sumChildren  = 0;
	

	cout << "Survey # 1" << endl;
	cout << "Enter An age (18 or over, 0 to stop): ";
	cin  >> age;
	if (age < 0)
	{
		cout << "Invalid. Re-enter: ";
		cin  >> age;
	}
	while (age >= 1 && age <= 18)
	{
		cout << "Invalid. Re-enter: ";
		cin  >> age;
	}
	while (age != 0 && age >= 0)
	{

		totalPeople = totalPeople + 1;

		cout << "Enter gender (M or F): ";
		cin  >> gender;

		gender = toupper(gender);
		
		while (gender != 'M' && gender != 'F')
		{
			cout << "Invalid. Re-enter: ";
			cin  >> gender;
			gender = toupper(gender);
		}
		if (gender = 'M')
		{
			totalMales = totalMales + 1;
		}
		if (gender = 'F')
		{
			totalFemales = totalFemales + 1;
		}

		cout << "Enter # of Children: ";
		cin  >> children;

		while (children < 0)
		{
			cout << "Invalid. Re-enter: ";
			cin  >> children;
		}

		sumChildren = sumChildren + children;

		if (age >= 40)
		{
			fortyPlus = fortyPlus + 1;
		}
		else
		{
			under40 = under40 + 1;
		}

		cout << "Survey # " << totalPeople + 1 << endl;
		cout << "Enter another age: (18 or over, 0 to stop): ";
		cin  >> age;
		while (age < 0)
		{
			cout << "Invalid. Re-enter; ";
			cin  >> age;
		}


	}

	if (totalPeople > 1)
	{
		avgChildren = (sumChildren * 1.0) / totalPeople;

		cout << "Number of People Surveyed:  " << totalPeople << endl;
		cout << "Number of People over 40:   " << fortyPlus << endl;
		cout << "Number of People under 40:  " << under40 << endl;
		cout << "Number of Males Surveyed:   " << totalMales << endl;
		cout << "Number of Females Surveyed: " << totalFemales << endl;
		cout << "Average Number of Children: " << avgChildren << endl;
	}
}


