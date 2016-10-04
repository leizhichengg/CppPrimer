#include<iostream>
#include<fstream>
#include<iterator>
#include<vector>
using namespace std;
int main()
{
	ifstream in("C:/Users/leizh/Documents/Visual Studio 2015/Projects/10.33/integer.txt");
	ofstream oodd("C:/Users/leizh/Documents/Visual Studio 2015/Projects/10.33/odd.txt");
	ofstream oeven("C:/Users/leizh/Documents/Visual Studio 2015/Projects/10.33/even.txt");
	istream_iterator<int> iin(in), eof;
	ostream_iterator<int> outo(oodd, " ");
	ostream_iterator<int> oute(oeven, "\n");
	vector<int> vec(iin,eof);
	for (auto& i : vec)
		if (i % 2)
			*outo++ = i;
		else
			*oute++ = i;
	cout << endl;
	return 0;
}