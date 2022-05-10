#include <iostream>
#include <string>
using namespace std;
int again {1};
int main()
{
	while (again == 1)
	{
		char operation {0};
		double firstNumber {0};
		double secondNumber {0};
		char logOperator {0};

		cout << "Enter first number: ";
		string input1, input2;
		cin >> input1;
		cout << "Enter operation (addition: +, subtraction: -, "
		"multiplication: *, division: /, test of relation: =, "
		"potencies: ^, logical operators: ?): ";
		cin >> operation;
		if (operation == 63)
		{
			cout << "Enter logical operator "
			"(not: x, and: +, or: /, xor: X): ";
			cin >> logOperator;
		}
		if (logOperator != 120)
		{	
			cout << "Enter second number: ";
			cin >> input2;
		}

		if (operation == 43) //addition
		{
			try
			{
				firstNumber = stod(input1);
				secondNumber = stod(input2);
				cout << "The result is " << firstNumber + secondNumber;
				cout << endl;
			}
			catch(exception e)
			{
				cout <<"Invalid inputs"<<endl;
			}
		}
		else if (operation == 45) //subtraction
		{
			try
			{
				firstNumber = stod(input1);
				secondNumber = stod(input2);
				cout << "The result is " << 
				firstNumber - secondNumber << endl;
			}
			catch(exception e)
			{
				cout <<"Invalid inputs"<<endl;
			}
		}
		else if (operation == 42) //multiplication
		{
			try
			{
				firstNumber = stod(input1);
				secondNumber = stod(input2);
				cout << "The result is " << 
				firstNumber * secondNumber << endl;
			}
			catch(exception e)
			{
				cout << "Invalid inputs" << endl;
			}
		}
		else if (operation == 94) //potencies
		{
			try
			{
				firstNumber = stod(input1);
				secondNumber = stod(input2);
				if(secondNumber == 0)
				{
					cout << "The result is 1" << endl;
				}
				else if(secondNumber < 0)
				{
					cout << "No negative exponents" << endl; 
				}
				else
				{
					double startNumber = firstNumber;
					for(double i = 1; i < secondNumber; i++)
					{
						firstNumber = firstNumber * startNumber;
					}
					cout << "The result is " << 
					firstNumber << endl;
				}
			}
			catch(exception e)
			{
				cout << "Invalid inputs" << endl;
			}
		}
		else if (operation == 47 ) //division
		{
			try
			{
				firstNumber = stod(input1);
				secondNumber = stod(input2);
				if (secondNumber != 0)
				{ 
					cout << "The result is " << 
					firstNumber / secondNumber << endl;
				}
				else
				{
					cout << "Cannot divide by 0" << endl;
				}
			}
			catch(exception e)
			{
				cout << "Invalid inputs" << endl;
			}
		}
		else if (operation == 61) //test of equality
		{
			try
			{
				firstNumber = stod(input1);
				secondNumber = stod(input2);
				if (firstNumber == secondNumber)
				{
					cout << "The first number equals the second" 
					<< endl;
				}
				if (firstNumber < secondNumber)
				{
					cout << "The first number is less than the second" 
					<< endl;
				}
				if (firstNumber > secondNumber)
				{
					cout << 
					"The first number is greater than the second" <<
					endl;
				}
			}
			catch (...)
			{
				cout << "Invalid inputs" << endl;
			} 
		}
		else if (operation == 63) //logical operator
		{ 
			bool x,y;
			try
			{
				y = (bool) stoi(input1);
				if (logOperator != 120)
				{
					x = (bool) stoi(input2);
				}
				if (logOperator == 120) //not
				{
					cout << "The result is " << (!y) << endl;
				}
				else if (logOperator == 43) //and
				{
					cout << "The result is " << (y && x) << endl ;
				}
				else if (logOperator == 47) //or
				{
					cout << "The result is " << (x || y) << endl;
				}
				if (logOperator == 88) //xor
				{
					cout << "The result is " << 
					((y && (!x) ) || (!y && x)) << endl;
				}
			}
			catch (...)
			{
				cout << "Invalid inputs" << endl;
			}
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
