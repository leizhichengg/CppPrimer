#pragma once
#ifndef MYFIND_H
#define MYFIND_H
template<typename iteratorT, typename value> iteratorT myfind(const iteratorT& beg, const iteratorT& end, const value& v)
{
	auto iter = beg;
	for (; iter != end; ++iter)
		if (*iter == v)
			return iter;
	return iter;
}
#endif