#include "Typedef.h"
#include <iostream>

void DeleteClass(Class* myclass, Class* delclass)
{
	int key = delclass->st->MSSV;
	Student* current = myclass->st;

	while (current->left->MSSV != key && current->right->MSSV != key)
	{
		if (current->MSSV < key)
			current = current->right;
		else
			current = current->left;
	}

	if (current->left->MSSV == key)
		current->left = NULL;
	else if (current->right->MSSV == key)
		current->right = NULL;
	else
		cout << "Not Found DelClass";


}