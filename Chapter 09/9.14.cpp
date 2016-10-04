#include<iostream>
#include<vector>
#include<list>
#include<string>
using namespace std;
int main()
{
	list<const char*> li = { "hello","world" };
	vector<string> str;
	str.assign(li.cbegin(),li.cend());
	for (auto& i : str)
		cout << i << " ";
	cout << endl;
	return 0;
}