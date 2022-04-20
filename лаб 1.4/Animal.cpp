#include "Animal.h"
#include <iostream>
using namespace std;

Animal::Animal() : Kind("None"), Origin("None"), Name("None"),date(Date())
{
}

Animal::Animal(const string& Kind, const string& Origin, const string& Name, const Date& date): Kind(Kind),Origin(Origin),Name(Name),date(date)
{
}

Animal::Animal(const Animal& other): Kind(other.Kind), Origin(other.Origin),Name(other.Origin),date(other.date)
{
}

string Animal::GetKind()
{
	return Kind;
}

string Animal::GetOrigin()
{
	return Origin;
}

string Animal::GetName()
{
	return Name;
}

Date Animal::GetDate()
{
	return date;
}

void Animal::ShowAnimal()
{
	cout << Kind << ' ' << Origin << ' ' << Name << endl << "Date of birthday and settlement: ";
	date.ShowDate();
}

Animal& Animal::SetKind(const string& Kind)
{
	this->Kind = Kind;
	return *this;
}

Animal& Animal::SetOrigin(const string& Origin)
{
	this->Origin = Origin;
	return *this;
}

Animal& Animal::SetName(const string& Name)
{
	this->Name = Name;
	return *this; 
}

Animal& Animal::SetDate(const Date& date)
{
	this->date=date;
	return *this;
}

