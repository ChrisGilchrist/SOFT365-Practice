#include <iostream>
using namespace std;

int main()
{
	/*
	Task 1 - Simple Hello World

	std::cout << "Hello, World!" << std::endl;
	return 0;
	*/

	/* 
	Task 2 - Print Number by user input 
	int number;

	cout << "Enter an integer: ";
	cin >> number;

	cout << "You Entered " << number;
	return 0;
	*/

	/*
	Task 3 - Adding two numbers

	int firstNumber, secondNumber, sumOfNumbers;

	//cout << "Enter two integers: ";
	//cin >> firstNumber >> secondNumber;
	cout << "Enter first number ";
	cin >> firstNumber;

	cout << "Enter second number ";
	cin >> secondNumber;

	// sum of both numbers put together stored in the sum variable
	sumOfNumbers = firstNumber + secondNumber;

	// print the sum
	cout << firstNumber << " + " << secondNumber << " = " << sumOfNumbers;

	return 0;

	*/

	/* Task 4 - Compute quotient and remainder 

	int divisor, dividend, quotient, remainder;

	cout << "Enter divdend: ";
	cin >> dividend;

	cout << "Enter divisor: ";
	cin >> divisor;

	quotient = dividend / divisor;
	remainder = dividend % divisor;

	cout << "Quotient = " << quotient << endl;
	cout << "Remainder = " << remainder;

	return 0;

	*/

	/* Task 5 - Find size of a variable 

	cout << "Size of char: " << sizeof(char) << " byte" << endl;
	cout << "Size of int: " << sizeof(int) << " byte" << endl;
	cout << "Size of float: " << sizeof(float) << " byte" << endl;
	cout << "Size of double: " << sizeof(double) << " byte" << endl;
	
	return 0;
	
	*/

	/* Task 6 - Swap two numbers 

	int a = 5, b = 10, temp;

	cout << "Before swapping. " << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	temp = a;
	a = b;
	b = temp;

	cout << "\nAfter swapping." << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	return 0;

	*/

	/* Task 7 - Print ASCII Value of character */
	char c;
	cout << "Enter a character: ";
	cin >> c;
	cout << "The ASCII value of the character you entered is: " << int(c);
	return 0;

}