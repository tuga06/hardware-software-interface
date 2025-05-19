// SPDX-License-Identifier: BSD-3-Clause

extern int qty;

int main(void)
{
	/*
	 * TODO: Make it so you print:
	 *    price is 21
	 *    quantity is 42
	 * without directly calling a printing function.
	 */

	qty = 42;
	set_price(21);
	print_price();
	print_quantity();
	return 0;
}
