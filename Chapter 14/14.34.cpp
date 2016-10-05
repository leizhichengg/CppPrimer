#include<iostream>
using namespace std;
struct ite 
{
	int operator()(int i, int j, int k) const 
	{
		if (i)
			return j;
		else
			return k;
	}
};
int main()
{
	ite item;
	cout << item(1, 2, 3) << endl;;
	return 0;
}