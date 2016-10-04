#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
bool isShorter(const string& s1, const string& s2)
{
	return s1.size() < s2.size();
}
int main()
{
	vector<string> words;
	string s;
	while (cin >> s)
		words.push_back(s);
	sort(words.begin(), words.end());
	auto end_unique = unique(words.begin(), words.end());
	words.erase(end_unique, words.end());
	stable_sort(words.begin(), words.end(), isShorter);
	for (auto& i : words)
		cout << i << " ";
	cout << endl;
	return 0;
}