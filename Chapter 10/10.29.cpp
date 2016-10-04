#include<iostream>
#include<vector>
#include<string>
#include<fstream>
#include<iterator>
using namespace std;
int main()
{
	ifstream in("C:/Users/leizh/Documents/Visual Studio 2015/Projects/10.29/string.txt");
	istream_iterator<string> in_iter(in),eof;
	vector<string> v(in_iter, eof);    //从迭代器范围构造v
	for (auto& i : v)
		cout << i << " ";
	cout << endl;
	return 0;
}