#include <iostream>
#include <string>
using namespace std;
int main()
{
	double grade;
	while (cin >> grade)
	{
		string finalgrade = (grade > 90) ? "high pass" : (grade > 75) ? "pass" : (grade > 60) ? "low pass" : "fail";
		cout << finalgrade << endl;
	}
	return 0;
}