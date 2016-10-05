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
		return s.size() == sz;
	}
private:
	size_t sz;
};
int main()
{
	ifstream fin("C:/Users/leizh/Documents/Visual Studio 2015/Projects/CppPrimer/14.38/text.txt");
	string word;
	vector<int> count(11, 0);
	while (fin >> word)
	{
		for (size_t i = 1; i != 11; ++i)
		{
			SizeComp s(i);
			if (s(word))
			{
				++count[i];
				break;
			}
			else
				continue;
		}
	}
	for (size_t i = 1; i != 11; ++i)
		cout << "There are " << count[i] << " words' size = " << i << endl;
	return 0;
}