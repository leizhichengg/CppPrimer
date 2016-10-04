#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<functional>
using namespace std;
using namespace placeholders;
bool check_size(const string& s, string::size_type sz)
{
	return s.size() <= sz;
}
int main()
{
	vector<string> words;
	string s;
	string::size_type sz=6;
	while (cin >> s)
		words.push_back(s);
	auto count = count_if(words.begin(), words.end(),bind(check_size,_1,sz));
	cout << count << endl;
	return 0;
}