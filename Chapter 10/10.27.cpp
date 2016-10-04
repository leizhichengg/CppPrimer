#include<iostream>
#include<vector>
#include<list>
#include<algorithm>
#include<iterator>
using namespace std;
int main()
{
	vector<int> v = {1,1,2,3,4,4,5,6,9,8,8,7,4,4,4,5,5,5,5,2};
	list<int> lst;
	unique_copy(v.begin(), v.end(), inserter(lst,lst.begin()));
	for (auto& i : lst)
		cout << i << " ";
	cout << endl;
	return 0;
}