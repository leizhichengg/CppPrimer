#include<iostream>
using namespace std;
void swap(int &i, int &j)
{
	int k;
	k = i;
	i = j;
	j = k;
}
int main()
{
	int a = 5, b = 7;
	int *p = &a, *q = &b;
	swap(p,q);
	cout << *p << " " << *q << endl;
	return 0;
}