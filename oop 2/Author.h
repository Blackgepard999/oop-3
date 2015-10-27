#pragma once
#include "stdafx.h"

class Author
{
public:
	Author();
	~Author();
	void SetName(string name);
	string GetName();
	void SetSurname(string surname);
	string GetSurname();
	virtual void print() { cout << "Имя: " << Name << " Фамилия: " << Surname << endl; }
private:
	string Name;
	string Surname;
};