#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i = 0;
	int a= 1;
	int sum = 0;
	for (i = 1; i <= 10; i++)
	{
		a = a * i;
		sum += a;
	}
	printf("%d ",sum);
	return 0;
}