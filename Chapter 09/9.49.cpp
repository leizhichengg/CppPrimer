#include<iostream>
#include<string>
using namespace std;
int main()
{
	string word, longest_word;
	while (cin>>word)
		if (word.find_first_not_of("aceimnorsuvwxz") == string::npos&&word.size() > longest_word.size())
			longest_word = word;
	cout << longest_word << endl;
	return 0;
}