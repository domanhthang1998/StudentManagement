#pragma once

#include <string>
using namespace std;

struct Student
{
	int MSSV;
	string FullName;
	int Age;
	Student *left;
	Student *right;
};

struct Class
{
	int MaLop;
	string Name;
	Student *st;
};