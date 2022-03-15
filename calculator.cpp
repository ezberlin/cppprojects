#include <iostream>
using namespace std;
int result = 0;
int main()
{
	int operation = 0;
	int firstNumber = 0;
	int secondNumber = 0;

	cout << "Enter first number: " << endl;
	cin >> firstNumber;
	cout << "Enter operation: (addition=1, subtraction=2, multiplication=3, division=4)" << endl;
	cin >> operation;
	cout << "Enter second number: " << endl;
	cin >> secondNumber;

	if (operation == 1)
	{
		int result = firstNumber + secondNumber;
		cout << "The result is " << result << endl;
	}
	else if(operation == 2)
	{
		int result = firstNumber - secondNumber;
		cout << "The result is " << result << endl;
	}
	else if(operation == 3)
	{
		int result = firstNumber * secondNumber;
		cout << "The result is " << result << endl;
	}
	else if(operation == 4 && firstNumber != 0 && secondNumber != 0)
	{
		float result = firstNumber / secondNumber;
		cout << "The result is " << result << endl;
	}

	
	return 0;
}