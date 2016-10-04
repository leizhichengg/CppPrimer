#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	vector<string> words;
	string s;
	while (cin >> s)
		words.push_back(s);
	for (auto& i : words)
		cout << i << " ";
	cout << endl;
	sort(words.begin(), words.end());
	for (auto& i : words)
		cout << i << " ";
	cout << endl;
	auto end_unique = unique(words.begin(), words.end());
	for (auto& i : words)
		cout << i << " ";
	cout << endl;
	words.erase(end_unique, words.end());
	for (auto& i : words)
		cout << i << " ";
	cout << endl;
	return 0;
}