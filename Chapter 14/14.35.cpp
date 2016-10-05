#include<iostream>
#include<string>
#include<vector>
using namespace std;
class instring
{
public:
	instring(istream &i = cin) :is(i) {}
	string operator()()
	{
		string str;
		getline(is, str);
		if (is)
			return str;
		else
			return string();
	}
private:
	istream &is;
};
int main()
{
	instring item;
	vector<string> vec;
	string str;
	while(!((str=item()).empty()))    //先将item()返回的结果赋值给str,然后判断是否为空
		vec.push_back(str);
	for (auto& v : vec)
		cout << v << " ";
	cout << endl;
	return 0;
}