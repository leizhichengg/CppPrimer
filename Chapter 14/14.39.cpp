#include<iostream>
#include<string>
#include<vector>
#include<fstream>
using namespace std;
class SizeComp
{
public:
	SizeComp(size_t n) :sz(n) {}
	bool operator()(const string& s) const
	{
		return s.size() < sz;
	}
private:
	size_t sz;
};
int main()
{
	ifstream fin("C:/Users/leizh/Documents/Visual Studio 2015/Projects/CppPrimer/14.39/text.txt");
	string word;
	SizeComp s(10);
	size_t small = 0, big = 0;
	while (fin >> word)
	{
			if (s(word))
				++small;
			else
				++big;
	}
		cout << "There are " << small << " words' size <10 " << endl;
		cout << "There are " << big << " words' size >10 " << endl;
	return 0;
}