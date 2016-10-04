#include <iostream>
using namespace std;
void swap(int *i, int *j)
{
	int k;
	k = *i;
	*i = *j;
	*j = k;
}
int main()
{
	int a = 5,b = 8;
	swap(&a, &b);
	cout << a << " " << b << endl;
	return 0;
}