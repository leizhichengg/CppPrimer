#include<iostream>
#include<vector>
using namespace std;
vector<int> *func()
{
	int i;
	vector<int>* v = new vector<int>();
	while (cin >> i)
		v->push_back(i);
	return v;
}
void print(vector<int> *v)
{
	for (auto& i : *v)
		cout << i << " ";
	cout << endl;
	delete v;
}
int main()
{
	print(func());
	return 0;
}