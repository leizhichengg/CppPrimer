#pragma once
#ifndef HEAD_H
#define HEAD_H
class Window_mgr
{
	void clear();
};
class Screen
{
	friend void Window_mgr::clear();
};
void clear()
{

}
#endif