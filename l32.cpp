#include <iostream>
using namespace std; 

void MultiplyNumbers()
{

	cout << "Enter the first number: ";
	int firstNumber = 0, secondNumber = 0, multiplicationResult = 0;
	cin >> firstNumber;

	cout << "Enter the second number: ";
	cin >> secondNumber;

	//here we store the result
	multiplicationResult = firstNumber * secondNumber;

	cout << firstNumber << " x " << secondNumber;
	cout << " = " << multiplicationResult << endl;

}
int main ()
{
	cout << "This program will help you multiply two numbers" << endl;
	MultiplyNumbers();
	return 0;
}