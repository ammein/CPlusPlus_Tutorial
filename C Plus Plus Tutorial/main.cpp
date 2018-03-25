#include <iostream>
using namespace std; // to shorten the code that usually use std::cout to do COUT ONLY. Wtf right ?
int main()
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
	int i= 10;
	i = i + 10;
	bool b = false;
	float x = 4.56432;
	double a = 3.425234;
	char c = '5';
	cout << "The output is for i + 10 = " << i << "\nDoes it true or false ?" << b << endl; // must use << rather than javascript use + sign only. The fuck
	cout << "For float = " << x << endl;
	cout << "Double variable a = " << a << endl;
	cout << "Character = " << c << endl;
	system("pause"); // to pause the CMD without auto exiting
	return 0;
}