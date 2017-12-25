#include <stdio.h>
void outfunction(void) {
	extern int global, sglobal;
	printf("\t\t%d\n",++global);
}
