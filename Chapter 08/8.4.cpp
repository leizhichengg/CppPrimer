#include<iostream>
#include<string>
#include<vector>
#include<fstream>
using namespace std;
void read(const string& filename, vector<string>& vec)
{
	ifstream in(filename);
	if (in)
	{
		string str;
		while (getline(in, str))  //8.4
		//while (in >> str)          //8.5
			vec.push_back(str);
	}
}
int main()
{
	vector<string> vec;
	read("C:/Users/leizh/Documents/Visual Studio 2015/Projects/8.4/text.txt", vec);
	for (auto v : vec)
		cout << v << endl;
	return 0;
}