#pragma once
#ifndef HASPTR_H
#define HASPTR_H
#include<string>
using namespace std;
class HasPtr
{
public:
	HasPtr(const string &s=string()):ps(new string(s)),i(0){}
	HasPtr(const HasPtr &item):ps(new string(*item.ps)),i(item.i){}   //13.5
	HasPtr& operator=(const HasPtr &item)           //13.6
	{
		auto newp = new string(*item.ps);
		delete ps;
		ps = newp;
		i = item.i;
		return *this;
	}
	~HasPtr()          //13.11
	{
		delete ps;
	}
private:
	string *ps;
	int i;
};
#endif