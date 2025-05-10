// SPDX-License-Identifier: BSD-3-Clause

#include <stdio.h>

#include "rotate.h"

void rotate_left(unsigned int *number, int bits)
{
	/* TODO */
	(void) number;
	(void) bits;
}

void rotate_right(unsigned int *number, int bits)
{
	/* TODO */
	(void) number;
	(void) bits;
	int digit;
	for(int i = 1; i <= bits; i++) {
		digit = (int) number & 1;
		number = (int) number >> 1;
		
	}
}
