#include<iostream>
#include<vector>
#include<memory>
using namespace std;
shared_ptr<vector<int>> func()
{
	int i;
	shared_ptr<vector<int>> v=make_shared<vector<int>>();
	while (cin >> i)
		v->push_back(i);
	return v;
}
void print(shared_ptr<vector<int>> v)
{
	for (auto& i : *v)
		cout << i << " ";
	cout << endl;
}
int main()
{
	print(func());
	return 0;
}