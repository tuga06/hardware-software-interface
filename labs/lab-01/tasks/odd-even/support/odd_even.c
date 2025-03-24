// SPDX-License-Identifier: BSD-3-Clause

#include <stdio.h>
#include <stdlib.h>

#include "odd_even.h"

void print_binary(int number, int nr_bits)
{
	/* TODO */
	(void) number;
	(void) nr_bits;
}

void check_parity(int *numbers, int n)
{
	/* TODO */
	(void) numbers;
	(void) n;
	for (int i = 0; i < n; i++) {
		if(numbers[i] & 1 == 1) {
			printf("%08X\n", numbers[i]);
		}
		else {
			int nr_biti = 0, pMax = 1;
			while(pMax < numbers[i]) {
				pMax *= 2;
				nr_biti++;
			}
			print_binary(numbers[i], nr_biti - 1);
		}
	}
}
