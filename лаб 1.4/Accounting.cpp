#include "Accounting.h"
#include <iostream>


Accounting::Accounting(): animal(Animal()), date(Date()), CostOfMaintenance(0)
{
}

Accounting::Accounting(const Animal& animal, const Date& date, const int& Cost):animal(animal),date(date),CostOfMaintenance(Cost)
{
}

Accounting::Accounting(const Accounting& other):animal(other.animal),date(other.date),CostOfMaintenance(other.CostOfMaintenance)
{
}

Animal Accounting::GetAnimal()
{
	return animal;
}

Date Accounting::GetDate()
{
	return date;
}

int Accounting::GetCost()
{
	return CostOfMaintenance;
}

void Accounting::ShowAccounting()
{
	cout << "Animal: ";
	animal.ShowAnimal(); 
	cout << ' ';
	date.ShowDate();
	cout << ' ';
	cout<< "\nCost of maintenance: " << CostOfMaintenance << endl;
}

Accounting& Accounting::SetAnimal(const Animal& animal)
{
	this->animal = animal;
	return *this;
}

Accounting& Accounting::SetDate(const Date& date)
{
	this->date = date;
	return *this;
}

Accounting& Accounting::SetCost(const int& cost)
{
	this->CostOfMaintenance = cost;
	return *this;
}
