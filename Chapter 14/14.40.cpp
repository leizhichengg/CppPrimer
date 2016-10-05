#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
class ShorterString
{
public:
	bool operator()(const string& s1, const string& s2) const
	{
		return s1.size() < s2.size();
	}
};
class SizeComp
{
public:
	SizeComp(size_t n):sz(n){}
	bool operator()(const string& s) const
	{
		return s.size() >= sz;
	}
private:
	size_t sz;
};
void biggies(vector<string> &words, vector<string>::size_type sz)
{
	stable_sort(words.begin(), words.end(), ShorterString());
	auto wc = find_if(words.begin(), words.end(), SizeComp(sz));
	auto count = words.end() - wc;
	cout << count << endl;
	for (auto i = wc; i != words.end(); ++i)
		cout << *i << " ";
	cout << endl;
}
int main()
{
	vector<string> vec = { "hello","world","i","am","tom" };
	biggies(vec, 3);
	return 0;
}