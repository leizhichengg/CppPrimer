#include<iostream>
#include<vector>
#include<sstream>
#include<string>
#include<fstream>
using namespace std;
struct PersonInfo
{
	string name;
	vector<string> phones;
};
bool valid(const string& n)
{
	return((n.end() - n.begin()) == 11);    //检查号码是不是11位
}
string format(const string& str)   //将号码格式化位3-4-3的格式
{
	string num;
	for (auto& i = str.begin(); i != str.begin() + 3; ++i)
		num += *i;
	num += "-";
	for (auto& i = str.begin()+3; i != str.begin() + 7; ++i)
		num += *i;
	num += "-";
	for (auto& i = str.begin() + 7; i != str.end(); ++i)
		num += *i;
	return(num);
}
int main()
{
	string line, word;
	vector<PersonInfo> people;
	ifstream in("C:/Users/leizh/Documents/Visual Studio 2015/Projects/8.13/PersonInfo.txt");
	if (in)
	{
		while (getline(in, line))
		{
			PersonInfo info;
			istringstream record(line);
			record >> info.name;
			while (record >> word)
				info.phones.push_back(word);
			people.push_back(info);
		}
	}
	for (const auto &entry : people)
	{
		ostringstream formatted, badNums;
		for (const auto &nums : entry.phones)
		{
			if (!valid(nums))
			{
				badNums << " " << nums;     //将错误的号码拷贝到badNums这个ostringstream对象中
			}
			else
				formatted << " " << format(nums);   //将格式化之后的号码拷贝到formatted中
		}
		if (badNums.str().empty())           //badNums.str()返回badNums所保存的string对象，然后判断它是否为空
			cout << entry.name << " " << formatted.str() << endl;
		else
			cerr << "input error: " << badNums.str() << endl;
	}
	/*for (auto& p : people)
	{
		cout << p.name << " ";
		for (auto& n : p.phones)
			cout << n << "  ";
		cout << endl;
	}*/
	return 0;
}