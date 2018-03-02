#include "Typedef.h"

Student* CreateStudent(int MSSV, string FullName, int Age)
{
	Student* newst = new Student();
	newst->MSSV = MSSV;
	newst->FullName = FullName;
	newst->Age = Age;
	return newst;
}