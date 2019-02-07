#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char *in = (char *)malloc(1600 * sizeof(char));
	char sp = ' ';
	int count = 0;
	printf("enter the string");
	scanf_s("%[^\n]s",in,80);
	for (int i = 0; in[i] != '\0'; i++) {
		if (in[i] == sp) {
			in[i] = '-';
			count++;
		}
	}
	printf("\n modified string %s", in);
	printf("\n no. of spaces replaced are:%d", count);
	getchar();
	getchar();
	return 0;
}