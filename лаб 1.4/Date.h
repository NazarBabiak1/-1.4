#pragma once

class Date
{
	int Day, Month, Year;
public:
	Date();
	Date(const int& day, const int& month, const int& year);
	Date(const Date& other);

	int GetDay();
	int GetMonth();
	int GetYear();
	
	void ShowDate();

	Date& SetDay(int day);
	Date& SetMonth(int month);
	Date& SetYear(int year);
};

