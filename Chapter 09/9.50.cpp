#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	vector<string> vec = { "1","2","3","4.1" };
	int sint = 0;
	for (auto& i : vec)
		sint += stoi(i);
	cout << sint << endl;
	float sfloat = 0.0;
	for (auto& i : vec)
		sfloat += stof(i);
	cout << sfloat << endl;

	return 0;
}