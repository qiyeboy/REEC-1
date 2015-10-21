#include <reio.h>

void* reec_malloc(int length)
{
	return malloc(length);
}

void reec_free(void* p)
{
	if(!p) return;
	free(p);
}