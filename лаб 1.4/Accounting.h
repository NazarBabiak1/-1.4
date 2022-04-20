#pragma once
#include "Animal.h"
#include "Date.h"

class Accounting
{
	Animal animal;
	Date date;
	int CostOfMaintenance;
public:
	Accounting();
	Accounting(const Animal& animal, const Date& date, const int& Cost);
	Accounting(const Accounting& other);

	Animal GetAnimal();
	Date GetDate();
	int GetCost();

	void ShowAccounting();

	Accounting& SetAnimal(const Animal& animal);
	Accounting& SetDate(const Date& date);
	Accounting& SetCost(const int& cost);
	
};

