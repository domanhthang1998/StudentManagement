#pragma once
#include "Typedef.h"

Student* AddStudent(Student* myst, Student* newst);
Class* CreateClass(int MaLop, string name);
Student* CreateStudent(int MSSV, string FullName, int Age);
Student* DeleteStudent(Student* myst, int MSSV);
Student* SearchStudent(Student *st, int MSSV);
void PrintListStudent(Student* st);


void DeleteClass(Class* myclass, Class* delclass);
Student* MergeClass(Student* myst1, Student* myst2);
Student* MinMSSV(Student* myst);


void DisplayMainMenu();
void DisplayClassMenu(int MaLop, string name);

void FunctionInClass(Class* listClass[], Class* currentClass, int sizeListClass);
void FunctionInMainMenu(Class* listClass[], int sizeListClass);

