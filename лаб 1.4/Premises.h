#pragma once
#include "Accounting.h"
#define AbbInform std::cout << "Premises number: " << PremisesNumber << "\nCosts for premises: " << CostsForEverything << std::endl;
enum TypePremises {
	CELL,
	ENCLOSURE,
	AQUARIUM,
	TERRARIUM
};

class Premises
{
	TypePremises typepremises;
	int PremisesNumber;
	int PremisesSize;
	int CostOfCleaning;
	Accounting* accounting;
	int Amount;
public:
	void AddAccounting(const Accounting& accounting);
	void AbbreviatedInformation();

	Premises();
	Premises(const TypePremises& typepremises, const int& PremisesNumber, const int& PremisesSize,const int& CostOfCleaning,const Accounting*accounting,const int& Amount);
	Premises(const Premises& other);

	TypePremises GetTypePremises();
	int GetPremisesNumber();
	int GetPremisesSize();
	int GetCostOfCleaning();
	Accounting* GetAccounting();

	void ShowPremises();

	~Premises();
};

