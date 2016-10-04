#include<iostream>
#include<vector>
using namespace std;
struct X
{
	X()
	{
		cout << "X()" << endl;
	}
	X(const X&)
	{
		cout << "X(const X&)" << endl;
	}
	X& operator=(const X&)
	{
		cout << "X& operator=(const X&)" << endl;
		return *this;
	}
	~X()
	{
		cout << "~X()" << endl;
	}
};
void func(const X& x1,X x2)
{
	vector<X> vec;
	vec.push_back(x1);
	vec.push_back(x2);
}
int main()
{
	X *p = new X;
	func(*p, *p);
	return 0;
}