#include <stdio.h>

int cmp_float(const void *arg0, const void *arg1)
{
	return (int)((CarData*)arg0->price - (CarData*)arg1->price);
}