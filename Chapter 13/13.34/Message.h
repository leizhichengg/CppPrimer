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
	explicit Message(const string &str=""):contents(str){}  //folders����ʽ��ʼ��Ϊ�ռ���
	Message(const Message&);    //�������캯��
	Message& operator=(const Message&);  //������ֵ�����
	~Message();   //��������
	void save(Folder&);    //�Ӹ���Folder�����Message
	void remove(Folder&);  //�Ӹ���Folder��ɾ��Message
private:
	string contents;   //ʵ����Ϣ�ı�
	set<Folder*> folders;   //������Message��Folder
	void addFol(Folder* f)   //�ڴ�Message�����ָ��Folder
	{
		folders.insert(f);
	}
	void remFol(Folder* f)  //�ڴ�Message��ɾ��ָ��Folder
	{
		folders.erase(f);
	}
    void add_to_Folders(const Message&);    //����Message��ӵ�ָ��Folder��
	void remove_from_Folders();  //��folders�е�ÿ��Folder��ɾ����Message
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