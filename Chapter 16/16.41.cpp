#include<iostream>
using namespace std;
template<typename T>
auto sum(T m, T n)->decltype(m + n)
{
	return m + n;
}
int main()
{
	cout << sum(1, 2) << endl;
	cout << sum(1255844446877, 25446546546) << endl;
	return 0;
}