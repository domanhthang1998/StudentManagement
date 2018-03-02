#include "Typedef.h"
#include "Function.h"

Student* DeleteStudent(Student* myst, int MSSV)
{
	if (myst == NULL) return myst;

	if (MSSV < myst->MSSV)
		myst->left = DeleteStudent(myst->left, MSSV);

	else if (MSSV > myst->MSSV)
		myst->right = DeleteStudent(myst->right, MSSV);

	else
	{
		if (myst->left == NULL && myst->right == NULL)
		{
			delete myst;
			return NULL;
		}
		else if (myst->left == NULL)
		{
			Student *temp = myst->right;
			delete myst;
			return temp;
		}
		else if (myst->right == NULL)
		{
			Student *temp = myst->left;
			delete myst;
			return temp;
		}

		Student* temp = MinMSSV(myst->right);

		myst->MSSV = temp->MSSV;
		myst->FullName = temp->FullName;
		myst->Age = temp->Age;

		myst->right = DeleteStudent(myst->right, temp->MSSV);
	}
	return myst;
}