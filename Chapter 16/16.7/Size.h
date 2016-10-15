#pragma once
#ifndef SIZE_H
#define SIZE_H
template <typename T, unsigned size> constexpr unsigned Size(T(&arr)[size])
{
	return size;
}
#endif