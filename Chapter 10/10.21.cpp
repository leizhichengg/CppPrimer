#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int i = 3;
	auto cut=[&i]()->bool
	{
		while (i != 0)
			--i;
		if (i == 0)
			return true;
	};
	if(cut())
	cout << i << endl;
	return 0;
}