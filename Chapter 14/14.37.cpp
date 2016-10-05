#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class rreplace
{
public:
	rreplace(int i):m(i){}
	bool operator()(int item)
	{
		return item == m;
	}
private:
	int m;
};
int main()
{
	vector<int> vec = { 1,2,3,4,5,6 };
	replace_if(vec.begin(), vec.end(), rreplace(3), 8);
	for (auto& i : vec)
		cout << i << " ";
	cout << endl;
	return 0;
}