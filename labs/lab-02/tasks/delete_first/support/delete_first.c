// SPDX-License-Identifier: BSD-3-Clause

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "delete_first.h"

char *delete_first(char *s, char *pattern)
{
	/**
	 * TODO: Implement this function
	 */

	(void) s;
	(void) pattern;
	char* stn = (char*) s;
	char* patt = (char*) pattern;
	int k=0;

	for(int i =0;i<=strlen(stn);i++) {
		if(s[i] == patt[k]) {
			k++;
		}
		if(k == strlen(pattern)) {
			for(int j = i-k + 1;j<=strlen(stn);j++) {
				stn[j] = stn[j+k];
			}
			break;
		}
	}
	return stn;
}
