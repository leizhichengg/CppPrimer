#include<iostream>
#include<vector>
#include<numeric>
#include<list>
using namespace std;
int main()
{
	list<const char*> roster1 = { "li","wang" };
	list<const char*> roster2 = { "li","wan" };
	cout << (equal(roster1.cbegin(), roster1.cend(), roster2.cbegin()) ? "Equal" : "Not equal") << endl;
	return 0;
}