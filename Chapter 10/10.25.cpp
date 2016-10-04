#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<functional>
using namespace std;
using namespace placeholders;
bool isShorter(const string& s1, const string& s2)
{
	return s1.size() < s2.size();
}
bool check_size(const string&s, string::size_type sz)
{
	return s.size() <= sz;
}
int main()
{
	vector<string> words;
	string s;
	string::size_type sz = 4;
	while (cin >> s)
		words.push_back(s);
	sort(words.begin(), words.end());
	auto end_unique = unique(words.begin(), words.end());
	words.erase(end_unique, words.end());
	stable_sort(words.begin(), words.end(), isShorter);
	auto wc = partition(words.begin(), words.end(),bind(check_size,_1,sz));
	auto count = words.end() - wc;
	for_each(wc, words.end(), [](const string& s) {cout << s << " "; });
	cout << endl;
	for (auto& i : words)
		cout << i << " ";
	cout << endl;
	return 0;
}