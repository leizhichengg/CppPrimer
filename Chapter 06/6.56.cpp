#include<iostream>
#include<vector>
using namespace std;
int Add(const int i, const int j)
{
	return i + j;
}
int Sub(const int i, const int j)
{
	return i - j;
}
int Mul(const int i, const int j)
{
	return i * j;
}
int Div(const int i, const int j)
{
	return i / j;
}
int main()
{
	vector<decltype(Add) *> v = { Add,Sub,Mul,Div };
	for (auto f:v)
		cout << (*f)(5, 4) << endl;
}