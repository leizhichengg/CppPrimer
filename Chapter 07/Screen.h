#pragma once
#ifndef SCREEN_H
#define SCREEN_H
#include<string>
using namespace std;
class Screen
{
public:
	typedef string::size_type pos;
	Screen() = default;
	Screen(pos ht,pos wd,const char='	'):height(ht),width(wd),contents(){}
	Screen(pos ht, pos wd, string c) :height(ht), width(wd), contents(c) {}
	Screen &move(pos i, pos j)
	{
		height = i; width = j; return *this;
	}
	Screen &set(char c)
	{
		contents = c; return *this;
	}
	Screen &display(ostream &os)
	{
		do_display(os); return *this;
	}
private:
	pos cursor = 0, height = 0, width = 0;
	string contents;
	void do_display(ostream &os)
	{
		os << contents;
	}
};
#endif