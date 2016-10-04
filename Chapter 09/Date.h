#pragma once
#ifndef DATE_H
#define DATE_H
#include<string>
#include<iostream>
using namespace std;
class Date
{
public:
	unsigned year;
	unsigned month;
	unsigned day;
	Date(const string& str);
};
Date::Date(const string& str)
{
	int mark = 0;
	if (str.find("/") == string::npos)
		mark = 1;
	if (str.find("/") != string::npos)
		mark = 2;
	switch (mark)
	{
	case 1:       //January 1,1900 and Jan 1 1900
		year = stoi(str.substr(str.find_last_of(", ") + 1, 4));
		if (str.find("Jan") != string::npos) month = 1;
		if (str.find("Feb") != string::npos) month = 2;
		if (str.find("Mar") != string::npos) month = 3;
		if (str.find("Apr") != string::npos) month = 4;
		if (str.find("May") != string::npos) month = 5;
		if (str.find("Jun") != string::npos) month = 6;
		if (str.find("Jul") != string::npos) month = 7;
		if (str.find("Aug") != string::npos) month = 8;
		if (str.find("Sep") != string::npos) month = 9;
		if (str.find("Oct") != string::npos) month = 10;
		if (str.find("Nov") != string::npos) month = 11;
		if (str.find("Dec") != string::npos) month = 12;
		day = stoi(str.substr(str.find(" ")+1, str.find_last_of(", ") - str.find_first_of("0123456789")));
	    break;
	case 2:     // 1/1/1900
		year = stoi(str.substr(str.find_last_of("/") + 1, 4));
		month = stoi(str.substr(str.find("/") + 1, str.find_last_of("/") - str.find_first_of("/") - 1));
		day = stoi(str.substr(0, str.find_first_of("/")));
		break;
	}
}
void display(Date& date)
{
	cout << date.year << " " << date.month << " " << date.day << endl;
}
#endif