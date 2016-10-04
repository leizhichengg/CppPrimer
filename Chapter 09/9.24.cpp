#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> v1 = {1,2,3};
	vector<int> v2;
	v2.push_back(v1.at(0));
	v2.push_back(v1[0]);
	v2.push_back(v1.front());
	v2.push_back(*v1.begin());
	for (auto& i : v2)
		cout << i << " ";
	cout << endl;
	return 0;
}