// Exercise2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Answer
{
public:
	string firstName;
	string lastName;
	int age;
	int dogAge;
	int con;

	Answer()
	{
		cout << "What is your first name: ";
		cin >> firstName;
		cout << "What is your last name: ";
		cin >> lastName;
		cout << "What is your age: ";
		cin >> age;
		cout << "What is your confidence in programmers between (0 - 100): ";
		cin >> con;

		dogAge = age * 7;
	}
};

void confidence(int x)
{
	double convert;
	convert = (double)x / 100;

	if (convert < 0.5)
	{
		cout << "I agree, programmers can't be trusted!\n";
	}
	else
	{
		cout << "Writing good code takes hard work!\n";
	}
}

void getOutput(Answer x)
{
	cout << "Hello " << x.firstName << " " << x.lastName << ", nice to meet you! You might be " << x.age << " in human years, but in dog years you are " << x.dogAge << endl;
	confidence(x.con);
}

int main(int argv, char* argc[])
{
	Answer ans;
	getOutput(ans);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
