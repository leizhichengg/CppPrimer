#include <iostream>
#include<string>
#include "Sales_data.h"
using namespace std;
#include <iostream>
#include<string>
using namespace std;

int main()
{
	Sales_data data1, data2;
	double price;      //����
	cin >> data1.name >> data1.num >> price;
	data1.rev = data1.num*price;
	cin >> data2.name >> data2.num >> price;
	data2.rev = data2.num*price;
	if (data1.name == data2.name)            //���������ͬ
	{
		unsigned Sn = data1.num + data2.num;      //�����������
		double Sr = data1.rev + data2.rev;        //�ܵ�����
		cout << data1.name << " " << Sn << " " << Sr << " ";
		if (Sn != 0)
			cout << Sr / Sn << endl;
		else
			cout << "no sales!" << endl;
	}
	else
	{
		cout << "Not same book!" << endl;
	}
}