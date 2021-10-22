#include <iostream>
#include <string>
using namespace std;

int main()
{
	int inputNumber;

	cout << "Enter an int: ";

	cin >> inputNumber;

	cout << "Enter your name: ";
	string inputName;
	cin >> inputName;

	cout << inputName << " entered " << inputNumber << endl;

	return 0;
}