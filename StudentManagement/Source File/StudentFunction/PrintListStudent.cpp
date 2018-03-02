#include "Typedef.h"
#include <iostream>

void PrintListStudent(Student* st)
{
	if (st != NULL)
	{
		PrintListStudent(st->left);

		cout << "MSSV: " << st->MSSV << " | " << "FullName: " << st->FullName << " | " << "Age: " << st->Age << endl;

		PrintListStudent(st->right);
	}
}