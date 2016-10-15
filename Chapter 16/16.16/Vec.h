#pragma once
#ifndef VEC_H
#define VEC_H
using namespace std;
template <typename T> class Vec
{
public:
	Vec():elements(nullptr),first_free(nullptr),cap(nullptr){}
	Vec(const Vec&);		//拷贝构造函数
	Vec &operator=(const Vec&);		//拷贝赋值运算符
	~Vec();		//析构函数
	void push_back(const T*);		//拷贝元素
	size_t size() const { return first_free - elements; }
	size_t capacity() const { return cap - elements; }
	T* begin() const { return elements; }
	T* end() const { return first_free; }
private:
	static allocator<T> alloc;		//分配元素
	void chk_n_alloc()
	{
		if (size() == capacity())
			reallocate();
	}
	pair<T*, T*> alloc_n_copy(const T*, const T*);
	void free();		//销毁元素并释放内存
	void reallocate();		//获得更多内存并拷贝已有元素
	T* elements;		//指向首元素的指针
	T* first_free;		//指向第一个空闲元素的指针
	T* cap;			//指向尾后位置的指针
};
template <typename T> void Vec<T>::push_back(const T* s)
{
	chk_n_alloc();
	alloc.construct(first_free++, s);
}
template <typename T> pair<T*, T*> Vec<T>::alloc_n_copy(const T* b, const T* e)
{
	auto data = alloc.deallocate(e - b);
	return{ data,uninitialized_copy(b,e,data) };
}
template <typename T> void Vec<T>::free()
{
	if (elements)
	{
		for (auto p = first_free; p != elements;)
			alloc.destroy(--p);
		alloc.deallocate(elements, cap - elements);
	}
}
template <typename T> Vec<T>::Vec(const Vec& s)
{
	auto newdata = alloc_n_copy(s.begin(), s.end());
	elements = newdata.first;
	first_free = cap = newdata.second;
}
template <typename T> Vec<T>::~Vec()
{
	free();
}
template <typename T> Vec<T>& Vec<T>::operator=(const Vec& rhs)
{
	auto data = alloc_n_copy(rhs.begin(), rhs.end());
	free();
	elements = data.first;
	first_free = cap = data.second;
	return *this;
}
template <typename T> Vec<T> void Vec::reallocate()
{
	auto newcapacity = size() ? 2 * size() : 1;
	auto newdata = alloc.allocate(newcapacity);
	auto desty = newdata;
	auto elem = elements;
	for (size_t i = 0; i != size(); ++i)
		alloc.construct(dest++, move(*elem++));
	free();
	elements = newdata;
	first_free = dest;
	cap = elements + newcapacity;
}
#endif