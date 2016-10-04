#pragma once
#ifndef HASPTR_H
#define HASPTR_H
#include<string>
using namespace std;
class HasPtr
{
public:
	HasPtr(const string &s = string()) :ps(new string(s)), i(0), count(new size_t(1)){}
	HasPtr(const HasPtr &item) :ps(new string(*item.ps)), i(item.i), count(item.count) { ++count; }
	HasPtr& operator=(const HasPtr &item)
	{
		++*item.count;
		if (--*count == 0)
		{
			delete ps;
			delete count;
		}
		ps = item.ps;
		i = item.i;
		count = item.count;
		return *this;
	}
	~HasPtr()
	{
		if (--*count == 0)
		{
			delete ps;
			delete count;
		}
	}
private:
	string *ps;
	int i;
	size_t *count;
};
#endif