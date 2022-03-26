#include <iostream>
using namespace std;
int again = 1;
int main()
{
	while (again == 1)
	{
		int operation = 0;
		int firstNumber = 0;
		int secondNumber = 0;

		cout << "Enter first number: "; //hello
		cin >> firstNumber;
		cout << "Enter operation: (addition = 1, subtraction = 2, multiplication = 3, division = 4, test of relation = 5)" << endl;
		cin >> operation;
		cout << "Enter second number: " << endl;
		cin >> secondNumber;

		if (operation == 1) //addition
		{
			int result = firstNumber + secondNumber;
			cout << "The result is " << result << endl;
		}
		else if(operation == 2) //subtraction
		{
			int result = firstNumber - secondNumber;
			cout << "The result is " << result << endl;
		}
		else if(operation == 3) //multiplication
		{
			int result = firstNumber * secondNumber;
			cout << "The result is " << result << endl;
		}
		else if(operation == 4 && secondNumber != 0)
		{
			float result = firstNumber / secondNumber;
			cout << "The result is " << result << endl;
		}
		else if(operation == 5) //test of equality
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
			cout << "Invalid entry" << endl;
		}
		cout << "Do you want to return? (0/1)" << endl;
		cin >> again;
	}
	cout << "Thanks for using!"
	return 0;
}