// SPDX-License-Identifier: BSD-3-Clause

#include <stddef.h>

#include "pointers.h"

int my_strcmp(const char *s1, const char *s2)
{
	/**
	 * TODO: implement function
	 */
	(void) s1;
	(void) s2;
	for(int i=0,j=0;i<=strlen((char*)s1)&&j<=strlen((char*)s2);i++,j++) {
		if((char*)s1[i] != (char*)s2[j]) {
			return (char*)s1[i]-(char*)s2[j];
		}
	}
	return 0;

	//return 0x420;
}

void *my_memcpy(void *dest, const void *src, size_t n)
{
	/**
	 * TODO: implement function
	 */
	(void) dest;
	(void) src;
	(void) n;
	char* d = (char*) dest;
	char* s = (char*) src;
	for(int i=0;i<(int)n;i++) {
		d[i]=s[i];
	}
	return dest;
}

char *my_strcpy(char *dest, const char *src)
{
	/**
	 * TODO: implement function
	 */
	(void) dest;
	(void) src;
	for(int i=0;i<=strlen((char*)src);i++) {
		dest[i]=(char*)src[i];
	}
	return dest;
}
