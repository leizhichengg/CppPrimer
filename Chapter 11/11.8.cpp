#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	vector<string> words;
	string s;
	while (cin >> s)
		words.push_back(s);
	sort(words.begin(), words.end());
	auto end_unique = unique(words.begin(), words.end());
	words.erase(end_unique, words.end());
	for (auto& w : words)
		cout << w << " ";
	cout << endl;
	return 0;
}