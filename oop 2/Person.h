#pragma once
#include "stdafx.h"

class Person: public Author
{
public:
	Person();
	~Person();
	void SetAlias(string alias);
	string GetAlias();
	virtual void print() { cout << "���������: " << Alias << endl; }
private:
	string Alias;
};