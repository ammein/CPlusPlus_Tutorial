#include <iostream>
#include <string> // to include string
#include <sstream> // String Streams Method
using namespace std; // to shorten the code that usually use std::cout to do COUT ONLY. Wtf right ?
// int main basic running the command prompt for C++
int main(int argc , const char* argv[])
{
	// Cout style
	cout << "Hello World ! \n" << endl; // std stands for standard
	// also have some endl (End Line) for VERY BASIC String breaks

	// DATA TYPES
	/*
	integers - whole number list
	float - decimal numbers float
	double - more accuracy than a float aka more decimal places
	boolean - true or false ( 1 or 0 )
	char - character (a, b , c, d) -- single character or more.
	*/

	// VARIABLES
	/*
	Use data type to declare which type you want , THEN you can declare any variable_names. In Javascript
	you just have simply use var right ? Its is so afk when C++ have so many data types to use. Lol
	*/

	// Console Output and other expressions
	//int i= 10;
	//i = i + 10;
	//bool b = false;
	//float x = 4.56432;
	//double a = 3.425234;
	//char c = '5';
	//cout << "The output is for i + 10 = " << i << "\nDoes it true or false ? " << b << endl; // must use << rather than javascript use + sign only. The fuck
	//cout << "For float = " << x << endl;
	//cout << "Double variable a = " << a << endl;
	//cout << "Character = " << c << endl;


	// Console input
	/*int i;
	cout << "Please enter a number : ";
	cin >> i;
	cout << "Your number :\n";
	cout << i << endl;*/

	// Like javascript if else ES6
	/*int result = 4 == 5 ? 1 : 2;
	cout << result << endl;*/

	/*****************************************************
				Google "Operator Precedence"
				To see more Documentation 
				on all Operators
	******************************************************/

	// Comma Operator
	/*int a;
	int b = 7;
	a = (b = 3, b + 2);
	cout << "\n" << a << "\n" << endl;*/

	// Type Casting Operator
	// Notice it has int(i) ? 
	// You can pass float into NEW DATA TYPE using type casting operator
	/*float i = 5.6121317;
	cout << int(i) << endl;*/

	// Size Of
	/*int y = 20;
	float x = sizeof(y);
	cout << x << endl; */
	// Output = 4

	/*****************************************************
						END OPERATORS
	******************************************************/

	/*****************************************************
						STRING STREAMS
	******************************************************/
	string str("htfjyfjyf");

	int i;

	stringstream(str) >> i; // bitwise operator to convert into integer
	cout << i << endl;

	/*****************************************************
						END STREAMS
	******************************************************/

	system("pause"); // to pause the CMD without auto exiting
	//return 0;
}