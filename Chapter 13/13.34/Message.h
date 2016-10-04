#pragma once
#ifndef MESSAGE_H
#define MESSAGE_H
#include<string>
#include<set>
using namespace std;
class Message
{
	friend class Folder;
	friend void swap(Message &lhs, Message &rhs);
public:
	explicit Message(const string &str=""):contents(str){}  //folders被隐式初始化为空集合
	Message(const Message&);    //拷贝构造函数
	Message& operator=(const Message&);  //拷贝赋值运算符
	~Message();   //析构函数
	void save(Folder&);    //从给定Folder中添加Message
	void remove(Folder&);  //从给定Folder中删除Message
private:
	string contents;   //实际消息文本
	set<Folder*> folders;   //包含本Message的Folder
	void addFol(Folder* f)   //在此Message中添加指定Folder
	{
		folders.insert(f);
	}
	void remFol(Folder* f)  //在此Message中删除指定Folder
	{
		folders.erase(f);
	}
    void add_to_Folders(const Message&);    //将本Message添加到指定Folder中
	void remove_from_Folders();  //从folders中的每个Folder中删除本Message
};
void Message::save(Folder& f)
{
	folders.insert(&f);
	f.addMsg(this);
}
void Message::remove(Folder& f)
{
	folders.erase(&f);
	f.remMsg(this);
}
void Message::add_to_Folders(const Message& m)
{
	for (auto f : m.folders)
		f->addMsg(this);
}
Message::Message(const Message& m) :contents(m.contents), folders(m.folders)
{
	add_to_Folders(m);
}
void Message::remove_from_Folders()
{
	for (auto f : folders)
		f->remMsg(this);
}
Message::~Message()
{
	remove_from_Folders();
}
Message& Message::operator =(const Message &rhs)
{
	remove_from_Folders();
	contents = rhs.contents;
	folders = rhs.folders;
	add_to_Folders(rhs);
	return *this;
}
void swap(Message &lhs, Message &rhs)
{
	for (auto f : lhs.folders)
		f->remMsg(&lhs);
	for (auto f : rhs.folders)
		f->remMsg(&rhs);
	swap(lhs.folders, rhs.folders);
	swap(lhs.contents, rhs.contents);
	for (auto f : lhs.folders)
		f->addMsg(&lhs);
	for (auto f : rhs.folders)
		f->addMsg(&rhs);
}
#endif