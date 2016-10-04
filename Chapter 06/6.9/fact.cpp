#include <iostream>
#include "Chapter6.h"
int fact(int i)
{
	int j = 1;
	while (i > 1)
	{
		j = j*i;
		--i;
	}
	return j;
}