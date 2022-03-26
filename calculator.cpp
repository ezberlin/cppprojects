#include <iostream>
using namespace std;
int again = 1;
int main()
{
	while (again == 1)
	{
		char operation = 0;
		int firstNumber = 0;
		int secondNumber = 0;

		cout << "Enter first number: ";
		cin >> firstNumber;
		cout << "Enter operation (addition: +, subtraction: -, multiplication: *, division: /, test of relation: =): ";
		cin >> operation;
		cout << "Enter second number: ";
		cin >> secondNumber;

		if (operation == 43) //addition
		{
			int result = firstNumber + secondNumber;
			cout << "The result is " << result << endl;
		}
		else if(operation == 45) //subtraction
		{
			int result = firstNumber - secondNumber;
			cout << "The result is " << result << endl;
		}
		else if(operation == 42) //multiplication
		{
			int result = firstNumber * secondNumber;
			cout << "The result is " << result << endl;
		}
		else if(operation == 47 && secondNumber != 0)
		{
			float result = firstNumber / secondNumber;
			cout << "The result is " << result << endl;
		}
		else if(operation == 61) //test of equality
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
		else
		{
			cout << "Invalid entry, please try again" << endl;
		}
		cout << "Do you want to return? (0/1)" << endl;
		cin >> again;
	}
	cout << "Thanks for using!" << endl;
	return 0;
}