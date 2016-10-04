#include<iostream>
#include<vector>
#include<map>
#include<string>
using namespace std;
int main()
{
	map<string, vector<string>> first_name;
	string last_name;
	while (true)
	{
		cout << "Add a new family ? 'y' or 'n' " << endl;
		char c;
		cin >> c;
		if (c == 'y')
		{
			cout << "please input last_name:" << endl;
			cin >> last_name;
			string s;
			cout << "pleasw input Children's first_name:" << endl;
			while (cin >> s)
				first_name[last_name].push_back(s);
			cin.clear();
		}
		else if(c=='n')
			break;
	}
	while (true)
	{
		cout << "Add new Children ? 'y' or 'n'" << endl;
		char c;
		cin >> c;
		if (c == 'y')
		{
			cout << "Please chose a family:" << endl;
			for (auto& f : first_name)
				cout << f.first << " ";
			cout << endl;
			string str;
			cin >> str;
			for (auto& f : first_name)
				if (str == f.first)
				{
					string s;
					cout << "pleasw input Children's first_name:" << endl;
					while (cin >> s)
						first_name[str].push_back(s);
					cin.clear();
				}
		}
		else if(c=='n')
			break;
	}
	for (auto& f : first_name)
	{
		cout << f.first << endl;
		for (auto& l : f.second)
			cout << l << " ";
		cout << endl;
	}
	return 0;
}