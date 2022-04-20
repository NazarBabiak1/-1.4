#include "Date.h"
#include <iostream>

Date::Date(): Day(20), Month(4), Year(22)
{
}

Date::Date(const int& day, const int& month, const int& year): Day(day),Month(month),Year(year)
{
}

Date::Date(const Date& other): Day(other.Day), Month(other.Month), Year(other.Year)
{
}

int Date::GetDay()
{
	return Day;
}

int Date::GetMonth()
{
	return Month;
}

int Date::GetYear()
{
	return Year;
}

void Date::ShowDate()
{
	std::cout << Day << "." << Month << "." << Year;
}

Date& Date::SetDay(int day)
{
	this->Day = day;
	return *this;
}

Date& Date::SetMonth(int month)
{
	this->Month = month;
	return *this;
}

Date& Date::SetYear(int year)
{
	this->Year = year;
	return *this;
}
