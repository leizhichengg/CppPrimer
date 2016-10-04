#include<iostream>
#include<vector>
#include<list>
using namespace std;
int main()
{
	//list<int> li = { 1,2,3,4,5 };
	vector<int> v = { 1,2,3,4,5 };
	vector<double> vec;
	for (auto &i : v)
		vec.push_back(i);
	for (auto &i : vec)
		cout << i << " ";
	cout << endl;
	return 0;
}