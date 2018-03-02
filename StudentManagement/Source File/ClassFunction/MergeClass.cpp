#include "Typedef.h"

Student* MergeClass(Student* myst1, Student* myst2)
{

	if (myst1 == NULL)
		myst1 = myst2;
	if (myst2->MSSV < myst1->MSSV)
		myst1->left = MergeClass(myst1->left, myst2);
	else if (myst2->MSSV > myst1->MSSV)
		myst1->right = MergeClass(myst1->right, myst2);
	return myst1;
}