#include <iostream>
using namespace std; 

int firstNumber = 0;
int secondNumber = 0;
int multiplicationResult = 0;

void MultiplyNumbers()
{

	cout << "Enter the first number: ";
	cin >> firstNumber;

	cout << "Enter the second number: ";
	cin >> secondNumber;

	//here we store the result
	multiplicationResult = firstNumber * secondNumber;

	cout << "Displaying from MultiplyNumbers(): ";

	cout << firstNumber << " x " << secondNumber << " = " << multiplicationResult << endl;

}
int main ()
{
	cout << "This program will help you multiply two numbers" << endl;
	MultiplyNumbers();
	cout << "Displaying from main() : ";
	cout << firstNumber << " x " << secondNumber;
	cout << " = " << multiplicationResult << endl;
	return 0;
}