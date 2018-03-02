#include "Typedef.h";
#include "Function.h";
#include <iostream>

void FunctionInMainMenu(Class* listClass[], int sizeListClass)
{
	DisplayMainMenu();
	int key;

	do
	{
		cin >> key;
		switch (key)
		{
		case 1:
			{
				int MaLop; string name;
				cout << "Enter MaLop: ";
				cin >> MaLop;
				cout << "Enter Name: ";
				cin >> name;
				listClass[sizeListClass] = CreateClass(MaLop, name);
				sizeListClass++;
			}
			break;

		case 2:
			{
				cout << "Enter MaLop1: ";
				int MaLop1;
				cin >> MaLop1;

				cout << "Enter MaLop2: ";
				int MaLop2;
				cin >> MaLop2;

				Class *first = NULL;
				Class *second = NULL;

				for (int i = 0; i < sizeListClass; i++)
				{
					if (listClass[i]->MaLop == MaLop1)
						first = listClass[i];
					if (listClass[i]->MaLop == MaLop2)
						second = listClass[i];
				}
				if (first == NULL)
					cout << "Not Found Class: " << MaLop1 << endl;
				if (second == NULL)
					cout << "Not Found Class: " << MaLop2 << endl;
				if (first != NULL && second != NULL)
				{
					cout << "Enter new MaLop: ";
					int MaLop;
					cin >> MaLop;
					cout << "Enter new Name: ";
					string name;
					cin >> name;
					listClass[sizeListClass] = CreateClass(MaLop, name);

					listClass[sizeListClass]->st = MergeClass(first->st, second->st);
					sizeListClass++;
				}
			}
			break;

		case 3:
			for (int i = 0; i < sizeListClass; i++)
			{
				cout << listClass[i]->MaLop << listClass[i]->Name << endl;
			}
			break;

		case 4:
			{
				cout << "Enter MaLop: ";
				int MaLop;
				cin >> MaLop;

				Class* currentClass = NULL;

				for (int i = 0; i < sizeListClass; i++)
				{
					if (listClass[i]->MaLop == MaLop)
						currentClass = listClass[i];
				}
				if (currentClass == NULL)
					cout << "Not Found";
				else
					FunctionInClass(listClass, currentClass, sizeListClass);
			}
			break;
			

		case 5:
			break;

		default:
			break;
		}
	} while (key != 6);
}

