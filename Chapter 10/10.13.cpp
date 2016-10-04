#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
bool divide(const string& s)
{
	return s.size() >= 5;
}
int main()
{
	vector<string> words;
	string s;
	while (cin >> s)
		words.push_back(s);
	auto p = partition(words.begin(), words.end(), divide);
	for (auto& i = words.begin(); i != p; ++i)
		cout << *i << " ";
	cout << endl;
	return 0;
}