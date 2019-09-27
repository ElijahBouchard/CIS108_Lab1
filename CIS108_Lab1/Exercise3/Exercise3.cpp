// Exercise3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

bool primeNumber(int num)
{
	bool prime = true;
	for (int i = 2; i < num; i++)
	{
		if (num%i == 0)
		{
			prime = false;
			break;
		}
	}

	return prime;
}

int sum()
{
	int s = 0;
	for (int i = 2; i < 1000; i++)
	{
		if (primeNumber(i))
		{
			s += i;
		}
	}

	cout << "The sum of every prime number between 1-1000 is: " << s << endl;
	return s;
}

int product()
{
	int prod = 1;
	for (int i = 2; i < 1000; i++)
	{
		if (primeNumber(i))
		{
			prod *= i;
		}
	}

	cout << "The product of every prime number between 1-1000 is: " << prod << endl;
	return prod;
}

int main(int argv, char* argc[])
{
	sum();
	product();
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
