#include<iostream>
#include<fstream>
#include<sstream>
#include<vector>
#include<string>
using namespace std;
void read(const string& filename, vector<string>& vec)
{
	ifstream in(filename);
	if (in)
	{
		string str;
		while (getline(in, str))
			vec.push_back(str);
	}
}
int main()
{
	vector<string> vec;
	read("C:/Users/leizh/Documents/Visual Studio 2015/Projects/8.10/text.txt", vec);
	for (auto v : vec)
		cout << v << endl;
	for (auto& s : vec)
	{
		istringstream iss(s);
		string word;
		while (iss >> word)
			cout << word << endl;
	}
	return 0;
}