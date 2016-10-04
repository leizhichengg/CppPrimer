#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int i = 1, j = 2;
	auto f = [i,j] {return i + j; };
	cout << f() << endl;
	return 0;
}

