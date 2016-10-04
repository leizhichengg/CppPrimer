#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	vector<string> v;
	string str1, str2, mstr;
	while (cin >> str1)
		v.push_back(str1);
	auto beg = v.begin();
	int i,mi=0;
	while (beg != v.end())
	{
		if (*beg == str2)
			++i;
		else
		{
			i = 1;
			str2 = *beg;
		}
		if (mi < i)
		{
			mi = i;
			mstr = str2;
		}
		++beg;
	}
	if (mi <= 1)
		cout << "No word repetition." << endl;
	else
		cout << mstr << " appear " << mi << " times." << endl;
	return 0;
}