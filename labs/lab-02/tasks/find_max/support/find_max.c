// SPDX-License-Identifier: BSD-3-Clause

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "find_max.h"

void *find_max(void *arr, int n, size_t element_size,
				int (*compare)(const void *, const void *))
{
	void *max_elem = arr;
	/**
	 * TODO: Implement function
	 */

	for(int i = 0; i<(int)n;i++) {
		if(compare((char*)arr + i * element_size,max_elem) > 0) {
			max_elem = (char*)arr + i * element_size;
		}
	}

	return max_elem;
}

int compare(const void *a, const void *b)
{
	(void) a;
	(void) b;

	/**
	 * TODO: Implement function
	 */
	return (*(int*)a) - (*(int*)b);
}
