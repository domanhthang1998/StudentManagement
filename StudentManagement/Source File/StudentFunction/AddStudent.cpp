#include "Typedef.h"
#include "Function.h"

Student* AddStudent(Student* firstSt, Student* newSt)
{
	if (firstSt == NULL)
	{
		firstSt = CreateStudent(newSt->MSSV, newSt->FullName, newSt->Age);
		return firstSt;
	}
	
	if (newSt->MSSV < firstSt->MSSV)
		firstSt->left = AddStudent(firstSt->left, newSt);
	else
		firstSt->right = AddStudent(firstSt->right, newSt);
		
	return firstSt;
}