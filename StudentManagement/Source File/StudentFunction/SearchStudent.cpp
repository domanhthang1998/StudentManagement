#include "Typedef.h"

Student* SearchStudent(Student *st, int MSSV)
{
	if (st == NULL || st->MSSV == MSSV)
		return st;

	if (st->MSSV < MSSV)
		return SearchStudent(st->right, MSSV);

	return SearchStudent(st->left, MSSV);

}