#pragma once
#ifndef PERSON_H
#define PERSON_H
#include<string>
using namespace std;
class Person 
{
	friend ostream &print(ostream &os, const Person &item);       //7.22 ����ʵ��ϸ��
	friend istream &read(istream &is, Person &item);
private:                                                        //7.19 ����private��public
	string name;
	string address;
public:
	string rname() const { return name; }
	string radd() const { return address; }
	Person(const string &n,const string &a):name(n),address(a){} //7.15 ��ӹ��캯��
};
ostream &print(ostream &os, const Person &item)
{
	os << item.name << " " << item.address << endl;
	return os;
}
istream &read(istream &is, Person &item)
{
	is >> item.name >> item.address;
	return is;
}
#endif