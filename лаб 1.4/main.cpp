#include <iostream>
#include "Date.h"
#include "Animal.h"
#include "Accounting.h"
#include "Premises.h"
using namespace std;

Date UsOfDate() {
	cout << "\nClass Date: \n\n";
	int day, month, year;
	cout << "Enter the day of the month of the year: ";
	cin >> day >> month >> year;
	Date date(day, month, year);
	
	return date;
}

Animal UsOfAnimal() {
	cout << "\nClass Animal: \n\n";
	string Kind, Origin, Name;
	cout << "Enter Kind: ";
	cin >> Kind;
	cout << "Enter Origin:";
	cin >> Origin;
	cout << "Enter Name:";
	cin >> Name;
	Animal animal(Kind, Origin, Name, UsOfDate());
	
	return animal;
}

Accounting UsOfAccounting() {
	cout << "\nClass Accounting: \n\n";
	int CostOfMaintenance;
	cout << "Enter cost of maintenance: ";
	cin >> CostOfMaintenance;
	Accounting accounting(UsOfAnimal(), UsOfDate(), CostOfMaintenance);
	
	return accounting;
}

void UseOfPremises() {
	cout << "\nClass Premises: \n\n";
	cout << "Enter premises type: (0)CELL, (1)ENCLOSURE, (2)AQUARIUM, (3)TERRARIUM\n--->";
	int type,premisesnumber, premisessize, costofcleaning,numberaccount;
	cin >> type;
	TypePremises typepremises;
	switch (type)
	{
	case 0:
	typepremises = TypePremises::CELL;
		break;
	case 1:
		typepremises = TypePremises::ENCLOSURE;
		break;
	case 2:
		typepremises = TypePremises::AQUARIUM;
		break; 
	default:
			typepremises = TypePremises::TERRARIUM;
			break;
	}

	cout << "Enter premises number: ";
	cin >> premisesnumber;
	cout << "Enter premises size: ";
	cin >> premisessize;
	cout << "Enter the cost of cleaning the premises: ";
	cin >> costofcleaning;
	cout << "Enter the number of accounts: ";
	cin >> numberaccount;
	system("pause");
	system("cls");
	Premises premises;
	for (int i = 0; i < numberaccount; i++) {
		cout << "Accounting number " << i + 1 << ": \n\n";
		premises.AddAccounting(UsOfAccounting());
		system("pause");
		system("cls");
	}
	Premises final(typepremises, premisesnumber, premisessize, costofcleaning, premises.GetAccounting(), numberaccount);
	
	final.ShowPremises();
}

int main()
{
	UseOfPremises();
	

}

