#include<iostream>
#include<string>
using namespace std;
template<typename T>
ostream &print(ostream& os, const T& t)
{
	return os << t;
}
template<typename T,typename ...Args>
ostream &print(ostream& os,const T& t,const Args&... rest)
{
	os << t << ",";
	return print(os,rest...);
}
int main()
{
	int i = 1;
	string s = "hello";
	double d = 20.25;
	print(cout,i,s);
	cout << endl;
	print(cout, i,3.14);
	cout << endl;
	print(cout,s, d, i);
	cout << endl;
	return 0;
}