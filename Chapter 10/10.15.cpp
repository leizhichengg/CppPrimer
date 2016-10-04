#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int i = 1;
	auto f=[i](int j) {return i + j; };
	cout << f(1) << endl;
	return 0;
}