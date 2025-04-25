#include "byte_representation.h"
#include <stdio.h>
#include <string.h>

void test_show_bytes (int);

int main(int argc, char const *argv[])
{
	test_show_bytes(12345);

	const char *m = "mnopqr\n";
	/*strlen() does not count the terminating character; hence I added one below*/
	show_bytes((byte_pointer) m, strlen(m) + 1);
	return 0;
}

void test_show_bytes (int val)
{
	/*Some conversations happen here: */
	int ival = val;
	float fval = (float) ival;
	double dval = (double) ival;
	int *pval = &ival;
	unsigned int uival = (unsigned) ival;
	
	/*And other conversions happen here: */
	show_int(ival);
	show_float(fval);
	show_double(dval);
	show_pointer(pval);
	show_unsigned_int(uival);
}