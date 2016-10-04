#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main()
{
	string str = "abc(efg(hij)kl)mn(op)qrst";
	char res = '@';
	int mark = 0;     //记录左括号出现次数
	stack<char> sta;
	for (auto& c : str)
	{
		sta.push(c);
		if (c == '(')
			++mark;
		if (mark != 0 && c == ')')
		{
			while (sta.top() != '(')
				sta.pop();
			sta.pop();
			sta.push(res);
			--mark;
		}
	}
	string Result;
	while (!sta.empty())
	{
		Result.insert(Result.begin(), sta.top());
		sta.pop();
	}
	cout << Result << endl;
	return 0;
}