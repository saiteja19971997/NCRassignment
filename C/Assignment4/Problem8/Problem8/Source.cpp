#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int n;
	printf("enter no. of strings to be sorted\n");
	scanf_s("%d", &n);
	char **str = (char **)malloc(n * sizeof(char*));
	for (int z = 0; z < n; z++)
	{
		str[z] = (char *)malloc(20 * sizeof(char));
	}
	char *t = (char *)malloc(20 * sizeof(char));
	printf("enter the string");
	for (int z = 0; z < n; z++)
	{
		scanf_s("%s", str[z], 20);
	}

	for (int i = 0; i<n; i++)
	{
		for (int j = 1; j<n; j++)
		{
			if (strcmp(*(str+(j-1)), *(str+j))>0)
			{
				strcpy(t, *(str + (j - 1)));
				strcpy(*(str + (j - 1)), *(str + j));
				strcpy(*(str + j), t);
			}
		}
	}
	printf("Strings in alphabetical order : \n");
	for (int i = 0; i<n; i++)
	{
		printf("%s\n", str[i]);
	}
	getchar();
	getchar();
	return 0;
}