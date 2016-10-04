#include<iostream>
#include<vector>
#include<utility>
#include<string>
using namespace std;
int main()
{
	vector<pair<string, int>> vec;
	string s;
	int i;
	while (cin >> s >> i)
		vec.push_back(pair<string,int>(s,i));
	//vec.push_back(make_pair(s, i));
	//vec.push_back({ s,i });
	for (auto& p : vec)
		cout << p.first << "  " << p.second << endl;
	return 0;
}
