#include<iostream>
#include<functional>
#include<map>
#include<string>
using namespace std;
int add(int i, int j)
{
	return i + j;
}
auto mod = [](int i, int j) {return i%j; };
struct Item
{
	int operator()(const int& i, const int& j)
	{
		return i / j;
	}
};
map<string, function<int(int, int)>> binops = {
	{"+",add},{"-",minus<int>()},{"/",Item()},{"*",[](int i,int j) {return i*j; }},{"%",mod}
};
int main()
{
	while (1)
	{
		cout << "Please input:" << endl;
		int i, j;
		string s;
		cin >> i >> s >> j;
		cout << binops[s](i, j) << endl;;
	}
	return 0;
}