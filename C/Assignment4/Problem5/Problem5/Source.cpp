#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void reverse(char *str)
{
	if (*str)
	{
		reverse(str + 1);
		printf("%c", *str);
	}
}
int main()
{
	char *in = (char *)malloc(1600 * sizeof(char));
	printf("enter the string");
	scanf_s("%[^\n]s", in, 80);
	int len = strlen(in);
	reverse(in);
	getchar();
	getchar();
	return 0;
}