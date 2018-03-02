#include "Typedef.h"

Student* MinMSSV(Student* myst)
{
	Student* current = myst;

	while (current->left != NULL)
		current = current->left;
	return current;
}