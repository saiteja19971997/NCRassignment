#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h.>

int main() {
	int num,count=0;
	printf("enter a number\n");
	scanf_s("%d", &num);
	for (int i = 0; i < 8; i++)
	{
		if ((num >> i) & 1)
		{
			count++;
		}
	}
	printf("\n%d", count);
	getchar();
	getchar();
	return 0;
}