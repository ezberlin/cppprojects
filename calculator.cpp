#include <iostream>
using namespace std;
int again = 1;
int main()
{
	while (again == 1)
	{
		int operation = 0;
		long long firstNumber = 0;
		long secondNumber = 0;

		cout << "Enter first number: ";
		cin >> firstNumber;
		cout << "Enter operation: (addition = 1, subtraction = 2, multiplication = 3, division = 4, test of relation = 5, lenght convertor = 6)" << endl;
		cin >> operation;
		if (operation != 6)
		{
			cout << "Enter second number: " << endl;
			cin >> secondNumber;
		}
		

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
		else if(operation == 6)
		{
			int startUnit = 0;
			int resultUnit = 0;

			cout << "What's the start unit? (lightyear = 1, AE = 2, mile = 3, kilometres = 4, meters = 5, foot = 6, inch = 7, centimeters = 8, millimetres = 9)" << endl;
			cin >> startUnit;
			cout << "What's the result unit? (lightyear = 1, AE = 2, mile = 3, kilometres = 4, meters = 5, foot = 6, inch = 7, centimeters = 8, millimetres = 9)" << endl;
			cin >> resultUnit;

			if (startUnit == 1)
			{
				if resultUnit == 1
				{
					cout << "That are " << firstNumber << " lightyears" << endl;
				}
				if resultUnit == 2
				{
					cout << "That are " << 63241 * firstNumber << " astronomical units" << endl;
				}
				if resultUnit == 3
				{
					cout << "Too big result" << endl;
				}
				if resultUnit == 4
				{
					cout << "Too big result" << endl;
				}
				if resultUnit == 5
				{
					cout << "Too big result" << endl;
				}
				if resultUnit == 6
				{
					cout << "Too big result" << endl;
				}
				if resultUnit == 7
				{
					cout << "Too big result" << endl;
				}
				if resultUnit == 8
				{
					cout << "Too big result" << endl;
				}
				if resultUnit == 9
				{
					cout << "Too big result" << endl;
				}
			}
			if (startUnit == 2)
			{
				if resultUnit == 1
				{
					cout << "That are " << firstNumber / 63241 << " lightyears" << endl;
				}
				if resultUnit == 2
				{
					cout << "That are " << firstNumber << " astronomical units" << endl;
				}
				if resultUnit == 3
				{
					cout << "Too big result" << endl;
				}
				if resultUnit == 4
				{
					cout << "Too big result" << endl;
				}
				if resultUnit == 5
				{
					cout << "Too big result" << endl;
				}
				if resultUnit == 6
				{
					cout << "Too big result" << endl;
				}
				if resultUnit == 7
				{
					cout << "Too big result" << endl;
				}
				if resultUnit == 8
				{
					cout << "Too big result" << endl;
				}
				if resultUnit == 9
				{
					cout << "Too big result" << endl;
				}
			}
			if (startUnit == 3)
			{
				if resultUnit == 1
				{
					cout << "To low result" << endl;
				}
				if resultUnit == 2
				{
					cout << "To low result" << endl;
				}
				if resultUnit == 3
				{
					cout << "That are " << endl;
				}
				if resultUnit == 4
				{
					cout << "Too big result" << endl;
				}
				if resultUnit == 5
				{
					cout << "Too big result" << endl;
				}
				if resultUnit == 6
				{
					cout << "Too big result" << endl;
				}
				if resultUnit == 7
				{
					cout << "Too big result" << endl;
				}
				if resultUnit == 8
				{
					cout << "Too big result" << endl;
				}
				if resultUnit == 9
				{
					cout << "Too big result" << endl;
				}
			}
		}
		else
		{
			cout << "Invalid entry" << endl;
		}
		cout << "Do you want to return? (0/1)" << endl;
		cin >> again;
	}
	
	return 0;
}