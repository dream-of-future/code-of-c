#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "ChouXiang.h"

void my_swap(int* a, int* b)//½»»»
{
	*a = *a ^ *b;
	*b = *b ^ *a;
	*a = *b ^ *a;
}

int add(int a, int b)
{
	if (!a)
		return b;
	return add((a & b) << 1, a ^ b);
}

long long int to_bin_int(int x)
{
	long long int bin = 0;
	int i = 32;
	int tmp;
	for (i = 32; i >= 0; i--)
	{
		bin *= 10;
		tmp = (x >> i) & 1;
		bin = bin + tmp;
	}
	return bin;
}

void to_bin_arr(int x, char bin[],char sz)
{
	char i;
	for (i = sz; i >= 0; i--)
	{
		bin[sz - i] = (x >> i) & 1;
		printf("%c", bin[sz - i] ^ 48);
	}
	printf("\n");

}