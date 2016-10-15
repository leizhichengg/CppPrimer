#include "myfind.h"
#include<vector>
#include <iostream>
#include<list>
#include<string>
using namespace std;
int main()
{
	vector<int> vec = { 1,2,3,4,5,6,7,8,9 };
	list<string> lst = { "hello","world","i","am","withlzc" };
	auto v = myfind(vec.cbegin(), vec.cend(), 4);
	auto l = myfind(lst.cbegin(), lst.cend(), "hey");
	if (v != vec.end())
		cout << *v << endl;
	else
		cout << "No find!" << endl;
	if (l != lst.end())
		cout << *l << endl;
	else
		cout << "No find!" << endl;
	return 0;
}