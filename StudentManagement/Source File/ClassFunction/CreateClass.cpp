#include "Typedef.h"
#include <iostream>

Class* CreateClass(int MaLop, string name)
{
	Class* newClass = new Class();
	newClass->MaLop = MaLop;
	newClass->Name = name;
	return newClass;
}