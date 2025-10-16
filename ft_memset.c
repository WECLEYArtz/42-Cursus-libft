#include "stddef.h"
void *memset(void *s, int c, size_t n){
	while(n)
	{
		if (s[n])
			s[n++] = (unsigned char)c;
		s[n++] = 0;
	}
}
