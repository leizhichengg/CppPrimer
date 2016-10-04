#include<iostream>
#include<vector>
#include<list>
using namespace std;
int main()
{
	int ia[] = { 0,1,1,2,3,5,8,13,21,55,89 };
	vector<int> vec;
	for (auto& i : ia)
		vec.push_back(i);
	auto bv = vec.begin();
	while (bv != vec.end())
		if (*bv % 2)
			bv = vec.erase(bv);
		else
			++bv;
	for (auto& i : vec)
		cout << i << " ";
	cout << endl;
	list<int> li;
	for (auto& i : ia)
		li.push_back(i);
	auto& bl = li.begin();
	while (bl != li.end())
		if (!(*bl % 2))
			bl = li.erase(bl);
		else
			++bl;
	for (auto& i : li)
		cout << i << " ";
	cout << endl;
	return 0;
}