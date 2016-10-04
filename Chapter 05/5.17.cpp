#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> v1, v2, bigv, smav;
	int i;
	while (cin >> i)
		v1.push_back(i);
	cin.clear();       //用来更改cin的状态标示符
	int j;
	while (cin >> j)
		v2.push_back(j);
	if (v1 > v2)
	{
		bigv = v1;
		smav = v2;
	}
	else
	{
		bigv = v2;
		smav = v1;
	}
	auto begb = bigv.begin(), begs = smav.begin();
		for (; begs != smav.end(); ++begb, ++begs)
			if (*begb == *begs)
				continue;
			else
				break;
		if (begs == smav.end())
			cout << "true" << endl;
		else
			cout << "false" << endl;
	return 0;
}