#ifndef CHARACTER_H
#define CHARACTER_H

#include "main.h"


class character
{
private:
	string Name;
	string Owner;


public:

	character();
	character(string newName, string newOwner);


	string name();
	void name(string newName);

	string owner();
	void owner(string newOwner);

};






character::character()
{
	this->Name = "NA";
	this->Owner = "NA";
}

character::character(string newName, string newOwner)
{
	this->Name = newName;
	this->Owner = newOwner;
}

string character::name()
{
	return this->Name;
}

void character::name(string newName)
{
	this->Name = newName;
}

string character::owner()
{
	return this->Owner;
}

void character::owner(string newOwner)
{
	this->Owner = newOwner;
}



#endif