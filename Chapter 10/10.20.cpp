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
	auto count = count_if(words.begin(), words.end(), [](const string& str) {return str.size() > 6; });
	cout << count << endl;
	return 0;
}