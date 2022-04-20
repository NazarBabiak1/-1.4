#pragma once
#include <string>
#include "Date.h"
using namespace std;
class Animal
{
	string Kind;
	string Origin;
	string Name;
	Date date;
public:
	Animal();
	Animal(const string& Kind,const string& Origin,const string& Name, const Date& date);
	Animal(const Animal& other);

	string GetKind();
	string GetOrigin();
	string GetName();
	Date GetDate();

	void ShowAnimal();
    
	Animal& SetKind(const string& Kind);
	Animal& SetOrigin(const string& Origin);
	Animal& SetName(const string& Name);
	Animal& SetDate(const Date& date);
};

