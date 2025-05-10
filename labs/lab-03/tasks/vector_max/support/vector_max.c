// SPDX-License-Identifier: BSD-3-Clause

#include <stdio.h>

#include "vector_max.h"

int vector_max(int *v, int len)
{
	if(len < 1) {
		goto error;
	}
	int max = v[0];
	unsigned int i = 0;
	goto urmElem;

verfMax:
	if(v[i] > max) {
		goto actualizareMax;
	}
	goto urmElem;
urmElem:
	++i;
	if(i >= len) {
		goto afisare;
	}
	goto verfMax;
actualizareMax:
	max = v[i];
	goto urmElem;
afisare:
	return max;
error:
	return -1;
}
