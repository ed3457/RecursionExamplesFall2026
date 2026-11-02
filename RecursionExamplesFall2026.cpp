// RecursionExamplesFall2026.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std; 
int factorial(int input)
{
// base case 
	if (input == 1 || input == 0)
		return 1; 

// recursive case 

	return input * factorial(input - 1); // n! = n * (n-1)! 
}


int sum(int n)
{

	if (n == 1)
		return 1;
	else

		return n + sum(n - 1);

}


int main()
{
   // n! 

	//int input;

	//cin >> input;

	//// for loop 
	//int result = 1; 

	////for (int i = input; i > 0; i--)
	////	result = result * i; 

	//result = factorial(input);

	//cout << result;


	// sum of n numbers 

	// function that sums numbers from 1 to n (n>=1)

	// sum (n) = 1 + sum ( 2-n); 
	// sum (n) = n + sum(n-1) 

	cout << sum(5) << endl; // 1+2+3+4+5 
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
