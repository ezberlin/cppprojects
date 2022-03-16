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

		cout << "Enter first number: ";
		cin >> firstNumber;
		cout << "Enter operation: (addition=1, subtraction=2, multiplication=3, division=4)" << endl;
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
		else if(operation == 4 && firstNumber != 0 && secondNumber != 0)
		{
			float result = firstNumber / secondNumber;
			cout << "The result is " << result << endl;
		}
		cout << "Do you want to return? (0/1)" << endl;
		cin >> again;
	}
	
	return 0;
}