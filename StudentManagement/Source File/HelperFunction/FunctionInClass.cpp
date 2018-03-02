#include "Typedef.h";
#include "Function.h";
#include <iostream>

void FunctionInClass(Class* listClass[], Class* currentClass, int sizeListClass)
{
	DisplayClassMenu(currentClass->MaLop, currentClass->Name);
	int key;
	
	do
	{
		cin >> key;
		switch (key)
		{
		case 1:
			{
				int MSSV; string FullName; int Age;
				cout << "Enter FullName: ";
				cin >> FullName;
				cout << "Enter MSSV: ";
				cin >> MSSV;
				cout << "Enter Age: ";
				cin >> Age;

				Student* newSt = CreateStudent(MSSV, FullName, Age);
				currentClass->st = AddStudent(currentClass->st, newSt);
			}
			break;

		case 2:
			{
				cout << "Enter MSSV: ";
				int MSSV;
				cin >> MSSV;
				Student* st = SearchStudent(currentClass->st, MSSV);
				cout << "MSSV: " << st->MSSV << " | " << "FullName: " << st->FullName << " | " << "Age: " << st->Age << endl;
			}
			break;

		case 3:
			{
				cout << "Enter MSSV: ";
				int MSSV;
				cin >> MSSV;
				currentClass->st = DeleteStudent(currentClass->st, MSSV);
			}
			break;

		case 4:
			{
				cout << "Enter MaLop: ";
				int MaLop;
				cin >> MaLop;
				Class* delClass = NULL;
				for (int i = 0; i < sizeListClass; i++)
					if (listClass[i]->MaLop == MaLop)
						delClass = listClass[i];
				DeleteClass(currentClass, delClass);
			}
			break;

		case 5:
			PrintListStudent(currentClass->st);
			break;

		case 6:
			DisplayMainMenu();
			break;
		}
	} while (key != 6);
}