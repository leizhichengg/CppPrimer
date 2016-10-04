#pragma once
#ifndef FOLDER_H
#define FOLDER_H
#include<set>
using namespace std;
class Folder
{
	friend class Message;
public:
	Folder() = default;          //默认构造函数
	Folder(const Folder&);       //拷贝构造函数
	Folder& operator=(const Folder&);    //拷贝赋值运算符
	~Folder();        //析构函数
private:
	set<Message*> messages;     //包含在此Folder中的Message
	void addMsg(Message *m)     //在此Folder中添加指定Message
	{
		messages.insert(m);
	}
	void remMsg(Message *m)     //在此Folder中删除指定Message
	{
		messages.erase(m);
	}
	void add_to_Messages(const Folder&);    //将这个Folder添加到指定Message中
	void remove_from_Messages();            //从给定Message中删除本Folder
};
Folder::Folder(const Folder& f):messages(f.messages)
{
	add_to_Messages(f);
}
Folder& Folder::operator=(const Folder& f)
{
	remove_from_Messages();
	messages = f.messages;
	add_to_Messages(f);
	return *this;
}
Folder::~Folder()
{
	remove_from_Messages();
}
void Folder::add_to_Messages(const Folder& f)
{
	for (auto m : f.messages)
		m->addFol(this);
}
void Folder::remove_from_Messages()
{
	for (auto m : messages)
		m->remFol(this);
}
#endif