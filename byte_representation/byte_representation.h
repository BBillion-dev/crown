#include <stdio.h>

typedef unsigned char* byte_pointer;

void show_bytes (byte_pointer start, size_t len)
{
	int i;

	for (i = 0; i < len; i++)
		printf(" %.2x",start[i]);
	printf("\n");
}

/*
*The following functions are so repetative, that I think we can use a macro
*/

/*
*Note that we're currently only passing a type to sizeof()
*Are only parameter type lists allowed there?!?
*And are parameter type lists allowed for function invocatons?
*/

/* check comment */

void show_int (int x)
{ show_bytes((byte_pointer) &x, sizeof(int)); }

void show_unsigned_int (unsigned int x)
{ show_bytes((byte_pointer) &x, sizeof(unsigned int)); }

/*
*Every other type is assumed to be signed except for char
*IIRC CSAPP says that char is treated as a positive only int by some 
*compilers
*/
void show_char (signed char x)
{ show_bytes((byte_pointer) &x, sizeof(signed char)); }

void show_unsigned_char (unsigned char x)
{ show_bytes((byte_pointer) &x, sizeof(unsigned char)); }

void show_long (long x)
{ show_bytes((byte_pointer) &x, sizeof(long)); }

void show_unsigned_long (unsigned long x)
{ show_bytes((byte_pointer) &x, sizeof(unsigned long)); }

void show_float (float x)
{ show_bytes((byte_pointer) &x, sizeof(float)); }

void show_double (double x)
{ show_bytes((byte_pointer) &x, sizeof(double)); }

void show_pointer (void* x)
{ show_bytes((byte_pointer) &x, sizeof(void* )); }

/*

void show_thirty_two_bit_int (int32_t x)
{ show_bytes((byte_pointer) &x, sizeof(int32_t)); }

void show_unsigned_thirty_two_bit_int (uint32_t x)
{ show_bytes((byte_pointer) &x, sizeof(uint32_t)); }

void show_sixty_four_bit_int (int_64t x)
{ show_bytes((byte_pointer) &x, sizeof(int64_t)); }

void show_unsigned_sixty_four_bit_int (uint64_t x)
{ show_bytes((byte_pointer) &x, sizeof(uint64_t)); }

*/