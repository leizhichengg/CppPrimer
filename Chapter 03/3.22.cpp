#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	string m;
	vector<string> text;
	while (getline(cin,m))
		text.push_back(m);
	for (auto it = text.begin(); it != text.end() && !it->empty(); ++it)
		for (auto &i : text)
			for (auto &j : i)
				j = toupper(j);
	for (auto it = text.begin(); it != text.end() && !it->empty(); ++it)
		cout << *it <<" ";
	cout << endl;
}