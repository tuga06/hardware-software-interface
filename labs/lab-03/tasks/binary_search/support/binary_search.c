// SPDX-License-Identifier: BSD-3-Clause

#include <stdio.h>

#include "binary_search.h"

int binary_search(int *v, int len, int dest)
{
	int start = 0;
	int end = len - 1;
	int middle = end / 2;
	goto search;

dreapta:
	start = middle + 1;
	middle = (start + end) / 2;
	goto search;
stanga:
	end = middle - 1;
	middle = (start + end) / 2;
	goto search;
search:
	if(start > end) {
		goto nuExista;
	}
	if(v[middle] < dest) {
		goto dreapta;
	}
	if(v[middle] > dest) {
		goto stanga;
	}
	return middle;

nuExista:
	return -1;
}
