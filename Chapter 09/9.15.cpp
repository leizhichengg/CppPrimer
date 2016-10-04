#include<iostream>
#include<vector>
#include<list>
using namespace std;
int main()
{
	vector<int> v1 = { 1,2,3,4,5,6 };
	vector<int> v2 = { 1,2,3,4,5,6 };
	list<int> li = { 1,2,3,4,5,6 };
	if (*v1.begin() == *li.begin())          //9.16
		cout << "=" << endl;
	else
		cout << "!=" << endl;
	if (v1 == v2)
		cout << "v1=v2" << endl;
	else
		cout << "v1!=v2" << endl;
	return 0;
}