// SPDX-License-Identifier: BSD-3-Clause

#include <stdio.h>
#include "state.h"

int main(void)
{
	size_t i;

	shopping_list();
	//printf("%d\n", sizeof(shopping_list) / sizeof(shopping_list[0]));
	for (i = 0; i < sizeof(init_shopping) / sizeof(init_shopping[0]); i++)
		printf("%s\n", init_shopping[i]);

	return 0;
}
