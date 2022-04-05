#include <iostream>
using namespace std;
int again {1};
int main()
{
	while (again == 1)
	{
		char operation {0};
		double firstNumber {0};
		double secondNumber {0};

		cout << "Enter first number: ";
		cin >> firstNumber;
		cout << "Enter operation (addition: +, subtraction: -, multiplication: *, division: /, test of relation: =, square: ^): ";
		cin >> operation;
		if (operation != 94)
		{	
			cout << "Enter second number: ";
			cin >> secondNumber;
		}

		if (operation == 43) //addition
		{
			cout << "The result is " << firstNumber + secondNumber << endl;
		}
		else if (operation == 45) //subtraction
		{
			cout << "The result is " << firstNumber - secondNumber << endl;
		}
		else if (operation == 42) //multiplication
		{
			cout << "The result is " << firstNumber * secondNumber << endl;
		}
		else if (operation == 47 && secondNumber != 0) //division
		{
			double result {firstNumber / secondNumber};
			cout << "The result is " << result << endl;
		}
		else if (operation == 61) //test of equality
		{
			if (firstNumber == secondNumber)
			{
				cout << "The first number equals the second" << endl;
			}
			if (firstNumber < secondNumber)
			{
				cout << "The first number is less than the second" << endl;
			}
			if (firstNumber > secondNumber)
			{
				cout << "The first number is greater than the second" << endl;
			}
		}
		else if (operation == 94) //square
		{
			cout << "The result is " << firstNumber * firstNumber << endl;
		}
		else
		{
			cout << "Invalid entry, please try again" << endl;
		}
		cout << "Do you want to return (0/1): ";
		cin >> again;
	}
	cout << "Thanks for using!" << endl;
	return 0;
}