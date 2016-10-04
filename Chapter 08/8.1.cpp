#include<iostream>
using namespace std;
istream& fun(istream& is)
{
	int i;
	while (is >> i)
		cout << i << endl;
	is.clear();
	return is;
}
int main()
{
	istream& is=fun(cin);
	cout << is.rdstate() << endl;
	return 0;
}