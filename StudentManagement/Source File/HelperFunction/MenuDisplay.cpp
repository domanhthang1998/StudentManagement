#include "Typedef.h"
#include "Function.h"
#include <iostream>


void DisplayMainMenu()
{
	cout << "*************************************" << endl;
	cout << "         You are in Main Menu        " << endl;
	cout << "1.Create Class                       " << endl;
	cout << "2.Merge Class                        " << endl;
	cout << "3.PrintListClass                     " << endl;
	cout << "4.Select Class:                      " << endl;
	cout << "5.Back                               " << endl;
	cout << "6.Exit                               " << endl;
	cout << "*************************************" << endl;
}

void DisplayClassMenu(int MaLop, string Name)
{
	cout << "*************************************" << endl;
	cout << "You are in Class: " << MaLop << " " << Name << endl;
	cout << "1.Add Student" << endl;
	cout << "2.Search Student" << endl;
	cout << "3.Delete Student" << endl;
	cout << "4.Delete SubClass" << endl;
	cout << "5.PrintListStudent" << endl;
	cout << "6.Back" << endl;
	cout << "*************************************" << endl;
}
	

