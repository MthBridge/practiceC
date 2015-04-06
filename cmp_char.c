#include <string.h>

int cmp_char(const void *arg0, const void *arg1)
{
	return strcmp((CarData*)arg0->name, (CarData*)arg1);
}