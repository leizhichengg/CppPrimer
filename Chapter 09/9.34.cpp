#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> vi = { 1,2,5,42,6 };
	auto iter = vi.begin();
	while (iter != vi.end())
		if (*iter % 2)
			iter = vi.insert(iter, *iter);
	++iter;
	for (auto& i : vi)
		cout << i << " ";
	cout << endl;
	return 0;
}