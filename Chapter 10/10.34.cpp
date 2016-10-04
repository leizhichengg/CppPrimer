#include<iostream>
#include<vector>
#include<list>
#include<iterator>
#include<algorithm>
using namespace std;
int main()
{
	vector<int> v = { 0,1,2,3,4,5,6,7,8,9 };
	for (auto& iter1 = v.crbegin(); iter1 != v.crend(); ++iter1)    //10.34
		cout << *iter1 << " ";
	cout << endl;
	for(auto& iter2=v.cend()-1;iter2!=v.cbegin();--iter2)    //10.35
		cout << *iter2 << " ";
	cout << *v.cbegin() << endl;
	list<int> lst1 = { 1,2,0,1,2,5,8,4,0,2 };         //10.36
	auto rcomma = find(lst1.crbegin(), lst1.crend(), 0);
	cout << *rcomma << endl;
	list<int> lst2;
	copy(v.crbegin() + 3, v.crbegin() + 8, back_inserter(lst2));       //10.37
	for (auto& iter : lst2)
		cout << iter << " ";
	cout << endl;
	return 0;
}