#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;
int main()
{
	istream_iterator<int> in_iter(cin),eof;
	vector<int> vec(in_iter, eof);
	vector<int> v1,v2;
	sort(vec.begin(), vec.end());
	copy(vec.begin(),vec.end(),inserter(v1,v1.begin()));
	unique_copy(vec.begin(), vec.end(), inserter(v2, v2.begin()));    //10.31
	for (auto& i : v2)
		cout << i << " ";
	cout << endl;
	return 0;
}