#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main() {
	int ch = 0, num = 0, bl = 0, tabs = 0;
	char *in = (char *)malloc(80 * sizeof(char));
	char sp = ' ';
	scanf(" %[^\n]s", in);
	for (int i = 0; in[i] != '\0'; i++) 
	{
		if ((int)in[i] <= 89 && (int)in[i] >= 65) 
		{
			ch++;
		}
		else if ((int)in[i] >= 97 && (int)in[i] <= 122)
		{
			ch++;
		}
		else if ((int)in[i] >= 48 && (int)in[i] <= 57) 
		{
			num++;
		}
		else if (in[i] == '\t') {
			tabs++;
		}
		else if (in[i] == ' ') {
			bl++;
		}
		else {

		}
	}
	printf("char-%d\nnum-%dspaces-%dtabs-%d", ch, num, bl, tabs);
	getchar();
	return 0;
}