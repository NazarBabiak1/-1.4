#include "Premises.h"
#include <iostream>


void Premises::AddAccounting(const Accounting& TempAccounting)
{
	Amount++;
	Accounting* temp = new Accounting[Amount];
	for (int i = 0; i < Amount - 1; i++) {
		temp[i] = accounting[i];
	}
	temp[Amount-1] = TempAccounting;
	if(accounting!=nullptr)
		delete[] accounting;
	accounting = temp;
	
}

void Premises::AbbreviatedInformation()
{
	int CostsForEverything = 0;
	for (int i = 0; i < Amount; i++) {
		CostsForEverything += accounting[i].GetCost();
	}
	CostsForEverything += CostOfCleaning;
	AbbInform
}

Premises::Premises(): typepremises(CELL), PremisesNumber(0), PremisesSize(0), CostOfCleaning(0), accounting(nullptr)
{
}

Premises::Premises(const TypePremises& typepremises, const int& PremisesNumber, const int& PremisesSize, const int& CostOfCleaning, const Accounting* accounting,const int& Amount):
	typepremises(typepremises),PremisesNumber(PremisesNumber),PremisesSize(PremisesSize),CostOfCleaning(CostOfCleaning), Amount(Amount)
{
	this->accounting = new Accounting[Amount];
	for (int i = 0; i < Amount; i++) {
		this->accounting[i] = accounting[i];
	}
}

Premises::Premises(const Premises& other):
	typepremises(other.typepremises), PremisesNumber(other.PremisesNumber),PremisesSize(other.PremisesSize),CostOfCleaning(other.CostOfCleaning)
{
	if(accounting!=nullptr)
	delete[] accounting;
	accounting = new Accounting[Amount];
	for (int i = 0; i < Amount; i++) {
		this->accounting[i] = other.accounting[i];
	}
}

TypePremises Premises::GetTypePremises()
{
	return typepremises;
}

int Premises::GetPremisesNumber()
{
	return PremisesNumber;
}

int Premises::GetPremisesSize()
{
	return PremisesSize;
}

int Premises::GetCostOfCleaning()
{
	return CostOfCleaning;
}

Accounting* Premises::GetAccounting()
{
	return accounting;
}

void Premises::ShowPremises()
{
	std::string temp;
	switch (typepremises) {
	case(CELL): temp = "Cell";
		break;
	case(ENCLOSURE): temp = "Enclosure";
		break;
	case(AQUARIUM): temp = "Aquarium";
		break;
	case(TERRARIUM): temp = "Terrarium";
		break;
	}

	cout << "Type premises: " << temp << ", premises number: " << PremisesNumber << ", premises size: " << PremisesSize << ", cost of cleaning the premises: " << CostOfCleaning<<endl;
	for (int i = 0; i < Amount; i++) {
		cout << "\nAccounting "<<i+1<<": " << endl;
		accounting[i].ShowAccounting();
		cout << endl;
	}
}

Premises::~Premises()
{
	delete[] this->accounting;
}

