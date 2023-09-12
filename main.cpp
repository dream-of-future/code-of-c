#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"³éÏó¿â.h"

int main()
{
	int a = 101;
	int b = 110;

	/*my_swap(&a, &b);
	printf("a = %d ,b = %d", a, b);*/

	printf("sum = %d", add(a, b));

	int c = 1;
	printf("%d", c >> 1);

	printf("\n%lld\n", to_bin_int(1024));
	char arr[20] = {0};
	to_bin_arr(10,arr,19);
	for (c = 0; c < 20; c++)
	{
		printf("%c", *(arr + c) ^ 48);
		//printf("%c", bin[19 - i] ^ 48);

	}
	return 0;
}