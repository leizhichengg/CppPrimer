#pragma once
#ifndef FOLDER_H
#define FOLDER_H
#include<set>
using namespace std;
class Folder
{
	friend class Message;
public:
	Folder() = default;          //Ĭ�Ϲ��캯��
	Folder(const Folder&);       //�������캯��
	Folder& operator=(const Folder&);    //������ֵ�����
	~Folder();        //��������
private:
	set<Message*> messages;     //�����ڴ�Folder�е�Message
	void addMsg(Message *m)     //�ڴ�Folder�����ָ��Message
	{
		messages.insert(m);
	}
	void remMsg(Message *m)     //�ڴ�Folder��ɾ��ָ��Message
	{
		messages.erase(m);
	}
	void add_to_Messages(const Folder&);    //�����Folder��ӵ�ָ��Message��
	void remove_from_Messages();            //�Ӹ���Message��ɾ����Folder
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