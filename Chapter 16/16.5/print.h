#pragma once
#ifndef PRINT_H
#define PRINT_H
template <typename T> void print(T(&arr))
{
	for (auto& i : arr)
		cout << i << " ";
}
#endif