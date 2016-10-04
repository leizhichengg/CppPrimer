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
	return((n.end() - n.begin()) == 11);    //�������ǲ���11λ
}
string format(const string& str)   //�������ʽ��λ3-4-3�ĸ�ʽ
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
				badNums << " " << nums;     //������ĺ��뿽����badNums���ostringstream������
			}
			else
				formatted << " " << format(nums);   //����ʽ��֮��ĺ��뿽����formatted��
		}
		if (badNums.str().empty())           //badNums.str()����badNums�������string����Ȼ���ж����Ƿ�Ϊ��
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