#include<iostream>
#include "Screen.h"
using namespace std;
int main()
{
	Screen myscreen(5, 5, "X");
	myscreen.move(4, 0).set('#').display(cout);
	cout << endl;
	myscreen.display(cout);
	cout << endl;
	return 0;
}