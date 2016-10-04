#include<iostream>
#include<sstream>
using namespace std;
istream& fun(istream& is)
{
	string i;
	while (is >> i)
		cout << i << endl;
	is.clear();
	return is;
}
int main()
{
	istringstream iss("Hello World");
	fun(iss);
	return 0;
}