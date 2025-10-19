#include <stddef.h>

int memcmp(const void *str1, const void *str2, size_t n){

	size_t i = 0;
	unsigned char *str1_ptr = (unsigned char*)str1;
	unsigned char *str2_ptr = (unsigned char*)str1;

	while ( n-- )
	{
		if ( *str1_ptr != *str2_ptr )
			return ( *str1_ptr - *str2_ptr );
		str1_ptr++;
		str2_ptr++;
	}

	return (0);
}
