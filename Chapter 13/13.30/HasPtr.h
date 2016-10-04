#pragma once
#ifndef HASPTR_H
#define HASPTR_H
#include<string>
using namespace std;
class HasPtr
{
	friend void swap(HasPtr& lhs, HasPtr& rhs);
	friend bool operator<(const HasPtr& lhs, const HasPtr& rhs);
public:
	HasPtr(const string &s = string()) :ps(new string(s)), i(0) {}
	HasPtr(const HasPtr &item) :ps(new string(*item.ps)), i(item.i) {}
	HasPtr& operator=(HasPtr& item)
	{
		swap(*this, item);
		return *this;
	}
	~HasPtr()
	{
		delete ps;
	}
private:
	string *ps;
	int i;
};
void swap(HasPtr& lhs, HasPtr& rhs)
{
	swap(lhs.ps, rhs.ps);
	swap(lhs.i, rhs.i);
}
bool operator<(const HasPtr& lhs, const HasPtr& rhs)    //13.31
{
	return *lhs.ps < *rhs.ps;
}
#endif