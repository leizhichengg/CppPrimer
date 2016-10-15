#pragma once
#ifndef BEGEND_H
#define BEGEND_H
template <typename T, unsigned size> T* Begin(T(&arr)[size])
{
	return arr;
}
template <typename T, unsigned size> T* End(T(&arr)[size])
{
	return arr+size;
}
#endif