#pragma once
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<string>
using namespace std;
class Employee
{
public:
	Employee() = default;
	Employee(const string& s)
	{
		static int i = 0;
		id = i++;
		name = s;
	}
	Employee(const Employee&) = delete;
	Employee &operator=(const Employee&) = delete;
	~Employee() = default;
private:
	string name;
	int id;
};
#endif