#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include<map>
using namespace std;
void word_transform(ifstream &map_file, ifstream &input, ofstream &output);
map<string, string> buildMap(ifstream &map_file);
const string &transform(const string &s, const map<string, string> &m);
int main()
{
	ifstream map_file("C:/Users/leizh/Documents/Visual Studio 2015/Projects/CppPrimer/11.33/rule.txt");
	ifstream input("C:/Users/leizh/Documents/Visual Studio 2015/Projects/CppPrimer/11.33/old.txt");
	ofstream output("C:/Users/leizh/Documents/Visual Studio 2015/Projects/CppPrimer/11.33/new.txt");
	word_transform(map_file, input, output);
	return 0;
}
void word_transform(ifstream &map_file, ifstream &input, ofstream &output)   //3个参数，分别为转换规则，旧文本，新文本
{
	auto trans_map = buildMap(map_file);
	string text;
	while (getline(input, text))
	{
		istringstream stream(text);
		string word;
		bool firstword = true;
		while (stream>>word)
		{
			if (firstword)
				firstword = false;
			else
				output << " ";
			output << transform(word, trans_map);
		}
		output << endl;
	}
}
map<string, string> buildMap(ifstream &map_file)
{
	map<string, string> trans_map;
	string key;
	string value;
	while (map_file >> key&&getline(map_file, value))
		if (value.size() > 1)
			trans_map[key] = value.substr(1);
		else
			throw runtime_error("no rule for" + key);
	return trans_map;
}
const string &transform(const string &s, const map<string, string> &m)
{
	auto map_it = m.find(s);
	if (map_it != m.cend())
		return map_it->second;
	else
		return s;
}