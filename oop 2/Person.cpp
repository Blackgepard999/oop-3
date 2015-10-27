#include "stdafx.h"


void Person::SetAlias(string alias)
{
	Alias = alias;
}

string Person::GetAlias()
{
	return Alias;
}


Person::Person()
{
	Alias = "Unknown";
}

Person::~Person()
{

}