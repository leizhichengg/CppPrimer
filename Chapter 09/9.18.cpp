#include<iostream>
#include<string>
#include<deque>
#include<list>
using namespace std;
int main()
{
	//deque<string> de;  //9.18
	list<string> li;
	string str;
	while (cin >> str)
		//de.push_back(str);
		li.push_back(str);
	for (auto& d : li)
		cout << d << " ";
	cout << endl;
	return 0;
}