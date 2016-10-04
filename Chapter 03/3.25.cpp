#include <iostream>
#include<vector>
using namespace std;
int main()
{
	vector<unsigned> scores(11, 0);
	auto b = scores.begin(), e = scores.end();
	unsigned grade;
	while (cin>>grade)
	{
		if (grade <= 100)
			++(*(b + grade / 10));
	}
	for (auto i : scores)
		cout << i << " ";
	return 0;
}