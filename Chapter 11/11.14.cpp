#include<iostream>
#include<vector>
#include<map>
#include<string>
using namespace std;
int main()
{
	map<string, vector<string>> first_name;
	vector<pair<string, string>> birth;
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
			string s1,s2;
			cout << "pleasw input Children's first_name and birthday:" << endl;
			while (cin >> s1 >> s2)
			{
				first_name[last_name].push_back(s1);
				birth.push_back({ s1,s2 });
			}
			cin.clear();
		}
		else if (c == 'n')
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
					string s1,s2;
					cout << "pleasw input Children's first_name and birthday:" << endl;
					while (cin >> s1 >> s2)
					{
						first_name[str].push_back(s1);
						birth.push_back({ s1,s2 });
					}
					cin.clear();
				}
		}
		else if (c == 'n')
			break;
	}
	for (auto& f : first_name)
	{
		cout << f.first << endl;
		for (auto& l : f.second)
		{
			cout << l << endl;
			for (auto& i : birth)
				if (i.first == l)
					cout << i.second << endl;
		}
		cout << endl;
	}
	return 0;
}