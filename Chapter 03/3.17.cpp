#include <iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	string word;
	vector<string> v;
	while (cin>>word)
		v.push_back(word);
	for (auto &i:v)
		for (auto &j : i)
			j = toupper(j);
	for (auto &i : v)
		cout << i << endl;
}